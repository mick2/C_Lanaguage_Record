#include "singleFW.h"

CM_CPSS_HW_MODEL_INFO_STC *runningHwModelInfoPtr = NULL;

CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_10PS[] =
{
	{.hwDevNum = 0, .phyPortNum = 63},
	{.hwDevNum = 0, .phyPortNum = 0,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 0},
	{.hwDevNum = 0, .phyPortNum = 1,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 1},
	{.hwDevNum = 0, .phyPortNum = 2,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 2},
	{.hwDevNum = 0, .phyPortNum = 3,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 3},
	{.hwDevNum = 0, .phyPortNum = 4,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 4},
	{.hwDevNum = 0, .phyPortNum = 5,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 5},
	{.hwDevNum = 0, .phyPortNum = 6,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 6},
	{.hwDevNum = 0, .phyPortNum = 7,        
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 7},
	{.hwDevNum = 0, .phyPortNum = 24,       
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 17},
	{.hwDevNum = 0, .phyPortNum = 25,       
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 19},
};

CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_18PS[] =
{
	{.hwDevNum = 0, .phyPortNum = 63},
	{.hwDevNum = 0, .phyPortNum = 0,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 0},
	{.hwDevNum = 0, .phyPortNum = 1,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 1},
	{.hwDevNum = 0, .phyPortNum = 2,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 2},
	{.hwDevNum = 0, .phyPortNum = 3,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 3},
	{.hwDevNum = 0, .phyPortNum = 4,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 4},
	{.hwDevNum = 0, .phyPortNum = 5,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 5},
	{.hwDevNum = 0, .phyPortNum = 6,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 6},
	{.hwDevNum = 0, .phyPortNum = 7,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 7},
	{.hwDevNum = 0, .phyPortNum = 8,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 8},
	{.hwDevNum = 0, .phyPortNum = 9,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 9},
	{.hwDevNum = 0, .phyPortNum = 10,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 10},
	{.hwDevNum = 0, .phyPortNum = 11,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 11},
	{.hwDevNum = 0, .phyPortNum = 12,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 12},
	{.hwDevNum = 0, .phyPortNum = 13,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 13},
	{.hwDevNum = 0, .phyPortNum = 14,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 14},
	{.hwDevNum = 0, .phyPortNum = 15,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 15},
	{.hwDevNum = 0, .phyPortNum = 24,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 17},
	{.hwDevNum = 0, .phyPortNum = 25,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 19},
};

CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_28PS[] =
{
	{.hwDevNum = 0, .phyPortNum = 63},
	{.hwDevNum = 0, .phyPortNum = 0,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 0},
	{.hwDevNum = 0, .phyPortNum = 1,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 1},
	{.hwDevNum = 0, .phyPortNum = 2,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 2},
	{.hwDevNum = 0, .phyPortNum = 3,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 3},
	{.hwDevNum = 0, .phyPortNum = 4,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 4},
	{.hwDevNum = 0, .phyPortNum = 5,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 5},
	{.hwDevNum = 0, .phyPortNum = 6,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 6},
	{.hwDevNum = 0, .phyPortNum = 7,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 7},
	{.hwDevNum = 0, .phyPortNum = 8,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 8},
	{.hwDevNum = 0, .phyPortNum = 9,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 9},
	{.hwDevNum = 0, .phyPortNum = 10,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 10},
	{.hwDevNum = 0, .phyPortNum = 11,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 11},
	{.hwDevNum = 0, .phyPortNum = 12,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 12},
	{.hwDevNum = 0, .phyPortNum = 13,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 13},
	{.hwDevNum = 0, .phyPortNum = 14,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 14},
	{.hwDevNum = 0, .phyPortNum = 15,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 15},
	{.hwDevNum = 0, .phyPortNum = 16,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 8},
	{.hwDevNum = 0, .phyPortNum = 17,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 9},
	{.hwDevNum = 0, .phyPortNum = 18,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 10},
	{.hwDevNum = 0, .phyPortNum = 19,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 11},
	{.hwDevNum = 0, .phyPortNum = 20,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 12},
	{.hwDevNum = 0, .phyPortNum = 21,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 13},
	{.hwDevNum = 0, .phyPortNum = 22,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 14},
	{.hwDevNum = 0, .phyPortNum = 23,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 15},
	{.hwDevNum = 0, .phyPortNum = 24,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 17},
	{.hwDevNum = 0, .phyPortNum = 25,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 19},
	{.hwDevNum = 0, .phyPortNum = 26,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 21},
	{.hwDevNum = 0, .phyPortNum = 27,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_1_E, .smiAddr = 23},
};

CM_CPSS_HW_INTERFACE_STC frontPort2HwIfMapTable_52PS[] =
{
	{.hwDevNum = 0, .phyPortNum = 63},
	{.hwDevNum = 0, .phyPortNum = 0,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 0},
	{.hwDevNum = 0, .phyPortNum = 1,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 1},
	{.hwDevNum = 0, .phyPortNum = 2,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 2},
	{.hwDevNum = 0, .phyPortNum = 3,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 3},
	{.hwDevNum = 0, .phyPortNum = 4,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 4},
	{.hwDevNum = 0, .phyPortNum = 5,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 5},
	{.hwDevNum = 0, .phyPortNum = 6,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 6},
	{.hwDevNum = 0, .phyPortNum = 7,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 7},
	{.hwDevNum = 0, .phyPortNum = 8,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 8},
	{.hwDevNum = 0, .phyPortNum = 9,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 9},
	{.hwDevNum = 0, .phyPortNum = 10,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 10},
	{.hwDevNum = 0, .phyPortNum = 11,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 11},
	{.hwDevNum = 0, .phyPortNum = 12,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 12},
	{.hwDevNum = 0, .phyPortNum = 13,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 13},
	{.hwDevNum = 0, .phyPortNum = 14,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 14},
	{.hwDevNum = 0, .phyPortNum = 15,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 15},
	{.hwDevNum = 0, .phyPortNum = 16,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 8},
	{.hwDevNum = 0, .phyPortNum = 17,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 9},
	{.hwDevNum = 0, .phyPortNum = 18,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 10},
	{.hwDevNum = 0, .phyPortNum = 19,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 11},
	{.hwDevNum = 0, .phyPortNum = 20,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 12},
	{.hwDevNum = 0, .phyPortNum = 21,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 13},
	{.hwDevNum = 0, .phyPortNum = 22,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 14},
	{.hwDevNum = 0, .phyPortNum = 23,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 15},
	{.hwDevNum = 1, .phyPortNum = 0,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 0},
	{.hwDevNum = 1, .phyPortNum = 1,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 1},
	{.hwDevNum = 1, .phyPortNum = 2,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 2},
	{.hwDevNum = 1, .phyPortNum = 3,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 3},
	{.hwDevNum = 1, .phyPortNum = 4,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 4},
	{.hwDevNum = 1, .phyPortNum = 5,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 5},
	{.hwDevNum = 1, .phyPortNum = 6,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 6},
	{.hwDevNum = 1, .phyPortNum = 7,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 7},
	{.hwDevNum = 1, .phyPortNum = 8,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 8},
	{.hwDevNum = 1, .phyPortNum = 9,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 9},
	{.hwDevNum = 1, .phyPortNum = 10,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 10},
	{.hwDevNum = 1, .phyPortNum = 11,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 11},
	{.hwDevNum = 1, .phyPortNum = 12,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 12},
	{.hwDevNum = 1, .phyPortNum = 13,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 13},
	{.hwDevNum = 1, .phyPortNum = 14,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 14},
	{.hwDevNum = 1, .phyPortNum = 15,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 15},
	{.hwDevNum = 1, .phyPortNum = 16,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 8},
	{.hwDevNum = 1, .phyPortNum = 17,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 9},
	{.hwDevNum = 1, .phyPortNum = 18,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 10},
	{.hwDevNum = 1, .phyPortNum = 19,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 11},
	{.hwDevNum = 1, .phyPortNum = 20,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 12},
	{.hwDevNum = 1, .phyPortNum = 21,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 13},
	{.hwDevNum = 1, .phyPortNum = 22,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 14},
	{.hwDevNum = 1, .phyPortNum = 23,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 15},
	{.hwDevNum = 0, .phyPortNum = 25,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 17},
	{.hwDevNum = 0, .phyPortNum = 27,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 19},
	{.hwDevNum = 1, .phyPortNum = 25,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 17},
	{.hwDevNum = 1, .phyPortNum = 27,
	 .smiInterface = CPSS_PHY_SMI_INTERFACE_0_E, .smiAddr = 19},
};

int hwIf2FrontPortMapTable_10PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM] =
{
	{1, 2, 3, 4, 5, 6, 7, 8,
	 0, 0, 0, 0, 0, 0, 0, 0,
	 0, 0, 0, 0, 0, 0, 0, 0,
	 9, 10, 0, 0},

	{0, 0, 0, 0, 0, 0, 0, 0,
	 0, 0, 0, 0, 0, 0, 0, 0,
	 0, 0, 0, 0, 0, 0, 0, 0,
	 0, 0, 0, 0},
};

int hwIf2FrontPortMapTable_18PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM] =
{
	/* HW dev 0 */
	{1, 2, 3, 4, 5, 6, 7, 8, /* phy port 0~7 */
	 9, 10, 11, 12, 13, 14, 15, 16, /* phy port 8~15 */
	 0, 0, 0, 0, 0, 0, 0, 0, /* phy port 16~23 */
	 17, 18, 0, 0}, /* phy port 24~27 */

	/* HW dev 1 */
	{0, 0, 0, 0, 0, 0, 0, 0, /* phy port 0~7 */
	 0, 0, 0, 0, 0, 0, 0, 0, /* phy port 8~15 */
	 0, 0, 0, 0, 0, 0, 0, 0, /* phy port 16~23 */
	 0, 0, 0, 0},            /* phy port 24~27 */
};

int hwIf2FrontPortMapTable_28PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM] =
{
	/* HW dev 0 */
	{1, 2, 3, 4, 5, 6, 7, 8, /* phy port 0~7 */
		9, 10, 11, 12, 13, 14, 15, 16, /* phy port 8~15 */
		17, 18, 19, 20, 21, 22, 23, 24, /* phy port 16~23 */
		25, 26, 27, 28}, /* phy port 24~27 */

	/* HW dev 1 */
	{0, 0, 0, 0, 0, 0, 0, 0, /* phy port 0~7 */
		0, 0, 0, 0, 0, 0, 0, 0, /* phy port 8~15 */
		0, 0, 0, 0, 0, 0, 0, 0, /* phy port 16~23 */
		0, 0, 0, 0},            /* phy port 24~27 */
};

int hwIf2FrontPortMapTable_52PS[CM_CPSS_MAX_HW_DEV_NUM][CM_CPSS_MAX_PHY_PORT_NUM] =
{
	/* HW dev 0 */
	{1, 2, 3, 4, 5, 6, 7, 8, /* phy port 0~7 */
		9, 10, 11, 12, 13, 14, 15, 16, /* phy port 8~15 */
		17, 18, 19, 20, 21, 22, 23, 24, /* phy port 16~23 */
		0, 49, 0, 50}, /* phy port 24~27 */

	/* HW dev 1 */
	{25, 26, 27, 28, 29, 30, 31, 32, /* phy port 0~7 */
		33, 34, 35, 36, 37, 38, 39, 40, /* phy port 8~15 */
		41, 42, 43, 44, 45, 46, 47, 48, /* phy port 16~23 */
		0, 51, 0, 52},            /* phy port 24~27 */
};

CM_CPSS_HW_MODEL_INFO_STC hwModelInfo[] =
{
	{
		.hwModelId = CM_CPSS_AT_GS950V2_10PS,
		.maxFrontPortNum = 10,
		.maxFiberPortNum = 2,
		.fiberPortStartIndex = 9,
		.maxPoeNum = 8,
		.powerBudget = 0x2EE,
		.frontPort2HwIfMapPtr = frontPort2HwIfMapTable_10PS,
		.hwIf2FrontPortMapPtr = hwIf2FrontPortMapTable_10PS,
	},
	{
		.hwModelId = CM_CPSS_AT_GS950V2_18PS,
		.maxFrontPortNum = 18,
		.maxFiberPortNum = 2,
		.fiberPortStartIndex = 17,
		.maxPoeNum = 16,
		.powerBudget = 0x73A,
		.frontPort2HwIfMapPtr = frontPort2HwIfMapTable_18PS,
		.hwIf2FrontPortMapPtr = hwIf2FrontPortMapTable_18PS,
	},
	{
		.hwModelId = CM_CPSS_AT_GS950V2_28PS,
		.maxFrontPortNum = 28,
		.maxFiberPortNum = 4,
		.fiberPortStartIndex = 25,
		.maxPoeNum = 24,
		.powerBudget = 0x73A,
		.frontPort2HwIfMapPtr = frontPort2HwIfMapTable_28PS,
		.hwIf2FrontPortMapPtr = hwIf2FrontPortMapTable_28PS,
	},
	{
		.hwModelId = CM_CPSS_AT_GS950V2_52PS,
		.maxFrontPortNum = 52,
		.maxFiberPortNum = 4,
		.fiberPortStartIndex = 49,
		.maxPoeNum = 24,
		.powerBudget = 0xE74,
		.frontPort2HwIfMapPtr = frontPort2HwIfMapTable_52PS,
		.hwIf2FrontPortMapPtr = hwIf2FrontPortMapTable_52PS,
	},
};

int cmCpssInitHwModel(int runningHwModelId)
{
	int rc = GT_OK;
	int i = 0;

	for (i = 0; i < sizeof(hwModelInfo) / sizeof(CM_CPSS_HW_MODEL_INFO_STC); i++)
	{
		if (hwModelInfo[i].hwModelId == runningHwModelId)
		{
			runningHwModelInfoPtr = &hwModelInfo[i];
			printf("[%s -- %d]Init HW model(id: %d) successfully!\n", __FUNCTION__, __LINE__, runningHwModelId);
			return GT_OK;
		}
	}

	printf("[%s -- %d]Init HW model(id: %d) failed!\n", __FUNCTION__, __LINE__, runningHwModelId);
	return GT_FAIL;
}

int cmCpssFrontPort2HwPort(int frontPortNum, char *devNumPtr, int *phyPortNumPtr)
{
	CM_CPSS_HW_INTERFACE_STC *portHwIfPtr = NULL;

	if (frontPortNum > CM_CPSS_MAX_FRONT_PORT_NUM)
	{
		return GT_FAIL;
	}

	portHwIfPtr =
		&(runningHwModelInfoPtr->frontPort2HwIfMapPtr[frontPortNum]);

	*devNumPtr = portHwIfPtr->hwDevNum;
	*phyPortNumPtr = portHwIfPtr->phyPortNum;

	return GT_OK;
}

int cmCpssHwIf2FrontPort(char devNum, int portNum, int *frontPortPtr)
{
	*frontPortPtr = runningHwModelInfoPtr->hwIf2FrontPortMapPtr[devNum][portNum];
	return GT_OK;
}

int cmCpssHwModelId2HwModelName
(
 int hwModelId,
 char *hwModelName
)
{
	if (hwModelName == NULL)
	{
		printf("malloc failure!\n");
		return GT_FAIL;
	}

	fshow(DARKGREEN"hwModelName Addr = %p\n", hwModelName);

	switch (hwModelId)
	{
		case CM_CPSS_AT_GS950V2_10PS:
			strcpy(hwModelName, "AT GS950V2 10PS");
			break;
		case CM_CPSS_AT_GS950V2_18PS:
			strcpy(hwModelName, "AT GS950V2 18PS");
			break;
		case CM_CPSS_AT_GS950V2_28PS:
			strcpy(hwModelName, "AT GS950V2 28PS");
			break;
		case CM_CPSS_AT_GS950V2_52PS:
			strcpy(hwModelName, "AT GS950V2 52PS");
			break;
		default:
			printf("No HW Model Name with a successful match was found!\n");
			break;
	}

	fshow(DARKGREEN"hwModelName = %s\n", hwModelName);

	return GT_OK;
}

/*PHY*/
/*=============================================================================*/
int cmCpssFrontPort2SmiIfAddr
(
  int frontPortNum,
  CPSS_PHY_SMI_INTERFACE_ENT *smiInterfacePtr,
  int *smiAddrPtr
)
{
	CM_CPSS_HW_INTERFACE_STC *portHwIfPtr = NULL;

	if (frontPortNum > CM_CPSS_MAX_FRONT_PORT_NUM)
	{
		return GT_FAIL;
	}

	portHwIfPtr =
		&(runningHwModelInfoPtr->frontPort2HwIfMapPtr[frontPortNum]);

	*smiInterfacePtr = portHwIfPtr->smiInterface;
	*smiAddrPtr = portHwIfPtr->smiAddr;

	return GT_OK;
}
