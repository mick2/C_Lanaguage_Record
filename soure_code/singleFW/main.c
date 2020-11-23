#include "singleFW.h"

void test1(void)
{
	char devNum = 0;
	char *hwModelName = NULL;
	int i = 0;
	int smiAddr = 0;
	int phyPortNum = 0;
	CPSS_PHY_SMI_INTERFACE_ENT smiInterface = CPSS_PHY_SMI_INTERFACE_0_E;

	cmCpssInitHwModel(1);

	hwModelName = (char *)malloc(sizeof(char) * CM_CPSS_MAX_HW_MODEL_NAME);
	fshow(BLACK"hwModelName addr = %p\n", hwModelName);
	cmCpssHwModelId2HwModelName(CM_CPSS_RUNNING_HW_MODEL_ID, hwModelName);

	fshow(BLUE"runningHwModelId = %d, runningHwModelName = %s\n",
				CM_CPSS_RUNNING_HW_MODEL_ID, hwModelName);

	for (i = 0; i < CM_CPSS_MAX_FRONT_PORT_NUM; i++)
	{
		cmCpssFrontPort2HwPort(i, &devNum, &phyPortNum);
		cmCpssFrontPort2SmiIfAddr(i, &smiInterface, &smiAddr);
		fshow(YELLOW"devNum = %d, phyPortNum = %d\n", devNum, phyPortNum);
		fshow(RED"smiInterface = %d, smiAddr = %d\n", smiInterface, smiAddr);
	}
}

void test2(void)
{
	char devNum = 0;
	int i = 0;
	int smiAddr = 0;
	int phyPortNum = 0;
	CPSS_PHY_SMI_INTERFACE_ENT smiInterface = CPSS_PHY_SMI_INTERFACE_0_E;

	cmCpssInitHwModel(0);
	fshow(BLUE"runningHwModelId = %d, runningHwModelName = %s\n",
				CM_CPSS_RUNNING_HW_MODEL_ID, CM_CPSS_HW_MODEL_NAME);
#if 0
	cmCpssInitHwModel(1);
	fshow(BLUE"runningHwModelId = %d, runningHwModelName = %s\n",
				CM_CPSS_RUNNING_HW_MODEL_ID, CM_CPSS_HW_MODEL_NAME);
	cmCpssInitHwModel(2);
	fshow(BLUE"runningHwModelId = %d, runningHwModelName = %s\n",
				CM_CPSS_RUNNING_HW_MODEL_ID, CM_CPSS_HW_MODEL_NAME);
	cmCpssInitHwModel(3);
	fshow(BLUE"runningHwModelId = %d, runningHwModelName = %s\n",
				CM_CPSS_RUNNING_HW_MODEL_ID, CM_CPSS_HW_MODEL_NAME);
#endif
	for (i = 0; i < CM_CPSS_MAX_FRONT_PORT_NUM; i++)
	{
		cmCpssFrontPort2HwPort(i, &devNum, &phyPortNum);
		cmCpssFrontPort2SmiIfAddr(i, &smiInterface, &smiAddr);
		fshow(YELLOW"devNum = %d, phyPortNum = %d\n", devNum, phyPortNum);
		fshow(RED"smiInterface = %d, smiAddr = %d\n", smiInterface, smiAddr);
	}
}

int main()
{
	test2();
	return 0;
}
