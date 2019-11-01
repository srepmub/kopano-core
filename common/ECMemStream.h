/*
 * SPDX-License-Identifier: AGPL-3.0-only
 * Copyright 2005 - 2016 Zarafa and its licensors
 */

#ifndef ECMEMSTREAM_H
#define ECMEMSTREAM_H

#include <kopano/zcdefs.h>
#include <kopano/ECUnknown.h>
#include <kopano/Util.h>

namespace KC {

/* The ECMemBlock class is basically a random-access block of data that can be
 * read from and written to, expanded and contracted, and has a Commit and Revert
 * function to save and reload data.
 *
 * The commit and revert functions use memory sparingly, as only changed blocks
 * are held in memory.
 */
class ECMemBlock KC_FINAL_OPG : public ECUnknown {
private:
	ECMemBlock(const char *buffer, ULONG len, ULONG flags);
	~ECMemBlock();

public:
	static HRESULT Create(const char *buffer, ULONG len, ULONG flags, ECMemBlock **out);
	virtual HRESULT QueryInterface(const IID &, void **) override;
	virtual HRESULT	ReadAt(unsigned int pos, unsigned int len, char *buffer, unsigned int *have_read);
	virtual HRESULT WriteAt(unsigned int pos, unsigned int len, const char *buffer, unsigned int *have_written);
	virtual HRESULT Commit();
	virtual HRESULT Revert();
	virtual HRESULT SetSize(ULONG ulSize);
	virtual HRESULT GetSize(ULONG *size) const;
	virtual char *GetBuffer(void) { return lpCurrent; }

private:
	char *lpCurrent = nullptr, *lpOriginal = nullptr;
	ULONG cbCurrent = 0, cbOriginal = 0, cbTotal = 0;
	ULONG	ulFlags;
	ALLOC_WRAP_FRIEND;
};

/*
 * This is an IStream-compatible wrapper for ECMemBlock
 */
class KC_EXPORT ECMemStream KC_FINAL_OPG : public ECUnknown, public IStream {
public:
	typedef HRESULT (*CommitFunc)(IStream *lpStream, void *lpParam);
	typedef HRESULT (*DeleteFunc)(void *lpParam); /* Caller's function to remove lpParam data from memory */

private:
	_kc_hidden ECMemStream(const char *buffer, ULONG data_len, ULONG flags, CommitFunc, DeleteFunc, void *param);
	_kc_hidden ECMemStream(ECMemBlock *, ULONG flags, CommitFunc, DeleteFunc, void *param);

	protected:
	_kc_hidden ~ECMemStream(void);

public:
	static  HRESULT	Create(char *buffer, ULONG ulDataLen, ULONG ulFlags, CommitFunc lpCommitFunc, DeleteFunc lpDeleteFunc, void *lpParam, ECMemStream **lppStream);
	_kc_hidden static HRESULT Create(ECMemBlock *, ULONG flags, CommitFunc, DeleteFunc, void *param, ECMemStream **ret);
	virtual unsigned int Release() override;
	virtual HRESULT QueryInterface(const IID &, void **) override;
	_kc_hidden virtual HRESULT Read(void *buf, unsigned int bytes, unsigned int *have_read) override;
	_kc_hidden virtual HRESULT Write(const void *buf, unsigned int bytes, unsigned int *have_written) override;
	_kc_hidden virtual HRESULT Seek(LARGE_INTEGER pos, unsigned int origin, ULARGE_INTEGER *newpos) override;
	_kc_hidden virtual HRESULT SetSize(ULARGE_INTEGER size) override;
	_kc_hidden virtual HRESULT CopyTo(IStream *, ULARGE_INTEGER cb, ULARGE_INTEGER *have_read, ULARGE_INTEGER *have_written) override;
	_kc_hidden virtual HRESULT Commit(unsigned int commit_flags) override;
	_kc_hidden virtual HRESULT Revert() override;
	_kc_hidden virtual HRESULT LockRegion(ULARGE_INTEGER offset, ULARGE_INTEGER size, unsigned int lock_type) override;
	_kc_hidden virtual HRESULT UnlockRegion(ULARGE_INTEGER offset, ULARGE_INTEGER size, unsigned int lock_type) override;
	_kc_hidden virtual HRESULT Stat(STATSTG *, unsigned int stat_flag) override;
	_kc_hidden virtual HRESULT Clone(IStream **) override;
	virtual ULONG GetSize();
	virtual char* GetBuffer();

private:
	ULARGE_INTEGER liPos = {{0}};
	ECMemBlock *lpMemBlock = nullptr;
	CommitFunc		lpCommitFunc;
	DeleteFunc		lpDeleteFunc;
	void *			lpParam;
	bool fDirty = false;
	ULONG			ulFlags;
	ALLOC_WRAP_FRIEND;
};

} /* namespace */

#endif // ECMEMSTREAM_H
