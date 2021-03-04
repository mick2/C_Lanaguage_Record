MVL_CHIP_AC3=NO
MVL_CHIP_ARMADA_38X=YES
MVL_CHIP_BOBK=NO

all:
	echo "start to make all";
# ifeq ($(strip $(MVL_CHIP_AC3),$(MVL_CHIP_ARMADA_38X),$(MVL_CHIP_BOBK)), $(filter $(MVL_CHIP_AC3),$(MVL_CHIP_ARMADA_38X),$(MVL_CHIP_BOBK), YES))
# ifeq ($(strip $(MVL_CHIP_AC3)), $(filter $(MVL_CHIP_AC3),YES))
ifeq ($(strip YES), $(filter YES,$(MVL_CHIP_ARMADA_38X) $(MVL_CHIP_AC3) $(MVL_CHIP_BOBK)))
	echo "MVL_CHIP_AC3=$(MVL_CHIP_AC3)"
	echo "MVL_CHIP_ARMADA_38X=$(MVL_CHIP_ARMADA_38X)"
	echo "MVL_CHIP_BOBK=$(MVL_CHIP_BOBK)"
endif
