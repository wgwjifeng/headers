typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

typedef struct _HEAP_VS_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 CommitBitmap;
  /* 0x0018 */ struct _RTL_SRWLOCK CommitLock;
  /* 0x0020 */ unsigned short Size;
  /* 0x0022 */ unsigned short Signature;
  /* 0x0024 */ long __PADDING__[1];
} HEAP_VS_SUBSEGMENT, *PHEAP_VS_SUBSEGMENT; /* size: 0x0028 */

