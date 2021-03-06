typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DIRTY_PAGE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 DirtyPages;
  /* 0x0008 */ unsigned __int64 DirtyPagesLastScan;
  /* 0x0010 */ unsigned long DirtyPagesScheduledLastScan;
  /* 0x0014 */ long __PADDING__[1];
} DIRTY_PAGE_STATISTICS, *PDIRTY_PAGE_STATISTICS; /* size: 0x0018 */

typedef struct _DIRTY_PAGE_THRESHOLDS
{
  /* 0x0000 */ unsigned __int64 DirtyPageThreshold;
  /* 0x0008 */ unsigned __int64 DirtyPageThresholdTop;
  /* 0x0010 */ unsigned __int64 DirtyPageThresholdBottom;
  /* 0x0018 */ unsigned long DirtyPageTarget;
  /* 0x0020 */ unsigned __int64 AggregateAvailablePages;
  /* 0x0028 */ unsigned __int64 AggregateDirtyPages;
  /* 0x0030 */ unsigned long AvailableHistory;
  /* 0x0034 */ long __PADDING__[1];
} DIRTY_PAGE_THRESHOLDS, *PDIRTY_PAGE_THRESHOLDS; /* size: 0x0038 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_4
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LOG_HANDLE_CONTEXT
{
  /* 0x0000 */ void* LogHandle;
  /* 0x0008 */ void* FlushToLsnRoutine /* function */;
  /* 0x0010 */ void* QueryLogHandleInfoRoutine /* function */;
  /* 0x0018 */ struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;
  /* 0x0030 */ struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;
  /* 0x0068 */ unsigned long AdditionalPagesToWrite;
  /* 0x006c */ unsigned long CcLWScanDPThreshold;
  /* 0x0070 */ union _LARGE_INTEGER LargestLsnForCurrentLWScan;
  /* 0x0078 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0080 */ unsigned __int64 LargestLsnFileObjectKey;
  /* 0x0088 */ union _LARGE_INTEGER LastLWTimeStamp;
  /* 0x0090 */ unsigned long Flags;
  /* 0x0094 */ long __PADDING__[1];
} LOG_HANDLE_CONTEXT, *PLOG_HANDLE_CONTEXT; /* size: 0x0098 */

typedef struct _VOLUME_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteCode;
  /* 0x0004 */ unsigned long UseCount;
  /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _LIST_ENTRY VolumeCacheMapLinks;
  /* 0x0020 */ unsigned __int64 DirtyPages;
  /* 0x0028 */ struct _LOG_HANDLE_CONTEXT LogHandleContext;
  /* 0x00c0 */ unsigned long Flags;
  /* 0x00c4 */ unsigned long PagesQueuedToDisk;
  /* 0x00c8 */ unsigned long LoggedPagesQueuedToDisk;
  /* 0x00cc */ long __PADDING__[1];
} VOLUME_CACHE_MAP, *PVOLUME_CACHE_MAP; /* size: 0x00d0 */

