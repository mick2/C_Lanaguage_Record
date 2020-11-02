#ifndef __SINGLEFW_H__
#define __SINGLEFW_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "singleGenType.h"
#include "singleDebug.h"

#define CM_CPSS_MAX_HW_DEV_NUM 2
#define CM_CPSS_MAX_PHY_PORT_NUM 28

#define CM_CPSS_MAX_HW_MODEL_NAME 30

#define CM_CPSS_RUNNING_HW_MODEL_ID runningHwModelInfoPtr->hwModelId
#define CM_POE_MAX_PORTS runningHwModelInfoPtr->maxPoeNum
#define CM_CPSS_MAX_FRONT_PORT_NUM runningHwModelInfoPtr->maxFrontPortNum
#define CM_FIBER_PORT_START_INDEX runningHwModelInfoPtr->fiberPortStartIndex

typedef enum {
	CM_CPSS_AT_GS950V2_10PS = 0x00,
	CM_CPSS_AT_GS950V2_18PS = 0x01,
	CM_CPSS_AT_GS950V2_28PS = 0x02,
	CM_CPSS_AT_GS950V2_52PS = 0x03,
} CM_CPSS_HW_MODEL_ID_ENT;

typedef enum {
	CPSS_PHY_SMI_INTERFACE_0_E = 0,
	CPSS_PHY_SMI_INTERFACE_1_E,
	CPSS_PHY_SMI_INTERFACE_2_E,
	CPSS_PHY_SMI_INTERFACE_3_E,
	CPSS_PHY_SMI_INTERFACE_MAX_E,
	CPSS_PHY_SMI_INTERFACE_INVALID_E = (~0)
} CPSS_PHY_SMI_INTERFACE_ENT;

typedef struct CM_CPSS_HW_INTERFACE {
	int hwDevNum;
	int phyPortNum;
	CPSS_PHY_SMI_INTERFACE_ENT smiInterface;
	int smiAddr;
} CM_CPSS_HW_INTERFACE_STC;

typedef struct CM_CPSS_HW_MODEL_INFO {
	CM_CPSS_HW_MODEL_ID_ENT hwModelId;
	int maxFrontPortNum;
	int maxFiberPortNum;
	int fiberPortStartIndex;
	int maxPoeNum;
	int powerBudget;

	CM_CPSS_HW_INTERFACE_STC * frontPort2HwIfMapPtr;
	int (*hwIf2FrontPortMapPtr)[CM_CPSS_MAX_PHY_PORT_NUM];
} CM_CPSS_HW_MODEL_INFO_STC;

extern CM_CPSS_HW_MODEL_INFO_STC *runningHwModelInfoPtr;
extern CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_10PS[];
extern CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_18PS[];
extern CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_28PS[];
extern CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_52PS[];
extern int hwIf2FrontPortMapTable_10PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM];
extern int hwIf2FrontPortMapTable_18PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM];
extern int hwIf2FrontPortMapTable_28PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM];
extern int hwIf2FrontPortMapTable_52PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM];
extern CM_CPSS_HW_MODEL_INFO_STC hwModelInfo[];

int cmCpssInitHwModel
(
	int runningHwModelId 
);

int cmCpssFrontPort2HwPort
(
	int frontPortNum,
	char *devNumPtr,
	int *phyPortNumPtr
);

int cmCpssFrontPort2SmiIfAddr
(
	int frontPortNum,
	CPSS_PHY_SMI_INTERFACE_ENT *smiInterfacePtr,
	int *smiAddrPtr
);

int cmCpssHwModelId2HwModelName
(
	int hwModelId,
	char *hwModelName
);

/*PHY*/
int cmCpssFrontPort2SmiIfAddr
(
	int frontPortNum,
	CPSS_PHY_SMI_INTERFACE_ENT *smiInterfacePtr,
	int *smiAddrPtr
);

#endif
