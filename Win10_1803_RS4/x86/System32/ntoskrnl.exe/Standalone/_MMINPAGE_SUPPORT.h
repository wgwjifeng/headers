typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      union
      {
        /* 0x0001 */ unsigned char ThreadSpecControl;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char SpecControlIbrs : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char SpecControlStibp : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char SpecControlReserved : 6; /* bit position: 2 */
          }; /* bitfield */
          union
          {
            /* 0x0002 */ unsigned char ThreadControlFlags;
            struct
            {
              struct /* bitfield */
              {
                /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
                /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
                /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
                /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
                /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
                /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
                /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
                /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
              }; /* bitfield */
              /* 0x0003 */ unsigned char DebugActive;
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _KAPC_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY ApcListHead[2];
  /* 0x0010 */ struct _KPROCESS* Process;
  union
  {
    /* 0x0014 */ unsigned char InProgressFlags;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned char KernelApcInProgress : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned char SpecialApcInProgress : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0015 */ unsigned char KernelApcPending;
  /* 0x0016 */ unsigned char UserApcPending;
  /* 0x0017 */ char __PADDING__[1];
} KAPC_STATE, *PKAPC_STATE; /* size: 0x0018 */

typedef struct _MI_STORE_INPAGE_COMPLETE_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned long EntireFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long StoreFault : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LowResourceFailure : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Spare : 14; /* bit position: 2 */
      /* 0x0000 */ unsigned long RemainingPageCount : 16; /* bit position: 16 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MI_STORE_INPAGE_COMPLETE_FLAGS, *PMI_STORE_INPAGE_COMPLETE_FLAGS; /* size: 0x0004 */

typedef struct _MI_HARD_FAULT_STATE
{
  /* 0x0000 */ struct _MMPFN* SwapPfn;
  /* 0x0004 */ struct _MI_STORE_INPAGE_COMPLETE_FLAGS StoreFlags;
} MI_HARD_FAULT_STATE, *PMI_HARD_FAULT_STATE; /* size: 0x0008 */

typedef struct _MMPTE_HIGHLOW
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ unsigned long HighPart;
} MMPTE_HIGHLOW, *PMMPTE_HIGHLOW; /* size: 0x0008 */

typedef struct _HARDWARE_PTE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 reserved0 : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 reserved1 : 25; /* bit position: 38 */
      /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
    }; /* bitfield */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} HARDWARE_PTE, *PHARDWARE_PTE; /* size: 0x0008 */

typedef struct _MMPTE_HARDWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Dirty1 : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Owner : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 WriteThrough : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 CacheDisable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Accessed : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Dirty : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 LargePage : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned __int64 Global : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 CopyOnWrite : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Unused : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 reserved1 : 25; /* bit position: 38 */
    /* 0x0000 */ unsigned __int64 NoExecute : 1; /* bit position: 63 */
  }; /* bitfield */
} MMPTE_HARDWARE, *PMMPTE_HARDWARE; /* size: 0x0008 */

typedef struct _MMPTE_PROTOTYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 DemandFillProto : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 HiberVerifyConverted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Unused1 : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned __int64 ReadOnly : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 Combined : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 ProtoAddress : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_PROTOTYPE, *PMMPTE_PROTOTYPE; /* size: 0x0008 */

typedef struct _MMPTE_SOFTWARE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFileReserved : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 PageFileAllocated : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 Unused : 18; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 PageFileHigh : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SOFTWARE, *PMMPTE_SOFTWARE; /* size: 0x0008 */

typedef struct _MMPTE_TIMESTAMP
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PageFileLow : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 Unused : 20; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 GlobalTimeStamp : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_TIMESTAMP, *PMMPTE_TIMESTAMP; /* size: 0x0008 */

typedef struct _MMPTE_TRANSITION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Write : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 IoTracker : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Transition : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 PageFrameNumber : 26; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 Unused : 26; /* bit position: 38 */
  }; /* bitfield */
} MMPTE_TRANSITION, *PMMPTE_TRANSITION; /* size: 0x0008 */

typedef struct _MMPTE_SUBSECTION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Unused0 : 4; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 5 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Unused1 : 21; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 SubsectionAddress : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_SUBSECTION, *PMMPTE_SUBSECTION; /* size: 0x0008 */

typedef struct _MMPTE_LIST
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 OneEntry : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned __int64 filler0 : 8; /* bit position: 2 */
    /* 0x0000 */ unsigned __int64 Prototype : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 filler1 : 21; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 NextEntry : 32; /* bit position: 32 */
  }; /* bitfield */
} MMPTE_LIST, *PMMPTE_LIST; /* size: 0x0008 */

typedef struct _MMPTE
{
  union // _TAG_UNNAMED_114
  {
    union
    {
      /* 0x0000 */ unsigned __int64 Long;
      /* 0x0000 */ volatile unsigned __int64 VolatileLong;
      /* 0x0000 */ struct _MMPTE_HIGHLOW HighLow;
      /* 0x0000 */ struct _HARDWARE_PTE Flush;
      /* 0x0000 */ struct _MMPTE_HARDWARE Hard;
      /* 0x0000 */ struct _MMPTE_PROTOTYPE Proto;
      /* 0x0000 */ struct _MMPTE_SOFTWARE Soft;
      /* 0x0000 */ struct _MMPTE_TIMESTAMP TimeStamp;
      /* 0x0000 */ struct _MMPTE_TRANSITION Trans;
      /* 0x0000 */ struct _MMPTE_SUBSECTION Subsect;
      /* 0x0000 */ struct _MMPTE_LIST List;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} MMPTE, *PMMPTE; /* size: 0x0008 */

typedef struct _MMINPAGE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char InjectRetry : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char GetExtents : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char CrossThreadPadding : 6; /* bit position: 2 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char PrefetchSystemVmType : 2; /* bit position: 0 */
    /* 0x0001 */ unsigned char VaPrefetchReadBlock : 1; /* bit position: 2 */
    /* 0x0001 */ unsigned char CollidedFlowThrough : 1; /* bit position: 3 */
    /* 0x0001 */ unsigned char ForceCollisions : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char InPageExpanded : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char IssuedAtLowPriority : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char FaultFromStore : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned char PagePriority : 3; /* bit position: 0 */
    /* 0x0002 */ unsigned char PerformRelocations : 1; /* bit position: 3 */
    /* 0x0002 */ unsigned char ClusteredPagePriority : 3; /* bit position: 4 */
    /* 0x0002 */ unsigned char MakeClusterValid : 1; /* bit position: 7 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char ZeroLastPage : 1; /* bit position: 0 */
    /* 0x0003 */ unsigned char UserFault : 1; /* bit position: 1 */
    /* 0x0003 */ unsigned char StandbyProtectionNeeded : 1; /* bit position: 2 */
    /* 0x0003 */ unsigned char PteChanged : 1; /* bit position: 3 */
    /* 0x0003 */ unsigned char PageFileFault : 1; /* bit position: 4 */
    /* 0x0003 */ unsigned char PageFilePageHashActive : 1; /* bit position: 5 */
    /* 0x0003 */ unsigned char CoalescedIo : 1; /* bit position: 6 */
    /* 0x0003 */ unsigned char VmLockNotNeeded : 1; /* bit position: 7 */
  }; /* bitfield */
} MMINPAGE_FLAGS, *PMMINPAGE_FLAGS; /* size: 0x0004 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0004 */ short Size;
  /* 0x0006 */ short MdlFlags;
  /* 0x0008 */ struct _EPROCESS* Process;
  /* 0x000c */ void* MappedSystemVa;
  /* 0x0010 */ void* StartVa;
  /* 0x0014 */ unsigned long ByteCount;
  /* 0x0018 */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x001c */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _MMINPAGE_SUPPORT_FLOW_THROUGH
{
  /* 0x0000 */ unsigned long Page[1];
  /* 0x0004 */ struct _MMINPAGE_SUPPORT* InitialInPageSupport;
  /* 0x0008 */ struct _MMPAGING_FILE* PagingFile;
  /* 0x000c */ unsigned long PageFileOffset;
  /* 0x0010 */ struct _RTL_BALANCED_NODE Node;
} MMINPAGE_SUPPORT_FLOW_THROUGH, *PMMINPAGE_SUPPORT_FLOW_THROUGH; /* size: 0x001c */

typedef struct _MMINPAGE_SUPPORT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ struct _KEVENT Event;
  /* 0x0020 */ struct _KEVENT CollidedEvent;
  /* 0x0030 */ struct _IO_STATUS_BLOCK IoStatus;
  /* 0x0038 */ union _LARGE_INTEGER ReadOffset;
  union // _TAG_UNNAMED_180
  {
    union
    {
      /* 0x0040 */ struct _KAPC_STATE ApcState;
      /* 0x0040 */ struct _MI_HARD_FAULT_STATE HardFaultState;
    }; /* size: 0x0018 */
  } /* size: 0x0018 */ u2;
  /* 0x0058 */ struct _ETHREAD* Thread;
  /* 0x005c */ struct _MMPFN* LockedProtoPfn;
  /* 0x0060 */ struct _MMPTE PteContents;
  /* 0x0068 */ volatile long WaitCount;
  /* 0x006c */ unsigned long ByteCount;
  union // _TAG_UNNAMED_181
  {
    union
    {
      /* 0x0070 */ unsigned long ImagePteOffset;
      /* 0x0070 */ unsigned long TossPage;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u3;
  union // _TAG_UNNAMED_182
  {
    union
    {
      /* 0x0074 */ struct _MMINPAGE_FLAGS e1;
      /* 0x0074 */ unsigned long LongFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0078 */ struct _FILE_OBJECT* FilePointer;
  union
  {
    /* 0x007c */ struct _CONTROL_AREA* ControlArea;
    /* 0x007c */ struct _SUBSECTION* Subsection;
  }; /* size: 0x0004 */
  /* 0x0080 */ void* Autoboost;
  /* 0x0084 */ void* FaultingAddress;
  /* 0x0088 */ struct _MMPTE* PointerPte;
  /* 0x008c */ struct _MMPTE* BasePte;
  /* 0x0090 */ struct _MMPFN* Pfn;
  /* 0x0094 */ struct _MDL* PrefetchMdl;
  /* 0x0098 */ volatile __int64 ProbeCount;
  /* 0x00a0 */ struct _MDL Mdl;
  union
  {
    /* 0x00bc */ unsigned long Page[16];
    struct
    {
      /* 0x00bc */ struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough;
      /* 0x00d8 */ long __PADDING__[10];
    }; /* size: 0x0044 */
  }; /* size: 0x0044 */
} MMINPAGE_SUPPORT, *PMMINPAGE_SUPPORT; /* size: 0x0100 */

