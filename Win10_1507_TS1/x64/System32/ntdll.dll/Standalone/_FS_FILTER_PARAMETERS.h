typedef enum _FS_FILTER_SECTION_SYNC_TYPE
{
  SyncTypeOther = 0,
  SyncTypeCreateSection = 1,
} FS_FILTER_SECTION_SYNC_TYPE, *PFS_FILTER_SECTION_SYNC_TYPE;

typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
{
  NotifyTypeCreate = 0,
  NotifyTypeRetired = 1,
} FS_FILTER_STREAM_FO_NOTIFICATION_TYPE, *PFS_FILTER_STREAM_FO_NOTIFICATION_TYPE;

typedef union _FS_FILTER_PARAMETERS
{
  union
  {
    struct // _TAG_UNNAMED_73
    {
      /* 0x0000 */ union _LARGE_INTEGER* EndingOffset;
      /* 0x0008 */ struct _ERESOURCE** ResourceToRelease;
    } /* size: 0x0010 */ AcquireForModifiedPageWriter;
    struct // _TAG_UNNAMED_74
    {
      /* 0x0000 */ struct _ERESOURCE* ResourceToRelease;
    } /* size: 0x0008 */ ReleaseForModifiedPageWriter;
    struct // _TAG_UNNAMED_75
    {
      /* 0x0000 */ enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;
      /* 0x0004 */ unsigned long PageProtection;
      /* 0x0008 */ struct _FS_FILTER_SECTION_SYNC_OUTPUT* OutputInformation;
    } /* size: 0x0010 */ AcquireForSectionSynchronization;
    struct // _TAG_UNNAMED_76
    {
      /* 0x0000 */ enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;
      /* 0x0008 */ unsigned char SafeToRecurse;
      /* 0x0009 */ char __PADDING__[7];
    } /* size: 0x0010 */ NotifyStreamFileObject;
    struct // _TAG_UNNAMED_77
    {
      /* 0x0000 */ void* Argument1;
      /* 0x0008 */ void* Argument2;
      /* 0x0010 */ void* Argument3;
      /* 0x0018 */ void* Argument4;
      /* 0x0020 */ void* Argument5;
    } /* size: 0x0028 */ Others;
  }; /* size: 0x0028 */
} FS_FILTER_PARAMETERS, *PFS_FILTER_PARAMETERS; /* size: 0x0028 */

