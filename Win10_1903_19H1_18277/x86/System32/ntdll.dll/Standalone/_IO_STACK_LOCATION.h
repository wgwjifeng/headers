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

typedef enum _FILE_INFORMATION_CLASS
{
  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileIdBothDirectoryInformation = 37,
  FileIdFullDirectoryInformation = 38,
  FileValidDataLengthInformation = 39,
  FileShortNameInformation = 40,
  FileIoCompletionNotificationInformation = 41,
  FileIoStatusBlockRangeInformation = 42,
  FileIoPriorityHintInformation = 43,
  FileSfioReserveInformation = 44,
  FileSfioVolumeInformation = 45,
  FileHardLinkInformation = 46,
  FileProcessIdsUsingFileInformation = 47,
  FileNormalizedNameInformation = 48,
  FileNetworkPhysicalNameInformation = 49,
  FileIdGlobalTxDirectoryInformation = 50,
  FileIsRemoteDeviceInformation = 51,
  FileUnusedInformation = 52,
  FileNumaNodeInformation = 53,
  FileStandardLinkInformation = 54,
  FileRemoteProtocolInformation = 55,
  FileRenameInformationBypassAccessCheck = 56,
  FileLinkInformationBypassAccessCheck = 57,
  FileVolumeNameInformation = 58,
  FileIdInformation = 59,
  FileIdExtdDirectoryInformation = 60,
  FileReplaceCompletionInformation = 61,
  FileHardLinkFullIdInformation = 62,
  FileIdExtdBothDirectoryInformation = 63,
  FileDispositionInformationEx = 64,
  FileRenameInformationEx = 65,
  FileRenameInformationExBypassAccessCheck = 66,
  FileDesiredStorageClassInformation = 67,
  FileStatInformation = 68,
  FileMemoryPartitionInformation = 69,
  FileStatLxInformation = 70,
  FileCaseSensitiveInformation = 71,
  FileLinkInformationEx = 72,
  FileLinkInformationExBypassAccessCheck = 73,
  FileStorageReserveIdInformation = 74,
  FileCaseSensitiveInformationForceAccessCheck = 75,
  FileMaximumInformation = 76,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
{
  DirectoryNotifyInformation = 1,
  DirectoryNotifyExtendedInformation = 2,
} DIRECTORY_NOTIFY_INFORMATION_CLASS, *PDIRECTORY_NOTIFY_INFORMATION_CLASS;

typedef enum _FSINFOCLASS
{
  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsDriverPathInformation = 9,
  FileFsVolumeFlagsInformation = 10,
  FileFsSectorSizeInformation = 11,
  FileFsDataCopyInformation = 12,
  FileFsMetadataSizeInformation = 13,
  FileFsFullSizeInformationEx = 14,
  FileFsMaximumInformation = 15,
} FSINFOCLASS, *PFSINFOCLASS;

typedef enum _DEVICE_RELATION_TYPE
{
  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5,
  TransportRelations = 6,
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;

typedef enum _TAG_UNNAMED_59
{
  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4,
  BusQueryContainerID = 5,
} TAG_UNNAMED_59, *PTAG_UNNAMED_59;

typedef enum _TAG_UNNAMED_60
{
  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1,
} TAG_UNNAMED_60, *PTAG_UNNAMED_60;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3,
  DeviceUsageTypeBoot = 4,
  DeviceUsageTypePostDisplay = 5,
} DEVICE_USAGE_NOTIFICATION_TYPE, *PDEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum _SYSTEM_POWER_STATE
{
  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7,
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;

typedef struct _SYSTEM_POWER_STATE_CONTEXT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long TargetSystemState : 4; /* bit position: 8 */
      /* 0x0000 */ unsigned long EffectiveSystemState : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned long CurrentSystemState : 4; /* bit position: 16 */
      /* 0x0000 */ unsigned long IgnoreHibernationPath : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long PseudoTransition : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long KernelSoftReboot : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned long DirectedDripsTransition : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long Reserved2 : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ContextAsUlong;
  }; /* size: 0x0004 */
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT; /* size: 0x0004 */

typedef enum _POWER_STATE_TYPE
{
  SystemPowerState = 0,
  DevicePowerState = 1,
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef union _POWER_STATE
{
  union
  {
    /* 0x0000 */ enum _SYSTEM_POWER_STATE SystemState;
    /* 0x0000 */ enum _DEVICE_POWER_STATE DeviceState;
  }; /* size: 0x0004 */
} POWER_STATE, *PPOWER_STATE; /* size: 0x0004 */

typedef enum _TAG_UNNAMED_61
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8,
} TAG_UNNAMED_61, *PTAG_UNNAMED_61;

typedef struct _IO_STACK_LOCATION
{
  /* 0x0000 */ unsigned char MajorFunction;
  /* 0x0001 */ unsigned char MinorFunction;
  /* 0x0002 */ unsigned char Flags;
  /* 0x0003 */ unsigned char Control;
  union // _TAG_UNNAMED_62
  {
    union
    {
      struct // _TAG_UNNAMED_63
      {
        /* 0x0004 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0008 */ unsigned long Options;
        /* 0x000c */ unsigned short FileAttributes;
        /* 0x000e */ unsigned short ShareAccess;
        /* 0x0010 */ unsigned long EaLength;
      } /* size: 0x0010 */ Create;
      struct // _TAG_UNNAMED_64
      {
        /* 0x0004 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0008 */ unsigned long Options;
        /* 0x000c */ unsigned short Reserved;
        /* 0x000e */ unsigned short ShareAccess;
        /* 0x0010 */ struct _NAMED_PIPE_CREATE_PARAMETERS* Parameters;
      } /* size: 0x0010 */ CreatePipe;
      struct // _TAG_UNNAMED_65
      {
        /* 0x0004 */ struct _IO_SECURITY_CONTEXT* SecurityContext;
        /* 0x0008 */ unsigned long Options;
        /* 0x000c */ unsigned short Reserved;
        /* 0x000e */ unsigned short ShareAccess;
        /* 0x0010 */ struct _MAILSLOT_CREATE_PARAMETERS* Parameters;
      } /* size: 0x0010 */ CreateMailslot;
      struct // _TAG_UNNAMED_66
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ Read;
      struct // _TAG_UNNAMED_66
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ Write;
      struct // _TAG_UNNAMED_67
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ struct _UNICODE_STRING* FileName;
        /* 0x000c */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x0010 */ unsigned long FileIndex;
      } /* size: 0x0010 */ QueryDirectory;
      struct // _TAG_UNNAMED_68
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long CompletionFilter;
      } /* size: 0x0008 */ NotifyDirectory;
      struct // _TAG_UNNAMED_69
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ unsigned long CompletionFilter;
        /* 0x000c */ enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
      } /* size: 0x000c */ NotifyDirectoryEx;
      struct // _TAG_UNNAMED_70
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
      } /* size: 0x0008 */ QueryFile;
      struct // _TAG_UNNAMED_71
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FILE_INFORMATION_CLASS FileInformationClass;
        /* 0x000c */ struct _FILE_OBJECT* FileObject;
        union
        {
          struct
          {
            /* 0x0010 */ unsigned char ReplaceIfExists;
            /* 0x0011 */ unsigned char AdvanceOnly;
          }; /* size: 0x0002 */
          /* 0x0010 */ unsigned long ClusterCount;
          /* 0x0010 */ void* DeleteHandle;
        }; /* size: 0x0004 */
      } /* size: 0x0010 */ SetFile;
      struct // _TAG_UNNAMED_72
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ void* EaList;
        /* 0x000c */ unsigned long EaListLength;
        /* 0x0010 */ unsigned long EaIndex;
      } /* size: 0x0010 */ QueryEa;
      struct // _TAG_UNNAMED_73
      {
        /* 0x0004 */ unsigned long Length;
      } /* size: 0x0004 */ SetEa;
      struct // _TAG_UNNAMED_74
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FSINFOCLASS FsInformationClass;
      } /* size: 0x0008 */ QueryVolume;
      struct // _TAG_UNNAMED_74
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ enum _FSINFOCLASS FsInformationClass;
      } /* size: 0x0008 */ SetVolume;
      struct // _TAG_UNNAMED_75
      {
        /* 0x0004 */ unsigned long OutputBufferLength;
        /* 0x0008 */ unsigned long InputBufferLength;
        /* 0x000c */ unsigned long FsControlCode;
        /* 0x0010 */ void* Type3InputBuffer;
      } /* size: 0x0010 */ FileSystemControl;
      struct // _TAG_UNNAMED_76
      {
        /* 0x0004 */ union _LARGE_INTEGER* Length;
        /* 0x0008 */ unsigned long Key;
        /* 0x000c */ union _LARGE_INTEGER ByteOffset;
      } /* size: 0x0010 */ LockControl;
      struct // _TAG_UNNAMED_77
      {
        /* 0x0004 */ unsigned long OutputBufferLength;
        /* 0x0008 */ unsigned long InputBufferLength;
        /* 0x000c */ unsigned long IoControlCode;
        /* 0x0010 */ void* Type3InputBuffer;
      } /* size: 0x0010 */ DeviceIoControl;
      struct // _TAG_UNNAMED_78
      {
        /* 0x0004 */ unsigned long SecurityInformation;
        /* 0x0008 */ unsigned long Length;
      } /* size: 0x0008 */ QuerySecurity;
      struct // _TAG_UNNAMED_79
      {
        /* 0x0004 */ unsigned long SecurityInformation;
        /* 0x0008 */ void* SecurityDescriptor;
      } /* size: 0x0008 */ SetSecurity;
      struct // _TAG_UNNAMED_80
      {
        /* 0x0004 */ struct _VPB* Vpb;
        /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0008 */ MountVolume;
      struct // _TAG_UNNAMED_80
      {
        /* 0x0004 */ struct _VPB* Vpb;
        /* 0x0008 */ struct _DEVICE_OBJECT* DeviceObject;
      } /* size: 0x0008 */ VerifyVolume;
      struct // _TAG_UNNAMED_81
      {
        /* 0x0004 */ struct _SCSI_REQUEST_BLOCK* Srb;
      } /* size: 0x0004 */ Scsi;
      struct // _TAG_UNNAMED_82
      {
        /* 0x0004 */ unsigned long Length;
        /* 0x0008 */ void* StartSid;
        /* 0x000c */ struct _FILE_GET_QUOTA_INFORMATION* SidList;
        /* 0x0010 */ unsigned long SidListLength;
      } /* size: 0x0010 */ QueryQuota;
      struct // _TAG_UNNAMED_73
      {
        /* 0x0004 */ unsigned long Length;
      } /* size: 0x0004 */ SetQuota;
      struct // _TAG_UNNAMED_83
      {
        /* 0x0004 */ enum _DEVICE_RELATION_TYPE Type;
      } /* size: 0x0004 */ QueryDeviceRelations;
      struct // _TAG_UNNAMED_84
      {
        /* 0x0004 */ const struct _GUID* InterfaceType;
        /* 0x0008 */ unsigned short Size;
        /* 0x000a */ unsigned short Version;
        /* 0x000c */ struct _INTERFACE* Interface;
        /* 0x0010 */ void* InterfaceSpecificData;
      } /* size: 0x0010 */ QueryInterface;
      struct // _TAG_UNNAMED_85
      {
        /* 0x0004 */ struct _DEVICE_CAPABILITIES* Capabilities;
      } /* size: 0x0004 */ DeviceCapabilities;
      struct // _TAG_UNNAMED_86
      {
        /* 0x0004 */ struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList;
      } /* size: 0x0004 */ FilterResourceRequirements;
      struct // _TAG_UNNAMED_87
      {
        /* 0x0004 */ unsigned long WhichSpace;
        /* 0x0008 */ void* Buffer;
        /* 0x000c */ unsigned long Offset;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0010 */ ReadWriteConfig;
      struct // _TAG_UNNAMED_88
      {
        /* 0x0004 */ unsigned char Lock;
      } /* size: 0x0001 */ SetLock;
      struct // _TAG_UNNAMED_89
      {
        /* 0x0004 */ enum _TAG_UNNAMED_59 IdType;
      } /* size: 0x0004 */ QueryId;
      struct // _TAG_UNNAMED_90
      {
        /* 0x0004 */ enum _TAG_UNNAMED_60 DeviceTextType;
        /* 0x0008 */ unsigned long LocaleId;
      } /* size: 0x0008 */ QueryDeviceText;
      struct // _TAG_UNNAMED_91
      {
        /* 0x0004 */ unsigned char InPath;
        /* 0x0005 */ unsigned char Reserved[3];
        /* 0x0008 */ enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
      } /* size: 0x0008 */ UsageNotification;
      struct // _TAG_UNNAMED_92
      {
        /* 0x0004 */ enum _SYSTEM_POWER_STATE PowerState;
      } /* size: 0x0004 */ WaitWake;
      struct // _TAG_UNNAMED_93
      {
        /* 0x0004 */ struct _POWER_SEQUENCE* PowerSequence;
      } /* size: 0x0004 */ PowerSequence;
      struct // _TAG_UNNAMED_94
      {
        union
        {
          /* 0x0004 */ unsigned long SystemContext;
          /* 0x0004 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
        }; /* size: 0x0004 */
        /* 0x0008 */ enum _POWER_STATE_TYPE Type;
        /* 0x000c */ union _POWER_STATE State;
        /* 0x0010 */ enum _TAG_UNNAMED_61 ShutdownType;
      } /* size: 0x0010 */ Power;
      struct // _TAG_UNNAMED_95
      {
        /* 0x0004 */ struct _CM_RESOURCE_LIST* AllocatedResources;
        /* 0x0008 */ struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;
      } /* size: 0x0008 */ StartDevice;
      struct // _TAG_UNNAMED_96
      {
        /* 0x0004 */ unsigned long ProviderId;
        /* 0x0008 */ void* DataPath;
        /* 0x000c */ unsigned long BufferSize;
        /* 0x0010 */ void* Buffer;
      } /* size: 0x0010 */ WMI;
      struct // _TAG_UNNAMED_97
      {
        /* 0x0004 */ void* Argument1;
        /* 0x0008 */ void* Argument2;
        /* 0x000c */ void* Argument3;
        /* 0x0010 */ void* Argument4;
      } /* size: 0x0010 */ Others;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ Parameters;
  /* 0x0014 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0018 */ struct _FILE_OBJECT* FileObject;
  /* 0x001c */ void* CompletionRoutine /* function */;
  /* 0x0020 */ void* Context;
} IO_STACK_LOCATION, *PIO_STACK_LOCATION; /* size: 0x0024 */

