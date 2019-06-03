/*
 * SPDX-License-Identifier: AGPL-3.0-only
 * Copyright 2005 - 2016 Zarafa and its licensors
 */

#ifndef ECTAGS_H
#define ECTAGS_H

/*
 * Inside MAPI, p.38: private range for service providers (6600-67ff)
 */
// Public Kopano properties
#define PR_EC_BASE			0x6700

////////////////////////////////////////////////////////////////////////////////
// Profile properties
//

#define PR_EC_PATH				PROP_TAG(PT_STRING8, 0x6700)
#define PR_EC_USERNAME				PROP_TAG(PT_TSTRING, 0x6701)
#define PR_EC_USERNAME_A			PROP_TAG(PT_STRING8, 0x6701)
#define PR_EC_USERNAME_W			PROP_TAG(PT_UNICODE, 0x6701)
#define PR_EC_USERPASSWORD			PROP_TAG(PT_TSTRING, 0x6702)
#define PR_EC_USERPASSWORD_A			PROP_TAG(PT_STRING8, 0x6702)
#define PR_EC_USERPASSWORD_W			PROP_TAG(PT_UNICODE, 0x6702)
#define PR_EC_PORT				PROP_TAG(PT_STRING8, 0x6703)
#define PR_EC_FLAGS				PROP_TAG(PT_LONG, 0x6704)
#define PR_EC_SSLKEY_FILE			PROP_TAG(PT_STRING8, 0x6705)
#define PR_EC_SSLKEY_PASS			PROP_TAG(PT_STRING8, 0x6706)
#define PR_EC_LAST_CONNECTIONTYPE		PROP_TAG(PT_LONG, 0x6709)
#define PR_EC_CONNECTION_TIMEOUT		PROP_TAG(PT_LONG, 0x670A)
#define PR_EC_SERVER_VERSION			PROP_TAG(PT_TSTRING, 0x6716)

// Used for proxy settings
#define PR_EC_PROXY_HOST			PROP_TAG(PT_STRING8, 0x670B)
#define PR_EC_PROXY_PORT			PROP_TAG(PT_LONG, 0x670C)
#define PR_EC_PROXY_USERNAME			PROP_TAG(PT_STRING8, 0x670D)
#define PR_EC_PROXY_PASSWORD			PROP_TAG(PT_STRING8, 0x670E)
#define PR_EC_PROXY_FLAGS			PROP_TAG(PT_LONG, 0x670F)

#define PR_EC_SERVERNAME			PROP_TAG(PT_TSTRING, 0x6711) /* same as PR_EC_HIERARCHYID, but on archive store profile sections! */
#define PR_EC_SERVERNAME_A			PROP_TAG(PT_STRING8, 0x6711) /* same as PR_EC_HIERARCHYID, but on archive store profile sections! */
#define PR_EC_SERVERNAME_W			PROP_TAG(PT_UNICODE, 0x6711) /* same as PR_EC_HIERARCHYID, but on archive store profile sections! */

// Used for impersonation
#define PR_EC_IMPERSONATEUSER			PROP_TAG(PT_TSTRING, 0x6712)
#define PR_EC_IMPERSONATEUSER_A			PROP_TAG(PT_STRING8, 0x6712)
#define PR_EC_IMPERSONATEUSER_W			PROP_TAG(PT_UNICODE, 0x6712)


/* same as properties below, but on different objects */
#define PR_ZC_CONTACT_STORE_ENTRYIDS		PROP_TAG(PT_MV_BINARY, 0x6711)
#define PR_ZC_CONTACT_FOLDER_ENTRYIDS		PROP_TAG(PT_MV_BINARY, 0x6712)
#define PR_ZC_CONTACT_FOLDER_NAMES		PROP_TAG(PT_MV_TSTRING, 0x6713)
#define PR_ZC_CONTACT_FOLDER_NAMES_A		PROP_TAG(PT_MV_STRING8, 0x6713)
#define PR_ZC_CONTACT_FOLDER_NAMES_W		PROP_TAG(PT_MV_UNICODE, 0x6713)

#define PR_ZC_ORIGINAL_ENTRYID			PROP_TAG(PT_BINARY, 0x6720)
#define PR_ZC_ORIGINAL_PARENT_ENTRYID		PROP_TAG(PT_BINARY, 0x6721)
#define PR_ZC_ORIGINAL_SOURCE_KEY		PROP_TAG(PT_BINARY, 0x6722)
#define PR_ZC_ORIGINAL_PARENT_SOURCE_KEY	PROP_TAG(PT_BINARY, 0x6723)
#define PR_ZC_ORIGINAL_CHANGE_KEY		PROP_TAG(PT_BINARY, 0x6724)

////////////////////////////////////////////////////////////////////////////////

// The property under which we actually save the PR_ENTRYID in recipient tables
#define PR_EC_CONTACT_ENTRYID			PROP_TAG(PT_BINARY, 0x6710)
#define PR_EC_HIERARCHYID			PROP_TAG(PT_LONG, 0x6711)
#define PR_EC_STOREGUID				PROP_TAG(PT_BINARY, 0x6712)
/* 0x6712 == PR_RANK (edkmdb.h) */
#define PR_EC_COMPANYID				PROP_TAG(PT_LONG, 0x6713)
#define PR_EC_STORETYPE				PROP_TAG(PT_LONG, 0x6714)
#define PR_EC_PARENT_HIERARCHYID		PROP_TAG(PT_LONG, 0x6715)

#define PR_EC_QUOTA_MAIL_TIME			PROP_TAG(PT_SYSTIME, 0x6720)
//NOTE:	The properties PR_QUOTA_WARNING_THRESHOLD, PR_QUOTA_SEND_THRESHOLD, PR_QUOTA_RECEIVE_THRESHOLD
//		are in the range of 0x6700+0x21 to 0x6700+0x23

#define PR_EC_STATSTABLE_SYSTEM			PROP_TAG(PT_OBJECT, 0x6730)
#define PR_EC_STATSTABLE_SESSIONS		PROP_TAG(PT_OBJECT, 0x6731)
#define PR_EC_STATSTABLE_USERS			PROP_TAG(PT_OBJECT, 0x6732)
#define PR_EC_STATSTABLE_COMPANY		PROP_TAG(PT_OBJECT, 0x6733)
#define PR_EC_STATSTABLE_SERVERS		PROP_TAG(PT_OBJECT, 0x6734)

/* system stats */
#define PR_EC_STATS_SYSTEM_DESCRIPTION		PROP_TAG(PT_STRING8, 0x6740)
#define PR_EC_STATS_SYSTEM_VALUE		PROP_TAG(PT_STRING8, 0x6741)
/* session stats */
#define PR_EC_STATS_SESSION_ID			PROP_TAG(PT_LONGLONG, 0x6742)
#define PR_EC_STATS_SESSION_IPADDRESS		PROP_TAG(PT_STRING8, 0x6743)
#define PR_EC_STATS_SESSION_IDLETIME		PROP_TAG(PT_LONG, 0x6744)
#define PR_EC_STATS_SESSION_CAPABILITY		PROP_TAG(PT_LONG, 0x6745)
#define PR_EC_STATS_SESSION_LOCKED		PROP_TAG(PT_BOOLEAN, 0x6746)
#define PR_EC_STATS_SESSION_BUSYSTATES		PROP_TAG(PT_MV_STRING8, 0x6747)
#define PR_EC_STATS_SESSION_PORT		PROP_TAG(PT_LONG, 0x6748)
#define PR_EC_STATS_SESSION_PROCSTATES		PROP_TAG(PT_MV_STRING8, 0x6749)

/* currently only used in user stats table */
#define PR_EC_COMPANY_NAME			PROP_TAG(PT_TSTRING, 0x6748)
#define PR_EC_COMPANY_NAME_A			PROP_TAG(PT_STRING8, 0x6748)
#define PR_EC_COMPANY_NAME_W			PROP_TAG(PT_UNICODE, 0x6748)
#define PR_EC_COMPANY_ADMIN			PROP_TAG(PT_TSTRING, 0x6749)
#define PR_EC_COMPANY_ADMIN_A			PROP_TAG(PT_STRING8, 0x6749)
#define PR_EC_COMPANY_ADMIN_W			PROP_TAG(PT_UNICODE, 0x6749)

#define PR_EC_STATS_SESSION_CPU_USER		PROP_TAG(PT_DOUBLE, 0x674A)
#define PR_EC_STATS_SESSION_CPU_SYSTEM		PROP_TAG(PT_DOUBLE, 0x674B)
#define PR_EC_STATS_SESSION_CPU_REAL		PROP_TAG(PT_DOUBLE, 0x674C)

#define PR_EC_STATS_SESSION_GROUP_ID		PROP_TAG(PT_LONGLONG, 0x674D)
#define PR_EC_STATS_SESSION_PEER_PID		PROP_TAG(PT_LONG, 0x674E)
#define PR_EC_STATS_SESSION_CLIENT_VERSION	PROP_TAG(PT_STRING8, 0x674F)
#define PR_EC_STATS_SESSION_CLIENT_APPLICATION	PROP_TAG(PT_STRING8, 0x6750)
#define PR_EC_STATS_SESSION_REQUESTS		PROP_TAG(PT_LONG, 0x6751)
#define PR_EC_STATS_SESSION_URL			PROP_TAG(PT_STRING8, 0x6752)
#define PR_EC_STATS_SESSION_PROXY		PROP_TAG(PT_STRING8, 0x6753)
#define PR_EC_STATS_SESSION_CLIENT_APPLICATION_VERSION	PROP_TAG(PT_STRING8, 0x6754)
#define PR_EC_STATS_SESSION_CLIENT_APPLICATION_MISC	PROP_TAG(PT_STRING8, 0x6755)

#define PR_EC_OUTOFOFFICE			PROP_TAG(PT_BOOLEAN, 0x6760)
#define PR_EC_OUTOFOFFICE_MSG			PROP_TAG(PT_TSTRING, 0x6761)
#define PR_EC_OUTOFOFFICE_MSG_A			PROP_TAG(PT_STRING8, 0x6761)
#define PR_EC_OUTOFOFFICE_MSG_W			PROP_TAG(PT_UNICODE, 0x6761)
#define PR_EC_OUTOFOFFICE_SUBJECT		PROP_TAG(PT_TSTRING, 0x6762)
#define PR_EC_OUTOFOFFICE_SUBJECT_A		PROP_TAG(PT_STRING8, 0x6762)
#define PR_EC_OUTOFOFFICE_SUBJECT_W		PROP_TAG(PT_UNICODE, 0x6762)
#define PR_EC_OUTOFOFFICE_FROM			PROP_TAG(PT_SYSTIME, 0x6763)
#define PR_EC_OUTOFOFFICE_UNTIL			PROP_TAG(PT_SYSTIME, 0x6764)

#define PR_EC_WEBACCESS_SETTINGS		PROP_TAG(PT_TSTRING, 0x6770)
#define PR_EC_WEBACCESS_SETTINGS_A		PROP_TAG(PT_STRING8, 0x6770)
#define PR_EC_WEBACCESS_SETTINGS_W		PROP_TAG(PT_UNICODE, 0x6770)
#define PR_EC_RECIPIENT_HISTORY			PROP_TAG(PT_TSTRING, 0x6771)
#define PR_EC_RECIPIENT_HISTORY_A	   	PROP_TAG(PT_STRING8, 0x6771)
#define PR_EC_RECIPIENT_HISTORY_W	   	PROP_TAG(PT_UNICODE, 0x6771)
#define PR_EC_WEBACCESS_SETTINGS_JSON	PROP_TAG(PT_TSTRING, 0x6772)
#define PR_EC_WEBACCESS_SETTINGS_JSON_W	PROP_TAG(PT_UNICODE, 0x6772)
#define PR_EC_WEBACCESS_SETTINGS_JSON_A	PROP_TAG(PT_STRING8, 0x6772)
#define PR_EC_RECIPIENT_HISTORY_JSON	PROP_TAG(PT_TSTRING, 0x6773)
#define PR_EC_RECIPIENT_HISTORY_JSON_W	PROP_TAG(PT_UNICODE, 0x6773)
#define PR_EC_RECIPIENT_HISTORY_JSON_A	PROP_TAG(PT_STRING8, 0x6773)
#define PR_EC_WEBAPP_PERSISTENT_SETTINGS_JSON PROP_TAG(PT_TSTRING, 0x6774)
#define PR_EC_WEBAPP_PERSISTENT_SETTINGS_JSON_A PROP_TAG(PT_STRING8, 0x6774)
#define PR_EC_WEBAPP_PERSISTENT_SETTINGS_JSON_W PROP_TAG(PT_UNICODE, 0x6774)

/* server stats */
#define PR_EC_STATS_SERVER_NAME			PROP_TAG(PT_STRING8, 0x67F0)
#define PR_EC_STATS_SERVER_HOST			PROP_TAG(PT_STRING8, 0x67F1)
#define PR_EC_STATS_SERVER_HTTPPORT		PROP_TAG(PT_LONG, 0x67F2)
#define PR_EC_STATS_SERVER_SSLPORT		PROP_TAG(PT_LONG, 0x67F3)
#define PR_EC_STATS_SERVER_FILEPATH		PROP_TAG(PT_STRING8, 0x67F4)
#define PR_EC_STATS_SERVER_PROXYURL		PROP_TAG(PT_STRING8, 0x67F5)
#define PR_EC_STATS_SERVER_HTTPURL		PROP_TAG(PT_STRING8, 0x67F6)
#define PR_EC_STATS_SERVER_HTTPSURL		PROP_TAG(PT_STRING8, 0x67F7)
#define PR_EC_STATS_SERVER_FILEURL		PROP_TAG(PT_STRING8, 0x67F8)

/* WSTransport within a profile, exposed as IUnknown */
#define PR_EC_TRANSPORTOBJECT			PROP_TAG(PT_OBJECT, 0x677E)

/*
 * The hidden object property which can be used to access the underlying
 * IUnknown object though a pointer in lpszA.
 */
#define PR_EC_OBJECT				PROP_TAG(PT_OBJECT, 0x677F)

// Contains the 'flags' column in the outgoing queue (EC_SUBMIT_{MASTER,LOCAL,DOSENTMAIL})
#define PR_EC_OUTGOING_FLAGS			PROP_TAG(PT_LONG, 0x6780)

// Contains the accountname for a store (to be used from for example the outgoing queue)
#define PR_EC_MAILBOX_OWNER_ACCOUNT		PROP_TAG(PT_TSTRING, 0x6781)
#define PR_EC_MAILBOX_OWNER_ACCOUNT_A		PROP_TAG(PT_STRING8, 0x6781)
#define PR_EC_MAILBOX_OWNER_ACCOUNT_W		PROP_TAG(PT_UNICODE, 0x6781)

// Contains an IMAP-compatible UID for each message. It is hidden from GetPropList(), but gettable in GetProps and in tables
// Note that we save a 64-bit counter, but the property is only 32-bit because IMAP requires it to be 32-bit.
#define PR_EC_IMAP_ID				PROP_TAG(PT_LONG, 0x6782)
// EntryIds of subscribed folders
// format: <ULONG:number_entries>[<ULONG:cb><BYTE*cb>]
#define PR_EC_IMAP_SUBSCRIBED			PROP_TAG(PT_BINARY, 0x6784)
// Stores the last-read IMAP UID in a folder
#define PR_EC_IMAP_MAX_ID			PROP_TAG(PT_LONG, 0x6785)
// Stores the DATE part of an e-mail, disregarding timezone
#define PR_EC_CLIENT_SUBMIT_DATE		PROP_TAG(PT_SYSTIME, 0x6786)
// Stores the DATE part of an e-mail, disregarding timezone
#define PR_EC_MESSAGE_DELIVERY_DATE		PROP_TAG(PT_SYSTIME, 0x6787)
#define PR_EC_MESSAGE_BCC_ME			PROP_TAG(PT_BOOLEAN, 0x6725)
// Complete email for IMAP optimizations
#define PR_EC_IMAP_EMAIL			PROP_TAG(PT_BINARY, 0x678C)
#define PR_EC_IMAP_EMAIL_SIZE			PROP_TAG(PT_LONG, 0x678D)
#define PR_EC_IMAP_BODY				PROP_TAG(PT_STRING8, 0x678E)
#define PR_EC_IMAP_BODYSTRUCTURE		PROP_TAG(PT_STRING8, 0x678F)

// addressbook entryids of users which are allowed to send as
#define PR_EC_SENDAS_USER_ENTRYIDS		PROP_TAG(PT_MV_BINARY, 0x6783)

// addressbook ADS legacyExchange DN
#define PR_EC_EXCHANGE_DN			PROP_TAG(PT_TSTRING, 0x6788)
#define PR_EC_EXCHANGE_DN_A			PROP_TAG(PT_STRING8, 0x6788)
#define PR_EC_EXCHANGE_DN_W			PROP_TAG(PT_UNICODE, 0x6788)

// notification based synchronization
#define PR_EC_CHANGE_ADVISOR			PROP_TAG(PT_OBJECT, 0x6789)

// server path to home server of a user
#define PR_EC_HOMESERVER_NAME			PROP_TAG(PT_TSTRING, 0x67C1)
#define PR_EC_HOMESERVER_NAME_A			PROP_TAG(PT_STRING8, 0x67C1)
#define PR_EC_HOMESERVER_NAME_W			PROP_TAG(PT_UNICODE, 0x67C1)
#define PR_EC_SERVER_UID			PROP_TAG(PT_BINARY, 0x67C2)
#define PR_EC_DELETED_STORE			PROP_TAG(PT_BOOLEAN, 0x67C3)
#define PR_EC_ARCHIVE_SERVERS			PROP_TAG(PT_MV_TSTRING, 0x67C4)
#define PR_EC_ARCHIVE_SERVERS_A			PROP_TAG(PT_MV_STRING8, 0x67C4)
#define PR_EC_ARCHIVE_SERVERS_W			PROP_TAG(PT_MV_UNICODE, 0x67C4)
#define PR_EC_ARCHIVE_COUPLINGS			PROP_TAG(PT_MV_TSTRING, 0x67C5)
#define PR_EC_ARCHIVE_COUPLINGS_A		PROP_TAG(PT_MV_STRING8, 0x67C5)
#define PR_EC_ARCHIVE_COUPLINGS_W		PROP_TAG(PT_MV_UNICODE, 0x67C5)

#define PR_EC_SEARCHFOLDER_STATUS		PROP_TAG(PT_LONG, 0x6790)
#define PR_EC_BODY_FILTERED			PROP_TAG(PT_BINARY, 0x6791)

#define PR_EC_RESYNC_ID				PROP_TAG(PT_LONG, 0x67A5)
#define PR_EC_STORED_SERVER_UID			PROP_TAG(PT_BINARY, 0x67A6)
#define PR_EC_AB_HIDDEN				PROP_TAG(PT_BOOLEAN, 0x67A7)


// Properties for IMailUsers
#define PR_EC_NONACTIVE				PROP_TAG(PT_BOOLEAN, 0x67B0)
#define PR_EC_ADMINISTRATOR			PROP_TAG(PT_LONG, 0x67B1) // Maps to 'ulIsAdmin' in ECUser

#define PR_EC_ENABLED_FEATURES			PROP_TAG(PT_MV_TSTRING, 0x67B3)
#define PR_EC_ENABLED_FEATURES_A		PROP_TAG(PT_MV_STRING8, 0x67B3)
#define PR_EC_ENABLED_FEATURES_W		PROP_TAG(PT_MV_UNICODE, 0x67B3)
#define PR_EC_DISABLED_FEATURES			PROP_TAG(PT_MV_TSTRING, 0x67B4)
#define PR_EC_DISABLED_FEATURES_A		PROP_TAG(PT_MV_STRING8, 0x67B4)
#define PR_EC_DISABLED_FEATURES_W		PROP_TAG(PT_MV_UNICODE, 0x67B4)

#define PR_EC_PUBLIC_IPM_SUBTREE_ENTRYID	PROP_TAG(PT_BINARY, 0x67D0)

// kopano-backup: original source key
#define PR_EC_BACKUP_SOURCE_KEY			PROP_TAG(PT_BINARY, 0x67D1)

// Flags for PR_EC_FLAGS
#define EC_PROFILE_FLAGS_NO_NOTIFICATIONS		0x0000001
#define EC_PROFILE_FLAGS_NO_COMPRESSION			0x0000002
#define EC_PROFILE_FLAGS_NO_PUBLIC_STORE		0x0000004
#define EC_PROFILE_FLAGS_OFFLINE			0x0000080
#define EC_PROFILE_FLAGS_CACHE_PRIVATE			0x0000100
#define EC_PROFILE_FLAGS_CACHE_PUBLIC			0x0000400
#define EC_PROFILE_FLAGS_TRUNCATE_SOURCEKEY		0x0000800		// Truncate PR_SOURCE_KEY to 22 bytes (from 24 bytes)
#define EC_PROFILE_FLAGS_NO_UID_AUTH			0x0001000		// Don't grant access based on the uid of the connecting process (Unix socket only)
#define EC_PROFILE_FLAGS_OIDC                   0x0004000

// Kopano internal flags
#define EC_PROVIDER_OFFLINE				0x0F00000

// Flags for PR_EC_PROXY_FLAGS
#define EC_PROFILE_PROXY_FLAGS_USE_PROXY		0x0000001

#define EC_SEARCHFOLDER_STATUS_RUNNING 0
#define EC_SEARCHFOLDER_STATUS_REBUILD 1
#define EC_SEARCHFOLDER_STATUS_STOPPED 2

// Type of store
#define ECSTORE_TYPE_PRIVATE	0
#define ECSTORE_TYPE_PUBLIC	1
#define ECSTORE_TYPE_ARCHIVE	2

#define ECSTORE_TYPE_MASK_PRIVATE	(1 << ECSTORE_TYPE_PRIVATE)
#define ECSTORE_TYPE_MASK_PUBLIC	(1 << ECSTORE_TYPE_PUBLIC)
#define ECSTORE_TYPE_MASK_ARCHIVE	(1 << ECSTORE_TYPE_ARCHIVE)

#define ECSTORE_TYPE_ISVALID(ulStoreType)		\
	((ulStoreType) == ECSTORE_TYPE_PRIVATE ||	\
	 (ulStoreType) == ECSTORE_TYPE_PUBLIC ||	\
	 (ulStoreType) == ECSTORE_TYPE_ARCHIVE)

// Flags for IECServiceAdmin::PurgeCache()
#define PURGE_CACHE_QUOTA		0x0001
#define PURGE_CACHE_QUOTADEFAULT	0x0002	
#define PURGE_CACHE_OBJECTS		0x0004
#define PURGE_CACHE_STORES		0x0008
#define PURGE_CACHE_ACL			0x0010
#define PURGE_CACHE_CELL		0x0020
#define PURGE_CACHE_INDEX1		0x0040
#define PURGE_CACHE_INDEX2		0x0080
#define PURGE_CACHE_INDEXEDPROPERTIES	0x0100
#define PURGE_CACHE_USEROBJECT		0x0200
#define PURGE_CACHE_EXTERNID		0x0400
#define PURGE_CACHE_USERDETAILS		0x0800
#define PURGE_CACHE_SERVER		0x1000
#define PURGE_CACHE_ALL			0xFFFFFFFF

// Extra table flag, do not let the server cap contents on 255 characters
// 1 bit under the MAPI_UNICODE bit, hopefully we won't clash with Exchange bits later on
#define EC_TABLE_NOCAP			0x40000000

#endif
