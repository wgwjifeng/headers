typedef enum _TAG_UNNAMED_55
{
  PolicyDeviceSystemButton = 0,
  PolicyDeviceThermalZone = 1,
  PolicyDeviceBattery = 2,
  PolicyDeviceMemory = 3,
  PolicyInitiatePowerActionAPI = 4,
  PolicySetPowerStateAPI = 5,
  PolicyImmediateDozeS4 = 6,
  PolicySystemIdle = 7,
  PolicyDeviceWakeAlarm = 8,
  PolicyDeviceFan = 9,
  PolicyCsBatterySaver = 10,
  PolicyImmediateDozeS4Predicted = 11,
  PolicyImmediateDozeS4PredictedNoWake = 12,
  PolicyImmediateDozeS4AdaptiveBudget = 13,
  PolicyImmediateDozeS4AdaptiveReserveNoWake = 14,
  PolicySystemInitiatedShutdown = 15,
  PolicyDeviceMax = 16,
} TAG_UNNAMED_55, *PTAG_UNNAMED_55;

typedef struct _POP_ACTION_TRIGGER
{
  /* 0x0000 */ enum _TAG_UNNAMED_55 Type;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _POP_TRIGGER_WAIT* Wait;
  union
  {
    struct // _TAG_UNNAMED_254
    {
      /* 0x000c */ unsigned long PercentLevel;
    } /* size: 0x0004 */ Battery;
    struct // _TAG_UNNAMED_255
    {
      /* 0x000c */ unsigned long Type;
    } /* size: 0x0004 */ Button;
  }; /* size: 0x0004 */
} POP_ACTION_TRIGGER, *PPOP_ACTION_TRIGGER; /* size: 0x0010 */

