#ifndef ROLLING_CYLINDER_STRINGS_H_
#define ROLLING_CYLINDER_STRINGS_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "LifNeuron/position_inputs_0.h"
#include "LifNeuron/position_inputs_1.h"
#include "LifNeuron/position_inputs_2.h"
#include "LifNeuron/position_inputs_3.h"
#include "LifNeuron/position_inputs_4.h"
#include "LifNeuron/position_inputs_5.h"
#include "LifNeuron/position_inputs_6.h"
#include "LifNeuron/position_inputs_7.h"
#include "LifNeuron/position_inputs_8.h"
#include "LifNeuron/position_inputs_9.h"
#include "LifNeuron/position_inputs_10.h"
#include "LifNeuron/position_inputs_11.h"
#include "LifNeuron/position_inputs_12.h"
#include "LifNeuron/position_inputs_13.h"
#include "LifNeuron/position_inputs_14.h"
#include "LifNeuron/position_inputs_15.h"
#include "LifNeuron/position_inputs_16.h"
#include "LifNeuron/position_inputs_17.h"
#include "LifNeuron/position_inputs_18.h"
#include "LifNeuron/position_inputs_19.h"
#include "LifNeuron/position_inputs_20.h"
#include "LifNeuron/position_inputs_21.h"
#include "LifNeuron/position_inputs_22.h"
#include "LifNeuron/position_inputs_23.h"
#include "LifNeuron/position_inputs_24.h"
#include "LifNeuron/position_inputs_25.h"
#include "LifNeuron/position_inputs_26.h"
#include "LifNeuron/position_inputs_27.h"
#include "LifNeuron/position_inputs_28.h"
#include "LifNeuron/position_inputs_29.h"
#include "LifNeuron/position_inputs_30.h"
#include "LifNeuron/position_inputs_31.h"
#include "LifNeuron/position_inputs_32.h"
#include "LifNeuron/position_inputs_33.h"
#include "LifNeuron/position_inputs_34.h"
#include "LifNeuron/position_inputs_35.h"
#include "LifNeuron/position_inputs_36.h"
#include "LifNeuron/position_inputs_37.h"
#include "LifNeuron/position_inputs_38.h"
#include "LifNeuron/position_inputs_39.h"
#include "LifNeuron/position_inputs_40.h"
#include "LifNeuron/position_inputs_41.h"
#include "LifNeuron/position_inputs_42.h"
#include "LifNeuron/position_inputs_43.h"
#include "LifNeuron/position_inputs_44.h"
#include "LifNeuron/position_inputs_45.h"
#include "LifNeuron/position_inputs_46.h"
#include "LifNeuron/position_inputs_47.h"
#include "LifNeuron/position_inputs_48.h"
#include "LifNeuron/position_inputs_49.h"
#include "LifNeuron/position_inputs_50.h"
#include "LifNeuron/position_inputs_51.h"
#include "LifNeuron/position_inputs_52.h"
#include "LifNeuron/position_inputs_53.h"
#include "LifNeuron/position_inputs_54.h"
#include "LifNeuron/position_inputs_55.h"
#include "LifNeuron/position_inputs_56.h"
#include "LifNeuron/position_inputs_57.h"
#include "LifNeuron/position_inputs_58.h"
#include "LifNeuron/position_inputs_59.h"
#include "LifNeuron/position_inputs_60.h"
#include "LifNeuron/position_inputs_61.h"
#include "LifNeuron/position_inputs_62.h"
#include "LifNeuron/position_inputs_63.h"
#include "LifNeuron/position_inputs_64.h"
#include "LifNeuron/position_inputs_65.h"
#include "LifNeuron/position_inputs_66.h"
#include "LifNeuron/position_inputs_67.h"
#include "LifNeuron/position_inputs_68.h"
#include "LifNeuron/position_inputs_69.h"
#include "LifNeuron/position_inputs_70.h"
#include "LifNeuron/position_inputs_71.h"
#include "LifNeuron/position_inputs_72.h"
#include "LifNeuron/position_inputs_73.h"
#include "LifNeuron/position_inputs_74.h"
#include "LifNeuron/position_inputs_75.h"
#include "LifNeuron/position_inputs_76.h"
#include "LifNeuron/position_inputs_77.h"
#include "LifNeuron/position_inputs_78.h"
#include "LifNeuron/position_inputs_79.h"
#include "LifNeuron/position_inputs_80.h"
#include "LifNeuron/position_inputs_81.h"
#include "LifNeuron/position_inputs_82.h"
#include "LifNeuron/position_inputs_83.h"
#include "LifNeuron/position_inputs_84.h"
#include "LifNeuron/position_inputs_85.h"
#include "LifNeuron/position_inputs_86.h"
#include "LifNeuron/position_inputs_87.h"
#include "LifNeuron/position_inputs_88.h"
#include "LifNeuron/position_inputs_89.h"
#include "LifNeuron/position_inputs_90.h"
#include "LifNeuron/position_inputs_91.h"
#include "LifNeuron/position_inputs_92.h"
#include "LifNeuron/position_inputs_93.h"
#include "LifNeuron/position_inputs_94.h"
#include "LifNeuron/position_inputs_95.h"
#include "LifNeuron/position_inputs_96.h"
#include "LifNeuron/position_inputs_97.h"
#include "LifNeuron/position_inputs_98.h"
#include "LifNeuron/position_inputs_99.h"
#include "LowPass/position_conn_synapse0.h"
#include "LowPass/position_conn_synapse1.h"
#include "LowPass/position_conn_synapse2.h"
#include "LowPass/position_conn_synapse3.h"
#include "LowPass/position_conn_synapse4.h"
#include "LowPass/position_conn_synapse5.h"
#include "LowPass/position_conn_synapse6.h"
#include "LowPass/position_conn_synapse7.h"
#include "LowPass/position_conn_synapse8.h"
#include "LowPass/position_conn_synapse9.h"
#include "LowPass/position_conn_synapse10.h"
#include "LowPass/position_conn_synapse11.h"
#include "LowPass/position_conn_synapse12.h"
#include "LowPass/position_conn_synapse13.h"
#include "LowPass/position_conn_synapse14.h"
#include "LowPass/position_conn_synapse15.h"
#include "LowPass/position_conn_synapse16.h"
#include "LowPass/position_conn_synapse17.h"
#include "LowPass/position_conn_synapse18.h"
#include "LowPass/position_conn_synapse19.h"
#include "LowPass/position_conn_synapse20.h"
#include "LowPass/position_conn_synapse21.h"
#include "LowPass/position_conn_synapse22.h"
#include "LowPass/position_conn_synapse23.h"
#include "LowPass/position_conn_synapse24.h"
#include "LowPass/position_conn_synapse25.h"
#include "LowPass/position_conn_synapse26.h"
#include "LowPass/position_conn_synapse27.h"
#include "LowPass/position_conn_synapse28.h"
#include "LowPass/position_conn_synapse29.h"
#include "LowPass/position_conn_synapse30.h"
#include "LowPass/position_conn_synapse31.h"
#include "LowPass/position_conn_synapse32.h"
#include "LowPass/position_conn_synapse33.h"
#include "LowPass/position_conn_synapse34.h"
#include "LowPass/position_conn_synapse35.h"
#include "LowPass/position_conn_synapse36.h"
#include "LowPass/position_conn_synapse37.h"
#include "LowPass/position_conn_synapse38.h"
#include "LowPass/position_conn_synapse39.h"
#include "LowPass/position_conn_synapse40.h"
#include "LowPass/position_conn_synapse41.h"
#include "LowPass/position_conn_synapse42.h"
#include "LowPass/position_conn_synapse43.h"
#include "LowPass/position_conn_synapse44.h"
#include "LowPass/position_conn_synapse45.h"
#include "LowPass/position_conn_synapse46.h"
#include "LowPass/position_conn_synapse47.h"
#include "LowPass/position_conn_synapse48.h"
#include "LowPass/position_conn_synapse49.h"
#include "LowPass/position_conn_synapse50.h"
#include "LowPass/position_conn_synapse51.h"
#include "LowPass/position_conn_synapse52.h"
#include "LowPass/position_conn_synapse53.h"
#include "LowPass/position_conn_synapse54.h"
#include "LowPass/position_conn_synapse55.h"
#include "LowPass/position_conn_synapse56.h"
#include "LowPass/position_conn_synapse57.h"
#include "LowPass/position_conn_synapse58.h"
#include "LowPass/position_conn_synapse59.h"
#include "LowPass/position_conn_synapse60.h"
#include "LowPass/position_conn_synapse61.h"
#include "LowPass/position_conn_synapse62.h"
#include "LowPass/position_conn_synapse63.h"
#include "LowPass/position_conn_synapse64.h"
#include "LowPass/position_conn_synapse65.h"
#include "LowPass/position_conn_synapse66.h"
#include "LowPass/position_conn_synapse67.h"
#include "LowPass/position_conn_synapse68.h"
#include "LowPass/position_conn_synapse69.h"
#include "LowPass/position_conn_synapse70.h"
#include "LowPass/position_conn_synapse71.h"
#include "LowPass/position_conn_synapse72.h"
#include "LowPass/position_conn_synapse73.h"
#include "LowPass/position_conn_synapse74.h"
#include "LowPass/position_conn_synapse75.h"
#include "LowPass/position_conn_synapse76.h"
#include "LowPass/position_conn_synapse77.h"
#include "LowPass/position_conn_synapse78.h"
#include "LowPass/position_conn_synapse79.h"
#include "LowPass/position_conn_synapse80.h"
#include "LowPass/position_conn_synapse81.h"
#include "LowPass/position_conn_synapse82.h"
#include "LowPass/position_conn_synapse83.h"
#include "LowPass/position_conn_synapse84.h"
#include "LowPass/position_conn_synapse85.h"
#include "LowPass/position_conn_synapse86.h"
#include "LowPass/position_conn_synapse87.h"
#include "LowPass/position_conn_synapse88.h"
#include "LowPass/position_conn_synapse89.h"
#include "LowPass/position_conn_synapse90.h"
#include "LowPass/position_conn_synapse91.h"
#include "LowPass/position_conn_synapse92.h"
#include "LowPass/position_conn_synapse93.h"
#include "LowPass/position_conn_synapse94.h"
#include "LowPass/position_conn_synapse95.h"
#include "LowPass/position_conn_synapse96.h"
#include "LowPass/position_conn_synapse97.h"
#include "LowPass/position_conn_synapse98.h"
#include "LowPass/position_conn_synapse99.h"

#include <stdbool.h>

#include "config.h"

// rolling_cylinder_strings Data Struct
typedef struct {
    
    // Declare Inputs
    double strings_0_in;
    double strings_1_in;
    double strings_2_in;
    double setpoint_0_in;
    double setpoint_1_in;
    
    // Declare Outputs
    double strings_0_out;
    double strings_1_out;
    double strings_2_out;

    // Declare Daughter Automata
    PositionInputs0 position_inputs_0_data;
    PositionInputs1 position_inputs_1_data;
    PositionInputs2 position_inputs_2_data;
    PositionInputs3 position_inputs_3_data;
    PositionInputs4 position_inputs_4_data;
    PositionInputs5 position_inputs_5_data;
    PositionInputs6 position_inputs_6_data;
    PositionInputs7 position_inputs_7_data;
    PositionInputs8 position_inputs_8_data;
    PositionInputs9 position_inputs_9_data;
    PositionInputs10 position_inputs_10_data;
    PositionInputs11 position_inputs_11_data;
    PositionInputs12 position_inputs_12_data;
    PositionInputs13 position_inputs_13_data;
    PositionInputs14 position_inputs_14_data;
    PositionInputs15 position_inputs_15_data;
    PositionInputs16 position_inputs_16_data;
    PositionInputs17 position_inputs_17_data;
    PositionInputs18 position_inputs_18_data;
    PositionInputs19 position_inputs_19_data;
    PositionInputs20 position_inputs_20_data;
    PositionInputs21 position_inputs_21_data;
    PositionInputs22 position_inputs_22_data;
    PositionInputs23 position_inputs_23_data;
    PositionInputs24 position_inputs_24_data;
    PositionInputs25 position_inputs_25_data;
    PositionInputs26 position_inputs_26_data;
    PositionInputs27 position_inputs_27_data;
    PositionInputs28 position_inputs_28_data;
    PositionInputs29 position_inputs_29_data;
    PositionInputs30 position_inputs_30_data;
    PositionInputs31 position_inputs_31_data;
    PositionInputs32 position_inputs_32_data;
    PositionInputs33 position_inputs_33_data;
    PositionInputs34 position_inputs_34_data;
    PositionInputs35 position_inputs_35_data;
    PositionInputs36 position_inputs_36_data;
    PositionInputs37 position_inputs_37_data;
    PositionInputs38 position_inputs_38_data;
    PositionInputs39 position_inputs_39_data;
    PositionInputs40 position_inputs_40_data;
    PositionInputs41 position_inputs_41_data;
    PositionInputs42 position_inputs_42_data;
    PositionInputs43 position_inputs_43_data;
    PositionInputs44 position_inputs_44_data;
    PositionInputs45 position_inputs_45_data;
    PositionInputs46 position_inputs_46_data;
    PositionInputs47 position_inputs_47_data;
    PositionInputs48 position_inputs_48_data;
    PositionInputs49 position_inputs_49_data;
    PositionInputs50 position_inputs_50_data;
    PositionInputs51 position_inputs_51_data;
    PositionInputs52 position_inputs_52_data;
    PositionInputs53 position_inputs_53_data;
    PositionInputs54 position_inputs_54_data;
    PositionInputs55 position_inputs_55_data;
    PositionInputs56 position_inputs_56_data;
    PositionInputs57 position_inputs_57_data;
    PositionInputs58 position_inputs_58_data;
    PositionInputs59 position_inputs_59_data;
    PositionInputs60 position_inputs_60_data;
    PositionInputs61 position_inputs_61_data;
    PositionInputs62 position_inputs_62_data;
    PositionInputs63 position_inputs_63_data;
    PositionInputs64 position_inputs_64_data;
    PositionInputs65 position_inputs_65_data;
    PositionInputs66 position_inputs_66_data;
    PositionInputs67 position_inputs_67_data;
    PositionInputs68 position_inputs_68_data;
    PositionInputs69 position_inputs_69_data;
    PositionInputs70 position_inputs_70_data;
    PositionInputs71 position_inputs_71_data;
    PositionInputs72 position_inputs_72_data;
    PositionInputs73 position_inputs_73_data;
    PositionInputs74 position_inputs_74_data;
    PositionInputs75 position_inputs_75_data;
    PositionInputs76 position_inputs_76_data;
    PositionInputs77 position_inputs_77_data;
    PositionInputs78 position_inputs_78_data;
    PositionInputs79 position_inputs_79_data;
    PositionInputs80 position_inputs_80_data;
    PositionInputs81 position_inputs_81_data;
    PositionInputs82 position_inputs_82_data;
    PositionInputs83 position_inputs_83_data;
    PositionInputs84 position_inputs_84_data;
    PositionInputs85 position_inputs_85_data;
    PositionInputs86 position_inputs_86_data;
    PositionInputs87 position_inputs_87_data;
    PositionInputs88 position_inputs_88_data;
    PositionInputs89 position_inputs_89_data;
    PositionInputs90 position_inputs_90_data;
    PositionInputs91 position_inputs_91_data;
    PositionInputs92 position_inputs_92_data;
    PositionInputs93 position_inputs_93_data;
    PositionInputs94 position_inputs_94_data;
    PositionInputs95 position_inputs_95_data;
    PositionInputs96 position_inputs_96_data;
    PositionInputs97 position_inputs_97_data;
    PositionInputs98 position_inputs_98_data;
    PositionInputs99 position_inputs_99_data;
    PositionConnSynapse0 position_conn_synapse0_data;
    PositionConnSynapse1 position_conn_synapse1_data;
    PositionConnSynapse2 position_conn_synapse2_data;
    PositionConnSynapse3 position_conn_synapse3_data;
    PositionConnSynapse4 position_conn_synapse4_data;
    PositionConnSynapse5 position_conn_synapse5_data;
    PositionConnSynapse6 position_conn_synapse6_data;
    PositionConnSynapse7 position_conn_synapse7_data;
    PositionConnSynapse8 position_conn_synapse8_data;
    PositionConnSynapse9 position_conn_synapse9_data;
    PositionConnSynapse10 position_conn_synapse10_data;
    PositionConnSynapse11 position_conn_synapse11_data;
    PositionConnSynapse12 position_conn_synapse12_data;
    PositionConnSynapse13 position_conn_synapse13_data;
    PositionConnSynapse14 position_conn_synapse14_data;
    PositionConnSynapse15 position_conn_synapse15_data;
    PositionConnSynapse16 position_conn_synapse16_data;
    PositionConnSynapse17 position_conn_synapse17_data;
    PositionConnSynapse18 position_conn_synapse18_data;
    PositionConnSynapse19 position_conn_synapse19_data;
    PositionConnSynapse20 position_conn_synapse20_data;
    PositionConnSynapse21 position_conn_synapse21_data;
    PositionConnSynapse22 position_conn_synapse22_data;
    PositionConnSynapse23 position_conn_synapse23_data;
    PositionConnSynapse24 position_conn_synapse24_data;
    PositionConnSynapse25 position_conn_synapse25_data;
    PositionConnSynapse26 position_conn_synapse26_data;
    PositionConnSynapse27 position_conn_synapse27_data;
    PositionConnSynapse28 position_conn_synapse28_data;
    PositionConnSynapse29 position_conn_synapse29_data;
    PositionConnSynapse30 position_conn_synapse30_data;
    PositionConnSynapse31 position_conn_synapse31_data;
    PositionConnSynapse32 position_conn_synapse32_data;
    PositionConnSynapse33 position_conn_synapse33_data;
    PositionConnSynapse34 position_conn_synapse34_data;
    PositionConnSynapse35 position_conn_synapse35_data;
    PositionConnSynapse36 position_conn_synapse36_data;
    PositionConnSynapse37 position_conn_synapse37_data;
    PositionConnSynapse38 position_conn_synapse38_data;
    PositionConnSynapse39 position_conn_synapse39_data;
    PositionConnSynapse40 position_conn_synapse40_data;
    PositionConnSynapse41 position_conn_synapse41_data;
    PositionConnSynapse42 position_conn_synapse42_data;
    PositionConnSynapse43 position_conn_synapse43_data;
    PositionConnSynapse44 position_conn_synapse44_data;
    PositionConnSynapse45 position_conn_synapse45_data;
    PositionConnSynapse46 position_conn_synapse46_data;
    PositionConnSynapse47 position_conn_synapse47_data;
    PositionConnSynapse48 position_conn_synapse48_data;
    PositionConnSynapse49 position_conn_synapse49_data;
    PositionConnSynapse50 position_conn_synapse50_data;
    PositionConnSynapse51 position_conn_synapse51_data;
    PositionConnSynapse52 position_conn_synapse52_data;
    PositionConnSynapse53 position_conn_synapse53_data;
    PositionConnSynapse54 position_conn_synapse54_data;
    PositionConnSynapse55 position_conn_synapse55_data;
    PositionConnSynapse56 position_conn_synapse56_data;
    PositionConnSynapse57 position_conn_synapse57_data;
    PositionConnSynapse58 position_conn_synapse58_data;
    PositionConnSynapse59 position_conn_synapse59_data;
    PositionConnSynapse60 position_conn_synapse60_data;
    PositionConnSynapse61 position_conn_synapse61_data;
    PositionConnSynapse62 position_conn_synapse62_data;
    PositionConnSynapse63 position_conn_synapse63_data;
    PositionConnSynapse64 position_conn_synapse64_data;
    PositionConnSynapse65 position_conn_synapse65_data;
    PositionConnSynapse66 position_conn_synapse66_data;
    PositionConnSynapse67 position_conn_synapse67_data;
    PositionConnSynapse68 position_conn_synapse68_data;
    PositionConnSynapse69 position_conn_synapse69_data;
    PositionConnSynapse70 position_conn_synapse70_data;
    PositionConnSynapse71 position_conn_synapse71_data;
    PositionConnSynapse72 position_conn_synapse72_data;
    PositionConnSynapse73 position_conn_synapse73_data;
    PositionConnSynapse74 position_conn_synapse74_data;
    PositionConnSynapse75 position_conn_synapse75_data;
    PositionConnSynapse76 position_conn_synapse76_data;
    PositionConnSynapse77 position_conn_synapse77_data;
    PositionConnSynapse78 position_conn_synapse78_data;
    PositionConnSynapse79 position_conn_synapse79_data;
    PositionConnSynapse80 position_conn_synapse80_data;
    PositionConnSynapse81 position_conn_synapse81_data;
    PositionConnSynapse82 position_conn_synapse82_data;
    PositionConnSynapse83 position_conn_synapse83_data;
    PositionConnSynapse84 position_conn_synapse84_data;
    PositionConnSynapse85 position_conn_synapse85_data;
    PositionConnSynapse86 position_conn_synapse86_data;
    PositionConnSynapse87 position_conn_synapse87_data;
    PositionConnSynapse88 position_conn_synapse88_data;
    PositionConnSynapse89 position_conn_synapse89_data;
    PositionConnSynapse90 position_conn_synapse90_data;
    PositionConnSynapse91 position_conn_synapse91_data;
    PositionConnSynapse92 position_conn_synapse92_data;
    PositionConnSynapse93 position_conn_synapse93_data;
    PositionConnSynapse94 position_conn_synapse94_data;
    PositionConnSynapse95 position_conn_synapse95_data;
    PositionConnSynapse96 position_conn_synapse96_data;
    PositionConnSynapse97 position_conn_synapse97_data;
    PositionConnSynapse98 position_conn_synapse98_data;
    PositionConnSynapse99 position_conn_synapse99_data;
} RollingCylinderStrings;

// rolling_cylinder_strings Initialisation function
void RollingCylinderStringsInit(RollingCylinderStrings* me);

// rolling_cylinder_strings Execution function
void RollingCylinderStringsRun(RollingCylinderStrings* me);

#endif // ROLLING_CYLINDER_STRINGS_H_