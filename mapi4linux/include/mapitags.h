/*
 * SPDX-License-Identifier: AGPL-3.0-only
 * Copyright 2005 - 2016 Zarafa and its licensors
 */
/* mapitags.h – Defines property tags */
#ifndef M4L_MAPITAGS_H
#define M4L_MAPITAGS_H
#define MAPITAGS_H

#include <kopano/platform.h>
#include <mapidefs.h>		/* we include this here too for the PROP_ID definitions */

/* Determine if a property is transmittable. */
#define FIsTransmittable(ulPropTag) \
    ((PROP_ID (ulPropTag) <  (ULONG)0x0E00) || \
    (PROP_ID (ulPropTag)  >= (ULONG)0x8000) || \
    ((PROP_ID (ulPropTag) >= (ULONG)0x1000) && (PROP_ID (ulPropTag) < (ULONG)0x6000)) || \
    ((PROP_ID (ulPropTag) >= (ULONG)0x6800) && (PROP_ID (ulPropTag) < (ULONG)0x7C00)))

/*
 *  Message envelope properties
 */
#define PR_ACKNOWLEDGEMENT_MODE                     PROP_TAG( PT_LONG,      0x0001)
#define PR_ALTERNATE_RECIPIENT_ALLOWED              PROP_TAG( PT_BOOLEAN,   0x0002)
#define PR_AUTHORIZING_USERS                        PROP_TAG( PT_BINARY,    0x0003)
#define PR_AUTO_FORWARD_COMMENT                     PROP_TAG( PT_TSTRING,   0x0004)
#define PR_AUTO_FORWARD_COMMENT_W                   PROP_TAG( PT_UNICODE,   0x0004)
#define PR_AUTO_FORWARD_COMMENT_A                   PROP_TAG( PT_STRING8,   0x0004)
#define PR_AUTO_FORWARDED                           PROP_TAG( PT_BOOLEAN,   0x0005)
#define PR_CONTENT_CONFIDENTIALITY_ALGORITHM_ID     PROP_TAG( PT_BINARY,    0x0006)
#define PR_CONTENT_CORRELATOR                       PROP_TAG( PT_BINARY,    0x0007)
#define PR_CONTENT_IDENTIFIER                       PROP_TAG( PT_TSTRING,   0x0008)
#define PR_CONTENT_IDENTIFIER_W                     PROP_TAG( PT_UNICODE,   0x0008)
#define PR_CONTENT_IDENTIFIER_A                     PROP_TAG( PT_STRING8,   0x0008)
#define PR_CONTENT_LENGTH                           PROP_TAG( PT_LONG,      0x0009)
#define PR_CONTENT_RETURN_REQUESTED                 PROP_TAG( PT_BOOLEAN,   0x000A)

#define PR_CONVERSATION_KEY                         PROP_TAG( PT_BINARY,    0x000B)

#define PR_CONVERSION_EITS                          PROP_TAG( PT_BINARY,    0x000C)
#define PR_CONVERSION_WITH_LOSS_PROHIBITED          PROP_TAG( PT_BOOLEAN,   0x000D)
#define PR_CONVERTED_EITS                           PROP_TAG( PT_BINARY,    0x000E)
#define PR_DEFERRED_DELIVERY_TIME                   PROP_TAG( PT_SYSTIME,   0x000F)
#define PR_DELIVER_TIME                             PROP_TAG( PT_SYSTIME,   0x0010)
#define PR_DISCARD_REASON                           PROP_TAG( PT_LONG,      0x0011)
#define PR_DISCLOSURE_OF_RECIPIENTS                 PROP_TAG( PT_BOOLEAN,   0x0012)
#define PR_DL_EXPANSION_HISTORY                     PROP_TAG( PT_BINARY,    0x0013)
#define PR_DL_EXPANSION_PROHIBITED                  PROP_TAG( PT_BOOLEAN,   0x0014)
#define PR_EXPIRY_TIME                              PROP_TAG( PT_SYSTIME,   0x0015)
#define PR_IMPLICIT_CONVERSION_PROHIBITED           PROP_TAG( PT_BOOLEAN,   0x0016)
#define PR_IMPORTANCE                               PROP_TAG( PT_LONG,      0x0017)
#define PR_IPM_ID                                   PROP_TAG( PT_BINARY,    0x0018)
#define PR_LATEST_DELIVERY_TIME                     PROP_TAG( PT_SYSTIME,   0x0019)
#define PR_MESSAGE_CLASS                            PROP_TAG( PT_TSTRING,   0x001A)
#define PR_MESSAGE_CLASS_W                          PROP_TAG( PT_UNICODE,   0x001A)
#define PR_MESSAGE_CLASS_A                          PROP_TAG( PT_STRING8,   0x001A)
#define PR_MESSAGE_DELIVERY_ID                      PROP_TAG( PT_BINARY,    0x001B)

#define PR_MESSAGE_SECURITY_LABEL                   PROP_TAG( PT_BINARY,    0x001E)
#define PR_OBSOLETED_IPMS                           PROP_TAG( PT_BINARY,    0x001F)
#define PR_ORIGINALLY_INTENDED_RECIPIENT_NAME       PROP_TAG( PT_BINARY,    0x0020)
#define PR_ORIGINAL_EITS                            PROP_TAG( PT_BINARY,    0x0021)
#define PR_ORIGINATOR_CERTIFICATE                   PROP_TAG( PT_BINARY,    0x0022)
#define PR_ORIGINATOR_DELIVERY_REPORT_REQUESTED     PROP_TAG( PT_BOOLEAN,   0x0023)
#define PR_ORIGINATOR_RETURN_ADDRESS                PROP_TAG( PT_BINARY,    0x0024)

#define PR_PARENT_KEY                               PROP_TAG( PT_BINARY,    0x0025)
#define PR_PRIORITY                                 PROP_TAG( PT_LONG,      0x0026)

#define PR_ORIGIN_CHECK                             PROP_TAG( PT_BINARY,    0x0027)
#define PR_PROOF_OF_SUBMISSION_REQUESTED            PROP_TAG( PT_BOOLEAN,   0x0028)
#define PR_READ_RECEIPT_REQUESTED                   PROP_TAG( PT_BOOLEAN,   0x0029)
#define PR_RECEIPT_TIME                             PROP_TAG( PT_SYSTIME,   0x002A)
#define PR_RECIPIENT_REASSIGNMENT_PROHIBITED        PROP_TAG( PT_BOOLEAN,   0x002B)
#define PR_REDIRECTION_HISTORY                      PROP_TAG( PT_BINARY,    0x002C)
#define PR_RELATED_IPMS                             PROP_TAG( PT_BINARY,    0x002D)
#define PR_ORIGINAL_SENSITIVITY                     PROP_TAG( PT_LONG,      0x002E)
#define PR_LANGUAGES                                PROP_TAG( PT_TSTRING,   0x002F)
#define PR_LANGUAGES_W                              PROP_TAG( PT_UNICODE,   0x002F)
#define PR_LANGUAGES_A                              PROP_TAG( PT_STRING8,   0x002F)
#define PR_REPLY_TIME                               PROP_TAG( PT_SYSTIME,   0x0030)
#define PR_REPORT_TAG                               PROP_TAG( PT_BINARY,    0x0031)
#define PR_REPORT_TIME                              PROP_TAG( PT_SYSTIME,   0x0032)
#define PR_RETURNED_IPM                             PROP_TAG( PT_BOOLEAN,   0x0033)
#define PR_SECURITY                                 PROP_TAG( PT_LONG,      0x0034)
#define PR_INCOMPLETE_COPY                          PROP_TAG( PT_BOOLEAN,   0x0035)
#define PR_SENSITIVITY                              PROP_TAG( PT_LONG,      0x0036)
#define PR_SUBJECT                                  PROP_TAG( PT_TSTRING,   0x0037)
#define PR_SUBJECT_W                                PROP_TAG( PT_UNICODE,   0x0037)
#define PR_SUBJECT_A                                PROP_TAG( PT_STRING8,   0x0037)
#define PR_SUBJECT_IPM                              PROP_TAG( PT_BINARY,    0x0038)
#define PR_CLIENT_SUBMIT_TIME                       PROP_TAG( PT_SYSTIME,   0x0039)
#define PR_REPORT_NAME                              PROP_TAG( PT_TSTRING,   0x003A)
#define PR_REPORT_NAME_W                            PROP_TAG( PT_UNICODE,   0x003A)
#define PR_REPORT_NAME_A                            PROP_TAG( PT_STRING8,   0x003A)
#define PR_SENT_REPRESENTING_SEARCH_KEY             PROP_TAG( PT_BINARY,    0x003B)
#define PR_X400_CONTENT_TYPE                        PROP_TAG( PT_BINARY,    0x003C)
#define PR_SUBJECT_PREFIX                           PROP_TAG( PT_TSTRING,   0x003D)
#define PR_SUBJECT_PREFIX_W                         PROP_TAG( PT_UNICODE,   0x003D)
#define PR_SUBJECT_PREFIX_A                         PROP_TAG( PT_STRING8,   0x003D)
#define PR_NON_RECEIPT_REASON                       PROP_TAG( PT_LONG,      0x003E)
#define PR_RECEIVED_BY_ENTRYID                      PROP_TAG( PT_BINARY,    0x003F)
#define PR_RECEIVED_BY_NAME                         PROP_TAG( PT_TSTRING,   0x0040)
#define PR_RECEIVED_BY_NAME_W                       PROP_TAG( PT_UNICODE,   0x0040)
#define PR_RECEIVED_BY_NAME_A                       PROP_TAG( PT_STRING8,   0x0040)
#define PR_SENT_REPRESENTING_ENTRYID                PROP_TAG( PT_BINARY,    0x0041)
#define PR_SENT_REPRESENTING_NAME                   PROP_TAG( PT_TSTRING,   0x0042)
#define PR_SENT_REPRESENTING_NAME_W                 PROP_TAG( PT_UNICODE,   0x0042)
#define PR_SENT_REPRESENTING_NAME_A                 PROP_TAG( PT_STRING8,   0x0042)
#define PR_RCVD_REPRESENTING_ENTRYID                PROP_TAG( PT_BINARY,    0x0043)
#define PR_RCVD_REPRESENTING_NAME                   PROP_TAG( PT_TSTRING,   0x0044)
#define PR_RCVD_REPRESENTING_NAME_W                 PROP_TAG( PT_UNICODE,   0x0044)
#define PR_RCVD_REPRESENTING_NAME_A                 PROP_TAG( PT_STRING8,   0x0044)
#define PR_REPORT_ENTRYID                           PROP_TAG( PT_BINARY,    0x0045)
#define PR_READ_RECEIPT_ENTRYID                     PROP_TAG( PT_BINARY,    0x0046)
#define PR_MESSAGE_SUBMISSION_ID                    PROP_TAG( PT_BINARY,    0x0047)
#define PR_PROVIDER_SUBMIT_TIME                     PROP_TAG( PT_SYSTIME,   0x0048)
#define PR_ORIGINAL_SUBJECT                         PROP_TAG( PT_TSTRING,   0x0049)
#define PR_ORIGINAL_SUBJECT_W                       PROP_TAG( PT_UNICODE,   0x0049)
#define PR_ORIGINAL_SUBJECT_A                       PROP_TAG( PT_STRING8,   0x0049)
#define PR_DISC_VAL                                 PROP_TAG( PT_BOOLEAN,   0x004A)
#define PR_ORIG_MESSAGE_CLASS                       PROP_TAG( PT_TSTRING,   0x004B)
#define PR_ORIG_MESSAGE_CLASS_W                     PROP_TAG( PT_UNICODE,   0x004B)
#define PR_ORIG_MESSAGE_CLASS_A                     PROP_TAG( PT_STRING8,   0x004B)
#define PR_ORIGINAL_AUTHOR_ENTRYID                  PROP_TAG( PT_BINARY,    0x004C)
#define PR_ORIGINAL_AUTHOR_NAME                     PROP_TAG( PT_TSTRING,   0x004D)
#define PR_ORIGINAL_AUTHOR_NAME_W                   PROP_TAG( PT_UNICODE,   0x004D)
#define PR_ORIGINAL_AUTHOR_NAME_A                   PROP_TAG( PT_STRING8,   0x004D)
#define PR_ORIGINAL_SUBMIT_TIME                     PROP_TAG( PT_SYSTIME,   0x004E)
#define PR_REPLY_RECIPIENT_ENTRIES                  PROP_TAG( PT_BINARY,    0x004F)
#define PR_REPLY_RECIPIENT_NAMES                    PROP_TAG( PT_TSTRING,   0x0050)
#define PR_REPLY_RECIPIENT_NAMES_W                  PROP_TAG( PT_UNICODE,   0x0050)
#define PR_REPLY_RECIPIENT_NAMES_A                  PROP_TAG( PT_STRING8,   0x0050)

#define PR_RECEIVED_BY_SEARCH_KEY                   PROP_TAG( PT_BINARY,    0x0051)
#define PR_RCVD_REPRESENTING_SEARCH_KEY             PROP_TAG( PT_BINARY,    0x0052)
#define PR_READ_RECEIPT_SEARCH_KEY                  PROP_TAG( PT_BINARY,    0x0053)
#define PR_REPORT_SEARCH_KEY                        PROP_TAG( PT_BINARY,    0x0054)
#define PR_ORIGINAL_DELIVERY_TIME                   PROP_TAG( PT_SYSTIME,   0x0055)
#define PR_ORIGINAL_AUTHOR_SEARCH_KEY               PROP_TAG( PT_BINARY,    0x0056)

#define PR_MESSAGE_TO_ME                            PROP_TAG( PT_BOOLEAN,   0x0057)
#define PR_MESSAGE_CC_ME                            PROP_TAG( PT_BOOLEAN,   0x0058)
#define PR_MESSAGE_RECIP_ME                         PROP_TAG( PT_BOOLEAN,   0x0059)

#define PR_ORIGINAL_SENDER_NAME                     PROP_TAG( PT_TSTRING,   0x005A)
#define PR_ORIGINAL_SENDER_NAME_W                   PROP_TAG( PT_UNICODE,   0x005A)
#define PR_ORIGINAL_SENDER_NAME_A                   PROP_TAG( PT_STRING8,   0x005A)
#define PR_ORIGINAL_SENDER_ENTRYID                  PROP_TAG( PT_BINARY,    0x005B)
#define PR_ORIGINAL_SENDER_SEARCH_KEY               PROP_TAG( PT_BINARY,    0x005C)
#define PR_ORIGINAL_SENT_REPRESENTING_NAME          PROP_TAG( PT_TSTRING,   0x005D)
#define PR_ORIGINAL_SENT_REPRESENTING_NAME_W        PROP_TAG( PT_UNICODE,   0x005D)
#define PR_ORIGINAL_SENT_REPRESENTING_NAME_A        PROP_TAG( PT_STRING8,   0x005D)
#define PR_ORIGINAL_SENT_REPRESENTING_ENTRYID       PROP_TAG( PT_BINARY,    0x005E)
#define PR_ORIGINAL_SENT_REPRESENTING_SEARCH_KEY    PROP_TAG( PT_BINARY,    0x005F)

#define PR_START_DATE                               PROP_TAG( PT_SYSTIME,   0x0060)
#define PR_END_DATE                                 PROP_TAG( PT_SYSTIME,   0x0061)
#define PR_OWNER_APPT_ID                            PROP_TAG( PT_LONG,      0x0062)
#define PR_RESPONSE_REQUESTED                       PROP_TAG( PT_BOOLEAN,   0x0063)

#define PR_SENT_REPRESENTING_ADDRTYPE               PROP_TAG( PT_TSTRING,   0x0064)
#define PR_SENT_REPRESENTING_ADDRTYPE_W             PROP_TAG( PT_UNICODE,   0x0064)
#define PR_SENT_REPRESENTING_ADDRTYPE_A             PROP_TAG( PT_STRING8,   0x0064)
#define PR_SENT_REPRESENTING_EMAIL_ADDRESS          PROP_TAG( PT_TSTRING,   0x0065)
#define PR_SENT_REPRESENTING_EMAIL_ADDRESS_W        PROP_TAG( PT_UNICODE,   0x0065)
#define PR_SENT_REPRESENTING_EMAIL_ADDRESS_A        PROP_TAG( PT_STRING8,   0x0065)

#define PR_ORIGINAL_SENDER_ADDRTYPE                 PROP_TAG( PT_TSTRING,   0x0066)
#define PR_ORIGINAL_SENDER_ADDRTYPE_W               PROP_TAG( PT_UNICODE,   0x0066)
#define PR_ORIGINAL_SENDER_ADDRTYPE_A               PROP_TAG( PT_STRING8,   0x0066)
#define PR_ORIGINAL_SENDER_EMAIL_ADDRESS            PROP_TAG( PT_TSTRING,   0x0067)
#define PR_ORIGINAL_SENDER_EMAIL_ADDRESS_W          PROP_TAG( PT_UNICODE,   0x0067)
#define PR_ORIGINAL_SENDER_EMAIL_ADDRESS_A          PROP_TAG( PT_STRING8,   0x0067)

#define PR_ORIGINAL_SENT_REPRESENTING_ADDRTYPE      PROP_TAG( PT_TSTRING,   0x0068)
#define PR_ORIGINAL_SENT_REPRESENTING_ADDRTYPE_W    PROP_TAG( PT_UNICODE,   0x0068)
#define PR_ORIGINAL_SENT_REPRESENTING_ADDRTYPE_A    PROP_TAG( PT_STRING8,   0x0068)
#define PR_ORIGINAL_SENT_REPRESENTING_EMAIL_ADDRESS PROP_TAG( PT_TSTRING,   0x0069)
#define PR_ORIGINAL_SENT_REPRESENTING_EMAIL_ADDRESS_W   PROP_TAG( PT_UNICODE,   0x0069)
#define PR_ORIGINAL_SENT_REPRESENTING_EMAIL_ADDRESS_A   PROP_TAG( PT_STRING8,   0x0069)

#define PR_CONVERSATION_TOPIC                       PROP_TAG( PT_TSTRING,   0x0070)
#define PR_CONVERSATION_TOPIC_W                     PROP_TAG( PT_UNICODE,   0x0070)
#define PR_CONVERSATION_TOPIC_A                     PROP_TAG( PT_STRING8,   0x0070)
#define PR_CONVERSATION_INDEX                       PROP_TAG( PT_BINARY,    0x0071)

#define PR_ORIGINAL_DISPLAY_BCC                     PROP_TAG( PT_TSTRING,   0x0072)
#define PR_ORIGINAL_DISPLAY_BCC_W                   PROP_TAG( PT_UNICODE,   0x0072)
#define PR_ORIGINAL_DISPLAY_BCC_A                   PROP_TAG( PT_STRING8,   0x0072)
#define PR_ORIGINAL_DISPLAY_CC                      PROP_TAG( PT_TSTRING,   0x0073)
#define PR_ORIGINAL_DISPLAY_CC_W                    PROP_TAG( PT_UNICODE,   0x0073)
#define PR_ORIGINAL_DISPLAY_CC_A                    PROP_TAG( PT_STRING8,   0x0073)
#define PR_ORIGINAL_DISPLAY_TO                      PROP_TAG( PT_TSTRING,   0x0074)
#define PR_ORIGINAL_DISPLAY_TO_W                    PROP_TAG( PT_UNICODE,   0x0074)
#define PR_ORIGINAL_DISPLAY_TO_A                    PROP_TAG( PT_STRING8,   0x0074)

#define PR_RECEIVED_BY_ADDRTYPE                     PROP_TAG( PT_TSTRING,   0x0075)
#define PR_RECEIVED_BY_ADDRTYPE_W                   PROP_TAG( PT_UNICODE,   0x0075)
#define PR_RECEIVED_BY_ADDRTYPE_A                   PROP_TAG( PT_STRING8,   0x0075)
#define PR_RECEIVED_BY_EMAIL_ADDRESS                PROP_TAG( PT_TSTRING,   0x0076)
#define PR_RECEIVED_BY_EMAIL_ADDRESS_W              PROP_TAG( PT_UNICODE,   0x0076)
#define PR_RECEIVED_BY_EMAIL_ADDRESS_A              PROP_TAG( PT_STRING8,   0x0076)

#define PR_RCVD_REPRESENTING_ADDRTYPE               PROP_TAG( PT_TSTRING,   0x0077)
#define PR_RCVD_REPRESENTING_ADDRTYPE_W             PROP_TAG( PT_UNICODE,   0x0077)
#define PR_RCVD_REPRESENTING_ADDRTYPE_A             PROP_TAG( PT_STRING8,   0x0077)
#define PR_RCVD_REPRESENTING_EMAIL_ADDRESS          PROP_TAG( PT_TSTRING,   0x0078)
#define PR_RCVD_REPRESENTING_EMAIL_ADDRESS_W        PROP_TAG( PT_UNICODE,   0x0078)
#define PR_RCVD_REPRESENTING_EMAIL_ADDRESS_A        PROP_TAG( PT_STRING8,   0x0078)

#define PR_ORIGINAL_AUTHOR_ADDRTYPE                 PROP_TAG( PT_TSTRING,   0x0079)
#define PR_ORIGINAL_AUTHOR_ADDRTYPE_W               PROP_TAG( PT_UNICODE,   0x0079)
#define PR_ORIGINAL_AUTHOR_ADDRTYPE_A               PROP_TAG( PT_STRING8,   0x0079)
#define PR_ORIGINAL_AUTHOR_EMAIL_ADDRESS            PROP_TAG( PT_TSTRING,   0x007A)
#define PR_ORIGINAL_AUTHOR_EMAIL_ADDRESS_W          PROP_TAG( PT_UNICODE,   0x007A)
#define PR_ORIGINAL_AUTHOR_EMAIL_ADDRESS_A          PROP_TAG( PT_STRING8,   0x007A)

#define PR_ORIGINALLY_INTENDED_RECIP_ADDRTYPE       PROP_TAG( PT_TSTRING,   0x007B)
#define PR_ORIGINALLY_INTENDED_RECIP_ADDRTYPE_W     PROP_TAG( PT_UNICODE,   0x007B)
#define PR_ORIGINALLY_INTENDED_RECIP_ADDRTYPE_A     PROP_TAG( PT_STRING8,   0x007B)
#define PR_ORIGINALLY_INTENDED_RECIP_EMAIL_ADDRESS  PROP_TAG( PT_TSTRING,   0x007C)
#define PR_ORIGINALLY_INTENDED_RECIP_EMAIL_ADDRESS_W    PROP_TAG( PT_UNICODE,   0x007C)
#define PR_ORIGINALLY_INTENDED_RECIP_EMAIL_ADDRESS_A    PROP_TAG( PT_STRING8,   0x007C)

#define PR_TRANSPORT_MESSAGE_HEADERS                PROP_TAG(PT_TSTRING,    0x007D)
#define PR_TRANSPORT_MESSAGE_HEADERS_W              PROP_TAG(PT_UNICODE,    0x007D)
#define PR_TRANSPORT_MESSAGE_HEADERS_A              PROP_TAG(PT_STRING8,    0x007D)

#define PR_DELEGATION                               PROP_TAG(PT_BINARY,     0x007E)

#define PR_TNEF_CORRELATION_KEY                     PROP_TAG(PT_BINARY,     0x007F)

/*
 *  Message content properties
 */
#define PR_BODY                                     PROP_TAG( PT_TSTRING,   0x1000)
#define PR_BODY_W                                   PROP_TAG( PT_UNICODE,   0x1000)
#define PR_BODY_A                                   PROP_TAG( PT_STRING8,   0x1000)
#define PR_REPORT_TEXT                              PROP_TAG( PT_TSTRING,   0x1001)
#define PR_REPORT_TEXT_W                            PROP_TAG( PT_UNICODE,   0x1001)
#define PR_REPORT_TEXT_A                            PROP_TAG( PT_STRING8,   0x1001)
#define PR_ORIGINATOR_AND_DL_EXPANSION_HISTORY      PROP_TAG( PT_BINARY,    0x1002)
#define PR_REPORTING_DL_NAME                        PROP_TAG( PT_BINARY,    0x1003)
#define PR_REPORTING_MTA_CERTIFICATE                PROP_TAG( PT_BINARY,    0x1004)

/*  Removed PR_REPORT_ORIGIN_AUTHENTICATION_CHECK with DCR 3865, use PR_ORIGIN_CHECK */

#define PR_RTF_SYNC_BODY_CRC                        PROP_TAG( PT_LONG,      0x1006)
#define PR_RTF_SYNC_BODY_COUNT                      PROP_TAG( PT_LONG,      0x1007)
#define PR_RTF_SYNC_BODY_TAG                        PROP_TAG( PT_TSTRING,   0x1008)
#define PR_RTF_SYNC_BODY_TAG_W                      PROP_TAG( PT_UNICODE,   0x1008)
#define PR_RTF_SYNC_BODY_TAG_A                      PROP_TAG( PT_STRING8,   0x1008)
#define PR_RTF_COMPRESSED                           PROP_TAG( PT_BINARY,    0x1009)
#define PR_RTF_SYNC_PREFIX_COUNT                    PROP_TAG( PT_LONG,      0x1010)
#define PR_RTF_SYNC_TRAILING_COUNT                  PROP_TAG( PT_LONG,      0x1011)
#define PR_ORIGINALLY_INTENDED_RECIP_ENTRYID        PROP_TAG( PT_BINARY,    0x1012)

#define PR_BLOCK_STATUS                             PROP_TAG( PT_LONG,      0x1096)

/*
 *  Reserved 0x1100-0x1200
 */

/*
 *  Message recipient properties
 */
#define PR_CONTENT_INTEGRITY_CHECK                  PROP_TAG( PT_BINARY,    0x0C00)
#define PR_EXPLICIT_CONVERSION                      PROP_TAG( PT_LONG,      0x0C01)
#define PR_IPM_RETURN_REQUESTED                     PROP_TAG( PT_BOOLEAN,   0x0C02)
#define PR_MESSAGE_TOKEN                            PROP_TAG( PT_BINARY,    0x0C03)
#define PR_NDR_REASON_CODE                          PROP_TAG( PT_LONG,      0x0C04)
#define PR_NDR_DIAG_CODE                            PROP_TAG( PT_LONG,      0x0C05)
#define PR_NON_RECEIPT_NOTIFICATION_REQUESTED       PROP_TAG( PT_BOOLEAN,   0x0C06)
#define PR_DELIVERY_POINT                           PROP_TAG( PT_LONG,      0x0C07)

#define PR_ORIGINATOR_NON_DELIVERY_REPORT_REQUESTED PROP_TAG( PT_BOOLEAN,   0x0C08)
#define PR_ORIGINATOR_REQUESTED_ALTERNATE_RECIPIENT PROP_TAG( PT_BINARY,    0x0C09)
#define PR_PHYSICAL_DELIVERY_BUREAU_FAX_DELIVERY    PROP_TAG( PT_BOOLEAN,   0x0C0A)
#define PR_PHYSICAL_DELIVERY_MODE                   PROP_TAG( PT_LONG,      0x0C0B)
#define PR_PHYSICAL_DELIVERY_REPORT_REQUEST         PROP_TAG( PT_LONG,      0x0C0C)
#define PR_PHYSICAL_FORWARDING_ADDRESS              PROP_TAG( PT_BINARY,    0x0C0D)
#define PR_PHYSICAL_FORWARDING_ADDRESS_REQUESTED    PROP_TAG( PT_BOOLEAN,   0x0C0E)
#define PR_PHYSICAL_FORWARDING_PROHIBITED           PROP_TAG( PT_BOOLEAN,   0x0C0F)
#define PR_PHYSICAL_RENDITION_ATTRIBUTES            PROP_TAG( PT_BINARY,    0x0C10)
#define PR_PROOF_OF_DELIVERY                        PROP_TAG( PT_BINARY,    0x0C11)
#define PR_PROOF_OF_DELIVERY_REQUESTED              PROP_TAG( PT_BOOLEAN,   0x0C12)
#define PR_RECIPIENT_CERTIFICATE                    PROP_TAG( PT_BINARY,    0x0C13)
#define PR_RECIPIENT_NUMBER_FOR_ADVICE              PROP_TAG( PT_TSTRING,   0x0C14)
#define PR_RECIPIENT_NUMBER_FOR_ADVICE_W            PROP_TAG( PT_UNICODE,   0x0C14)
#define PR_RECIPIENT_NUMBER_FOR_ADVICE_A            PROP_TAG( PT_STRING8,   0x0C14)
#define PR_RECIPIENT_TYPE                           PROP_TAG( PT_LONG,      0x0C15)
#define PR_REGISTERED_MAIL_TYPE                     PROP_TAG( PT_LONG,      0x0C16)
#define PR_REPLY_REQUESTED                          PROP_TAG( PT_BOOLEAN,   0x0C17)
#define PR_REQUESTED_DELIVERY_METHOD                PROP_TAG( PT_LONG,      0x0C18)
#define PR_SENDER_ENTRYID                           PROP_TAG( PT_BINARY,    0x0C19)
#define PR_SENDER_NAME                              PROP_TAG( PT_TSTRING,   0x0C1A)
#define PR_SENDER_NAME_W                            PROP_TAG( PT_UNICODE,   0x0C1A)
#define PR_SENDER_NAME_A                            PROP_TAG( PT_STRING8,   0x0C1A)
#define PR_SUPPLEMENTARY_INFO                       PROP_TAG( PT_TSTRING,   0x0C1B)
#define PR_SUPPLEMENTARY_INFO_W                     PROP_TAG( PT_UNICODE,   0x0C1B)
#define PR_SUPPLEMENTARY_INFO_A                     PROP_TAG( PT_STRING8,   0x0C1B)
#define PR_TYPE_OF_MTS_USER                         PROP_TAG( PT_LONG,      0x0C1C)
#define PR_SENDER_SEARCH_KEY                        PROP_TAG( PT_BINARY,    0x0C1D)
#define PR_SENDER_ADDRTYPE                          PROP_TAG( PT_TSTRING,   0x0C1E)
#define PR_SENDER_ADDRTYPE_W                        PROP_TAG( PT_UNICODE,   0x0C1E)
#define PR_SENDER_ADDRTYPE_A                        PROP_TAG( PT_STRING8,   0x0C1E)
#define PR_SENDER_EMAIL_ADDRESS                     PROP_TAG( PT_TSTRING,   0x0C1F)
#define PR_SENDER_EMAIL_ADDRESS_W                   PROP_TAG( PT_UNICODE,   0x0C1F)
#define PR_SENDER_EMAIL_ADDRESS_A                   PROP_TAG( PT_STRING8,   0x0C1F)

/*
 *  Message non-transmittable properties
 */

/*
 * The two tags, PR_MESSAGE_RECIPIENTS and PR_MESSAGE_ATTACHMENTS,
 * are to be used in the exclude list passed to
 * IMessage::CopyTo when the caller wants either the recipients or attachments
 * of the message to not get copied.  It is also used in the ProblemArray
 * return from IMessage::CopyTo when an error is encountered copying them
 */

#define PR_CURRENT_VERSION                          PROP_TAG( PT_I8,        0x0E00)
#define PR_DELETE_AFTER_SUBMIT                      PROP_TAG( PT_BOOLEAN,   0x0E01)
#define PR_DISPLAY_BCC                              PROP_TAG( PT_TSTRING,   0x0E02)
#define PR_DISPLAY_BCC_W                            PROP_TAG( PT_UNICODE,   0x0E02)
#define PR_DISPLAY_BCC_A                            PROP_TAG( PT_STRING8,   0x0E02)
#define PR_DISPLAY_CC                               PROP_TAG( PT_TSTRING,   0x0E03)
#define PR_DISPLAY_CC_W                             PROP_TAG( PT_UNICODE,   0x0E03)
#define PR_DISPLAY_CC_A                             PROP_TAG( PT_STRING8,   0x0E03)
#define PR_DISPLAY_TO                               PROP_TAG( PT_TSTRING,   0x0E04)
#define PR_DISPLAY_TO_W                             PROP_TAG( PT_UNICODE,   0x0E04)
#define PR_DISPLAY_TO_A                             PROP_TAG( PT_STRING8,   0x0E04)
#define PR_PARENT_DISPLAY                           PROP_TAG( PT_TSTRING,   0x0E05)
#define PR_PARENT_DISPLAY_W                         PROP_TAG( PT_UNICODE,   0x0E05)
#define PR_PARENT_DISPLAY_A                         PROP_TAG( PT_STRING8,   0x0E05)
#define PR_MESSAGE_DELIVERY_TIME                    PROP_TAG( PT_SYSTIME,   0x0E06)
#define PR_MESSAGE_FLAGS                            PROP_TAG( PT_LONG,      0x0E07)
#define PR_MESSAGE_SIZE                             PROP_TAG( PT_LONG,      0x0E08)
#define PR_PARENT_ENTRYID                           PROP_TAG( PT_BINARY,    0x0E09)
#define PR_SENTMAIL_ENTRYID                         PROP_TAG( PT_BINARY,    0x0E0A)
#define PR_CORRELATE                                PROP_TAG( PT_BOOLEAN,   0x0E0C)
#define PR_CORRELATE_MTSID                          PROP_TAG( PT_BINARY,    0x0E0D)
#define PR_DISCRETE_VALUES                          PROP_TAG( PT_BOOLEAN,   0x0E0E)
#define PR_RESPONSIBILITY                           PROP_TAG( PT_BOOLEAN,   0x0E0F)
#define PR_SPOOLER_STATUS                           PROP_TAG( PT_LONG,      0x0E10)
#define PR_TRANSPORT_STATUS                         PROP_TAG( PT_LONG,      0x0E11)
#define PR_MESSAGE_RECIPIENTS                       PROP_TAG( PT_OBJECT,    0x0E12)
#define PR_MESSAGE_ATTACHMENTS                      PROP_TAG( PT_OBJECT,    0x0E13)
#define PR_SUBMIT_FLAGS                             PROP_TAG( PT_LONG,      0x0E14)
#define PR_RECIPIENT_STATUS                         PROP_TAG( PT_LONG,      0x0E15)
#define PR_TRANSPORT_KEY                            PROP_TAG( PT_LONG,      0x0E16)
#define PR_MSG_STATUS                               PROP_TAG( PT_LONG,      0x0E17)
#define PR_MESSAGE_DOWNLOAD_TIME                    PROP_TAG( PT_LONG,      0x0E18)
#define PR_CREATION_VERSION                         PROP_TAG( PT_I8,        0x0E19)
#define PR_MODIFY_VERSION                           PROP_TAG( PT_I8,        0x0E1A)
#define PR_HASATTACH                                PROP_TAG( PT_BOOLEAN,   0x0E1B)
#define PR_BODY_CRC                                 PROP_TAG( PT_LONG,      0x0E1C)
#define PR_NORMALIZED_SUBJECT                       PROP_TAG( PT_TSTRING,   0x0E1D)
#define PR_NORMALIZED_SUBJECT_W                     PROP_TAG( PT_UNICODE,   0x0E1D)
#define PR_NORMALIZED_SUBJECT_A                     PROP_TAG( PT_STRING8,   0x0E1D)
#define PR_RTF_IN_SYNC                              PROP_TAG( PT_BOOLEAN,   0x0E1F)
#define PR_ATTACH_SIZE                              PROP_TAG( PT_LONG,      0x0E20)
#define PR_ATTACH_NUM                               PROP_TAG( PT_LONG,      0x0E21)
#define PR_PREPROCESS                               PROP_TAG( PT_BOOLEAN,   0x0E22)

/* PR_ORIGINAL_DISPLAY_TO, _CC, and _BCC moved to transmittible range 03/09/95 */

#define PR_ORIGINATING_MTA_CERTIFICATE              PROP_TAG( PT_BINARY,    0x0E25)
#define PR_PROOF_OF_SUBMISSION                      PROP_TAG( PT_BINARY,    0x0E26)

/*
 * The range of non-message and non-recipient property IDs (0x3000 - 0x3FFF) is
 * further broken down into ranges to make assigning new property IDs easier.
 *
 *  From    To      Kind of property
 *  --------------------------------
 *  3000    32FF    MAPI_defined common property
 *  3200    33FF    MAPI_defined form property
 *  3400    35FF    MAPI_defined message store property
 *  3600    36FF    MAPI_defined Folder or AB Container property
 *  3700    38FF    MAPI_defined attachment property
 *  3900    39FF    MAPI_defined address book property
 *  3A00    3BFF    MAPI_defined mailuser property
 *  3C00    3CFF    MAPI_defined DistList property
 *  3D00    3DFF    MAPI_defined Profile Section property
 *  3E00    3EFF    MAPI_defined Status property
 *  3F00    3FFF    MAPI_defined display table property
 */
/*
 *  Properties common to numerous MAPI objects.
 *
 *  Those properties that can appear on messages are in the
 *  non-transmittable range for messages. They start at the high
 *  end of that range and work down.
 *
 *  Properties that never appear on messages are defined in the common
 *  property range (see above).
 */

/*
 * properties that are common to multiple objects (including message objects)
 * -- these ids are in the non-transmittable range
 */
#define PR_ENTRYID                                  PROP_TAG( PT_BINARY,    0x0FFF)
#define PR_OBJECT_TYPE                              PROP_TAG( PT_LONG,      0x0FFE)
#define PR_ICON                                     PROP_TAG( PT_BINARY,    0x0FFD)
#define PR_MINI_ICON                                PROP_TAG( PT_BINARY,    0x0FFC)
#define PR_STORE_ENTRYID                            PROP_TAG( PT_BINARY,    0x0FFB)
#define PR_STORE_RECORD_KEY                         PROP_TAG( PT_BINARY,    0x0FFA)
#define PR_RECORD_KEY                               PROP_TAG( PT_BINARY,    0x0FF9)
#define PR_MAPPING_SIGNATURE                        PROP_TAG( PT_BINARY,    0x0FF8)
#define PR_ACCESS_LEVEL                             PROP_TAG( PT_LONG,      0x0FF7)
#define PR_INSTANCE_KEY                             PROP_TAG( PT_BINARY,    0x0FF6)
#define PR_ROW_TYPE                                 PROP_TAG( PT_LONG,      0x0FF5)
#define PR_ACCESS                                   PROP_TAG( PT_LONG,      0x0FF4)

/*
 * properties that are common to multiple objects (usually not including message objects)
 * -- these ids are in the transmittable range
 */
#define PR_ROWID                                    PROP_TAG( PT_LONG,      0x3000)
#define PR_DISPLAY_NAME                             PROP_TAG( PT_TSTRING,   0x3001)
#define PR_DISPLAY_NAME_W                           PROP_TAG( PT_UNICODE,   0x3001)
#define PR_DISPLAY_NAME_A                           PROP_TAG( PT_STRING8,   0x3001)
#define PR_ADDRTYPE                                 PROP_TAG( PT_TSTRING,   0x3002)
#define PR_ADDRTYPE_W                               PROP_TAG( PT_UNICODE,   0x3002)
#define PR_ADDRTYPE_A                               PROP_TAG( PT_STRING8,   0x3002)
#define PR_EMAIL_ADDRESS                            PROP_TAG( PT_TSTRING,   0x3003)
#define PR_EMAIL_ADDRESS_W                          PROP_TAG( PT_UNICODE,   0x3003)
#define PR_EMAIL_ADDRESS_A                          PROP_TAG( PT_STRING8,   0x3003)
#define PR_COMMENT                                  PROP_TAG( PT_TSTRING,   0x3004)
#define PR_COMMENT_W                                PROP_TAG( PT_UNICODE,   0x3004)
#define PR_COMMENT_A                                PROP_TAG( PT_STRING8,   0x3004)
#define PR_DEPTH                                    PROP_TAG( PT_LONG,      0x3005)
#define PR_PROVIDER_DISPLAY                         PROP_TAG( PT_TSTRING,   0x3006)
#define PR_PROVIDER_DISPLAY_W                       PROP_TAG( PT_UNICODE,   0x3006)
#define PR_PROVIDER_DISPLAY_A                       PROP_TAG( PT_STRING8,   0x3006)
#define PR_CREATION_TIME                            PROP_TAG( PT_SYSTIME,   0x3007)
#define PR_LAST_MODIFICATION_TIME                   PROP_TAG( PT_SYSTIME,   0x3008)
#define PR_RESOURCE_FLAGS                           PROP_TAG( PT_LONG,      0x3009)
#define PR_PROVIDER_DLL_NAME                        PROP_TAG( PT_TSTRING,   0x300A)
#define PR_PROVIDER_DLL_NAME_W                      PROP_TAG( PT_UNICODE,   0x300A)
#define PR_PROVIDER_DLL_NAME_A                      PROP_TAG( PT_STRING8,   0x300A)
#define PR_SEARCH_KEY                               PROP_TAG( PT_BINARY,    0x300B)
#define PR_PROVIDER_UID                             PROP_TAG( PT_BINARY,    0x300C)
#define PR_PROVIDER_ORDINAL                         PROP_TAG( PT_LONG,      0x300D)
#define PR_SORT_POSITION                            PROP_TAG(PT_BINARY,     0x3020)
#define PR_SORT_PARENTID                            PROP_TAG(PT_BINARY,     0x3021)

/*
 *  MAPI Form properties
 */
#define PR_FORM_VERSION                             PROP_TAG(PT_TSTRING,    0x3301)
#define PR_FORM_VERSION_W                           PROP_TAG(PT_UNICODE,    0x3301)
#define PR_FORM_VERSION_A                           PROP_TAG(PT_STRING8,    0x3301)
#define PR_FORM_CLSID                               PROP_TAG(PT_CLSID,      0x3302)
#define PR_FORM_CONTACT_NAME                        PROP_TAG(PT_TSTRING,    0x3303)
#define PR_FORM_CONTACT_NAME_W                      PROP_TAG(PT_UNICODE,    0x3303)
#define PR_FORM_CONTACT_NAME_A                      PROP_TAG(PT_STRING8,    0x3303)
#define PR_FORM_CATEGORY                            PROP_TAG(PT_TSTRING,    0x3304)
#define PR_FORM_CATEGORY_W                          PROP_TAG(PT_UNICODE,    0x3304)
#define PR_FORM_CATEGORY_A                          PROP_TAG(PT_STRING8,    0x3304)
#define PR_FORM_CATEGORY_SUB                        PROP_TAG(PT_TSTRING,    0x3305)
#define PR_FORM_CATEGORY_SUB_W                      PROP_TAG(PT_UNICODE,    0x3305)
#define PR_FORM_CATEGORY_SUB_A                      PROP_TAG(PT_STRING8,    0x3305)
#define PR_FORM_HOST_MAP                            PROP_TAG(PT_MV_LONG,    0x3306)
#define PR_FORM_HIDDEN                              PROP_TAG(PT_BOOLEAN,    0x3307)
#define PR_FORM_DESIGNER_NAME                       PROP_TAG(PT_TSTRING,    0x3308)
#define PR_FORM_DESIGNER_NAME_W                     PROP_TAG(PT_UNICODE,    0x3308)
#define PR_FORM_DESIGNER_NAME_A                     PROP_TAG(PT_STRING8,    0x3308)
#define PR_FORM_DESIGNER_GUID                       PROP_TAG(PT_CLSID,      0x3309)
#define PR_FORM_MESSAGE_BEHAVIOR                    PROP_TAG(PT_LONG,       0x330A)

/*
 *  Message store properties
 */
#define PR_DEFAULT_STORE                            PROP_TAG( PT_BOOLEAN,   0x3400)
#define PR_STORE_SUPPORT_MASK                       PROP_TAG( PT_LONG,      0x340D)
#define PR_STORE_STATE                              PROP_TAG( PT_LONG,      0x340E)

#define PR_IPM_SUBTREE_SEARCH_KEY                   PROP_TAG( PT_BINARY,    0x3410)
#define PR_IPM_OUTBOX_SEARCH_KEY                    PROP_TAG( PT_BINARY,    0x3411)
#define PR_IPM_WASTEBASKET_SEARCH_KEY               PROP_TAG( PT_BINARY,    0x3412)
#define PR_IPM_SENTMAIL_SEARCH_KEY                  PROP_TAG( PT_BINARY,    0x3413)
#define PR_MDB_PROVIDER                             PROP_TAG( PT_BINARY,    0x3414)
#define PR_RECEIVE_FOLDER_SETTINGS                  PROP_TAG( PT_OBJECT,    0x3415)

#define PR_VALID_FOLDER_MASK                        PROP_TAG( PT_LONG,      0x35DF)
#define PR_IPM_SUBTREE_ENTRYID                      PROP_TAG( PT_BINARY,    0x35E0)

#define PR_IPM_OUTBOX_ENTRYID                       PROP_TAG( PT_BINARY,    0x35E2)
#define PR_IPM_WASTEBASKET_ENTRYID                  PROP_TAG( PT_BINARY,    0x35E3)
#define PR_IPM_SENTMAIL_ENTRYID                     PROP_TAG( PT_BINARY,    0x35E4)
#define PR_VIEWS_ENTRYID                            PROP_TAG( PT_BINARY,    0x35E5)
#define PR_COMMON_VIEWS_ENTRYID                     PROP_TAG( PT_BINARY,    0x35E6)
#define PR_FINDER_ENTRYID                           PROP_TAG( PT_BINARY,    0x35E7)

/* Proptags 0x35E8-0x35FF reserved for folders "guaranteed" by PR_VALID_FOLDER_MASK */

/*
 *  Folder and AB Container properties
 */
#define PR_CONTAINER_FLAGS                          PROP_TAG( PT_LONG,      0x3600)
#define PR_FOLDER_TYPE                              PROP_TAG( PT_LONG,      0x3601)
#define PR_CONTENT_COUNT                            PROP_TAG( PT_LONG,      0x3602)
#define PR_CONTENT_UNREAD                           PROP_TAG( PT_LONG,      0x3603)
#define PR_CREATE_TEMPLATES                         PROP_TAG( PT_OBJECT,    0x3604)
#define PR_DETAILS_TABLE                            PROP_TAG( PT_OBJECT,    0x3605)
#define PR_SEARCH                                   PROP_TAG( PT_OBJECT,    0x3607)
#define PR_SELECTABLE                               PROP_TAG( PT_BOOLEAN,   0x3609)
#define PR_SUBFOLDERS                               PROP_TAG( PT_BOOLEAN,   0x360A)
#define PR_STATUS                                   PROP_TAG( PT_LONG,      0x360B)
#define PR_ANR                                      PROP_TAG( PT_TSTRING,   0x360C)
#define PR_ANR_W                                    PROP_TAG( PT_UNICODE,   0x360C)
#define PR_ANR_A                                    PROP_TAG( PT_STRING8,   0x360C)
#define PR_CONTENTS_SORT_ORDER                      PROP_TAG( PT_MV_LONG,   0x360D)
#define PR_CONTAINER_HIERARCHY                      PROP_TAG( PT_OBJECT,    0x360E)
#define PR_CONTAINER_CONTENTS                       PROP_TAG( PT_OBJECT,    0x360F)
#define PR_FOLDER_ASSOCIATED_CONTENTS               PROP_TAG( PT_OBJECT,    0x3610)
#define PR_DEF_CREATE_DL                            PROP_TAG( PT_BINARY,    0x3611)
#define PR_DEF_CREATE_MAILUSER                      PROP_TAG( PT_BINARY,    0x3612)
#define PR_CONTAINER_CLASS                          PROP_TAG( PT_TSTRING,   0x3613)
#define PR_CONTAINER_CLASS_W                        PROP_TAG( PT_UNICODE,   0x3613)
#define PR_CONTAINER_CLASS_A                        PROP_TAG( PT_STRING8,   0x3613)
#define PR_CONTAINER_MODIFY_VERSION                 PROP_TAG( PT_I8,        0x3614)
#define PR_AB_PROVIDER_ID                           PROP_TAG( PT_BINARY,    0x3615)
#define PR_DEFAULT_VIEW_ENTRYID                     PROP_TAG( PT_BINARY,    0x3616)
#define PR_ASSOC_CONTENT_COUNT                      PROP_TAG( PT_LONG,      0x3617)

/* Reserved 0x36C0-0x36FF */

/*
 *  Attachment properties
 */
#define PR_ATTACHMENT_X400_PARAMETERS               PROP_TAG( PT_BINARY,    0x3700)
#define PR_ATTACH_DATA_OBJ                          PROP_TAG( PT_OBJECT,    0x3701)
#define PR_ATTACH_DATA_BIN                          PROP_TAG( PT_BINARY,    0x3701)
#define PR_ATTACH_ENCODING                          PROP_TAG( PT_BINARY,    0x3702)
#define PR_ATTACH_EXTENSION                         PROP_TAG( PT_TSTRING,   0x3703)
#define PR_ATTACH_EXTENSION_W                       PROP_TAG( PT_UNICODE,   0x3703)
#define PR_ATTACH_EXTENSION_A                       PROP_TAG( PT_STRING8,   0x3703)
#define PR_ATTACH_FILENAME                          PROP_TAG( PT_TSTRING,   0x3704)
#define PR_ATTACH_FILENAME_W                        PROP_TAG( PT_UNICODE,   0x3704)
#define PR_ATTACH_FILENAME_A                        PROP_TAG( PT_STRING8,   0x3704)
#define PR_ATTACH_METHOD                            PROP_TAG( PT_LONG,      0x3705)
#define PR_ATTACH_LONG_FILENAME                     PROP_TAG( PT_TSTRING,   0x3707)
#define PR_ATTACH_LONG_FILENAME_W                   PROP_TAG( PT_UNICODE,   0x3707)
#define PR_ATTACH_LONG_FILENAME_A                   PROP_TAG( PT_STRING8,   0x3707)
#define PR_ATTACH_PATHNAME                          PROP_TAG( PT_TSTRING,   0x3708)
#define PR_ATTACH_PATHNAME_W                        PROP_TAG( PT_UNICODE,   0x3708)
#define PR_ATTACH_PATHNAME_A                        PROP_TAG( PT_STRING8,   0x3708)
#define PR_ATTACH_RENDERING                         PROP_TAG( PT_BINARY,    0x3709)
#define PR_ATTACH_TAG                               PROP_TAG( PT_BINARY,    0x370A)
#define PR_RENDERING_POSITION                       PROP_TAG( PT_LONG,      0x370B)
#define PR_ATTACH_TRANSPORT_NAME                    PROP_TAG( PT_TSTRING,   0x370C)
#define PR_ATTACH_TRANSPORT_NAME_W                  PROP_TAG( PT_UNICODE,   0x370C)
#define PR_ATTACH_TRANSPORT_NAME_A                  PROP_TAG( PT_STRING8,   0x370C)
#define PR_ATTACH_LONG_PATHNAME                     PROP_TAG( PT_TSTRING,   0x370D)
#define PR_ATTACH_LONG_PATHNAME_W                   PROP_TAG( PT_UNICODE,   0x370D)
#define PR_ATTACH_LONG_PATHNAME_A                   PROP_TAG( PT_STRING8,   0x370D)
#define PR_ATTACH_MIME_TAG                          PROP_TAG( PT_TSTRING,   0x370E)
#define PR_ATTACH_MIME_TAG_W                        PROP_TAG( PT_UNICODE,   0x370E)
#define PR_ATTACH_MIME_TAG_A                        PROP_TAG( PT_STRING8,   0x370E)
#define PR_ATTACH_ADDITIONAL_INFO                   PROP_TAG( PT_BINARY,    0x370F)

/*
 *  AB Object properties
 */
#define PR_DISPLAY_TYPE                             PROP_TAG( PT_LONG,      0x3900)
#define PR_TEMPLATEID                               PROP_TAG( PT_BINARY,    0x3902)
#define PR_PRIMARY_CAPABILITY                       PROP_TAG( PT_BINARY,    0x3904)

/*
 *  Mail user properties
 */
#define PR_7BIT_DISPLAY_NAME                        PROP_TAG( PT_STRING8,   0x39FF)
#define PR_ACCOUNT                                  PROP_TAG( PT_TSTRING,   0x3A00)
#define PR_ACCOUNT_W                                PROP_TAG( PT_UNICODE,   0x3A00)
#define PR_ACCOUNT_A                                PROP_TAG( PT_STRING8,   0x3A00)
#define PR_ALTERNATE_RECIPIENT                      PROP_TAG( PT_BINARY,    0x3A01)
#define PR_CALLBACK_TELEPHONE_NUMBER                PROP_TAG( PT_TSTRING,   0x3A02)
#define PR_CALLBACK_TELEPHONE_NUMBER_W              PROP_TAG( PT_UNICODE,   0x3A02)
#define PR_CALLBACK_TELEPHONE_NUMBER_A              PROP_TAG( PT_STRING8,   0x3A02)
#define PR_CONVERSION_PROHIBITED                    PROP_TAG( PT_BOOLEAN,   0x3A03)
#define PR_DISCLOSE_RECIPIENTS                      PROP_TAG( PT_BOOLEAN,   0x3A04)
#define PR_GENERATION                               PROP_TAG( PT_TSTRING,   0x3A05)
#define PR_GENERATION_W                             PROP_TAG( PT_UNICODE,   0x3A05)
#define PR_GENERATION_A                             PROP_TAG( PT_STRING8,   0x3A05)
#define PR_GIVEN_NAME                               PROP_TAG( PT_TSTRING,   0x3A06)
#define PR_GIVEN_NAME_W                             PROP_TAG( PT_UNICODE,   0x3A06)
#define PR_GIVEN_NAME_A                             PROP_TAG( PT_STRING8,   0x3A06)
#define PR_GOVERNMENT_ID_NUMBER                     PROP_TAG( PT_TSTRING,   0x3A07)
#define PR_GOVERNMENT_ID_NUMBER_W                   PROP_TAG( PT_UNICODE,   0x3A07)
#define PR_GOVERNMENT_ID_NUMBER_A                   PROP_TAG( PT_STRING8,   0x3A07)
#define PR_BUSINESS_TELEPHONE_NUMBER                PROP_TAG( PT_TSTRING,   0x3A08)
#define PR_BUSINESS_TELEPHONE_NUMBER_W              PROP_TAG( PT_UNICODE,   0x3A08)
#define PR_BUSINESS_TELEPHONE_NUMBER_A              PROP_TAG( PT_STRING8,   0x3A08)
#define PR_OFFICE_TELEPHONE_NUMBER                  PR_BUSINESS_TELEPHONE_NUMBER
#define PR_OFFICE_TELEPHONE_NUMBER_W                PR_BUSINESS_TELEPHONE_NUMBER_W
#define PR_OFFICE_TELEPHONE_NUMBER_A                PR_BUSINESS_TELEPHONE_NUMBER_A
#define PR_HOME_TELEPHONE_NUMBER                    PROP_TAG( PT_TSTRING,   0x3A09)
#define PR_HOME_TELEPHONE_NUMBER_W                  PROP_TAG( PT_UNICODE,   0x3A09)
#define PR_HOME_TELEPHONE_NUMBER_A                  PROP_TAG( PT_STRING8,   0x3A09)
#define PR_INITIALS                                 PROP_TAG( PT_TSTRING,   0x3A0A)
#define PR_INITIALS_W                               PROP_TAG( PT_UNICODE,   0x3A0A)
#define PR_INITIALS_A                               PROP_TAG( PT_STRING8,   0x3A0A)
#define PR_KEYWORD                                  PROP_TAG( PT_TSTRING,   0x3A0B)
#define PR_KEYWORD_W                                PROP_TAG( PT_UNICODE,   0x3A0B)
#define PR_KEYWORD_A                                PROP_TAG( PT_STRING8,   0x3A0B)
#define PR_LANGUAGE                                 PROP_TAG( PT_TSTRING,   0x3A0C)
#define PR_LANGUAGE_W                               PROP_TAG( PT_UNICODE,   0x3A0C)
#define PR_LANGUAGE_A                               PROP_TAG( PT_STRING8,   0x3A0C)
#define PR_LOCATION                                 PROP_TAG( PT_TSTRING,   0x3A0D)
#define PR_LOCATION_W                               PROP_TAG( PT_UNICODE,   0x3A0D)
#define PR_LOCATION_A                               PROP_TAG( PT_STRING8,   0x3A0D)
#define PR_MAIL_PERMISSION                          PROP_TAG( PT_BOOLEAN,   0x3A0E)
#define PR_MHS_COMMON_NAME                          PROP_TAG( PT_TSTRING,   0x3A0F)
#define PR_MHS_COMMON_NAME_W                        PROP_TAG( PT_UNICODE,   0x3A0F)
#define PR_MHS_COMMON_NAME_A                        PROP_TAG( PT_STRING8,   0x3A0F)
#define PR_ORGANIZATIONAL_ID_NUMBER                 PROP_TAG( PT_TSTRING,   0x3A10)
#define PR_ORGANIZATIONAL_ID_NUMBER_W               PROP_TAG( PT_UNICODE,   0x3A10)
#define PR_ORGANIZATIONAL_ID_NUMBER_A               PROP_TAG( PT_STRING8,   0x3A10)
#define PR_SURNAME                                  PROP_TAG( PT_TSTRING,   0x3A11)
#define PR_SURNAME_W                                PROP_TAG( PT_UNICODE,   0x3A11)
#define PR_SURNAME_A                                PROP_TAG( PT_STRING8,   0x3A11)
#define PR_ORIGINAL_ENTRYID                         PROP_TAG( PT_BINARY,    0x3A12)
#define PR_ORIGINAL_DISPLAY_NAME                    PROP_TAG( PT_TSTRING,   0x3A13)
#define PR_ORIGINAL_DISPLAY_NAME_W                  PROP_TAG( PT_UNICODE,   0x3A13)
#define PR_ORIGINAL_DISPLAY_NAME_A                  PROP_TAG( PT_STRING8,   0x3A13)
#define PR_ORIGINAL_SEARCH_KEY                      PROP_TAG( PT_BINARY,    0x3A14)
#define PR_POSTAL_ADDRESS                           PROP_TAG( PT_TSTRING,   0x3A15)
#define PR_POSTAL_ADDRESS_W                         PROP_TAG( PT_UNICODE,   0x3A15)
#define PR_POSTAL_ADDRESS_A                         PROP_TAG( PT_STRING8,   0x3A15)
#define PR_COMPANY_NAME                             PROP_TAG( PT_TSTRING,   0x3A16)
#define PR_COMPANY_NAME_W                           PROP_TAG( PT_UNICODE,   0x3A16)
#define PR_COMPANY_NAME_A                           PROP_TAG( PT_STRING8,   0x3A16)
#define PR_TITLE                                    PROP_TAG( PT_TSTRING,   0x3A17)
#define PR_TITLE_W                                  PROP_TAG( PT_UNICODE,   0x3A17)
#define PR_TITLE_A                                  PROP_TAG( PT_STRING8,   0x3A17)
#define PR_DEPARTMENT_NAME                          PROP_TAG( PT_TSTRING,   0x3A18)
#define PR_DEPARTMENT_NAME_W                        PROP_TAG( PT_UNICODE,   0x3A18)
#define PR_DEPARTMENT_NAME_A                        PROP_TAG( PT_STRING8,   0x3A18)
#define PR_OFFICE_LOCATION                          PROP_TAG( PT_TSTRING,   0x3A19)
#define PR_OFFICE_LOCATION_W                        PROP_TAG( PT_UNICODE,   0x3A19)
#define PR_OFFICE_LOCATION_A                        PROP_TAG( PT_STRING8,   0x3A19)
#define PR_PRIMARY_TELEPHONE_NUMBER                 PROP_TAG( PT_TSTRING,   0x3A1A)
#define PR_PRIMARY_TELEPHONE_NUMBER_W               PROP_TAG( PT_UNICODE,   0x3A1A)
#define PR_PRIMARY_TELEPHONE_NUMBER_A               PROP_TAG( PT_STRING8,   0x3A1A)
#define PR_BUSINESS2_TELEPHONE_NUMBER               PROP_TAG( PT_TSTRING,   0x3A1B)
#define PR_BUSINESS2_TELEPHONE_NUMBER_W             PROP_TAG( PT_UNICODE,   0x3A1B)
#define PR_BUSINESS2_TELEPHONE_NUMBER_A             PROP_TAG( PT_STRING8,   0x3A1B)
#define PR_OFFICE2_TELEPHONE_NUMBER                 PR_BUSINESS2_TELEPHONE_NUMBER
#define PR_OFFICE2_TELEPHONE_NUMBER_W               PR_BUSINESS2_TELEPHONE_NUMBER_W
#define PR_OFFICE2_TELEPHONE_NUMBER_A               PR_BUSINESS2_TELEPHONE_NUMBER_A
#define PR_MOBILE_TELEPHONE_NUMBER                  PROP_TAG( PT_TSTRING,   0x3A1C)
#define PR_MOBILE_TELEPHONE_NUMBER_W                PROP_TAG( PT_UNICODE,   0x3A1C)
#define PR_MOBILE_TELEPHONE_NUMBER_A                PROP_TAG( PT_STRING8,   0x3A1C)
#define PR_CELLULAR_TELEPHONE_NUMBER                PR_MOBILE_TELEPHONE_NUMBER
#define PR_CELLULAR_TELEPHONE_NUMBER_W              PR_MOBILE_TELEPHONE_NUMBER_W
#define PR_CELLULAR_TELEPHONE_NUMBER_A              PR_MOBILE_TELEPHONE_NUMBER_A
#define PR_RADIO_TELEPHONE_NUMBER                   PROP_TAG( PT_TSTRING,   0x3A1D)
#define PR_RADIO_TELEPHONE_NUMBER_W                 PROP_TAG( PT_UNICODE,   0x3A1D)
#define PR_RADIO_TELEPHONE_NUMBER_A                 PROP_TAG( PT_STRING8,   0x3A1D)
#define PR_CAR_TELEPHONE_NUMBER                     PROP_TAG( PT_TSTRING,   0x3A1E)
#define PR_CAR_TELEPHONE_NUMBER_W                   PROP_TAG( PT_UNICODE,   0x3A1E)
#define PR_CAR_TELEPHONE_NUMBER_A                   PROP_TAG( PT_STRING8,   0x3A1E)
#define PR_OTHER_TELEPHONE_NUMBER                   PROP_TAG( PT_TSTRING,   0x3A1F)
#define PR_OTHER_TELEPHONE_NUMBER_W                 PROP_TAG( PT_UNICODE,   0x3A1F)
#define PR_OTHER_TELEPHONE_NUMBER_A                 PROP_TAG( PT_STRING8,   0x3A1F)
#define PR_TRANSMITABLE_DISPLAY_NAME                PROP_TAG( PT_TSTRING,   0x3A20)
#define PR_TRANSMITABLE_DISPLAY_NAME_W              PROP_TAG( PT_UNICODE,   0x3A20)
#define PR_TRANSMITABLE_DISPLAY_NAME_A              PROP_TAG( PT_STRING8,   0x3A20)
#define PR_PAGER_TELEPHONE_NUMBER                   PROP_TAG( PT_TSTRING,   0x3A21)
#define PR_PAGER_TELEPHONE_NUMBER_W                 PROP_TAG( PT_UNICODE,   0x3A21)
#define PR_PAGER_TELEPHONE_NUMBER_A                 PROP_TAG( PT_STRING8,   0x3A21)
#define PR_BEEPER_TELEPHONE_NUMBER                  PR_PAGER_TELEPHONE_NUMBER
#define PR_BEEPER_TELEPHONE_NUMBER_W                PR_PAGER_TELEPHONE_NUMBER_W
#define PR_BEEPER_TELEPHONE_NUMBER_A                PR_PAGER_TELEPHONE_NUMBER_A
#define PR_USER_CERTIFICATE                         PROP_TAG( PT_BINARY,    0x3A22)
#define PR_PRIMARY_FAX_NUMBER                       PROP_TAG( PT_TSTRING,   0x3A23)
#define PR_PRIMARY_FAX_NUMBER_W                     PROP_TAG( PT_UNICODE,   0x3A23)
#define PR_PRIMARY_FAX_NUMBER_A                     PROP_TAG( PT_STRING8,   0x3A23)
#define PR_BUSINESS_FAX_NUMBER                      PROP_TAG( PT_TSTRING,   0x3A24)
#define PR_BUSINESS_FAX_NUMBER_W                    PROP_TAG( PT_UNICODE,   0x3A24)
#define PR_BUSINESS_FAX_NUMBER_A                    PROP_TAG( PT_STRING8,   0x3A24)
#define PR_HOME_FAX_NUMBER                          PROP_TAG( PT_TSTRING,   0x3A25)
#define PR_HOME_FAX_NUMBER_W                        PROP_TAG( PT_UNICODE,   0x3A25)
#define PR_HOME_FAX_NUMBER_A                        PROP_TAG( PT_STRING8,   0x3A25)
#define PR_COUNTRY                                  PROP_TAG( PT_TSTRING,   0x3A26)
#define PR_COUNTRY_W                                PROP_TAG( PT_UNICODE,   0x3A26)
#define PR_COUNTRY_A                                PROP_TAG( PT_STRING8,   0x3A26)
#define PR_BUSINESS_ADDRESS_COUNTRY                 PR_COUNTRY
#define PR_BUSINESS_ADDRESS_COUNTRY_W               PR_COUNTRY_W
#define PR_BUSINESS_ADDRESS_COUNTRY_A               PR_COUNTRY_A

#define PR_LOCALITY                                 PROP_TAG( PT_TSTRING,   0x3A27)
#define PR_LOCALITY_W                               PROP_TAG( PT_UNICODE,   0x3A27)
#define PR_LOCALITY_A                               PROP_TAG( PT_STRING8,   0x3A27)
#define PR_BUSINESS_ADDRESS_CITY                    PR_LOCALITY
#define PR_BUSINESS_ADDRESS_CITY_W                  PR_LOCALITY_W
#define PR_BUSINESS_ADDRESS_CITY_A                  PR_LOCALITY_A

#define PR_STATE_OR_PROVINCE                        PROP_TAG( PT_TSTRING,   0x3A28)
#define PR_STATE_OR_PROVINCE_W                      PROP_TAG( PT_UNICODE,   0x3A28)
#define PR_STATE_OR_PROVINCE_A                      PROP_TAG( PT_STRING8,   0x3A28)
#define PR_BUSINESS_ADDRESS_STATE_OR_PROVINCE       PR_STATE_OR_PROVINCE
#define PR_BUSINESS_ADDRESS_STATE_OR_PROVINCE_W     PR_STATE_OR_PROVINCE_W
#define PR_BUSINESS_ADDRESS_STATE_OR_PROVINCE_A     PR_STATE_OR_PROVINCE_A

#define PR_STREET_ADDRESS                           PROP_TAG( PT_TSTRING,   0x3A29)
#define PR_STREET_ADDRESS_W                         PROP_TAG( PT_UNICODE,   0x3A29)
#define PR_STREET_ADDRESS_A                         PROP_TAG( PT_STRING8,   0x3A29)
#define PR_BUSINESS_ADDRESS_STREET                  PR_STREET_ADDRESS
#define PR_BUSINESS_ADDRESS_STREET_W                PR_STREET_ADDRESS_W
#define PR_BUSINESS_ADDRESS_STREET_A                PR_STREET_ADDRESS_A

#define PR_POSTAL_CODE                              PROP_TAG( PT_TSTRING,   0x3A2A)
#define PR_POSTAL_CODE_W                            PROP_TAG( PT_UNICODE,   0x3A2A)
#define PR_POSTAL_CODE_A                            PROP_TAG( PT_STRING8,   0x3A2A)
#define PR_BUSINESS_ADDRESS_POSTAL_CODE             PR_POSTAL_CODE
#define PR_BUSINESS_ADDRESS_POSTAL_CODE_W           PR_POSTAL_CODE_W
#define PR_BUSINESS_ADDRESS_POSTAL_CODE_A           PR_POSTAL_CODE_A

#define PR_POST_OFFICE_BOX                          PROP_TAG( PT_TSTRING,   0x3A2B)
#define PR_POST_OFFICE_BOX_W                        PROP_TAG( PT_UNICODE,   0x3A2B)
#define PR_POST_OFFICE_BOX_A                        PROP_TAG( PT_STRING8,   0x3A2B)
#define PR_BUSINESS_ADDRESS_POST_OFFICE_BOX         PR_POST_OFFICE_BOX
#define PR_BUSINESS_ADDRESS_POST_OFFICE_BOX_W       PR_POST_OFFICE_BOX_W
#define PR_BUSINESS_ADDRESS_POST_OFFICE_BOX_A       PR_POST_OFFICE_BOX_A

#define PR_TELEX_NUMBER                             PROP_TAG( PT_TSTRING,   0x3A2C)
#define PR_TELEX_NUMBER_W                           PROP_TAG( PT_UNICODE,   0x3A2C)
#define PR_TELEX_NUMBER_A                           PROP_TAG( PT_STRING8,   0x3A2C)
#define PR_ISDN_NUMBER                              PROP_TAG( PT_TSTRING,   0x3A2D)
#define PR_ISDN_NUMBER_W                            PROP_TAG( PT_UNICODE,   0x3A2D)
#define PR_ISDN_NUMBER_A                            PROP_TAG( PT_STRING8,   0x3A2D)
#define PR_ASSISTANT_TELEPHONE_NUMBER               PROP_TAG( PT_TSTRING,   0x3A2E)
#define PR_ASSISTANT_TELEPHONE_NUMBER_W             PROP_TAG( PT_UNICODE,   0x3A2E)
#define PR_ASSISTANT_TELEPHONE_NUMBER_A             PROP_TAG( PT_STRING8,   0x3A2E)
#define PR_HOME2_TELEPHONE_NUMBER                   PROP_TAG( PT_TSTRING,   0x3A2F)
#define PR_HOME2_TELEPHONE_NUMBER_W                 PROP_TAG( PT_UNICODE,   0x3A2F)
#define PR_HOME2_TELEPHONE_NUMBER_A                 PROP_TAG( PT_STRING8,   0x3A2F)
#define PR_ASSISTANT                                PROP_TAG( PT_TSTRING,   0x3A30)
#define PR_ASSISTANT_W                              PROP_TAG( PT_UNICODE,   0x3A30)
#define PR_ASSISTANT_A                              PROP_TAG( PT_STRING8,   0x3A30)
#define PR_SEND_RICH_INFO                           PROP_TAG( PT_BOOLEAN,   0x3A40)

#define PR_WEDDING_ANNIVERSARY                      PROP_TAG( PT_SYSTIME, 0x3A41)
#define PR_BIRTHDAY                                 PROP_TAG( PT_SYSTIME, 0x3A42)

#define PR_HOBBIES                                  PROP_TAG( PT_TSTRING, 0x3A43)
#define PR_HOBBIES_W                                PROP_TAG( PT_UNICODE, 0x3A43)
#define PR_HOBBIES_A                                PROP_TAG( PT_STRING8, 0x3A43)

#define PR_MIDDLE_NAME                              PROP_TAG( PT_TSTRING, 0x3A44)
#define PR_MIDDLE_NAME_W                            PROP_TAG( PT_UNICODE, 0x3A44)
#define PR_MIDDLE_NAME_A                            PROP_TAG( PT_STRING8, 0x3A44)

#define PR_DISPLAY_NAME_PREFIX                      PROP_TAG( PT_TSTRING, 0x3A45)
#define PR_DISPLAY_NAME_PREFIX_W                    PROP_TAG( PT_UNICODE, 0x3A45)
#define PR_DISPLAY_NAME_PREFIX_A                    PROP_TAG( PT_STRING8, 0x3A45)

#define PR_PROFESSION                               PROP_TAG( PT_TSTRING, 0x3A46)
#define PR_PROFESSION_W                             PROP_TAG( PT_UNICODE, 0x3A46)
#define PR_PROFESSION_A                             PROP_TAG( PT_STRING8, 0x3A46)

#define PR_PREFERRED_BY_NAME                        PROP_TAG( PT_TSTRING, 0x3A47)
#define PR_PREFERRED_BY_NAME_W                      PROP_TAG( PT_UNICODE, 0x3A47)
#define PR_PREFERRED_BY_NAME_A                      PROP_TAG( PT_STRING8, 0x3A47)

#define PR_SPOUSE_NAME                              PROP_TAG( PT_TSTRING, 0x3A48)
#define PR_SPOUSE_NAME_W                            PROP_TAG( PT_UNICODE, 0x3A48)
#define PR_SPOUSE_NAME_A                            PROP_TAG( PT_STRING8, 0x3A48)

#define PR_COMPUTER_NETWORK_NAME                    PROP_TAG( PT_TSTRING, 0x3A49)
#define PR_COMPUTER_NETWORK_NAME_W                  PROP_TAG( PT_UNICODE, 0x3A49)
#define PR_COMPUTER_NETWORK_NAME_A                  PROP_TAG( PT_STRING8, 0x3A49)

#define PR_CUSTOMER_ID                              PROP_TAG( PT_TSTRING, 0x3A4A)
#define PR_CUSTOMER_ID_W                            PROP_TAG( PT_UNICODE, 0x3A4A)
#define PR_CUSTOMER_ID_A                            PROP_TAG( PT_STRING8, 0x3A4A)

#define PR_TTYTDD_PHONE_NUMBER                      PROP_TAG( PT_TSTRING, 0x3A4B)
#define PR_TTYTDD_PHONE_NUMBER_W                    PROP_TAG( PT_UNICODE, 0x3A4B)
#define PR_TTYTDD_PHONE_NUMBER_A                    PROP_TAG( PT_STRING8, 0x3A4B)

#define PR_FTP_SITE                                 PROP_TAG( PT_TSTRING, 0x3A4C)
#define PR_FTP_SITE_W                               PROP_TAG( PT_UNICODE, 0x3A4C)
#define PR_FTP_SITE_A                               PROP_TAG( PT_STRING8, 0x3A4C)

#define PR_GENDER                                   PROP_TAG( PT_SHORT, 0x3A4D)

#define PR_MANAGER_NAME                             PROP_TAG( PT_TSTRING, 0x3A4E)
#define PR_MANAGER_NAME_W                           PROP_TAG( PT_UNICODE, 0x3A4E)
#define PR_MANAGER_NAME_A                           PROP_TAG( PT_STRING8, 0x3A4E)

#define PR_NICKNAME                                 PROP_TAG( PT_TSTRING, 0x3A4F)
#define PR_NICKNAME_W                               PROP_TAG( PT_UNICODE, 0x3A4F)
#define PR_NICKNAME_A                               PROP_TAG( PT_STRING8, 0x3A4F)

#define PR_PERSONAL_HOME_PAGE                       PROP_TAG( PT_TSTRING, 0x3A50)
#define PR_PERSONAL_HOME_PAGE_W                     PROP_TAG( PT_UNICODE, 0x3A50)
#define PR_PERSONAL_HOME_PAGE_A                     PROP_TAG( PT_STRING8, 0x3A50)


#define PR_BUSINESS_HOME_PAGE                       PROP_TAG( PT_TSTRING, 0x3A51)
#define PR_BUSINESS_HOME_PAGE_W                     PROP_TAG( PT_UNICODE, 0x3A51)
#define PR_BUSINESS_HOME_PAGE_A                     PROP_TAG( PT_STRING8, 0x3A51)

#define PR_CONTACT_VERSION                          PROP_TAG( PT_CLSID, 0x3A52)
#define PR_CONTACT_ENTRYIDS                         PROP_TAG( PT_MV_BINARY, 0x3A53)

#define PR_CONTACT_ADDRTYPES                        PROP_TAG( PT_MV_TSTRING, 0x3A54)
#define PR_CONTACT_ADDRTYPES_W                      PROP_TAG( PT_MV_UNICODE, 0x3A54)
#define PR_CONTACT_ADDRTYPES_A                      PROP_TAG( PT_MV_STRING8, 0x3A54)

#define PR_CONTACT_DEFAULT_ADDRESS_INDEX            PROP_TAG( PT_LONG, 0x3A55)

#define PR_CONTACT_EMAIL_ADDRESSES                  PROP_TAG( PT_MV_TSTRING, 0x3A56)
#define PR_CONTACT_EMAIL_ADDRESSES_W                PROP_TAG( PT_MV_UNICODE, 0x3A56)
#define PR_CONTACT_EMAIL_ADDRESSES_A                PROP_TAG( PT_MV_STRING8, 0x3A56)


#define PR_COMPANY_MAIN_PHONE_NUMBER                PROP_TAG( PT_TSTRING, 0x3A57)
#define PR_COMPANY_MAIN_PHONE_NUMBER_W              PROP_TAG( PT_UNICODE, 0x3A57)
#define PR_COMPANY_MAIN_PHONE_NUMBER_A              PROP_TAG( PT_STRING8, 0x3A57)

#define PR_CHILDRENS_NAMES                          PROP_TAG( PT_MV_TSTRING, 0x3A58)
#define PR_CHILDRENS_NAMES_W                        PROP_TAG( PT_MV_UNICODE, 0x3A58)
#define PR_CHILDRENS_NAMES_A                        PROP_TAG( PT_MV_STRING8, 0x3A58)

#define PR_HOME_ADDRESS_CITY                        PROP_TAG( PT_TSTRING, 0x3A59)
#define PR_HOME_ADDRESS_CITY_W                      PROP_TAG( PT_UNICODE, 0x3A59)
#define PR_HOME_ADDRESS_CITY_A                      PROP_TAG( PT_STRING8, 0x3A59)

#define PR_HOME_ADDRESS_COUNTRY                     PROP_TAG( PT_TSTRING, 0x3A5A)
#define PR_HOME_ADDRESS_COUNTRY_W                   PROP_TAG( PT_UNICODE, 0x3A5A)
#define PR_HOME_ADDRESS_COUNTRY_A                   PROP_TAG( PT_STRING8, 0x3A5A)

#define PR_HOME_ADDRESS_POSTAL_CODE                 PROP_TAG( PT_TSTRING, 0x3A5B)
#define PR_HOME_ADDRESS_POSTAL_CODE_W               PROP_TAG( PT_UNICODE, 0x3A5B)
#define PR_HOME_ADDRESS_POSTAL_CODE_A               PROP_TAG( PT_STRING8, 0x3A5B)

#define PR_HOME_ADDRESS_STATE_OR_PROVINCE           PROP_TAG( PT_TSTRING, 0x3A5C)
#define PR_HOME_ADDRESS_STATE_OR_PROVINCE_W         PROP_TAG( PT_UNICODE, 0x3A5C)
#define PR_HOME_ADDRESS_STATE_OR_PROVINCE_A         PROP_TAG( PT_STRING8, 0x3A5C)

#define PR_HOME_ADDRESS_STREET                      PROP_TAG( PT_TSTRING, 0x3A5D)
#define PR_HOME_ADDRESS_STREET_W                    PROP_TAG( PT_UNICODE, 0x3A5D)
#define PR_HOME_ADDRESS_STREET_A                    PROP_TAG( PT_STRING8, 0x3A5D)

#define PR_HOME_ADDRESS_POST_OFFICE_BOX             PROP_TAG( PT_TSTRING, 0x3A5E)
#define PR_HOME_ADDRESS_POST_OFFICE_BOX_W           PROP_TAG( PT_UNICODE, 0x3A5E)
#define PR_HOME_ADDRESS_POST_OFFICE_BOX_A           PROP_TAG( PT_STRING8, 0x3A5E)

#define PR_OTHER_ADDRESS_CITY                       PROP_TAG( PT_TSTRING, 0x3A5F)
#define PR_OTHER_ADDRESS_CITY_W                     PROP_TAG( PT_UNICODE, 0x3A5F)
#define PR_OTHER_ADDRESS_CITY_A                     PROP_TAG( PT_STRING8, 0x3A5F)

#define PR_OTHER_ADDRESS_COUNTRY                    PROP_TAG( PT_TSTRING, 0x3A60)
#define PR_OTHER_ADDRESS_COUNTRY_W                  PROP_TAG( PT_UNICODE, 0x3A60)
#define PR_OTHER_ADDRESS_COUNTRY_A                  PROP_TAG( PT_STRING8, 0x3A60)

#define PR_OTHER_ADDRESS_POSTAL_CODE                PROP_TAG( PT_TSTRING, 0x3A61)
#define PR_OTHER_ADDRESS_POSTAL_CODE_W              PROP_TAG( PT_UNICODE, 0x3A61)
#define PR_OTHER_ADDRESS_POSTAL_CODE_A              PROP_TAG( PT_STRING8, 0x3A61)

#define PR_OTHER_ADDRESS_STATE_OR_PROVINCE          PROP_TAG( PT_TSTRING, 0x3A62)
#define PR_OTHER_ADDRESS_STATE_OR_PROVINCE_W        PROP_TAG( PT_UNICODE, 0x3A62)
#define PR_OTHER_ADDRESS_STATE_OR_PROVINCE_A        PROP_TAG( PT_STRING8, 0x3A62)

#define PR_OTHER_ADDRESS_STREET                     PROP_TAG( PT_TSTRING, 0x3A63)
#define PR_OTHER_ADDRESS_STREET_W                   PROP_TAG( PT_UNICODE, 0x3A63)
#define PR_OTHER_ADDRESS_STREET_A                   PROP_TAG( PT_STRING8, 0x3A63)

#define PR_OTHER_ADDRESS_POST_OFFICE_BOX            PROP_TAG( PT_TSTRING, 0x3A64)
#define PR_OTHER_ADDRESS_POST_OFFICE_BOX_W          PROP_TAG( PT_UNICODE, 0x3A64)
#define PR_OTHER_ADDRESS_POST_OFFICE_BOX_A          PROP_TAG( PT_STRING8, 0x3A64)

/*
 *  Profile section properties
 */
#define PR_STORE_PROVIDERS                          PROP_TAG( PT_BINARY,    0x3D00)
#define PR_AB_PROVIDERS                             PROP_TAG( PT_BINARY,    0x3D01)
#define PR_TRANSPORT_PROVIDERS                      PROP_TAG( PT_BINARY,    0x3D02)

#define PR_DEFAULT_PROFILE                          PROP_TAG( PT_BOOLEAN,   0x3D04)
#define PR_AB_SEARCH_PATH                           PROP_TAG( PT_MV_BINARY, 0x3D05)
#define PR_AB_DEFAULT_DIR                           PROP_TAG( PT_BINARY,    0x3D06)
#define PR_AB_DEFAULT_PAB                           PROP_TAG( PT_BINARY,    0x3D07)

#define PR_FILTERING_HOOKS                          PROP_TAG( PT_BINARY,    0x3D08)
#define PR_SERVICE_NAME                             PROP_TAG( PT_TSTRING,   0x3D09)
#define PR_SERVICE_NAME_W                           PROP_TAG( PT_UNICODE,   0x3D09)
#define PR_SERVICE_NAME_A                           PROP_TAG( PT_STRING8,   0x3D09)
#define PR_SERVICE_DLL_NAME                         PROP_TAG( PT_TSTRING,   0x3D0A)
#define PR_SERVICE_DLL_NAME_W                       PROP_TAG( PT_UNICODE,   0x3D0A)
#define PR_SERVICE_DLL_NAME_A                       PROP_TAG( PT_STRING8,   0x3D0A)
#define PR_SERVICE_ENTRY_NAME                       PROP_TAG( PT_STRING8,   0x3D0B)
#define PR_SERVICE_UID                              PROP_TAG( PT_BINARY,    0x3D0C)
#define PR_SERVICE_EXTRA_UIDS                       PROP_TAG( PT_BINARY,    0x3D0D)
#define PR_SERVICES                                 PROP_TAG( PT_BINARY,    0x3D0E)
#define PR_SERVICE_SUPPORT_FILES                    PROP_TAG( PT_MV_TSTRING, 0x3D0F)
#define PR_SERVICE_SUPPORT_FILES_W                  PROP_TAG( PT_MV_UNICODE, 0x3D0F)
#define PR_SERVICE_SUPPORT_FILES_A                  PROP_TAG( PT_MV_STRING8, 0x3D0F)
#define PR_SERVICE_DELETE_FILES                     PROP_TAG( PT_MV_TSTRING, 0x3D10)
#define PR_SERVICE_DELETE_FILES_W                   PROP_TAG( PT_MV_UNICODE, 0x3D10)
#define PR_SERVICE_DELETE_FILES_A                   PROP_TAG( PT_MV_STRING8, 0x3D10)
#define PR_AB_SEARCH_PATH_UPDATE                    PROP_TAG( PT_BINARY,     0x3D11)
#define PR_PROFILE_NAME                             PROP_TAG( PT_TSTRING,   0x3D12)
#define PR_PROFILE_NAME_A                           PROP_TAG( PT_STRING8,   0x3D12)
#define PR_PROFILE_NAME_W                           PROP_TAG( PT_UNICODE,   0x3D12)

/*
 *  Status object properties
 */
#define PR_IDENTITY_DISPLAY                         PROP_TAG( PT_TSTRING,   0x3E00)
#define PR_IDENTITY_DISPLAY_W                       PROP_TAG( PT_UNICODE,   0x3E00)
#define PR_IDENTITY_DISPLAY_A                       PROP_TAG( PT_STRING8,   0x3E00)
#define PR_IDENTITY_ENTRYID                         PROP_TAG( PT_BINARY,    0x3E01)
#define PR_RESOURCE_METHODS                         PROP_TAG( PT_LONG,      0x3E02)
#define PR_RESOURCE_TYPE                            PROP_TAG( PT_LONG,      0x3E03)
#define PR_STATUS_CODE                              PROP_TAG( PT_LONG,      0x3E04)
#define PR_IDENTITY_SEARCH_KEY                      PROP_TAG( PT_BINARY,    0x3E05)
#define PR_OWN_STORE_ENTRYID                        PROP_TAG( PT_BINARY,    0x3E06)
#define PR_RESOURCE_PATH                            PROP_TAG( PT_TSTRING,   0x3E07)
#define PR_RESOURCE_PATH_W                          PROP_TAG( PT_UNICODE,   0x3E07)
#define PR_RESOURCE_PATH_A                          PROP_TAG( PT_STRING8,   0x3E07)
#define PR_STATUS_STRING                            PROP_TAG( PT_TSTRING,   0x3E08)
#define PR_STATUS_STRING_W                          PROP_TAG( PT_UNICODE,   0x3E08)
#define PR_STATUS_STRING_A                          PROP_TAG( PT_STRING8,   0x3E08)
#define PR_X400_DEFERRED_DELIVERY_CANCEL            PROP_TAG( PT_BOOLEAN,   0x3E09)
#define PR_HEADER_FOLDER_ENTRYID                    PROP_TAG( PT_BINARY,    0x3E0A)
#define PR_REMOTE_PROGRESS                          PROP_TAG( PT_LONG,      0x3E0B)
#define PR_REMOTE_PROGRESS_TEXT                     PROP_TAG( PT_TSTRING,   0x3E0C)
#define PR_REMOTE_PROGRESS_TEXT_W                   PROP_TAG( PT_UNICODE,   0x3E0C)
#define PR_REMOTE_PROGRESS_TEXT_A                   PROP_TAG( PT_STRING8,   0x3E0C)
#define PR_REMOTE_VALIDATE_OK                       PROP_TAG( PT_BOOLEAN,   0x3E0D)

/*
 * Display table properties
 */
#define PR_CONTROL_FLAGS                            PROP_TAG( PT_LONG,      0x3F00)
#define PR_CONTROL_STRUCTURE                        PROP_TAG( PT_BINARY,    0x3F01)
#define PR_CONTROL_TYPE                             PROP_TAG( PT_LONG,      0x3F02)
#define PR_DELTAX                                   PROP_TAG( PT_LONG,      0x3F03)
#define PR_DELTAY                                   PROP_TAG( PT_LONG,      0x3F04)
#define PR_XPOS                                     PROP_TAG( PT_LONG,      0x3F05)
#define PR_YPOS                                     PROP_TAG( PT_LONG,      0x3F06)
#define PR_CONTROL_ID                               PROP_TAG( PT_BINARY,    0x3F07)
#define PR_INITIAL_DETAILS_PANE                     PROP_TAG( PT_LONG,      0x3F08)

/*
 * Secure property id range
 */
#define PROP_ID_SECURE_MIN                          0x67F0
#define PROP_ID_SECURE_MAX                          0x67FF

#endif  /* MAPITAGS_H */
