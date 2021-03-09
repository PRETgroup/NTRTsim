#include "cylinder_strings.h"

static double CheckSpike(bool spike, double weight) {
    if(spike) {
        return weight;
    }
    return 0.0;
}


// cylinder_strings Initialisation function
void CylinderStringsInit(CylinderStrings* me) {
    // Initialise Sub-objects
    StringsInput0Init(&me->strings_input_0_data);

    StringsInput1Init(&me->strings_input_1_data);

    StringsInput2Init(&me->strings_input_2_data);

    StringsInput3Init(&me->strings_input_3_data);

    StringsInput4Init(&me->strings_input_4_data);

    StringsInput5Init(&me->strings_input_5_data);

    StringsInput6Init(&me->strings_input_6_data);

    StringsInput7Init(&me->strings_input_7_data);

    StringsInput8Init(&me->strings_input_8_data);

    StringsInput9Init(&me->strings_input_9_data);

    StringsInput10Init(&me->strings_input_10_data);

    StringsInput11Init(&me->strings_input_11_data);

    StringsInput12Init(&me->strings_input_12_data);

    StringsInput13Init(&me->strings_input_13_data);

    StringsInput14Init(&me->strings_input_14_data);

    StringsInput15Init(&me->strings_input_15_data);

    StringsInput16Init(&me->strings_input_16_data);

    StringsInput17Init(&me->strings_input_17_data);

    StringsInput18Init(&me->strings_input_18_data);

    StringsInput19Init(&me->strings_input_19_data);

    StringsInput20Init(&me->strings_input_20_data);

    StringsInput21Init(&me->strings_input_21_data);

    StringsInput22Init(&me->strings_input_22_data);

    StringsInput23Init(&me->strings_input_23_data);

    StringsInput24Init(&me->strings_input_24_data);

    StringsInput25Init(&me->strings_input_25_data);

    StringsInput26Init(&me->strings_input_26_data);

    StringsInput27Init(&me->strings_input_27_data);

    StringsInput28Init(&me->strings_input_28_data);

    StringsInput29Init(&me->strings_input_29_data);

    StringsInput30Init(&me->strings_input_30_data);

    StringsInput31Init(&me->strings_input_31_data);

    StringsInput32Init(&me->strings_input_32_data);

    StringsInput33Init(&me->strings_input_33_data);

    StringsInput34Init(&me->strings_input_34_data);

    StringsInput35Init(&me->strings_input_35_data);

    StringsInput36Init(&me->strings_input_36_data);

    StringsInput37Init(&me->strings_input_37_data);

    StringsInput38Init(&me->strings_input_38_data);

    StringsInput39Init(&me->strings_input_39_data);

    StringsInput40Init(&me->strings_input_40_data);

    StringsInput41Init(&me->strings_input_41_data);

    StringsInput42Init(&me->strings_input_42_data);

    StringsInput43Init(&me->strings_input_43_data);

    StringsInput44Init(&me->strings_input_44_data);

    StringsInput45Init(&me->strings_input_45_data);

    StringsInput46Init(&me->strings_input_46_data);

    StringsInput47Init(&me->strings_input_47_data);

    StringsInput48Init(&me->strings_input_48_data);

    StringsInput49Init(&me->strings_input_49_data);

    StringsInput50Init(&me->strings_input_50_data);

    StringsInput51Init(&me->strings_input_51_data);

    StringsInput52Init(&me->strings_input_52_data);

    StringsInput53Init(&me->strings_input_53_data);

    StringsInput54Init(&me->strings_input_54_data);

    StringsInput55Init(&me->strings_input_55_data);

    StringsInput56Init(&me->strings_input_56_data);

    StringsInput57Init(&me->strings_input_57_data);

    StringsInput58Init(&me->strings_input_58_data);

    StringsInput59Init(&me->strings_input_59_data);

    StringsInput60Init(&me->strings_input_60_data);

    StringsInput61Init(&me->strings_input_61_data);

    StringsInput62Init(&me->strings_input_62_data);

    StringsInput63Init(&me->strings_input_63_data);

    StringsInput64Init(&me->strings_input_64_data);

    StringsInput65Init(&me->strings_input_65_data);

    StringsInput66Init(&me->strings_input_66_data);

    StringsInput67Init(&me->strings_input_67_data);

    StringsInput68Init(&me->strings_input_68_data);

    StringsInput69Init(&me->strings_input_69_data);

    StringsInput70Init(&me->strings_input_70_data);

    StringsInput71Init(&me->strings_input_71_data);

    StringsInput72Init(&me->strings_input_72_data);

    StringsInput73Init(&me->strings_input_73_data);

    StringsInput74Init(&me->strings_input_74_data);

    StringsInput75Init(&me->strings_input_75_data);

    StringsInput76Init(&me->strings_input_76_data);

    StringsInput77Init(&me->strings_input_77_data);

    StringsInput78Init(&me->strings_input_78_data);

    StringsInput79Init(&me->strings_input_79_data);

    StringsInput80Init(&me->strings_input_80_data);

    StringsInput81Init(&me->strings_input_81_data);

    StringsInput82Init(&me->strings_input_82_data);

    StringsInput83Init(&me->strings_input_83_data);

    StringsInput84Init(&me->strings_input_84_data);

    StringsInput85Init(&me->strings_input_85_data);

    StringsInput86Init(&me->strings_input_86_data);

    StringsInput87Init(&me->strings_input_87_data);

    StringsInput88Init(&me->strings_input_88_data);

    StringsInput89Init(&me->strings_input_89_data);

    StringsInput90Init(&me->strings_input_90_data);

    StringsInput91Init(&me->strings_input_91_data);

    StringsInput92Init(&me->strings_input_92_data);

    StringsInput93Init(&me->strings_input_93_data);

    StringsInput94Init(&me->strings_input_94_data);

    StringsInput95Init(&me->strings_input_95_data);

    StringsInput96Init(&me->strings_input_96_data);

    StringsInput97Init(&me->strings_input_97_data);

    StringsInput98Init(&me->strings_input_98_data);

    StringsInput99Init(&me->strings_input_99_data);

    StringsInput100Init(&me->strings_input_100_data);

    StringsInput101Init(&me->strings_input_101_data);

    StringsInput102Init(&me->strings_input_102_data);

    StringsInput103Init(&me->strings_input_103_data);

    StringsInput104Init(&me->strings_input_104_data);

    StringsInput105Init(&me->strings_input_105_data);

    StringsInput106Init(&me->strings_input_106_data);

    StringsInput107Init(&me->strings_input_107_data);

    StringsInput108Init(&me->strings_input_108_data);

    StringsInput109Init(&me->strings_input_109_data);

    StringsInput110Init(&me->strings_input_110_data);

    StringsInput111Init(&me->strings_input_111_data);

    StringsInput112Init(&me->strings_input_112_data);

    StringsInput113Init(&me->strings_input_113_data);

    StringsInput114Init(&me->strings_input_114_data);

    StringsInput115Init(&me->strings_input_115_data);

    StringsInput116Init(&me->strings_input_116_data);

    StringsInput117Init(&me->strings_input_117_data);

    StringsInput118Init(&me->strings_input_118_data);

    StringsInput119Init(&me->strings_input_119_data);

    StringsInput120Init(&me->strings_input_120_data);

    StringsInput121Init(&me->strings_input_121_data);

    StringsInput122Init(&me->strings_input_122_data);

    StringsInput123Init(&me->strings_input_123_data);

    StringsInput124Init(&me->strings_input_124_data);

    StringsInput125Init(&me->strings_input_125_data);

    StringsInput126Init(&me->strings_input_126_data);

    StringsInput127Init(&me->strings_input_127_data);

    StringsInput128Init(&me->strings_input_128_data);

    StringsInput129Init(&me->strings_input_129_data);

    StringsInput130Init(&me->strings_input_130_data);

    StringsInput131Init(&me->strings_input_131_data);

    StringsInput132Init(&me->strings_input_132_data);

    StringsInput133Init(&me->strings_input_133_data);

    StringsInput134Init(&me->strings_input_134_data);

    StringsInput135Init(&me->strings_input_135_data);

    StringsInput136Init(&me->strings_input_136_data);

    StringsInput137Init(&me->strings_input_137_data);

    StringsInput138Init(&me->strings_input_138_data);

    StringsInput139Init(&me->strings_input_139_data);

    StringsInput140Init(&me->strings_input_140_data);

    StringsInput141Init(&me->strings_input_141_data);

    StringsInput142Init(&me->strings_input_142_data);

    StringsInput143Init(&me->strings_input_143_data);

    StringsInput144Init(&me->strings_input_144_data);

    StringsInput145Init(&me->strings_input_145_data);

    StringsInput146Init(&me->strings_input_146_data);

    StringsInput147Init(&me->strings_input_147_data);

    StringsInput148Init(&me->strings_input_148_data);

    StringsInput149Init(&me->strings_input_149_data);

    StringsInput150Init(&me->strings_input_150_data);

    StringsInput151Init(&me->strings_input_151_data);

    StringsInput152Init(&me->strings_input_152_data);

    StringsInput153Init(&me->strings_input_153_data);

    StringsInput154Init(&me->strings_input_154_data);

    StringsInput155Init(&me->strings_input_155_data);

    StringsInput156Init(&me->strings_input_156_data);

    StringsInput157Init(&me->strings_input_157_data);

    StringsInput158Init(&me->strings_input_158_data);

    StringsInput159Init(&me->strings_input_159_data);

    StringsInput160Init(&me->strings_input_160_data);

    StringsInput161Init(&me->strings_input_161_data);

    StringsInput162Init(&me->strings_input_162_data);

    StringsInput163Init(&me->strings_input_163_data);

    StringsInput164Init(&me->strings_input_164_data);

    StringsInput165Init(&me->strings_input_165_data);

    StringsInput166Init(&me->strings_input_166_data);

    StringsInput167Init(&me->strings_input_167_data);

    StringsInput168Init(&me->strings_input_168_data);

    StringsInput169Init(&me->strings_input_169_data);

    StringsInput170Init(&me->strings_input_170_data);

    StringsInput171Init(&me->strings_input_171_data);

    StringsInput172Init(&me->strings_input_172_data);

    StringsInput173Init(&me->strings_input_173_data);

    StringsInput174Init(&me->strings_input_174_data);

    StringsInput175Init(&me->strings_input_175_data);

    StringsInput176Init(&me->strings_input_176_data);

    StringsInput177Init(&me->strings_input_177_data);

    StringsInput178Init(&me->strings_input_178_data);

    StringsInput179Init(&me->strings_input_179_data);

    StringsInput180Init(&me->strings_input_180_data);

    StringsInput181Init(&me->strings_input_181_data);

    StringsInput182Init(&me->strings_input_182_data);

    StringsInput183Init(&me->strings_input_183_data);

    StringsInput184Init(&me->strings_input_184_data);

    StringsInput185Init(&me->strings_input_185_data);

    StringsInput186Init(&me->strings_input_186_data);

    StringsInput187Init(&me->strings_input_187_data);

    StringsInput188Init(&me->strings_input_188_data);

    StringsInput189Init(&me->strings_input_189_data);

    StringsInput190Init(&me->strings_input_190_data);

    StringsInput191Init(&me->strings_input_191_data);

    StringsInput192Init(&me->strings_input_192_data);

    StringsInput193Init(&me->strings_input_193_data);

    StringsInput194Init(&me->strings_input_194_data);

    StringsInput195Init(&me->strings_input_195_data);

    StringsInput196Init(&me->strings_input_196_data);

    StringsInput197Init(&me->strings_input_197_data);

    StringsInput198Init(&me->strings_input_198_data);

    StringsInput199Init(&me->strings_input_199_data);

    StringsConnSynapse0Init(&me->strings_conn_synapse0_data);

    StringsConnSynapse1Init(&me->strings_conn_synapse1_data);

    StringsConnSynapse2Init(&me->strings_conn_synapse2_data);

    StringsConnSynapse3Init(&me->strings_conn_synapse3_data);

    StringsConnSynapse4Init(&me->strings_conn_synapse4_data);

    StringsConnSynapse5Init(&me->strings_conn_synapse5_data);

    StringsConnSynapse6Init(&me->strings_conn_synapse6_data);

    StringsConnSynapse7Init(&me->strings_conn_synapse7_data);

    StringsConnSynapse8Init(&me->strings_conn_synapse8_data);

    StringsConnSynapse9Init(&me->strings_conn_synapse9_data);

    StringsConnSynapse10Init(&me->strings_conn_synapse10_data);

    StringsConnSynapse11Init(&me->strings_conn_synapse11_data);

    StringsConnSynapse12Init(&me->strings_conn_synapse12_data);

    StringsConnSynapse13Init(&me->strings_conn_synapse13_data);

    StringsConnSynapse14Init(&me->strings_conn_synapse14_data);

    StringsConnSynapse15Init(&me->strings_conn_synapse15_data);

    StringsConnSynapse16Init(&me->strings_conn_synapse16_data);

    StringsConnSynapse17Init(&me->strings_conn_synapse17_data);

    StringsConnSynapse18Init(&me->strings_conn_synapse18_data);

    StringsConnSynapse19Init(&me->strings_conn_synapse19_data);

    StringsConnSynapse20Init(&me->strings_conn_synapse20_data);

    StringsConnSynapse21Init(&me->strings_conn_synapse21_data);

    StringsConnSynapse22Init(&me->strings_conn_synapse22_data);

    StringsConnSynapse23Init(&me->strings_conn_synapse23_data);

    StringsConnSynapse24Init(&me->strings_conn_synapse24_data);

    StringsConnSynapse25Init(&me->strings_conn_synapse25_data);

    StringsConnSynapse26Init(&me->strings_conn_synapse26_data);

    StringsConnSynapse27Init(&me->strings_conn_synapse27_data);

    StringsConnSynapse28Init(&me->strings_conn_synapse28_data);

    StringsConnSynapse29Init(&me->strings_conn_synapse29_data);

    StringsConnSynapse30Init(&me->strings_conn_synapse30_data);

    StringsConnSynapse31Init(&me->strings_conn_synapse31_data);

    StringsConnSynapse32Init(&me->strings_conn_synapse32_data);

    StringsConnSynapse33Init(&me->strings_conn_synapse33_data);

    StringsConnSynapse34Init(&me->strings_conn_synapse34_data);

    StringsConnSynapse35Init(&me->strings_conn_synapse35_data);

    StringsConnSynapse36Init(&me->strings_conn_synapse36_data);

    StringsConnSynapse37Init(&me->strings_conn_synapse37_data);

    StringsConnSynapse38Init(&me->strings_conn_synapse38_data);

    StringsConnSynapse39Init(&me->strings_conn_synapse39_data);

    StringsConnSynapse40Init(&me->strings_conn_synapse40_data);

    StringsConnSynapse41Init(&me->strings_conn_synapse41_data);

    StringsConnSynapse42Init(&me->strings_conn_synapse42_data);

    StringsConnSynapse43Init(&me->strings_conn_synapse43_data);

    StringsConnSynapse44Init(&me->strings_conn_synapse44_data);

    StringsConnSynapse45Init(&me->strings_conn_synapse45_data);

    StringsConnSynapse46Init(&me->strings_conn_synapse46_data);

    StringsConnSynapse47Init(&me->strings_conn_synapse47_data);

    StringsConnSynapse48Init(&me->strings_conn_synapse48_data);

    StringsConnSynapse49Init(&me->strings_conn_synapse49_data);

    StringsConnSynapse50Init(&me->strings_conn_synapse50_data);

    StringsConnSynapse51Init(&me->strings_conn_synapse51_data);

    StringsConnSynapse52Init(&me->strings_conn_synapse52_data);

    StringsConnSynapse53Init(&me->strings_conn_synapse53_data);

    StringsConnSynapse54Init(&me->strings_conn_synapse54_data);

    StringsConnSynapse55Init(&me->strings_conn_synapse55_data);

    StringsConnSynapse56Init(&me->strings_conn_synapse56_data);

    StringsConnSynapse57Init(&me->strings_conn_synapse57_data);

    StringsConnSynapse58Init(&me->strings_conn_synapse58_data);

    StringsConnSynapse59Init(&me->strings_conn_synapse59_data);

    StringsConnSynapse60Init(&me->strings_conn_synapse60_data);

    StringsConnSynapse61Init(&me->strings_conn_synapse61_data);

    StringsConnSynapse62Init(&me->strings_conn_synapse62_data);

    StringsConnSynapse63Init(&me->strings_conn_synapse63_data);

    StringsConnSynapse64Init(&me->strings_conn_synapse64_data);

    StringsConnSynapse65Init(&me->strings_conn_synapse65_data);

    StringsConnSynapse66Init(&me->strings_conn_synapse66_data);

    StringsConnSynapse67Init(&me->strings_conn_synapse67_data);

    StringsConnSynapse68Init(&me->strings_conn_synapse68_data);

    StringsConnSynapse69Init(&me->strings_conn_synapse69_data);

    StringsConnSynapse70Init(&me->strings_conn_synapse70_data);

    StringsConnSynapse71Init(&me->strings_conn_synapse71_data);

    StringsConnSynapse72Init(&me->strings_conn_synapse72_data);

    StringsConnSynapse73Init(&me->strings_conn_synapse73_data);

    StringsConnSynapse74Init(&me->strings_conn_synapse74_data);

    StringsConnSynapse75Init(&me->strings_conn_synapse75_data);

    StringsConnSynapse76Init(&me->strings_conn_synapse76_data);

    StringsConnSynapse77Init(&me->strings_conn_synapse77_data);

    StringsConnSynapse78Init(&me->strings_conn_synapse78_data);

    StringsConnSynapse79Init(&me->strings_conn_synapse79_data);

    StringsConnSynapse80Init(&me->strings_conn_synapse80_data);

    StringsConnSynapse81Init(&me->strings_conn_synapse81_data);

    StringsConnSynapse82Init(&me->strings_conn_synapse82_data);

    StringsConnSynapse83Init(&me->strings_conn_synapse83_data);

    StringsConnSynapse84Init(&me->strings_conn_synapse84_data);

    StringsConnSynapse85Init(&me->strings_conn_synapse85_data);

    StringsConnSynapse86Init(&me->strings_conn_synapse86_data);

    StringsConnSynapse87Init(&me->strings_conn_synapse87_data);

    StringsConnSynapse88Init(&me->strings_conn_synapse88_data);

    StringsConnSynapse89Init(&me->strings_conn_synapse89_data);

    StringsConnSynapse90Init(&me->strings_conn_synapse90_data);

    StringsConnSynapse91Init(&me->strings_conn_synapse91_data);

    StringsConnSynapse92Init(&me->strings_conn_synapse92_data);

    StringsConnSynapse93Init(&me->strings_conn_synapse93_data);

    StringsConnSynapse94Init(&me->strings_conn_synapse94_data);

    StringsConnSynapse95Init(&me->strings_conn_synapse95_data);

    StringsConnSynapse96Init(&me->strings_conn_synapse96_data);

    StringsConnSynapse97Init(&me->strings_conn_synapse97_data);

    StringsConnSynapse98Init(&me->strings_conn_synapse98_data);

    StringsConnSynapse99Init(&me->strings_conn_synapse99_data);

    StringsConnSynapse100Init(&me->strings_conn_synapse100_data);

    StringsConnSynapse101Init(&me->strings_conn_synapse101_data);

    StringsConnSynapse102Init(&me->strings_conn_synapse102_data);

    StringsConnSynapse103Init(&me->strings_conn_synapse103_data);

    StringsConnSynapse104Init(&me->strings_conn_synapse104_data);

    StringsConnSynapse105Init(&me->strings_conn_synapse105_data);

    StringsConnSynapse106Init(&me->strings_conn_synapse106_data);

    StringsConnSynapse107Init(&me->strings_conn_synapse107_data);

    StringsConnSynapse108Init(&me->strings_conn_synapse108_data);

    StringsConnSynapse109Init(&me->strings_conn_synapse109_data);

    StringsConnSynapse110Init(&me->strings_conn_synapse110_data);

    StringsConnSynapse111Init(&me->strings_conn_synapse111_data);

    StringsConnSynapse112Init(&me->strings_conn_synapse112_data);

    StringsConnSynapse113Init(&me->strings_conn_synapse113_data);

    StringsConnSynapse114Init(&me->strings_conn_synapse114_data);

    StringsConnSynapse115Init(&me->strings_conn_synapse115_data);

    StringsConnSynapse116Init(&me->strings_conn_synapse116_data);

    StringsConnSynapse117Init(&me->strings_conn_synapse117_data);

    StringsConnSynapse118Init(&me->strings_conn_synapse118_data);

    StringsConnSynapse119Init(&me->strings_conn_synapse119_data);

    StringsConnSynapse120Init(&me->strings_conn_synapse120_data);

    StringsConnSynapse121Init(&me->strings_conn_synapse121_data);

    StringsConnSynapse122Init(&me->strings_conn_synapse122_data);

    StringsConnSynapse123Init(&me->strings_conn_synapse123_data);

    StringsConnSynapse124Init(&me->strings_conn_synapse124_data);

    StringsConnSynapse125Init(&me->strings_conn_synapse125_data);

    StringsConnSynapse126Init(&me->strings_conn_synapse126_data);

    StringsConnSynapse127Init(&me->strings_conn_synapse127_data);

    StringsConnSynapse128Init(&me->strings_conn_synapse128_data);

    StringsConnSynapse129Init(&me->strings_conn_synapse129_data);

    StringsConnSynapse130Init(&me->strings_conn_synapse130_data);

    StringsConnSynapse131Init(&me->strings_conn_synapse131_data);

    StringsConnSynapse132Init(&me->strings_conn_synapse132_data);

    StringsConnSynapse133Init(&me->strings_conn_synapse133_data);

    StringsConnSynapse134Init(&me->strings_conn_synapse134_data);

    StringsConnSynapse135Init(&me->strings_conn_synapse135_data);

    StringsConnSynapse136Init(&me->strings_conn_synapse136_data);

    StringsConnSynapse137Init(&me->strings_conn_synapse137_data);

    StringsConnSynapse138Init(&me->strings_conn_synapse138_data);

    StringsConnSynapse139Init(&me->strings_conn_synapse139_data);

    StringsConnSynapse140Init(&me->strings_conn_synapse140_data);

    StringsConnSynapse141Init(&me->strings_conn_synapse141_data);

    StringsConnSynapse142Init(&me->strings_conn_synapse142_data);

    StringsConnSynapse143Init(&me->strings_conn_synapse143_data);

    StringsConnSynapse144Init(&me->strings_conn_synapse144_data);

    StringsConnSynapse145Init(&me->strings_conn_synapse145_data);

    StringsConnSynapse146Init(&me->strings_conn_synapse146_data);

    StringsConnSynapse147Init(&me->strings_conn_synapse147_data);

    StringsConnSynapse148Init(&me->strings_conn_synapse148_data);

    StringsConnSynapse149Init(&me->strings_conn_synapse149_data);

    StringsConnSynapse150Init(&me->strings_conn_synapse150_data);

    StringsConnSynapse151Init(&me->strings_conn_synapse151_data);

    StringsConnSynapse152Init(&me->strings_conn_synapse152_data);

    StringsConnSynapse153Init(&me->strings_conn_synapse153_data);

    StringsConnSynapse154Init(&me->strings_conn_synapse154_data);

    StringsConnSynapse155Init(&me->strings_conn_synapse155_data);

    StringsConnSynapse156Init(&me->strings_conn_synapse156_data);

    StringsConnSynapse157Init(&me->strings_conn_synapse157_data);

    StringsConnSynapse158Init(&me->strings_conn_synapse158_data);

    StringsConnSynapse159Init(&me->strings_conn_synapse159_data);

    StringsConnSynapse160Init(&me->strings_conn_synapse160_data);

    StringsConnSynapse161Init(&me->strings_conn_synapse161_data);

    StringsConnSynapse162Init(&me->strings_conn_synapse162_data);

    StringsConnSynapse163Init(&me->strings_conn_synapse163_data);

    StringsConnSynapse164Init(&me->strings_conn_synapse164_data);

    StringsConnSynapse165Init(&me->strings_conn_synapse165_data);

    StringsConnSynapse166Init(&me->strings_conn_synapse166_data);

    StringsConnSynapse167Init(&me->strings_conn_synapse167_data);

    StringsConnSynapse168Init(&me->strings_conn_synapse168_data);

    StringsConnSynapse169Init(&me->strings_conn_synapse169_data);

    StringsConnSynapse170Init(&me->strings_conn_synapse170_data);

    StringsConnSynapse171Init(&me->strings_conn_synapse171_data);

    StringsConnSynapse172Init(&me->strings_conn_synapse172_data);

    StringsConnSynapse173Init(&me->strings_conn_synapse173_data);

    StringsConnSynapse174Init(&me->strings_conn_synapse174_data);

    StringsConnSynapse175Init(&me->strings_conn_synapse175_data);

    StringsConnSynapse176Init(&me->strings_conn_synapse176_data);

    StringsConnSynapse177Init(&me->strings_conn_synapse177_data);

    StringsConnSynapse178Init(&me->strings_conn_synapse178_data);

    StringsConnSynapse179Init(&me->strings_conn_synapse179_data);

    StringsConnSynapse180Init(&me->strings_conn_synapse180_data);

    StringsConnSynapse181Init(&me->strings_conn_synapse181_data);

    StringsConnSynapse182Init(&me->strings_conn_synapse182_data);

    StringsConnSynapse183Init(&me->strings_conn_synapse183_data);

    StringsConnSynapse184Init(&me->strings_conn_synapse184_data);

    StringsConnSynapse185Init(&me->strings_conn_synapse185_data);

    StringsConnSynapse186Init(&me->strings_conn_synapse186_data);

    StringsConnSynapse187Init(&me->strings_conn_synapse187_data);

    StringsConnSynapse188Init(&me->strings_conn_synapse188_data);

    StringsConnSynapse189Init(&me->strings_conn_synapse189_data);

    StringsConnSynapse190Init(&me->strings_conn_synapse190_data);

    StringsConnSynapse191Init(&me->strings_conn_synapse191_data);

    StringsConnSynapse192Init(&me->strings_conn_synapse192_data);

    StringsConnSynapse193Init(&me->strings_conn_synapse193_data);

    StringsConnSynapse194Init(&me->strings_conn_synapse194_data);

    StringsConnSynapse195Init(&me->strings_conn_synapse195_data);

    StringsConnSynapse196Init(&me->strings_conn_synapse196_data);

    StringsConnSynapse197Init(&me->strings_conn_synapse197_data);

    StringsConnSynapse198Init(&me->strings_conn_synapse198_data);

    StringsConnSynapse199Init(&me->strings_conn_synapse199_data);

    // Initialise Outputs
    me->strings_0_out = 0.0 + me->strings_conn_synapse0_data.out * -2.859992067011085E-4 + me->strings_conn_synapse1_data.out * -0.0068060539524811125 + me->strings_conn_synapse2_data.out * -0.007949579433841251 + me->strings_conn_synapse3_data.out * 2.3577193407062224E-6 + me->strings_conn_synapse4_data.out * 0.0023173497144223718 + me->strings_conn_synapse5_data.out * 0.01963089428003146 + me->strings_conn_synapse6_data.out * 2.9071501599171943E-4 + me->strings_conn_synapse7_data.out * -0.005350775859979664 + me->strings_conn_synapse8_data.out * 0.006058131680592072 + me->strings_conn_synapse9_data.out * 0.003173909336423002 + me->strings_conn_synapse10_data.out * 5.012528377115753E-4 + me->strings_conn_synapse11_data.out * 3.272540115498824E-5 + me->strings_conn_synapse12_data.out * 0.0023352120696076683 + me->strings_conn_synapse13_data.out * 1.7301084980118642E-4 + me->strings_conn_synapse14_data.out * 8.346595660011371E-5 + me->strings_conn_synapse15_data.out * -3.584973167179009E-5 + me->strings_conn_synapse16_data.out * 0.004009907979672529 + me->strings_conn_synapse17_data.out * -9.904956984963E-4 + me->strings_conn_synapse18_data.out * -0.0013412429152786234 + me->strings_conn_synapse19_data.out * 4.907195916918119E-4 + me->strings_conn_synapse20_data.out * 7.271637702862235E-4 + me->strings_conn_synapse21_data.out * 5.624023336583149E-4 + me->strings_conn_synapse22_data.out * 0.00679248549594054 + me->strings_conn_synapse23_data.out * 7.898972964193495E-5 + me->strings_conn_synapse24_data.out * -0.002134089839375542 + me->strings_conn_synapse25_data.out * 0.0031910469370865957 + me->strings_conn_synapse26_data.out * -4.3041872743661687E-4 + me->strings_conn_synapse27_data.out * 0.0024840507316847868 + me->strings_conn_synapse28_data.out * 1.0696493857307428E-4 + me->strings_conn_synapse29_data.out * -0.010504925764557676 + me->strings_conn_synapse30_data.out * 0.0012109976610496034 + me->strings_conn_synapse31_data.out * 3.9117364179056414E-4 + me->strings_conn_synapse32_data.out * -0.0052659970706052835 + me->strings_conn_synapse33_data.out * -6.183964150297764E-5 + me->strings_conn_synapse34_data.out * 3.9514461279741654E-4 + me->strings_conn_synapse35_data.out * 0.0029295454348656435 + me->strings_conn_synapse36_data.out * 3.6068562545699356E-4 + me->strings_conn_synapse37_data.out * 9.859394198335892E-4 + me->strings_conn_synapse38_data.out * -9.582107477479603E-4 + me->strings_conn_synapse39_data.out * 0.0012946451773838818 + me->strings_conn_synapse40_data.out * 0.0038177223471341643 + me->strings_conn_synapse41_data.out * -1.0665906139447953E-5 + me->strings_conn_synapse42_data.out * 0.001615411083966312 + me->strings_conn_synapse43_data.out * 0.0017977177108712877 + me->strings_conn_synapse44_data.out * -0.006999158695189573 + me->strings_conn_synapse45_data.out * 7.277646946347162E-5 + me->strings_conn_synapse46_data.out * -5.853718634312897E-4 + me->strings_conn_synapse47_data.out * -0.0015321627425677815 + me->strings_conn_synapse48_data.out * 0.0012313462022645655 + me->strings_conn_synapse49_data.out * 0.009052062326804758 + me->strings_conn_synapse50_data.out * 4.5556015137910796E-4 + me->strings_conn_synapse51_data.out * 7.60517254370341E-4 + me->strings_conn_synapse52_data.out * 4.5684436324083046E-4 + me->strings_conn_synapse53_data.out * 0.00139193966129547 + me->strings_conn_synapse54_data.out * -0.0032979492997198675 + me->strings_conn_synapse55_data.out * 0.0016183534149115735 + me->strings_conn_synapse56_data.out * 3.470247622222814E-5 + me->strings_conn_synapse57_data.out * 0.0027704344841093407 + me->strings_conn_synapse58_data.out * 0.007018459930949658 + me->strings_conn_synapse59_data.out * 0.009395255515322314 + me->strings_conn_synapse60_data.out * -0.004394969925502461 + me->strings_conn_synapse61_data.out * 1.0386714772495252E-4 + me->strings_conn_synapse62_data.out * 0.02267898264774523 + me->strings_conn_synapse63_data.out * 0.009590202140352623 + me->strings_conn_synapse64_data.out * 0.0010199064964799766 + me->strings_conn_synapse65_data.out * -4.6726406549113315E-6 + me->strings_conn_synapse66_data.out * -3.230542326719233E-5 + me->strings_conn_synapse67_data.out * -5.60966522383917E-5 + me->strings_conn_synapse68_data.out * -1.0894563119069071E-5 + me->strings_conn_synapse69_data.out * -4.134546417027677E-5 + me->strings_conn_synapse70_data.out * 2.3428040407568957E-5 + me->strings_conn_synapse71_data.out * -1.343497494481971E-4 + me->strings_conn_synapse72_data.out * 1.6991894059651715E-5 + me->strings_conn_synapse73_data.out * 0.0018480086002990088 + me->strings_conn_synapse74_data.out * -3.62688669470299E-4 + me->strings_conn_synapse75_data.out * 0.001072927072887937 + me->strings_conn_synapse76_data.out * 0.005956387569211814 + me->strings_conn_synapse77_data.out * 3.333791945224883E-5 + me->strings_conn_synapse78_data.out * 3.036826223817399E-5 + me->strings_conn_synapse79_data.out * 2.3937351910931485E-5 + me->strings_conn_synapse80_data.out * 2.1572228269774915E-5 + me->strings_conn_synapse81_data.out * 0.004052419706457421 + me->strings_conn_synapse82_data.out * -0.0014786157188182159 + me->strings_conn_synapse83_data.out * 2.541183563499893E-5 + me->strings_conn_synapse84_data.out * 0.0011834826139249563 + me->strings_conn_synapse85_data.out * -0.005963727961160849 + me->strings_conn_synapse86_data.out * 0.001041443829549551 + me->strings_conn_synapse87_data.out * -0.003434446702147942 + me->strings_conn_synapse88_data.out * -2.0503105534968836E-5 + me->strings_conn_synapse89_data.out * 1.1367210933805074E-4 + me->strings_conn_synapse90_data.out * 0.002288661799010584 + me->strings_conn_synapse91_data.out * 0.011740345114434086 + me->strings_conn_synapse92_data.out * -6.11044463447622E-4 + me->strings_conn_synapse93_data.out * 3.831198776511923E-5 + me->strings_conn_synapse94_data.out * 0.004225506950295534 + me->strings_conn_synapse95_data.out * 3.9644125859367976E-4 + me->strings_conn_synapse96_data.out * -0.01772788989169234 + me->strings_conn_synapse97_data.out * 7.631447727088572E-4 + me->strings_conn_synapse98_data.out * -8.254409811894243E-5 + me->strings_conn_synapse99_data.out * 1.534186008459753E-4 + me->strings_conn_synapse100_data.out * 0.0014831229501676014 + me->strings_conn_synapse101_data.out * 1.3877756479982025E-4 + me->strings_conn_synapse102_data.out * -0.009830620184672848 + me->strings_conn_synapse103_data.out * -1.912993651474127E-4 + me->strings_conn_synapse104_data.out * -0.001018761378231427 + me->strings_conn_synapse105_data.out * 7.56951035245185E-4 + me->strings_conn_synapse106_data.out * 0.0012029680166955492 + me->strings_conn_synapse107_data.out * 3.290668271080822E-4 + me->strings_conn_synapse108_data.out * 2.768384463991946E-4 + me->strings_conn_synapse109_data.out * 0.0012563060708304392 + me->strings_conn_synapse110_data.out * 0.008016409480470197 + me->strings_conn_synapse111_data.out * 6.492247299132137E-5 + me->strings_conn_synapse112_data.out * -0.0033754859779661353 + me->strings_conn_synapse113_data.out * 0.0019576813889537574 + me->strings_conn_synapse114_data.out * -1.1790206670421352E-4 + me->strings_conn_synapse115_data.out * -0.016822247778208493 + me->strings_conn_synapse116_data.out * -3.5057573007346324E-5 + me->strings_conn_synapse117_data.out * 6.678163379895329E-4 + me->strings_conn_synapse118_data.out * -0.0032645338938574768 + me->strings_conn_synapse119_data.out * 0.0012024422578932042 + me->strings_conn_synapse120_data.out * 0.004344046795238145 + me->strings_conn_synapse121_data.out * -6.427260724073921E-6 + me->strings_conn_synapse122_data.out * 0.007874298744847458 + me->strings_conn_synapse123_data.out * -3.579967266426732E-5 + me->strings_conn_synapse124_data.out * 2.350269231857612E-5 + me->strings_conn_synapse125_data.out * 0.0033826714858904527 + me->strings_conn_synapse126_data.out * 6.030549696396628E-5 + me->strings_conn_synapse127_data.out * 0.010348029541009945 + me->strings_conn_synapse128_data.out * -2.6601566275166565E-4 + me->strings_conn_synapse129_data.out * 2.6144581367777967E-5 + me->strings_conn_synapse130_data.out * 3.3496758315194083E-4 + me->strings_conn_synapse131_data.out * 5.492433445170866E-4 + me->strings_conn_synapse132_data.out * 1.6451244172935672E-4 + me->strings_conn_synapse133_data.out * 0.0012536776293687031 + me->strings_conn_synapse134_data.out * 0.004348972601052794 + me->strings_conn_synapse135_data.out * 0.00537515120571415 + me->strings_conn_synapse136_data.out * -1.1892106536076862E-4 + me->strings_conn_synapse137_data.out * -6.347105097089502E-4 + me->strings_conn_synapse138_data.out * -5.2502788737046616E-5 + me->strings_conn_synapse139_data.out * 0.001012927336355483 + me->strings_conn_synapse140_data.out * 8.160505938972324E-5 + me->strings_conn_synapse141_data.out * 8.528376904500897E-5 + me->strings_conn_synapse142_data.out * 2.6037343787973415E-4 + me->strings_conn_synapse143_data.out * -0.006333701263551044 + me->strings_conn_synapse144_data.out * -4.532669627905533E-5 + me->strings_conn_synapse145_data.out * 0.003165615848661026 + me->strings_conn_synapse146_data.out * 0.0012331027707511105 + me->strings_conn_synapse147_data.out * 9.695372711537753E-5 + me->strings_conn_synapse148_data.out * 0.006878842189657728 + me->strings_conn_synapse149_data.out * 9.011987086346746E-4 + me->strings_conn_synapse150_data.out * -0.0031825007570481373 + me->strings_conn_synapse151_data.out * 1.6172610650725934E-4 + me->strings_conn_synapse152_data.out * -0.0049726652076414884 + me->strings_conn_synapse153_data.out * -3.425088870544868E-4 + me->strings_conn_synapse154_data.out * 4.8816687004892467E-4 + me->strings_conn_synapse155_data.out * 0.002744762562360715 + me->strings_conn_synapse156_data.out * 3.794489658087864E-5 + me->strings_conn_synapse157_data.out * 3.5578485612991155E-5 + me->strings_conn_synapse158_data.out * 0.0028746139339282336 + me->strings_conn_synapse159_data.out * -0.0027106375347173577 + me->strings_conn_synapse160_data.out * 0.0012659988705237956 + me->strings_conn_synapse161_data.out * 6.506971142831652E-4 + me->strings_conn_synapse162_data.out * 6.342964442060345E-6 + me->strings_conn_synapse163_data.out * -0.003759385432712532 + me->strings_conn_synapse164_data.out * -3.6645178489639154E-4 + me->strings_conn_synapse165_data.out * 6.188204011752857E-4 + me->strings_conn_synapse166_data.out * 5.225117502083182E-4 + me->strings_conn_synapse167_data.out * -8.360816139068714E-5 + me->strings_conn_synapse168_data.out * 5.093855878425824E-4 + me->strings_conn_synapse169_data.out * -0.0032755439794014017 + me->strings_conn_synapse170_data.out * 0.002842088648179421 + me->strings_conn_synapse171_data.out * -9.507345129846027E-4 + me->strings_conn_synapse172_data.out * 9.613022199636215E-5 + me->strings_conn_synapse173_data.out * 0.006843215749887958 + me->strings_conn_synapse174_data.out * 0.004335588316892038 + me->strings_conn_synapse175_data.out * 2.3119484842100977E-5 + me->strings_conn_synapse176_data.out * 8.249364036900499E-5 + me->strings_conn_synapse177_data.out * -0.0054836362567378845 + me->strings_conn_synapse178_data.out * 8.705332360106152E-4 + me->strings_conn_synapse179_data.out * -0.001075894182183367 + me->strings_conn_synapse180_data.out * -5.202673601418833E-5 + me->strings_conn_synapse181_data.out * 0.03985905316732162 + me->strings_conn_synapse182_data.out * -0.007057422593913682 + me->strings_conn_synapse183_data.out * 0.008875158054855913 + me->strings_conn_synapse184_data.out * 1.874236769532788E-4 + me->strings_conn_synapse185_data.out * -6.01132362552606E-4 + me->strings_conn_synapse186_data.out * 0.0052675139523297755 + me->strings_conn_synapse187_data.out * 2.014233584746352E-4 + me->strings_conn_synapse188_data.out * 0.0014284430278506707 + me->strings_conn_synapse189_data.out * 6.99766244407222E-4 + me->strings_conn_synapse190_data.out * 5.36118678379437E-5 + me->strings_conn_synapse191_data.out * 6.289759590435394E-5 + me->strings_conn_synapse192_data.out * 0.001079323709348127 + me->strings_conn_synapse193_data.out * -0.0024878203349980093 + me->strings_conn_synapse194_data.out * 8.100260823381103E-4 + me->strings_conn_synapse195_data.out * 0.001961066661301291 + me->strings_conn_synapse196_data.out * -5.948852441179837E-5 + me->strings_conn_synapse197_data.out * -1.223020064972033E-4 + me->strings_conn_synapse198_data.out * 0.0060807394579362505 + me->strings_conn_synapse199_data.out * 4.482102128301762E-4;
    me->strings_1_out = 0.0 + me->strings_conn_synapse0_data.out * 0.0015965065685758523 + me->strings_conn_synapse1_data.out * 0.005291553460635003 + me->strings_conn_synapse2_data.out * -0.007888976257622745 + me->strings_conn_synapse3_data.out * 8.78362484512242E-5 + me->strings_conn_synapse4_data.out * 3.647416102096407E-4 + me->strings_conn_synapse5_data.out * -7.476851352086142E-4 + me->strings_conn_synapse6_data.out * 5.055561963397542E-4 + me->strings_conn_synapse7_data.out * -0.009112259838640273 + me->strings_conn_synapse8_data.out * 0.0016441108062519773 + me->strings_conn_synapse9_data.out * -1.857305368526721E-4 + me->strings_conn_synapse10_data.out * 0.0010861379720820425 + me->strings_conn_synapse11_data.out * -6.643242692682335E-5 + me->strings_conn_synapse12_data.out * 5.131199762163379E-4 + me->strings_conn_synapse13_data.out * 8.154294957245979E-4 + me->strings_conn_synapse14_data.out * 6.81701775292181E-4 + me->strings_conn_synapse15_data.out * -6.377435425221433E-5 + me->strings_conn_synapse16_data.out * -4.4389927801671006E-5 + me->strings_conn_synapse17_data.out * -0.01282114705854971 + me->strings_conn_synapse18_data.out * 0.010924148617324082 + me->strings_conn_synapse19_data.out * 0.0010770178485648534 + me->strings_conn_synapse20_data.out * 0.0010136367252174126 + me->strings_conn_synapse21_data.out * 0.0010376709086951817 + me->strings_conn_synapse22_data.out * 3.5907777663362744E-4 + me->strings_conn_synapse23_data.out * -4.3348880034982474E-5 + me->strings_conn_synapse24_data.out * 0.005001795167697305 + me->strings_conn_synapse25_data.out * -3.2286832511964266E-4 + me->strings_conn_synapse26_data.out * 5.740681481733936E-4 + me->strings_conn_synapse27_data.out * -0.00496328115548335 + me->strings_conn_synapse28_data.out * 5.756312591742386E-4 + me->strings_conn_synapse29_data.out * 0.007243747054595135 + me->strings_conn_synapse30_data.out * 6.17393735163924E-4 + me->strings_conn_synapse31_data.out * 0.001183254410264897 + me->strings_conn_synapse32_data.out * 0.004454055544533501 + me->strings_conn_synapse33_data.out * -1.6076847551528336E-4 + me->strings_conn_synapse34_data.out * 8.715115678543349E-4 + me->strings_conn_synapse35_data.out * -0.003614040473288057 + me->strings_conn_synapse36_data.out * 0.0010658985478422724 + me->strings_conn_synapse37_data.out * -2.2015665258760136E-4 + me->strings_conn_synapse38_data.out * 0.0016850722091763329 + me->strings_conn_synapse39_data.out * 1.3727510062254697E-5 + me->strings_conn_synapse40_data.out * -0.003245316861818624 + me->strings_conn_synapse41_data.out * 0.0019495161942226997 + me->strings_conn_synapse42_data.out * 0.0017066158410488363 + me->strings_conn_synapse43_data.out * 2.0180598691727964E-4 + me->strings_conn_synapse44_data.out * -0.0023231593403820073 + me->strings_conn_synapse45_data.out * -9.418684493085577E-5 + me->strings_conn_synapse46_data.out * 0.0016090810474327939 + me->strings_conn_synapse47_data.out * 0.0017140861618593676 + me->strings_conn_synapse48_data.out * 0.0012239214406248226 + me->strings_conn_synapse49_data.out * -0.005213562770646409 + me->strings_conn_synapse50_data.out * 0.001290264230974402 + me->strings_conn_synapse51_data.out * 0.001178416430978292 + me->strings_conn_synapse52_data.out * 0.0024831657449566106 + me->strings_conn_synapse53_data.out * -0.003149201738111662 + me->strings_conn_synapse54_data.out * -9.105229094592628E-4 + me->strings_conn_synapse55_data.out * 0.0015717900052312794 + me->strings_conn_synapse56_data.out * 5.871425702151817E-5 + me->strings_conn_synapse57_data.out * 0.005542241196160142 + me->strings_conn_synapse58_data.out * -0.004306659166114419 + me->strings_conn_synapse59_data.out * -0.0011606195515158858 + me->strings_conn_synapse60_data.out * 0.007184881175282624 + me->strings_conn_synapse61_data.out * 5.9363583409213044E-5 + me->strings_conn_synapse62_data.out * -0.010879433302176382 + me->strings_conn_synapse63_data.out * -3.083704879682263E-4 + me->strings_conn_synapse64_data.out * 0.0013989788740768297 + me->strings_conn_synapse65_data.out * -1.5476875829885346E-4 + me->strings_conn_synapse66_data.out * -3.963549563502561E-5 + me->strings_conn_synapse67_data.out * -2.2687255889238667E-5 + me->strings_conn_synapse68_data.out * 0.004462833952185053 + me->strings_conn_synapse69_data.out * -2.5940963760227852E-5 + me->strings_conn_synapse70_data.out * 7.147868271874918E-5 + me->strings_conn_synapse71_data.out * 4.9988663385570865E-5 + me->strings_conn_synapse72_data.out * -7.932996021240206E-5 + me->strings_conn_synapse73_data.out * 1.2687505560476359E-4 + me->strings_conn_synapse74_data.out * 5.511762188314537E-4 + me->strings_conn_synapse75_data.out * -8.867825431666395E-5 + me->strings_conn_synapse76_data.out * -0.003903340248150216 + me->strings_conn_synapse77_data.out * -1.4377720719348873E-4 + me->strings_conn_synapse78_data.out * 7.55755814602485E-5 + me->strings_conn_synapse79_data.out * 5.4145794408927154E-5 + me->strings_conn_synapse80_data.out * -1.1420421887344954E-4 + me->strings_conn_synapse81_data.out * 7.847307881064974E-4 + me->strings_conn_synapse82_data.out * 0.001400041506756926 + me->strings_conn_synapse83_data.out * 1.527739475428135E-5 + me->strings_conn_synapse84_data.out * 0.0012777095008360982 + me->strings_conn_synapse85_data.out * 0.016663714424779267 + me->strings_conn_synapse86_data.out * 0.0020183051867738535 + me->strings_conn_synapse87_data.out * -3.849387074211626E-4 + me->strings_conn_synapse88_data.out * -3.653407948984928E-5 + me->strings_conn_synapse89_data.out * 0.002722262265425661 + me->strings_conn_synapse90_data.out * -5.335641563471469E-5 + me->strings_conn_synapse91_data.out * -0.005344051665259254 + me->strings_conn_synapse92_data.out * 0.0016331102489222506 + me->strings_conn_synapse93_data.out * 8.528651185344145E-5 + me->strings_conn_synapse94_data.out * 0.008150297857774507 + me->strings_conn_synapse95_data.out * 0.00388586244745512 + me->strings_conn_synapse96_data.out * 0.025452861925510786 + me->strings_conn_synapse97_data.out * 0.001210490527456521 + me->strings_conn_synapse98_data.out * -3.2383438752801036E-5 + me->strings_conn_synapse99_data.out * -3.960833533998869E-5 + me->strings_conn_synapse100_data.out * -0.002303009729901336 + me->strings_conn_synapse101_data.out * 0.0017127378985973515 + me->strings_conn_synapse102_data.out * 0.004865720643073665 + me->strings_conn_synapse103_data.out * -1.2013690970071064E-4 + me->strings_conn_synapse104_data.out * 0.002104376214133036 + me->strings_conn_synapse105_data.out * -7.30386240619967E-4 + me->strings_conn_synapse106_data.out * -2.2578252721447008E-4 + me->strings_conn_synapse107_data.out * 7.097049003352257E-4 + me->strings_conn_synapse108_data.out * 0.0014356649130180714 + me->strings_conn_synapse109_data.out * 0.0016316047875886233 + me->strings_conn_synapse110_data.out * 0.0022596404921485435 + me->strings_conn_synapse111_data.out * 5.361527281282775E-5 + me->strings_conn_synapse112_data.out * 0.002600628594213321 + me->strings_conn_synapse113_data.out * 7.565134404556174E-4 + me->strings_conn_synapse114_data.out * -2.3197078296398287E-5 + me->strings_conn_synapse115_data.out * -0.004308828882475638 + me->strings_conn_synapse116_data.out * 2.828406002806619E-5 + me->strings_conn_synapse117_data.out * -0.001182532517155164 + me->strings_conn_synapse118_data.out * -0.011839101310055201 + me->strings_conn_synapse119_data.out * 0.001110344924200334 + me->strings_conn_synapse120_data.out * 0.0019691416468140487 + me->strings_conn_synapse121_data.out * -6.418304555001972E-5 + me->strings_conn_synapse122_data.out * -0.01047657336105707 + me->strings_conn_synapse123_data.out * -2.804518868066426E-5 + me->strings_conn_synapse124_data.out * 3.024773586263003E-5 + me->strings_conn_synapse125_data.out * -7.255224155443029E-5 + me->strings_conn_synapse126_data.out * 4.496678766474698E-5 + me->strings_conn_synapse127_data.out * 0.0046615167275483186 + me->strings_conn_synapse128_data.out * -3.497923089019264E-4 + me->strings_conn_synapse129_data.out * 0.0011146057026362698 + me->strings_conn_synapse130_data.out * 0.0013856889429524413 + me->strings_conn_synapse131_data.out * 9.58154696537024E-4 + me->strings_conn_synapse132_data.out * 0.003606735856389757 + me->strings_conn_synapse133_data.out * 0.0010165586582283673 + me->strings_conn_synapse134_data.out * 0.011241809696359586 + me->strings_conn_synapse135_data.out * -5.940415930111904E-4 + me->strings_conn_synapse136_data.out * -2.4213952862503287E-5 + me->strings_conn_synapse137_data.out * 9.309698241975162E-4 + me->strings_conn_synapse138_data.out * -3.799463613721867E-5 + me->strings_conn_synapse139_data.out * 0.0018926400637295179 + me->strings_conn_synapse140_data.out * 7.178142638475585E-5 + me->strings_conn_synapse141_data.out * 1.3249410721302786E-5 + me->strings_conn_synapse142_data.out * 9.400021155855086E-4 + me->strings_conn_synapse143_data.out * -8.07622758757634E-4 + me->strings_conn_synapse144_data.out * 3.133797825533141E-5 + me->strings_conn_synapse145_data.out * -0.0017346337184820514 + me->strings_conn_synapse146_data.out * 0.0020124777162166497 + me->strings_conn_synapse147_data.out * 1.1906525619908476E-5 + me->strings_conn_synapse148_data.out * -0.002273486648735628 + me->strings_conn_synapse149_data.out * 7.557496699518275E-4 + me->strings_conn_synapse150_data.out * 0.00346937845720031 + me->strings_conn_synapse151_data.out * 0.001300830163231876 + me->strings_conn_synapse152_data.out * 0.0022459802324770535 + me->strings_conn_synapse153_data.out * 0.001300595811926448 + me->strings_conn_synapse154_data.out * 0.0016650204058466106 + me->strings_conn_synapse155_data.out * -0.0025994249408565883 + me->strings_conn_synapse156_data.out * -1.9540914111766105E-5 + me->strings_conn_synapse157_data.out * 6.354350170075811E-4 + me->strings_conn_synapse158_data.out * 0.003050732183488209 + me->strings_conn_synapse159_data.out * 0.011248078688012371 + me->strings_conn_synapse160_data.out * 0.001830654152469244 + me->strings_conn_synapse161_data.out * 0.0011516514982316552 + me->strings_conn_synapse162_data.out * -5.891222268076568E-5 + me->strings_conn_synapse163_data.out * 0.0022553810474165224 + me->strings_conn_synapse164_data.out * 0.0031776642034903944 + me->strings_conn_synapse165_data.out * 0.0013208155369951562 + me->strings_conn_synapse166_data.out * 0.0022506714174733737 + me->strings_conn_synapse167_data.out * 7.915519557419987E-4 + me->strings_conn_synapse168_data.out * 5.83440724247456E-4 + me->strings_conn_synapse169_data.out * 0.0018874396665306452 + me->strings_conn_synapse170_data.out * -4.522323892736705E-5 + me->strings_conn_synapse171_data.out * 0.0014950159855653842 + me->strings_conn_synapse172_data.out * 0.0012149878350344843 + me->strings_conn_synapse173_data.out * -3.002143924539147E-4 + me->strings_conn_synapse174_data.out * -0.0017943313074948789 + me->strings_conn_synapse175_data.out * 6.482529134168704E-5 + me->strings_conn_synapse176_data.out * -1.3919211024226633E-4 + me->strings_conn_synapse177_data.out * -1.9878320317165697E-4 + me->strings_conn_synapse178_data.out * 7.759964316221026E-4 + me->strings_conn_synapse179_data.out * 0.0012298425740587344 + me->strings_conn_synapse180_data.out * -8.185432000246559E-5 + me->strings_conn_synapse181_data.out * -0.01686941388678628 + me->strings_conn_synapse182_data.out * -0.002365474799002626 + me->strings_conn_synapse183_data.out * -0.002136486312760377 + me->strings_conn_synapse184_data.out * 7.419344961751724E-4 + me->strings_conn_synapse185_data.out * 0.005855137293630086 + me->strings_conn_synapse186_data.out * -0.004453070152905789 + me->strings_conn_synapse187_data.out * 0.001060806288539706 + me->strings_conn_synapse188_data.out * -0.0017101637547970268 + me->strings_conn_synapse189_data.out * 7.462519529652431E-4 + me->strings_conn_synapse190_data.out * -7.801199433441995E-6 + me->strings_conn_synapse191_data.out * 2.0942674790970382E-5 + me->strings_conn_synapse192_data.out * -1.7172469065706891E-4 + me->strings_conn_synapse193_data.out * -0.005551479730834039 + me->strings_conn_synapse194_data.out * 0.002717178362550318 + me->strings_conn_synapse195_data.out * -0.0012196102496668587 + me->strings_conn_synapse196_data.out * 7.58430988168629E-5 + me->strings_conn_synapse197_data.out * -8.711471238087923E-5 + me->strings_conn_synapse198_data.out * 0.002503651236993189 + me->strings_conn_synapse199_data.out * -0.010800791081433494;
    me->strings_2_out = 0.0 + me->strings_conn_synapse0_data.out * 7.677674885010578E-4 + me->strings_conn_synapse1_data.out * -0.0022548609908664093 + me->strings_conn_synapse2_data.out * 0.00807991319876324 + me->strings_conn_synapse3_data.out * -6.721902559399972E-5 + me->strings_conn_synapse4_data.out * -3.9419551352754586E-4 + me->strings_conn_synapse5_data.out * -0.014401482822965066 + me->strings_conn_synapse6_data.out * 9.971473546493506E-4 + me->strings_conn_synapse7_data.out * 0.01443592626171217 + me->strings_conn_synapse8_data.out * 0.0015943551903050196 + me->strings_conn_synapse9_data.out * -0.00652396005721154 + me->strings_conn_synapse10_data.out * 9.938269813681662E-4 + me->strings_conn_synapse11_data.out * 8.91911840201018E-5 + me->strings_conn_synapse12_data.out * 0.0014038169308846578 + me->strings_conn_synapse13_data.out * 7.131288613728701E-4 + me->strings_conn_synapse14_data.out * 1.9442937283002917E-4 + me->strings_conn_synapse15_data.out * 4.991550439585101E-5 + me->strings_conn_synapse16_data.out * -0.0022663648573977313 + me->strings_conn_synapse17_data.out * 0.012840313537319561 + me->strings_conn_synapse18_data.out * -0.008036917075172016 + me->strings_conn_synapse19_data.out * 0.0019462259427912212 + me->strings_conn_synapse20_data.out * 0.001131757074248063 + me->strings_conn_synapse21_data.out * 4.246225996712352E-4 + me->strings_conn_synapse22_data.out * -0.007211394167242683 + me->strings_conn_synapse23_data.out * 9.019047710745093E-5 + me->strings_conn_synapse24_data.out * -0.0018601631530916838 + me->strings_conn_synapse25_data.out * -0.0010298582283706913 + me->strings_conn_synapse26_data.out * -0.0011886982037670546 + me->strings_conn_synapse27_data.out * 0.012230553433996585 + me->strings_conn_synapse28_data.out * 8.865792635191208E-4 + me->strings_conn_synapse29_data.out * 0.009670744099946104 + me->strings_conn_synapse30_data.out * 0.0015072476115881273 + me->strings_conn_synapse31_data.out * 0.0011303750462646261 + me->strings_conn_synapse32_data.out * -0.00589487480975084 + me->strings_conn_synapse33_data.out * -1.2215091385769702E-4 + me->strings_conn_synapse34_data.out * 6.442852747381943E-4 + me->strings_conn_synapse35_data.out * 9.873372511523609E-5 + me->strings_conn_synapse36_data.out * 4.4419739997774116E-4 + me->strings_conn_synapse37_data.out * 0.0012069009629352768 + me->strings_conn_synapse38_data.out * 0.0025352531174432902 + me->strings_conn_synapse39_data.out * 6.6185899266162E-4 + me->strings_conn_synapse40_data.out * 0.0034451360949363462 + me->strings_conn_synapse41_data.out * -6.383136403234772E-4 + me->strings_conn_synapse42_data.out * 0.0014703809500698616 + me->strings_conn_synapse43_data.out * 0.0020810356940901857 + me->strings_conn_synapse44_data.out * 0.012325032301893194 + me->strings_conn_synapse45_data.out * -1.0686843450824311E-5 + me->strings_conn_synapse46_data.out * 1.6352506846178258E-4 + me->strings_conn_synapse47_data.out * 0.0011340655891961867 + me->strings_conn_synapse48_data.out * 0.0013189771673316393 + me->strings_conn_synapse49_data.out * -0.0022114079328242374 + me->strings_conn_synapse50_data.out * 0.001303255873986301 + me->strings_conn_synapse51_data.out * -0.0010672216881169791 + me->strings_conn_synapse52_data.out * -0.004016810325173916 + me->strings_conn_synapse53_data.out * 0.00251624646019541 + me->strings_conn_synapse54_data.out * -0.004041056734391699 + me->strings_conn_synapse55_data.out * 0.00136573508599843 + me->strings_conn_synapse56_data.out * -9.941003842589645E-6 + me->strings_conn_synapse57_data.out * -0.00855616402390529 + me->strings_conn_synapse58_data.out * -0.0015098035074432785 + me->strings_conn_synapse59_data.out * -0.003371078098687697 + me->strings_conn_synapse60_data.out * 7.051460033577634E-4 + me->strings_conn_synapse61_data.out * -1.0501665096783937E-5 + me->strings_conn_synapse62_data.out * 2.1267005497859886E-4 + me->strings_conn_synapse63_data.out * -0.00599341858260699 + me->strings_conn_synapse64_data.out * 0.0017598055559859976 + me->strings_conn_synapse65_data.out * 8.531875311818435E-5 + me->strings_conn_synapse66_data.out * -7.619871788201129E-5 + me->strings_conn_synapse67_data.out * 1.1444224730877987E-4 + me->strings_conn_synapse68_data.out * 2.734454830313108E-4 + me->strings_conn_synapse69_data.out * 7.778981567999929E-5 + me->strings_conn_synapse70_data.out * -3.3526813506081E-5 + me->strings_conn_synapse71_data.out * 4.166240536575758E-5 + me->strings_conn_synapse72_data.out * -7.587913072155916E-5 + me->strings_conn_synapse73_data.out * -1.9634868920263723E-4 + me->strings_conn_synapse74_data.out * -1.1561479955987552E-4 + me->strings_conn_synapse75_data.out * 6.744813309290892E-4 + me->strings_conn_synapse76_data.out * -0.0018622237734343286 + me->strings_conn_synapse77_data.out * -9.035204654774562E-7 + me->strings_conn_synapse78_data.out * -1.642691476335897E-5 + me->strings_conn_synapse79_data.out * -5.6263843444557036E-5 + me->strings_conn_synapse80_data.out * -3.1590255424335634E-5 + me->strings_conn_synapse81_data.out * 0.0016764545108387818 + me->strings_conn_synapse82_data.out * 0.0020083360724051117 + me->strings_conn_synapse83_data.out * -4.193324595641913E-5 + me->strings_conn_synapse84_data.out * 0.0010168792005130602 + me->strings_conn_synapse85_data.out * -0.0023957090961336854 + me->strings_conn_synapse86_data.out * 4.291852768151125E-4 + me->strings_conn_synapse87_data.out * 0.0020191455166909474 + me->strings_conn_synapse88_data.out * -2.136514341798647E-5 + me->strings_conn_synapse89_data.out * 6.759401299581191E-4 + me->strings_conn_synapse90_data.out * -9.986324949705144E-4 + me->strings_conn_synapse91_data.out * -0.0057665031457643555 + me->strings_conn_synapse92_data.out * 0.0018551590161407833 + me->strings_conn_synapse93_data.out * 1.5083224232131543E-4 + me->strings_conn_synapse94_data.out * -0.00637647508375996 + me->strings_conn_synapse95_data.out * 9.965090446332546E-4 + me->strings_conn_synapse96_data.out * -0.004335230109139557 + me->strings_conn_synapse97_data.out * 0.0013071981373284538 + me->strings_conn_synapse98_data.out * 3.0749090747341964E-6 + me->strings_conn_synapse99_data.out * -1.572006961381614E-4 + me->strings_conn_synapse100_data.out * 0.0018782267785521268 + me->strings_conn_synapse101_data.out * 6.047600111088593E-4 + me->strings_conn_synapse102_data.out * 0.0063918827208069824 + me->strings_conn_synapse103_data.out * 1.8417771107802563E-5 + me->strings_conn_synapse104_data.out * 0.0037544284340623644 + me->strings_conn_synapse105_data.out * 0.0020514460304451704 + me->strings_conn_synapse106_data.out * 9.207021269731458E-4 + me->strings_conn_synapse107_data.out * -3.611540019876471E-5 + me->strings_conn_synapse108_data.out * 0.0012990177485893695 + me->strings_conn_synapse109_data.out * 0.00208607471902853 + me->strings_conn_synapse110_data.out * 0.012527054275376167 + me->strings_conn_synapse111_data.out * 6.62059013582535E-5 + me->strings_conn_synapse112_data.out * -0.0017729837209004503 + me->strings_conn_synapse113_data.out * -2.260555919335257E-4 + me->strings_conn_synapse114_data.out * 2.3645788260214678E-5 + me->strings_conn_synapse115_data.out * 0.02069523933705848 + me->strings_conn_synapse116_data.out * 1.0359232472278946E-4 + me->strings_conn_synapse117_data.out * 5.421084448332945E-4 + me->strings_conn_synapse118_data.out * 0.016357011644280637 + me->strings_conn_synapse119_data.out * 2.6593374584034065E-4 + me->strings_conn_synapse120_data.out * -0.0016844939845728727 + me->strings_conn_synapse121_data.out * -2.0055347686442903E-5 + me->strings_conn_synapse122_data.out * 0.003049859622097482 + me->strings_conn_synapse123_data.out * 5.31089037805018E-5 + me->strings_conn_synapse124_data.out * -1.784274539056408E-5 + me->strings_conn_synapse125_data.out * -0.0016868269038177348 + me->strings_conn_synapse126_data.out * -8.063253705413048E-6 + me->strings_conn_synapse127_data.out * -0.009876914618738209 + me->strings_conn_synapse128_data.out * 0.00605820636694928 + me->strings_conn_synapse129_data.out * 0.002746061997484542 + me->strings_conn_synapse130_data.out * 0.001253037747405007 + me->strings_conn_synapse131_data.out * 7.908856652704817E-4 + me->strings_conn_synapse132_data.out * -0.006150430759672283 + me->strings_conn_synapse133_data.out * 0.001147886686307458 + me->strings_conn_synapse134_data.out * -0.01833974078592324 + me->strings_conn_synapse135_data.out * -0.0020979727496966594 + me->strings_conn_synapse136_data.out * 5.648548770650572E-5 + me->strings_conn_synapse137_data.out * 9.94643604395027E-4 + me->strings_conn_synapse138_data.out * 7.975656813170662E-5 + me->strings_conn_synapse139_data.out * 0.0013233854074767661 + me->strings_conn_synapse140_data.out * 5.272537463274656E-5 + me->strings_conn_synapse141_data.out * 3.438130389781183E-5 + me->strings_conn_synapse142_data.out * 5.850044363230967E-4 + me->strings_conn_synapse143_data.out * 0.0023495029219573224 + me->strings_conn_synapse144_data.out * -5.1168661800348205E-6 + me->strings_conn_synapse145_data.out * 4.8034810321939626E-4 + me->strings_conn_synapse146_data.out * 0.0021635983884623956 + me->strings_conn_synapse147_data.out * 1.3720297093824726E-5 + me->strings_conn_synapse148_data.out * 9.53087588367735E-4 + me->strings_conn_synapse149_data.out * 8.370496437640775E-4 + me->strings_conn_synapse150_data.out * 0.0024250110651934625 + me->strings_conn_synapse151_data.out * 3.871823997765777E-4 + me->strings_conn_synapse152_data.out * -0.0077715251892055345 + me->strings_conn_synapse153_data.out * -6.569169854422417E-5 + me->strings_conn_synapse154_data.out * 9.961593573813497E-4 + me->strings_conn_synapse155_data.out * 0.0013523562450889956 + me->strings_conn_synapse156_data.out * 1.901767302338314E-5 + me->strings_conn_synapse157_data.out * 1.3748556764515908E-4 + me->strings_conn_synapse158_data.out * -0.0038375929830701413 + me->strings_conn_synapse159_data.out * -0.0021341027383087645 + me->strings_conn_synapse160_data.out * 0.0014247821656142095 + me->strings_conn_synapse161_data.out * 9.815987478205325E-4 + me->strings_conn_synapse162_data.out * 5.80806949749238E-5 + me->strings_conn_synapse163_data.out * 0.008000431865779508 + me->strings_conn_synapse164_data.out * -0.0030220207378871236 + me->strings_conn_synapse165_data.out * 0.001225015435802303 + me->strings_conn_synapse166_data.out * -7.588061985074267E-4 + me->strings_conn_synapse167_data.out * 2.3162977679428348E-4 + me->strings_conn_synapse168_data.out * 0.0010855017585934838 + me->strings_conn_synapse169_data.out * 0.0032982330853974138 + me->strings_conn_synapse170_data.out * 5.941816073409543E-4 + me->strings_conn_synapse171_data.out * 0.0015695688579856284 + me->strings_conn_synapse172_data.out * 0.0011227404218157899 + me->strings_conn_synapse173_data.out * 0.0020233821886258417 + me->strings_conn_synapse174_data.out * 0.002183672768117572 + me->strings_conn_synapse175_data.out * -1.570397134639505E-5 + me->strings_conn_synapse176_data.out * -2.4924911408640945E-5 + me->strings_conn_synapse177_data.out * 0.009865052921603574 + me->strings_conn_synapse178_data.out * 6.441022406510117E-4 + me->strings_conn_synapse179_data.out * 0.001793284710918917 + me->strings_conn_synapse180_data.out * -3.333200296687427E-5 + me->strings_conn_synapse181_data.out * -0.022500957394504535 + me->strings_conn_synapse182_data.out * 0.014013589750010534 + me->strings_conn_synapse183_data.out * -0.003892715829292607 + me->strings_conn_synapse184_data.out * 7.216947406088823E-4 + me->strings_conn_synapse185_data.out * -0.0025558265517116097 + me->strings_conn_synapse186_data.out * 8.740244430685554E-4 + me->strings_conn_synapse187_data.out * 4.965334711726249E-4 + me->strings_conn_synapse188_data.out * -4.457727855942212E-4 + me->strings_conn_synapse189_data.out * 6.358662819854772E-4 + me->strings_conn_synapse190_data.out * -1.365885658303676E-5 + me->strings_conn_synapse191_data.out * 2.1616531884594956E-5 + me->strings_conn_synapse192_data.out * 7.573128736074378E-4 + me->strings_conn_synapse193_data.out * 0.011082100981488659 + me->strings_conn_synapse194_data.out * 4.619018158338844E-4 + me->strings_conn_synapse195_data.out * 0.0014762265591768532 + me->strings_conn_synapse196_data.out * -3.405044690562691E-5 + me->strings_conn_synapse197_data.out * 7.824271374041656E-5 + me->strings_conn_synapse198_data.out * -0.0066162532431549535 + me->strings_conn_synapse199_data.out * 0.010821594719174979;
}

// cylinder_strings Execution function
void CylinderStringsRun(CylinderStrings* me) {
    // Mappings
    me->strings_conn_synapse0_data.in = CheckSpike(me->strings_input_0_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse1_data.in = CheckSpike(me->strings_input_1_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse10_data.in = CheckSpike(me->strings_input_10_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse100_data.in = CheckSpike(me->strings_input_100_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse101_data.in = CheckSpike(me->strings_input_101_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse102_data.in = CheckSpike(me->strings_input_102_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse103_data.in = CheckSpike(me->strings_input_103_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse104_data.in = CheckSpike(me->strings_input_104_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse105_data.in = CheckSpike(me->strings_input_105_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse106_data.in = CheckSpike(me->strings_input_106_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse107_data.in = CheckSpike(me->strings_input_107_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse108_data.in = CheckSpike(me->strings_input_108_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse109_data.in = CheckSpike(me->strings_input_109_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse11_data.in = CheckSpike(me->strings_input_11_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse110_data.in = CheckSpike(me->strings_input_110_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse111_data.in = CheckSpike(me->strings_input_111_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse112_data.in = CheckSpike(me->strings_input_112_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse113_data.in = CheckSpike(me->strings_input_113_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse114_data.in = CheckSpike(me->strings_input_114_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse115_data.in = CheckSpike(me->strings_input_115_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse116_data.in = CheckSpike(me->strings_input_116_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse117_data.in = CheckSpike(me->strings_input_117_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse118_data.in = CheckSpike(me->strings_input_118_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse119_data.in = CheckSpike(me->strings_input_119_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse12_data.in = CheckSpike(me->strings_input_12_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse120_data.in = CheckSpike(me->strings_input_120_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse121_data.in = CheckSpike(me->strings_input_121_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse122_data.in = CheckSpike(me->strings_input_122_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse123_data.in = CheckSpike(me->strings_input_123_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse124_data.in = CheckSpike(me->strings_input_124_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse125_data.in = CheckSpike(me->strings_input_125_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse126_data.in = CheckSpike(me->strings_input_126_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse127_data.in = CheckSpike(me->strings_input_127_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse128_data.in = CheckSpike(me->strings_input_128_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse129_data.in = CheckSpike(me->strings_input_129_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse13_data.in = CheckSpike(me->strings_input_13_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse130_data.in = CheckSpike(me->strings_input_130_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse131_data.in = CheckSpike(me->strings_input_131_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse132_data.in = CheckSpike(me->strings_input_132_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse133_data.in = CheckSpike(me->strings_input_133_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse134_data.in = CheckSpike(me->strings_input_134_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse135_data.in = CheckSpike(me->strings_input_135_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse136_data.in = CheckSpike(me->strings_input_136_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse137_data.in = CheckSpike(me->strings_input_137_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse138_data.in = CheckSpike(me->strings_input_138_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse139_data.in = CheckSpike(me->strings_input_139_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse14_data.in = CheckSpike(me->strings_input_14_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse140_data.in = CheckSpike(me->strings_input_140_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse141_data.in = CheckSpike(me->strings_input_141_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse142_data.in = CheckSpike(me->strings_input_142_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse143_data.in = CheckSpike(me->strings_input_143_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse144_data.in = CheckSpike(me->strings_input_144_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse145_data.in = CheckSpike(me->strings_input_145_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse146_data.in = CheckSpike(me->strings_input_146_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse147_data.in = CheckSpike(me->strings_input_147_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse148_data.in = CheckSpike(me->strings_input_148_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse149_data.in = CheckSpike(me->strings_input_149_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse15_data.in = CheckSpike(me->strings_input_15_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse150_data.in = CheckSpike(me->strings_input_150_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse151_data.in = CheckSpike(me->strings_input_151_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse152_data.in = CheckSpike(me->strings_input_152_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse153_data.in = CheckSpike(me->strings_input_153_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse154_data.in = CheckSpike(me->strings_input_154_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse155_data.in = CheckSpike(me->strings_input_155_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse156_data.in = CheckSpike(me->strings_input_156_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse157_data.in = CheckSpike(me->strings_input_157_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse158_data.in = CheckSpike(me->strings_input_158_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse159_data.in = CheckSpike(me->strings_input_159_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse16_data.in = CheckSpike(me->strings_input_16_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse160_data.in = CheckSpike(me->strings_input_160_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse161_data.in = CheckSpike(me->strings_input_161_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse162_data.in = CheckSpike(me->strings_input_162_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse163_data.in = CheckSpike(me->strings_input_163_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse164_data.in = CheckSpike(me->strings_input_164_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse165_data.in = CheckSpike(me->strings_input_165_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse166_data.in = CheckSpike(me->strings_input_166_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse167_data.in = CheckSpike(me->strings_input_167_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse168_data.in = CheckSpike(me->strings_input_168_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse169_data.in = CheckSpike(me->strings_input_169_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse17_data.in = CheckSpike(me->strings_input_17_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse170_data.in = CheckSpike(me->strings_input_170_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse171_data.in = CheckSpike(me->strings_input_171_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse172_data.in = CheckSpike(me->strings_input_172_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse173_data.in = CheckSpike(me->strings_input_173_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse174_data.in = CheckSpike(me->strings_input_174_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse175_data.in = CheckSpike(me->strings_input_175_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse176_data.in = CheckSpike(me->strings_input_176_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse177_data.in = CheckSpike(me->strings_input_177_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse178_data.in = CheckSpike(me->strings_input_178_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse179_data.in = CheckSpike(me->strings_input_179_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse18_data.in = CheckSpike(me->strings_input_18_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse180_data.in = CheckSpike(me->strings_input_180_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse181_data.in = CheckSpike(me->strings_input_181_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse182_data.in = CheckSpike(me->strings_input_182_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse183_data.in = CheckSpike(me->strings_input_183_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse184_data.in = CheckSpike(me->strings_input_184_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse185_data.in = CheckSpike(me->strings_input_185_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse186_data.in = CheckSpike(me->strings_input_186_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse187_data.in = CheckSpike(me->strings_input_187_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse188_data.in = CheckSpike(me->strings_input_188_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse189_data.in = CheckSpike(me->strings_input_189_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse19_data.in = CheckSpike(me->strings_input_19_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse190_data.in = CheckSpike(me->strings_input_190_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse191_data.in = CheckSpike(me->strings_input_191_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse192_data.in = CheckSpike(me->strings_input_192_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse193_data.in = CheckSpike(me->strings_input_193_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse194_data.in = CheckSpike(me->strings_input_194_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse195_data.in = CheckSpike(me->strings_input_195_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse196_data.in = CheckSpike(me->strings_input_196_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse197_data.in = CheckSpike(me->strings_input_197_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse198_data.in = CheckSpike(me->strings_input_198_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse199_data.in = CheckSpike(me->strings_input_199_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse2_data.in = CheckSpike(me->strings_input_2_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse20_data.in = CheckSpike(me->strings_input_20_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse21_data.in = CheckSpike(me->strings_input_21_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse22_data.in = CheckSpike(me->strings_input_22_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse23_data.in = CheckSpike(me->strings_input_23_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse24_data.in = CheckSpike(me->strings_input_24_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse25_data.in = CheckSpike(me->strings_input_25_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse26_data.in = CheckSpike(me->strings_input_26_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse27_data.in = CheckSpike(me->strings_input_27_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse28_data.in = CheckSpike(me->strings_input_28_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse29_data.in = CheckSpike(me->strings_input_29_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse3_data.in = CheckSpike(me->strings_input_3_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse30_data.in = CheckSpike(me->strings_input_30_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse31_data.in = CheckSpike(me->strings_input_31_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse32_data.in = CheckSpike(me->strings_input_32_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse33_data.in = CheckSpike(me->strings_input_33_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse34_data.in = CheckSpike(me->strings_input_34_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse35_data.in = CheckSpike(me->strings_input_35_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse36_data.in = CheckSpike(me->strings_input_36_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse37_data.in = CheckSpike(me->strings_input_37_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse38_data.in = CheckSpike(me->strings_input_38_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse39_data.in = CheckSpike(me->strings_input_39_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse4_data.in = CheckSpike(me->strings_input_4_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse40_data.in = CheckSpike(me->strings_input_40_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse41_data.in = CheckSpike(me->strings_input_41_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse42_data.in = CheckSpike(me->strings_input_42_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse43_data.in = CheckSpike(me->strings_input_43_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse44_data.in = CheckSpike(me->strings_input_44_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse45_data.in = CheckSpike(me->strings_input_45_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse46_data.in = CheckSpike(me->strings_input_46_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse47_data.in = CheckSpike(me->strings_input_47_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse48_data.in = CheckSpike(me->strings_input_48_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse49_data.in = CheckSpike(me->strings_input_49_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse5_data.in = CheckSpike(me->strings_input_5_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse50_data.in = CheckSpike(me->strings_input_50_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse51_data.in = CheckSpike(me->strings_input_51_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse52_data.in = CheckSpike(me->strings_input_52_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse53_data.in = CheckSpike(me->strings_input_53_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse54_data.in = CheckSpike(me->strings_input_54_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse55_data.in = CheckSpike(me->strings_input_55_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse56_data.in = CheckSpike(me->strings_input_56_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse57_data.in = CheckSpike(me->strings_input_57_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse58_data.in = CheckSpike(me->strings_input_58_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse59_data.in = CheckSpike(me->strings_input_59_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse6_data.in = CheckSpike(me->strings_input_6_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse60_data.in = CheckSpike(me->strings_input_60_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse61_data.in = CheckSpike(me->strings_input_61_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse62_data.in = CheckSpike(me->strings_input_62_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse63_data.in = CheckSpike(me->strings_input_63_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse64_data.in = CheckSpike(me->strings_input_64_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse65_data.in = CheckSpike(me->strings_input_65_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse66_data.in = CheckSpike(me->strings_input_66_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse67_data.in = CheckSpike(me->strings_input_67_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse68_data.in = CheckSpike(me->strings_input_68_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse69_data.in = CheckSpike(me->strings_input_69_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse7_data.in = CheckSpike(me->strings_input_7_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse70_data.in = CheckSpike(me->strings_input_70_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse71_data.in = CheckSpike(me->strings_input_71_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse72_data.in = CheckSpike(me->strings_input_72_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse73_data.in = CheckSpike(me->strings_input_73_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse74_data.in = CheckSpike(me->strings_input_74_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse75_data.in = CheckSpike(me->strings_input_75_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse76_data.in = CheckSpike(me->strings_input_76_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse77_data.in = CheckSpike(me->strings_input_77_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse78_data.in = CheckSpike(me->strings_input_78_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse79_data.in = CheckSpike(me->strings_input_79_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse8_data.in = CheckSpike(me->strings_input_8_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse80_data.in = CheckSpike(me->strings_input_80_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse81_data.in = CheckSpike(me->strings_input_81_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse82_data.in = CheckSpike(me->strings_input_82_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse83_data.in = CheckSpike(me->strings_input_83_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse84_data.in = CheckSpike(me->strings_input_84_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse85_data.in = CheckSpike(me->strings_input_85_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse86_data.in = CheckSpike(me->strings_input_86_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse87_data.in = CheckSpike(me->strings_input_87_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse88_data.in = CheckSpike(me->strings_input_88_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse89_data.in = CheckSpike(me->strings_input_89_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse9_data.in = CheckSpike(me->strings_input_9_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse90_data.in = CheckSpike(me->strings_input_90_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse91_data.in = CheckSpike(me->strings_input_91_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse92_data.in = CheckSpike(me->strings_input_92_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse93_data.in = CheckSpike(me->strings_input_93_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse94_data.in = CheckSpike(me->strings_input_94_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse95_data.in = CheckSpike(me->strings_input_95_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse96_data.in = CheckSpike(me->strings_input_96_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse97_data.in = CheckSpike(me->strings_input_97_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse98_data.in = CheckSpike(me->strings_input_98_data.spike, 1.0 / STEP_SIZE);
    me->strings_conn_synapse99_data.in = CheckSpike(me->strings_input_99_data.spike, 1.0 / STEP_SIZE);
    me->strings_input_0_data.in = 9.085623318159177 + me->setpoint_in * -0.5909548006712233 + me->orientation_in * -2.2744448940136452;
    me->strings_input_1_data.in = 1.02317931701006 + me->setpoint_in * -1.489779165934952 + me->orientation_in * -0.2789862064161098;
    me->strings_input_10_data.in = 5.161222888978807 + me->setpoint_in * -0.8342321494006798 + me->orientation_in * -0.18347362776422463;
    me->strings_input_100_data.in = 9.70416870362987 + me->setpoint_in * -1.5744222265598977 + me->orientation_in * 2.331188896863016;
    me->strings_input_101_data.in = 2.5652149448058896 + me->setpoint_in * 0.0029586942568730207 + me->orientation_in * 1.0230294492386054;
    me->strings_input_102_data.in = -0.5681328855558765 + me->setpoint_in * -6.732318537529977 + me->orientation_in * 2.6882080776309083;
    me->strings_input_103_data.in = -101.23557045920874 + me->setpoint_in * -24.708157340846956 + me->orientation_in * 8.977354009095592;
    me->strings_input_104_data.in = 13.089489545558525 + me->setpoint_in * 0.7415246214085129 + me->orientation_in * -4.771139680442581;
    me->strings_input_105_data.in = 9.888543112079306 + me->setpoint_in * -2.648169088351533 + me->orientation_in * 1.8109388078884554;
    me->strings_input_106_data.in = 6.505830066898481 + me->setpoint_in * -0.7566802785462831 + me->orientation_in * 1.2879743521040004;
    me->strings_input_107_data.in = 3.6275951583354393 + me->setpoint_in * -0.2765509203543678 + me->orientation_in * -0.9417577479885675;
    me->strings_input_108_data.in = 10.334147042463693 + me->setpoint_in * 2.9823428170139525 + me->orientation_in * -1.4139881219788282;
    me->strings_input_109_data.in = 16.62930825198899 + me->setpoint_in * -4.653617306402086 + me->orientation_in * 0.9019388183925087;
    me->strings_input_11_data.in = -38.8271265040165 + me->setpoint_in * 3.8014191500915517 + me->orientation_in * 9.521909629938332;
    me->strings_input_110_data.in = -5.61392253713851 + me->setpoint_in * 0.6063542918138455 + me->orientation_in * 2.6765023743465086;
    me->strings_input_111_data.in = -159.02296122620862 + me->setpoint_in * -32.32262442708623 + me->orientation_in * 19.242310522271904;
    me->strings_input_112_data.in = -12.993766615835943 + me->setpoint_in * -1.3134194959307381 + me->orientation_in * 4.082439566231426;
    me->strings_input_113_data.in = 1.159756015960389 + me->setpoint_in * 0.7138174238946434 + me->orientation_in * -1.1320322893529131;
    me->strings_input_114_data.in = -25.190314794245293 + me->setpoint_in * -3.469687862320929 + me->orientation_in * 6.354870146997514;
    me->strings_input_115_data.in = 1.180439694303158 + me->setpoint_in * 3.935027990238094 + me->orientation_in * 2.085754737465793;
    me->strings_input_116_data.in = -17.307374431433665 + me->setpoint_in * 4.040296556935678 + me->orientation_in * 3.325686126693662;
    me->strings_input_117_data.in = 1.6415204714416223 + me->setpoint_in * -2.7178728203905638 + me->orientation_in * 0.2649878294337802;
    me->strings_input_118_data.in = -0.5561949953560947 + me->setpoint_in * -2.3841149642718804 + me->orientation_in * -0.5982114398018759;
    me->strings_input_119_data.in = 3.1535968498999605 + me->setpoint_in * -0.5249709998502148 + me->orientation_in * -1.2036613551055892;
    me->strings_input_12_data.in = 16.850759958436363 + me->setpoint_in * 0.6505378053258348 + me->orientation_in * 3.3577235615137924;
    me->strings_input_120_data.in = 2.3982511261252677 + me->setpoint_in * -2.182617227955472 + me->orientation_in * 2.1953250638729256;
    me->strings_input_121_data.in = -28.247122898676967 + me->setpoint_in * -13.438464450817465 + me->orientation_in * -0.8016639473849311;
    me->strings_input_122_data.in = -1.3876548365247139 + me->setpoint_in * 3.409708065052746 + me->orientation_in * -0.7727265255373058;
    me->strings_input_123_data.in = -11.906323677744835 + me->setpoint_in * 4.24005828758124 + me->orientation_in * 1.9413828457533877;
    me->strings_input_124_data.in = -49.70309899001884 + me->setpoint_in * -12.532017306186727 + me->orientation_in * -1.5435903924947099;
    me->strings_input_125_data.in = 3.676252953178432 + me->setpoint_in * -1.1482005103201653 + me->orientation_in * -1.1424194780437318;
    me->strings_input_126_data.in = -122.86341419693638 + me->setpoint_in * -25.02786964287048 + me->orientation_in * 12.844187630063798;
    me->strings_input_127_data.in = -19.54389624132373 + me->setpoint_in * -4.743333831762826 + me->orientation_in * -5.0256332417851866;
    me->strings_input_128_data.in = -14.424182628105333 + me->setpoint_in * 2.0229767206931295 + me->orientation_in * 7.785957656818049;
    me->strings_input_129_data.in = 3.011334906834066 + me->setpoint_in * -0.07982189101081005 + me->orientation_in * -1.2128196624947558;
    me->strings_input_13_data.in = 4.495327396549135 + me->setpoint_in * -0.9619522964002226 + me->orientation_in * -0.3380549365026373;
    me->strings_input_130_data.in = 7.315505759929935 + me->setpoint_in * -1.3096250236614932 + me->orientation_in * -0.5023109238462788;
    me->strings_input_131_data.in = 4.375968016275192 + me->setpoint_in * 1.2955752122235111 + me->orientation_in * -0.1675165409939503;
    me->strings_input_132_data.in = -2.8256613438926474 + me->setpoint_in * 1.6323741831139231 + me->orientation_in * 2.092675973994731;
    me->strings_input_133_data.in = 9.78600998606452 + me->setpoint_in * 1.855737978481231 + me->orientation_in * 0.5853789088361265;
    me->strings_input_134_data.in = -2.8598078880693714 + me->setpoint_in * 3.859586658223656 + me->orientation_in * 1.3563590521482671;
    me->strings_input_135_data.in = 1.733978437334467 + me->setpoint_in * -0.4780817330549113 + me->orientation_in * 1.88461026525313;
    me->strings_input_136_data.in = -17.642989274357905 + me->setpoint_in * -4.842573649910097 + me->orientation_in * 2.112250823263437;
    me->strings_input_137_data.in = 4.64732552334203 + me->setpoint_in * 1.7480076039836303 + me->orientation_in * -1.1164381142706874;
    me->strings_input_138_data.in = -27.605204812153616 + me->setpoint_in * -6.391868261241755 + me->orientation_in * 4.082433822571208;
    me->strings_input_139_data.in = 15.53074131800112 + me->setpoint_in * 2.867947882610932 + me->orientation_in * -2.5432330260300775;
    me->strings_input_14_data.in = 3.502610663747888 + me->setpoint_in * 1.2157790549729277 + me->orientation_in * -0.44173585473719096;
    me->strings_input_140_data.in = -81.56631441223078 + me->setpoint_in * -16.457485003002716 + me->orientation_in * -9.17033484097667;
    me->strings_input_141_data.in = -228.01520448792124 + me->setpoint_in * 49.47098377612808 + me->orientation_in * -16.234970423113623;
    me->strings_input_142_data.in = 5.01663692827716 + me->setpoint_in * 0.5291364731607978 + me->orientation_in * -0.732751158906301;
    me->strings_input_143_data.in = -6.801307690531495 + me->setpoint_in * -2.176256954068221 + me->orientation_in * 4.65975228726952;
    me->strings_input_144_data.in = -31.491339187584046 + me->setpoint_in * -6.085668773858975 + me->orientation_in * -7.801724041365975;
    me->strings_input_145_data.in = 1.996739663490375 + me->setpoint_in * 3.5122816149722724 + me->orientation_in * -5.200505790603767;
    me->strings_input_146_data.in = 17.595763405182833 + me->setpoint_in * -2.816385461402058 + me->orientation_in * -1.7990624681672125;
    me->strings_input_147_data.in = -29.527821627000648 + me->setpoint_in * 0.2891597726438777 + me->orientation_in * 8.427081898054391;
    me->strings_input_148_data.in = -1.200427659282051 + me->setpoint_in * -1.5503554554373065 + me->orientation_in * 1.2098159685822316;
    me->strings_input_149_data.in = 4.326649910249704 + me->setpoint_in * 1.4434947558842464 + me->orientation_in * 0.27031869451061213;
    me->strings_input_15_data.in = -37.84757511145801 + me->setpoint_in * -3.9791629405530724 + me->orientation_in * 9.26883401377022;
    me->strings_input_150_data.in = 0.1979873456973491 + me->setpoint_in * 0.7582315250626123 + me->orientation_in * 1.4777520698743742;
    me->strings_input_151_data.in = 8.340421397804601 + me->setpoint_in * 1.9193992512117297 + me->orientation_in * -1.8129493675837705;
    me->strings_input_152_data.in = -9.610341304457007 + me->setpoint_in * 2.7059271250494477 + me->orientation_in * 6.2041901671963275;
    me->strings_input_153_data.in = 5.694818386341575 + me->setpoint_in * 0.30785867324286176 + me->orientation_in * -1.6395840312491083;
    me->strings_input_154_data.in = 15.034573271566597 + me->setpoint_in * -0.009742782124418077 + me->orientation_in * -3.36876763257189;
    me->strings_input_155_data.in = 3.221110918560595 + me->setpoint_in * 0.9219057178734527 + me->orientation_in * 1.548879260391369;
    me->strings_input_156_data.in = -8.619951285285405 + me->setpoint_in * -4.641317165700793 + me->orientation_in * -0.13193873108228107;
    me->strings_input_157_data.in = 3.1918634741401175 + me->setpoint_in * 0.6677079868225771 + me->orientation_in * -0.5210442431525929;
    me->strings_input_158_data.in = 0.4541456275833665 + me->setpoint_in * -3.3964917987205907 + me->orientation_in * 3.6379463338942535;
    me->strings_input_159_data.in = -4.743023816327408 + me->setpoint_in * 1.339955151634441 + me->orientation_in * -2.648741291280256;
    me->strings_input_16_data.in = 3.989132995494382 + me->setpoint_in * -1.3569435376685774 + me->orientation_in * -1.2676657650573757;
    me->strings_input_160_data.in = 14.357905811979604 + me->setpoint_in * 2.8575226383863255 + me->orientation_in * -1.5817741455235041;
    me->strings_input_161_data.in = 7.005159066900899 + me->setpoint_in * 0.15250562338894255 + me->orientation_in * -1.2359402340491301;
    me->strings_input_162_data.in = -41.65807868497005 + me->setpoint_in * 5.55173300208112 + me->orientation_in * 8.692570056214244;
    me->strings_input_163_data.in = 9.706095909522283 + me->setpoint_in * 0.3459614932036105 + me->orientation_in * -5.764721990532636;
    me->strings_input_164_data.in = 1.8117849400397854 + me->setpoint_in * -0.52684562337314 + me->orientation_in * -0.9518706457336872;
    me->strings_input_165_data.in = 9.483832456825423 + me->setpoint_in * -1.717983190034188 + me->orientation_in * -0.7003911698389323;
    me->strings_input_166_data.in = 11.984727161758853 + me->setpoint_in * 1.7520294916784802 + me->orientation_in * -3.2089111052254795;
    me->strings_input_167_data.in = 4.111300681723705 + me->setpoint_in * -0.023851168052525268 + me->orientation_in * -0.6951027219757336;
    me->strings_input_168_data.in = 3.4977124737834266 + me->setpoint_in * -0.8962391904198633 + me->orientation_in * 0.2031105856093398;
    me->strings_input_169_data.in = 2.5154930110254607 + me->setpoint_in * -2.1094801700209787 + me->orientation_in * 0.27275361555395433;
    me->strings_input_17_data.in = -2.455131797184878 + me->setpoint_in * -1.2027127214484854 + me->orientation_in * -1.6456565819144768;
    me->strings_input_170_data.in = 4.596824279120089 + me->setpoint_in * 0.531536148014249 + me->orientation_in * 1.6199466358135133;
    me->strings_input_171_data.in = -0.095725633113388 + me->setpoint_in * -2.5241668085391233 + me->orientation_in * 1.1967577560474822;
    me->strings_input_172_data.in = 6.391728168117997 + me->setpoint_in * -0.7696095244187428 + me->orientation_in * -1.2050083654064006;
    me->strings_input_173_data.in = 0.6093478017515535 + me->setpoint_in * 0.12734482623688193 + me->orientation_in * 1.9348866426320133;
    me->strings_input_174_data.in = 1.8401481501225545 + me->setpoint_in * 0.44093163646842803 + me->orientation_in * 2.7328424247903773;
    me->strings_input_175_data.in = -11.528457257309897 + me->setpoint_in * -3.9882009490351336 + me->orientation_in * 2.207658157182151;
    me->strings_input_176_data.in = -224.02590104236077 + me->setpoint_in * 46.86983528738229 + me->orientation_in * 17.9730779519125;
    me->strings_input_177_data.in = -11.510729072829793 + me->setpoint_in * -0.37090021250258043 + me->orientation_in * 4.0484371692386985;
    me->strings_input_178_data.in = 4.4601369151743455 + me->setpoint_in * 0.8230820827120234 + me->orientation_in * -0.24172744778643282;
    me->strings_input_179_data.in = 7.791753318534363 + me->setpoint_in * -1.964679258457555 + me->orientation_in * -1.4264628520572664;
    me->strings_input_18_data.in = 2.2043966170513 + me->setpoint_in * -2.5871408246178373 + me->orientation_in * -0.8160939401997263;
    me->strings_input_180_data.in = -47.334504893356325 + me->setpoint_in * 3.2159781696309415 + me->orientation_in * -11.190294176640084;
    me->strings_input_181_data.in = -3.3001768455683766 + me->setpoint_in * -2.569115869857177 + me->orientation_in * -0.7377854901736751;
    me->strings_input_182_data.in = -3.803613733193293 + me->setpoint_in * -1.6045927916130747 + me->orientation_in * -2.6958510634676696;
    me->strings_input_183_data.in = 6.269841547923077 + me->setpoint_in * -3.2219865337417053 + me->orientation_in * -1.706487913270128;
    me->strings_input_184_data.in = 3.658336097216997 + me->setpoint_in * 0.5466996124590343 + me->orientation_in * -0.5498826573628236;
    me->strings_input_185_data.in = -3.946556232661382 + me->setpoint_in * 1.7466181914389087 + me->orientation_in * -2.2652535470295776;
    me->strings_input_186_data.in = -1.1568609197955535 + me->setpoint_in * -1.9988335875903387 + me->orientation_in * 0.00623406921271868;
    me->strings_input_187_data.in = 6.580176672558249 + me->setpoint_in * 1.4743061597202567 + me->orientation_in * -1.0081977978082795;
    me->strings_input_188_data.in = 0.9553120481716536 + me->setpoint_in * 2.4204827384728773 + me->orientation_in * -4.119995955928905;
    me->strings_input_189_data.in = 3.9099489211941236 + me->setpoint_in * 0.7489195503940226 + me->orientation_in * -0.025826599642163026;
    me->strings_input_19_data.in = 3.3921562418863953 + me->setpoint_in * -0.20907489566876486 + me->orientation_in * -1.0791312969085471;
    me->strings_input_190_data.in = -13.06086603552303 + me->setpoint_in * 4.1110433972344 + me->orientation_in * 0.11686465277943958;
    me->strings_input_191_data.in = -13.367107322296931 + me->setpoint_in * 4.1219781734840995 + me->orientation_in * -1.0712849239048159;
    me->strings_input_192_data.in = 5.201066654394044 + me->setpoint_in * -0.35909520424300917 + me->orientation_in * 1.0065583460103391;
    me->strings_input_193_data.in = 1.5181869467093028 + me->setpoint_in * 1.3441505193801395 + me->orientation_in * 1.1790701906839993;
    me->strings_input_194_data.in = 3.288087235327521 + me->setpoint_in * -0.1441227041132553 + me->orientation_in * 1.1680031541484914;
    me->strings_input_195_data.in = 10.038309937981353 + me->setpoint_in * -0.7167014950521121 + me->orientation_in * 2.493829295393137;
    me->strings_input_196_data.in = -41.16222265100097 + me->setpoint_in * 15.264444602336763 + me->orientation_in * 3.3571286166622234;
    me->strings_input_197_data.in = -122.2530488734224 + me->setpoint_in * -11.203764411954026 + me->orientation_in * 28.538502820123252;
    me->strings_input_198_data.in = -0.40349754298260687 + me->setpoint_in * -1.5270465870036185 + me->orientation_in * 0.39687303213054215;
    me->strings_input_199_data.in = -2.5709782281821187 + me->setpoint_in * -1.140007586789753 + me->orientation_in * -1.667129227880353;
    me->strings_input_2_data.in = -8.027137721977532 + me->setpoint_in * -1.9385908696041163 + me->orientation_in * -8.557114465609935;
    me->strings_input_20_data.in = 5.707078532657782 + me->setpoint_in * 1.0443798533273254 + me->orientation_in * -0.20241603184386517;
    me->strings_input_21_data.in = 3.527209605361929 + me->setpoint_in * -0.31210569619182116 + me->orientation_in * -0.9511950803323731;
    me->strings_input_22_data.in = 5.161803840780145 + me->setpoint_in * -2.366261021423157 + me->orientation_in * -1.9477386230081588;
    me->strings_input_23_data.in = -8.713962021857848 + me->setpoint_in * 3.149275384890375 + me->orientation_in * -1.8748271793624955;
    me->strings_input_24_data.in = -2.042911163060681 + me->setpoint_in * 0.7091815328441989 + me->orientation_in * -1.987864449406545;
    me->strings_input_25_data.in = 4.747141498351626 + me->setpoint_in * 0.9185420143430666 + me->orientation_in * 1.3432614673411978;
    me->strings_input_26_data.in = -13.770044699475578 + me->setpoint_in * -0.2777772555063187 + me->orientation_in * 4.628574782240755;
    me->strings_input_27_data.in = -16.48652633012678 + me->setpoint_in * -5.986372373804265 + me->orientation_in * 5.654368155715611;
    me->strings_input_28_data.in = 4.418743054680885 + me->setpoint_in * -0.7785843159693069 + me->orientation_in * -0.4619986575244817;
    me->strings_input_29_data.in = -13.16485620593195 + me->setpoint_in * -4.085418728642367 + me->orientation_in * 3.3997499189417955;
    me->strings_input_3_data.in = -10.737098542066308 + me->setpoint_in * 4.6210956296115056 + me->orientation_in * 0.7159303249427484;
    me->strings_input_30_data.in = 10.75084854294171 + me->setpoint_in * -1.617296494393655 + me->orientation_in * 1.1822308847356175;
    me->strings_input_31_data.in = 7.6944832731661155 + me->setpoint_in * 2.4330661305975125 + me->orientation_in * -0.3927398264031937;
    me->strings_input_32_data.in = 3.576559119142694 + me->setpoint_in * -0.6603290286337112 + me->orientation_in * -4.092641671675089;
    me->strings_input_33_data.in = -161.27069054032478 + me->setpoint_in * 3.6044420744170718 + me->orientation_in * 36.98839745573139;
    me->strings_input_34_data.in = 3.906982404705067 + me->setpoint_in * 0.5218903504199488 + me->orientation_in * -0.558991217343592;
    me->strings_input_35_data.in = 2.4465834942286606 + me->setpoint_in * 0.667349802128122 + me->orientation_in * 0.8023283419894494;
    me->strings_input_36_data.in = 6.940037853299412 + me->setpoint_in * 0.041706804445557015 + me->orientation_in * -1.4616878699744895;
    me->strings_input_37_data.in = 6.391744070616365 + me->setpoint_in * -0.9941370215647307 + me->orientation_in * 1.2088227331257602;
    me->strings_input_38_data.in = 10.86578299578692 + me->setpoint_in * -2.72989447106735 + me->orientation_in * -1.8461727456221038;
    me->strings_input_39_data.in = 5.815117449004704 + me->setpoint_in * 0.1363789188830327 + me->orientation_in * 1.0550557022655496;
    me->strings_input_4_data.in = 5.737178751004593 + me->setpoint_in * 0.8543402716776436 + me->orientation_in * 1.5435668394560287;
    me->strings_input_40_data.in = -1.034906435635596 + me->setpoint_in * -1.0470621595773484 + me->orientation_in * 1.3579735295199975;
    me->strings_input_41_data.in = 12.371987649813354 + me->setpoint_in * 0.9885214119734413 + me->orientation_in * -3.896776370041206;
    me->strings_input_42_data.in = 12.842056455139542 + me->setpoint_in * 2.5772436510681396 + me->orientation_in * 0.7401204440230748;
    me->strings_input_43_data.in = 15.945024115071307 + me->setpoint_in * -2.2379673980721018 + me->orientation_in * 2.5533408603675936;
    me->strings_input_44_data.in = -2.5027368253643587 + me->setpoint_in * -1.2550829717025764 + me->orientation_in * -2.4460885671171813;
    me->strings_input_45_data.in = -197.9788377002039 + me->setpoint_in * 12.892957832142477 + me->orientation_in * 43.90527014220473;
    me->strings_input_46_data.in = 11.371045081413245 + me->setpoint_in * -0.44345149680228135 + me->orientation_in * -3.430633099698456;
    me->strings_input_47_data.in = 1.5056253970435294 + me->setpoint_in * 4.268359636772056 + me->orientation_in * -2.1905025353996894;
    me->strings_input_48_data.in = 8.72646661801559 + me->setpoint_in * 2.0059800800778493 + me->orientation_in * -0.19557954963628732;
    me->strings_input_49_data.in = -4.526117219452657 + me->setpoint_in * 0.6276813628066585 + me->orientation_in * -6.85124589835931;
    me->strings_input_5_data.in = -5.9340573324913555 + me->setpoint_in * 1.9488701238894057 + me->orientation_in * 2.6666142652284357;
    me->strings_input_50_data.in = 8.281802963640196 + me->setpoint_in * -1.2146039891052616 + me->orientation_in * -1.065433686277002;
    me->strings_input_51_data.in = 1.9598184000042913 + me->setpoint_in * 1.4529870101774236 + me->orientation_in * -0.09573084970159183;
    me->strings_input_52_data.in = 7.923515837298939 + me->setpoint_in * -1.849938833137784 + me->orientation_in * -5.092546740739801;
    me->strings_input_53_data.in = 14.46303289515914 + me->setpoint_in * -2.4845344290313927 + me->orientation_in * 3.4405972275165633;
    me->strings_input_54_data.in = -11.565636652060872 + me->setpoint_in * 2.7741638448395753 + me->orientation_in * -8.622801992330883;
    me->strings_input_55_data.in = 13.36377333474967 + me->setpoint_in * 3.0029847561821543 + me->orientation_in * 0.36988296719917996;
    me->strings_input_56_data.in = -10.32219656223518 + me->setpoint_in * 4.037462932043096 + me->orientation_in * 0.24085257153923917;
    me->strings_input_57_data.in = -1.8609552394149045 + me->setpoint_in * 1.7146304591563726 + me->orientation_in * 1.601819188965245;
    me->strings_input_58_data.in = -0.6560167845406113 + me->setpoint_in * 2.5119240770051574 + me->orientation_in * -0.007834316816790678;
    me->strings_input_59_data.in = -2.2968833131886677 + me->setpoint_in * 2.765562004897825 + me->orientation_in * -3.3627901863442395;
    me->strings_input_6_data.in = 5.169953692454109 + me->setpoint_in * -1.0978173774445725 + me->orientation_in * 0.3602724531383205;
    me->strings_input_60_data.in = -3.9705260637639945 + me->setpoint_in * 0.6145910073906499 + me->orientation_in * -2.7873859054135446;
    me->strings_input_61_data.in = -7.862199000294963 + me->setpoint_in * -3.7631582375789945 + me->orientation_in * 0.24793778245927245;
    me->strings_input_62_data.in = -8.793265100808647 + me->setpoint_in * -1.405678767898692 + me->orientation_in * -3.5209866807830967;
    me->strings_input_63_data.in = -1.753693822570146 + me->setpoint_in * 1.7925210400186655 + me->orientation_in * -0.7157518669166779;
    me->strings_input_64_data.in = 10.949567797306493 + me->setpoint_in * -2.9364849570666745 + me->orientation_in * 0.10126512440507363;
    me->strings_input_65_data.in = -23.802353365253577 + me->setpoint_in * 8.132824842640874 + me->orientation_in * 4.532609322820151;
    me->strings_input_66_data.in = -65.43314105693825 + me->setpoint_in * 11.75577991801876 + me->orientation_in * 9.078392652704384;
    me->strings_input_67_data.in = -95.4140023257829 + me->setpoint_in * 8.860370868607964 + me->orientation_in * 24.390997242025733;
    me->strings_input_68_data.in = 8.170305231757613 + me->setpoint_in * -2.10475689990398 + me->orientation_in * 3.337902230878264;
    me->strings_input_69_data.in = -101.47692732366414 + me->setpoint_in * 15.26960624477166 + me->orientation_in * -17.42139299254534;
    me->strings_input_7_data.in = 1.4171017743678533 + me->setpoint_in * 2.400158154916945 + me->orientation_in * 0.9776620286880614;
    me->strings_input_70_data.in = -83.10121633940545 + me->setpoint_in * -18.402965499761073 + me->orientation_in * -8.51254345674488;
    me->strings_input_71_data.in = -181.20946297784627 + me->setpoint_in * 32.45783569173411 + me->orientation_in * -27.010333956905175;
    me->strings_input_72_data.in = -328.26121507204573 + me->setpoint_in * 52.02231799346354 + me->orientation_in * 51.76039089439617;
    me->strings_input_73_data.in = 4.565875477382205 + me->setpoint_in * 0.56507382066705 + me->orientation_in * 1.1919886945916567;
    me->strings_input_74_data.in = 0.6353318309629316 + me->setpoint_in * 1.2316043740080413 + me->orientation_in * -0.9002930106420671;
    me->strings_input_75_data.in = 5.169917505258302 + me->setpoint_in * -0.0265817167682784 + me->orientation_in * 0.9316027474040959;
    me->strings_input_76_data.in = 3.399246210542962 + me->setpoint_in * 1.5316366965517816 + me->orientation_in * 1.0358144263224782;
    me->strings_input_77_data.in = -14.603882944615746 + me->setpoint_in * -3.990704902115265 + me->orientation_in * -3.081819756446643;
    me->strings_input_78_data.in = -19.436472583670117 + me->setpoint_in * -0.9523803684376096 + me->orientation_in * 6.127833970705216;
    me->strings_input_79_data.in = -44.31050051397091 + me->setpoint_in * -5.599523199076661 + me->orientation_in * -11.811851948168716;
    me->strings_input_8_data.in = -0.20461975914199648 + me->setpoint_in * -0.7465864939818327 + me->orientation_in * -7.661390495017158;
    me->strings_input_80_data.in = -141.8746188777414 + me->setpoint_in * -33.44288450252601 + me->orientation_in * 9.821697348455643;
    me->strings_input_81_data.in = 1.1089943605604011 + me->setpoint_in * 0.9963222875351975 + me->orientation_in * -2.537856506808088;
    me->strings_input_82_data.in = 4.309338411251873 + me->setpoint_in * -2.139754831220597 + me->orientation_in * -0.3315048746949822;
    me->strings_input_83_data.in = -60.17781926687103 + me->setpoint_in * 19.58089870573779 + me->orientation_in * 1.7870599124272861;
    me->strings_input_84_data.in = 10.264157505343142 + me->setpoint_in * 2.229541987948735 + me->orientation_in * 0.5594268357530803;
    me->strings_input_85_data.in = -8.671295002451899 + me->setpoint_in * 6.09736298326433 + me->orientation_in * 6.8770293981928665;
    me->strings_input_86_data.in = 14.233272360468282 + me->setpoint_in * 1.426723300975192 + me->orientation_in * -3.3233274577787504;
    me->strings_input_87_data.in = -1.6677258260839722 + me->setpoint_in * -0.8031044905672492 + me->orientation_in * 1.5875277785428275;
    me->strings_input_88_data.in = -19.637125724296542 + me->setpoint_in * -4.184737479501405 + me->orientation_in * -5.031144803570503;
    me->strings_input_89_data.in = 3.5045578461193516 + me->setpoint_in * -0.27789715909586277 + me->orientation_in * 1.4800159432179807;
    me->strings_input_9_data.in = -0.136391977349285 + me->setpoint_in * -4.49087985163066 + me->orientation_in * 3.982413362043151;
    me->strings_input_90_data.in = 3.272839772967442 + me->setpoint_in * 0.7396478442503063 + me->orientation_in * 0.7836679662890592;
    me->strings_input_91_data.in = 7.073141880039507 + me->setpoint_in * 3.880525285194024 + me->orientation_in * 2.302637105962101;
    me->strings_input_92_data.in = 6.247034364006481 + me->setpoint_in * -3.059827587453016 + me->orientation_in * -0.27925654184128673;
    me->strings_input_93_data.in = -45.207616077498884 + me->setpoint_in * -7.0866816227955285 + me->orientation_in * -7.992851705219474;
    me->strings_input_94_data.in = -2.5219374858638512 + me->setpoint_in * 1.8269649175592213 + me->orientation_in * -0.7968919855695661;
    me->strings_input_95_data.in = 4.703409927886884 + me->setpoint_in * -0.4563232602339447 + me->orientation_in * 2.0695861266067483;
    me->strings_input_96_data.in = -3.3796222651263506 + me->setpoint_in * 4.892073006775468 + me->orientation_in * 3.124977362049512;
    me->strings_input_97_data.in = 8.411815894206581 + me->setpoint_in * -2.038301940449708 + me->orientation_in * 0.3290179240049679;
    me->strings_input_98_data.in = -81.01056032550474 + me->setpoint_in * 15.752265245418757 + me->orientation_in * 11.436990643852523;
    me->strings_input_99_data.in = -67.83317803540939 + me->setpoint_in * 8.087284643848689 + me->orientation_in * -17.316311406512092;

    // Run Automata
    StringsInput0Run(&me->strings_input_0_data);

    StringsInput1Run(&me->strings_input_1_data);

    StringsInput2Run(&me->strings_input_2_data);

    StringsInput3Run(&me->strings_input_3_data);

    StringsInput4Run(&me->strings_input_4_data);

    StringsInput5Run(&me->strings_input_5_data);

    StringsInput6Run(&me->strings_input_6_data);

    StringsInput7Run(&me->strings_input_7_data);

    StringsInput8Run(&me->strings_input_8_data);

    StringsInput9Run(&me->strings_input_9_data);

    StringsInput10Run(&me->strings_input_10_data);

    StringsInput11Run(&me->strings_input_11_data);

    StringsInput12Run(&me->strings_input_12_data);

    StringsInput13Run(&me->strings_input_13_data);

    StringsInput14Run(&me->strings_input_14_data);

    StringsInput15Run(&me->strings_input_15_data);

    StringsInput16Run(&me->strings_input_16_data);

    StringsInput17Run(&me->strings_input_17_data);

    StringsInput18Run(&me->strings_input_18_data);

    StringsInput19Run(&me->strings_input_19_data);

    StringsInput20Run(&me->strings_input_20_data);

    StringsInput21Run(&me->strings_input_21_data);

    StringsInput22Run(&me->strings_input_22_data);

    StringsInput23Run(&me->strings_input_23_data);

    StringsInput24Run(&me->strings_input_24_data);

    StringsInput25Run(&me->strings_input_25_data);

    StringsInput26Run(&me->strings_input_26_data);

    StringsInput27Run(&me->strings_input_27_data);

    StringsInput28Run(&me->strings_input_28_data);

    StringsInput29Run(&me->strings_input_29_data);

    StringsInput30Run(&me->strings_input_30_data);

    StringsInput31Run(&me->strings_input_31_data);

    StringsInput32Run(&me->strings_input_32_data);

    StringsInput33Run(&me->strings_input_33_data);

    StringsInput34Run(&me->strings_input_34_data);

    StringsInput35Run(&me->strings_input_35_data);

    StringsInput36Run(&me->strings_input_36_data);

    StringsInput37Run(&me->strings_input_37_data);

    StringsInput38Run(&me->strings_input_38_data);

    StringsInput39Run(&me->strings_input_39_data);

    StringsInput40Run(&me->strings_input_40_data);

    StringsInput41Run(&me->strings_input_41_data);

    StringsInput42Run(&me->strings_input_42_data);

    StringsInput43Run(&me->strings_input_43_data);

    StringsInput44Run(&me->strings_input_44_data);

    StringsInput45Run(&me->strings_input_45_data);

    StringsInput46Run(&me->strings_input_46_data);

    StringsInput47Run(&me->strings_input_47_data);

    StringsInput48Run(&me->strings_input_48_data);

    StringsInput49Run(&me->strings_input_49_data);

    StringsInput50Run(&me->strings_input_50_data);

    StringsInput51Run(&me->strings_input_51_data);

    StringsInput52Run(&me->strings_input_52_data);

    StringsInput53Run(&me->strings_input_53_data);

    StringsInput54Run(&me->strings_input_54_data);

    StringsInput55Run(&me->strings_input_55_data);

    StringsInput56Run(&me->strings_input_56_data);

    StringsInput57Run(&me->strings_input_57_data);

    StringsInput58Run(&me->strings_input_58_data);

    StringsInput59Run(&me->strings_input_59_data);

    StringsInput60Run(&me->strings_input_60_data);

    StringsInput61Run(&me->strings_input_61_data);

    StringsInput62Run(&me->strings_input_62_data);

    StringsInput63Run(&me->strings_input_63_data);

    StringsInput64Run(&me->strings_input_64_data);

    StringsInput65Run(&me->strings_input_65_data);

    StringsInput66Run(&me->strings_input_66_data);

    StringsInput67Run(&me->strings_input_67_data);

    StringsInput68Run(&me->strings_input_68_data);

    StringsInput69Run(&me->strings_input_69_data);

    StringsInput70Run(&me->strings_input_70_data);

    StringsInput71Run(&me->strings_input_71_data);

    StringsInput72Run(&me->strings_input_72_data);

    StringsInput73Run(&me->strings_input_73_data);

    StringsInput74Run(&me->strings_input_74_data);

    StringsInput75Run(&me->strings_input_75_data);

    StringsInput76Run(&me->strings_input_76_data);

    StringsInput77Run(&me->strings_input_77_data);

    StringsInput78Run(&me->strings_input_78_data);

    StringsInput79Run(&me->strings_input_79_data);

    StringsInput80Run(&me->strings_input_80_data);

    StringsInput81Run(&me->strings_input_81_data);

    StringsInput82Run(&me->strings_input_82_data);

    StringsInput83Run(&me->strings_input_83_data);

    StringsInput84Run(&me->strings_input_84_data);

    StringsInput85Run(&me->strings_input_85_data);

    StringsInput86Run(&me->strings_input_86_data);

    StringsInput87Run(&me->strings_input_87_data);

    StringsInput88Run(&me->strings_input_88_data);

    StringsInput89Run(&me->strings_input_89_data);

    StringsInput90Run(&me->strings_input_90_data);

    StringsInput91Run(&me->strings_input_91_data);

    StringsInput92Run(&me->strings_input_92_data);

    StringsInput93Run(&me->strings_input_93_data);

    StringsInput94Run(&me->strings_input_94_data);

    StringsInput95Run(&me->strings_input_95_data);

    StringsInput96Run(&me->strings_input_96_data);

    StringsInput97Run(&me->strings_input_97_data);

    StringsInput98Run(&me->strings_input_98_data);

    StringsInput99Run(&me->strings_input_99_data);

    StringsInput100Run(&me->strings_input_100_data);

    StringsInput101Run(&me->strings_input_101_data);

    StringsInput102Run(&me->strings_input_102_data);

    StringsInput103Run(&me->strings_input_103_data);

    StringsInput104Run(&me->strings_input_104_data);

    StringsInput105Run(&me->strings_input_105_data);

    StringsInput106Run(&me->strings_input_106_data);

    StringsInput107Run(&me->strings_input_107_data);

    StringsInput108Run(&me->strings_input_108_data);

    StringsInput109Run(&me->strings_input_109_data);

    StringsInput110Run(&me->strings_input_110_data);

    StringsInput111Run(&me->strings_input_111_data);

    StringsInput112Run(&me->strings_input_112_data);

    StringsInput113Run(&me->strings_input_113_data);

    StringsInput114Run(&me->strings_input_114_data);

    StringsInput115Run(&me->strings_input_115_data);

    StringsInput116Run(&me->strings_input_116_data);

    StringsInput117Run(&me->strings_input_117_data);

    StringsInput118Run(&me->strings_input_118_data);

    StringsInput119Run(&me->strings_input_119_data);

    StringsInput120Run(&me->strings_input_120_data);

    StringsInput121Run(&me->strings_input_121_data);

    StringsInput122Run(&me->strings_input_122_data);

    StringsInput123Run(&me->strings_input_123_data);

    StringsInput124Run(&me->strings_input_124_data);

    StringsInput125Run(&me->strings_input_125_data);

    StringsInput126Run(&me->strings_input_126_data);

    StringsInput127Run(&me->strings_input_127_data);

    StringsInput128Run(&me->strings_input_128_data);

    StringsInput129Run(&me->strings_input_129_data);

    StringsInput130Run(&me->strings_input_130_data);

    StringsInput131Run(&me->strings_input_131_data);

    StringsInput132Run(&me->strings_input_132_data);

    StringsInput133Run(&me->strings_input_133_data);

    StringsInput134Run(&me->strings_input_134_data);

    StringsInput135Run(&me->strings_input_135_data);

    StringsInput136Run(&me->strings_input_136_data);

    StringsInput137Run(&me->strings_input_137_data);

    StringsInput138Run(&me->strings_input_138_data);

    StringsInput139Run(&me->strings_input_139_data);

    StringsInput140Run(&me->strings_input_140_data);

    StringsInput141Run(&me->strings_input_141_data);

    StringsInput142Run(&me->strings_input_142_data);

    StringsInput143Run(&me->strings_input_143_data);

    StringsInput144Run(&me->strings_input_144_data);

    StringsInput145Run(&me->strings_input_145_data);

    StringsInput146Run(&me->strings_input_146_data);

    StringsInput147Run(&me->strings_input_147_data);

    StringsInput148Run(&me->strings_input_148_data);

    StringsInput149Run(&me->strings_input_149_data);

    StringsInput150Run(&me->strings_input_150_data);

    StringsInput151Run(&me->strings_input_151_data);

    StringsInput152Run(&me->strings_input_152_data);

    StringsInput153Run(&me->strings_input_153_data);

    StringsInput154Run(&me->strings_input_154_data);

    StringsInput155Run(&me->strings_input_155_data);

    StringsInput156Run(&me->strings_input_156_data);

    StringsInput157Run(&me->strings_input_157_data);

    StringsInput158Run(&me->strings_input_158_data);

    StringsInput159Run(&me->strings_input_159_data);

    StringsInput160Run(&me->strings_input_160_data);

    StringsInput161Run(&me->strings_input_161_data);

    StringsInput162Run(&me->strings_input_162_data);

    StringsInput163Run(&me->strings_input_163_data);

    StringsInput164Run(&me->strings_input_164_data);

    StringsInput165Run(&me->strings_input_165_data);

    StringsInput166Run(&me->strings_input_166_data);

    StringsInput167Run(&me->strings_input_167_data);

    StringsInput168Run(&me->strings_input_168_data);

    StringsInput169Run(&me->strings_input_169_data);

    StringsInput170Run(&me->strings_input_170_data);

    StringsInput171Run(&me->strings_input_171_data);

    StringsInput172Run(&me->strings_input_172_data);

    StringsInput173Run(&me->strings_input_173_data);

    StringsInput174Run(&me->strings_input_174_data);

    StringsInput175Run(&me->strings_input_175_data);

    StringsInput176Run(&me->strings_input_176_data);

    StringsInput177Run(&me->strings_input_177_data);

    StringsInput178Run(&me->strings_input_178_data);

    StringsInput179Run(&me->strings_input_179_data);

    StringsInput180Run(&me->strings_input_180_data);

    StringsInput181Run(&me->strings_input_181_data);

    StringsInput182Run(&me->strings_input_182_data);

    StringsInput183Run(&me->strings_input_183_data);

    StringsInput184Run(&me->strings_input_184_data);

    StringsInput185Run(&me->strings_input_185_data);

    StringsInput186Run(&me->strings_input_186_data);

    StringsInput187Run(&me->strings_input_187_data);

    StringsInput188Run(&me->strings_input_188_data);

    StringsInput189Run(&me->strings_input_189_data);

    StringsInput190Run(&me->strings_input_190_data);

    StringsInput191Run(&me->strings_input_191_data);

    StringsInput192Run(&me->strings_input_192_data);

    StringsInput193Run(&me->strings_input_193_data);

    StringsInput194Run(&me->strings_input_194_data);

    StringsInput195Run(&me->strings_input_195_data);

    StringsInput196Run(&me->strings_input_196_data);

    StringsInput197Run(&me->strings_input_197_data);

    StringsInput198Run(&me->strings_input_198_data);

    StringsInput199Run(&me->strings_input_199_data);

    StringsConnSynapse0Run(&me->strings_conn_synapse0_data);

    StringsConnSynapse1Run(&me->strings_conn_synapse1_data);

    StringsConnSynapse2Run(&me->strings_conn_synapse2_data);

    StringsConnSynapse3Run(&me->strings_conn_synapse3_data);

    StringsConnSynapse4Run(&me->strings_conn_synapse4_data);

    StringsConnSynapse5Run(&me->strings_conn_synapse5_data);

    StringsConnSynapse6Run(&me->strings_conn_synapse6_data);

    StringsConnSynapse7Run(&me->strings_conn_synapse7_data);

    StringsConnSynapse8Run(&me->strings_conn_synapse8_data);

    StringsConnSynapse9Run(&me->strings_conn_synapse9_data);

    StringsConnSynapse10Run(&me->strings_conn_synapse10_data);

    StringsConnSynapse11Run(&me->strings_conn_synapse11_data);

    StringsConnSynapse12Run(&me->strings_conn_synapse12_data);

    StringsConnSynapse13Run(&me->strings_conn_synapse13_data);

    StringsConnSynapse14Run(&me->strings_conn_synapse14_data);

    StringsConnSynapse15Run(&me->strings_conn_synapse15_data);

    StringsConnSynapse16Run(&me->strings_conn_synapse16_data);

    StringsConnSynapse17Run(&me->strings_conn_synapse17_data);

    StringsConnSynapse18Run(&me->strings_conn_synapse18_data);

    StringsConnSynapse19Run(&me->strings_conn_synapse19_data);

    StringsConnSynapse20Run(&me->strings_conn_synapse20_data);

    StringsConnSynapse21Run(&me->strings_conn_synapse21_data);

    StringsConnSynapse22Run(&me->strings_conn_synapse22_data);

    StringsConnSynapse23Run(&me->strings_conn_synapse23_data);

    StringsConnSynapse24Run(&me->strings_conn_synapse24_data);

    StringsConnSynapse25Run(&me->strings_conn_synapse25_data);

    StringsConnSynapse26Run(&me->strings_conn_synapse26_data);

    StringsConnSynapse27Run(&me->strings_conn_synapse27_data);

    StringsConnSynapse28Run(&me->strings_conn_synapse28_data);

    StringsConnSynapse29Run(&me->strings_conn_synapse29_data);

    StringsConnSynapse30Run(&me->strings_conn_synapse30_data);

    StringsConnSynapse31Run(&me->strings_conn_synapse31_data);

    StringsConnSynapse32Run(&me->strings_conn_synapse32_data);

    StringsConnSynapse33Run(&me->strings_conn_synapse33_data);

    StringsConnSynapse34Run(&me->strings_conn_synapse34_data);

    StringsConnSynapse35Run(&me->strings_conn_synapse35_data);

    StringsConnSynapse36Run(&me->strings_conn_synapse36_data);

    StringsConnSynapse37Run(&me->strings_conn_synapse37_data);

    StringsConnSynapse38Run(&me->strings_conn_synapse38_data);

    StringsConnSynapse39Run(&me->strings_conn_synapse39_data);

    StringsConnSynapse40Run(&me->strings_conn_synapse40_data);

    StringsConnSynapse41Run(&me->strings_conn_synapse41_data);

    StringsConnSynapse42Run(&me->strings_conn_synapse42_data);

    StringsConnSynapse43Run(&me->strings_conn_synapse43_data);

    StringsConnSynapse44Run(&me->strings_conn_synapse44_data);

    StringsConnSynapse45Run(&me->strings_conn_synapse45_data);

    StringsConnSynapse46Run(&me->strings_conn_synapse46_data);

    StringsConnSynapse47Run(&me->strings_conn_synapse47_data);

    StringsConnSynapse48Run(&me->strings_conn_synapse48_data);

    StringsConnSynapse49Run(&me->strings_conn_synapse49_data);

    StringsConnSynapse50Run(&me->strings_conn_synapse50_data);

    StringsConnSynapse51Run(&me->strings_conn_synapse51_data);

    StringsConnSynapse52Run(&me->strings_conn_synapse52_data);

    StringsConnSynapse53Run(&me->strings_conn_synapse53_data);

    StringsConnSynapse54Run(&me->strings_conn_synapse54_data);

    StringsConnSynapse55Run(&me->strings_conn_synapse55_data);

    StringsConnSynapse56Run(&me->strings_conn_synapse56_data);

    StringsConnSynapse57Run(&me->strings_conn_synapse57_data);

    StringsConnSynapse58Run(&me->strings_conn_synapse58_data);

    StringsConnSynapse59Run(&me->strings_conn_synapse59_data);

    StringsConnSynapse60Run(&me->strings_conn_synapse60_data);

    StringsConnSynapse61Run(&me->strings_conn_synapse61_data);

    StringsConnSynapse62Run(&me->strings_conn_synapse62_data);

    StringsConnSynapse63Run(&me->strings_conn_synapse63_data);

    StringsConnSynapse64Run(&me->strings_conn_synapse64_data);

    StringsConnSynapse65Run(&me->strings_conn_synapse65_data);

    StringsConnSynapse66Run(&me->strings_conn_synapse66_data);

    StringsConnSynapse67Run(&me->strings_conn_synapse67_data);

    StringsConnSynapse68Run(&me->strings_conn_synapse68_data);

    StringsConnSynapse69Run(&me->strings_conn_synapse69_data);

    StringsConnSynapse70Run(&me->strings_conn_synapse70_data);

    StringsConnSynapse71Run(&me->strings_conn_synapse71_data);

    StringsConnSynapse72Run(&me->strings_conn_synapse72_data);

    StringsConnSynapse73Run(&me->strings_conn_synapse73_data);

    StringsConnSynapse74Run(&me->strings_conn_synapse74_data);

    StringsConnSynapse75Run(&me->strings_conn_synapse75_data);

    StringsConnSynapse76Run(&me->strings_conn_synapse76_data);

    StringsConnSynapse77Run(&me->strings_conn_synapse77_data);

    StringsConnSynapse78Run(&me->strings_conn_synapse78_data);

    StringsConnSynapse79Run(&me->strings_conn_synapse79_data);

    StringsConnSynapse80Run(&me->strings_conn_synapse80_data);

    StringsConnSynapse81Run(&me->strings_conn_synapse81_data);

    StringsConnSynapse82Run(&me->strings_conn_synapse82_data);

    StringsConnSynapse83Run(&me->strings_conn_synapse83_data);

    StringsConnSynapse84Run(&me->strings_conn_synapse84_data);

    StringsConnSynapse85Run(&me->strings_conn_synapse85_data);

    StringsConnSynapse86Run(&me->strings_conn_synapse86_data);

    StringsConnSynapse87Run(&me->strings_conn_synapse87_data);

    StringsConnSynapse88Run(&me->strings_conn_synapse88_data);

    StringsConnSynapse89Run(&me->strings_conn_synapse89_data);

    StringsConnSynapse90Run(&me->strings_conn_synapse90_data);

    StringsConnSynapse91Run(&me->strings_conn_synapse91_data);

    StringsConnSynapse92Run(&me->strings_conn_synapse92_data);

    StringsConnSynapse93Run(&me->strings_conn_synapse93_data);

    StringsConnSynapse94Run(&me->strings_conn_synapse94_data);

    StringsConnSynapse95Run(&me->strings_conn_synapse95_data);

    StringsConnSynapse96Run(&me->strings_conn_synapse96_data);

    StringsConnSynapse97Run(&me->strings_conn_synapse97_data);

    StringsConnSynapse98Run(&me->strings_conn_synapse98_data);

    StringsConnSynapse99Run(&me->strings_conn_synapse99_data);

    StringsConnSynapse100Run(&me->strings_conn_synapse100_data);

    StringsConnSynapse101Run(&me->strings_conn_synapse101_data);

    StringsConnSynapse102Run(&me->strings_conn_synapse102_data);

    StringsConnSynapse103Run(&me->strings_conn_synapse103_data);

    StringsConnSynapse104Run(&me->strings_conn_synapse104_data);

    StringsConnSynapse105Run(&me->strings_conn_synapse105_data);

    StringsConnSynapse106Run(&me->strings_conn_synapse106_data);

    StringsConnSynapse107Run(&me->strings_conn_synapse107_data);

    StringsConnSynapse108Run(&me->strings_conn_synapse108_data);

    StringsConnSynapse109Run(&me->strings_conn_synapse109_data);

    StringsConnSynapse110Run(&me->strings_conn_synapse110_data);

    StringsConnSynapse111Run(&me->strings_conn_synapse111_data);

    StringsConnSynapse112Run(&me->strings_conn_synapse112_data);

    StringsConnSynapse113Run(&me->strings_conn_synapse113_data);

    StringsConnSynapse114Run(&me->strings_conn_synapse114_data);

    StringsConnSynapse115Run(&me->strings_conn_synapse115_data);

    StringsConnSynapse116Run(&me->strings_conn_synapse116_data);

    StringsConnSynapse117Run(&me->strings_conn_synapse117_data);

    StringsConnSynapse118Run(&me->strings_conn_synapse118_data);

    StringsConnSynapse119Run(&me->strings_conn_synapse119_data);

    StringsConnSynapse120Run(&me->strings_conn_synapse120_data);

    StringsConnSynapse121Run(&me->strings_conn_synapse121_data);

    StringsConnSynapse122Run(&me->strings_conn_synapse122_data);

    StringsConnSynapse123Run(&me->strings_conn_synapse123_data);

    StringsConnSynapse124Run(&me->strings_conn_synapse124_data);

    StringsConnSynapse125Run(&me->strings_conn_synapse125_data);

    StringsConnSynapse126Run(&me->strings_conn_synapse126_data);

    StringsConnSynapse127Run(&me->strings_conn_synapse127_data);

    StringsConnSynapse128Run(&me->strings_conn_synapse128_data);

    StringsConnSynapse129Run(&me->strings_conn_synapse129_data);

    StringsConnSynapse130Run(&me->strings_conn_synapse130_data);

    StringsConnSynapse131Run(&me->strings_conn_synapse131_data);

    StringsConnSynapse132Run(&me->strings_conn_synapse132_data);

    StringsConnSynapse133Run(&me->strings_conn_synapse133_data);

    StringsConnSynapse134Run(&me->strings_conn_synapse134_data);

    StringsConnSynapse135Run(&me->strings_conn_synapse135_data);

    StringsConnSynapse136Run(&me->strings_conn_synapse136_data);

    StringsConnSynapse137Run(&me->strings_conn_synapse137_data);

    StringsConnSynapse138Run(&me->strings_conn_synapse138_data);

    StringsConnSynapse139Run(&me->strings_conn_synapse139_data);

    StringsConnSynapse140Run(&me->strings_conn_synapse140_data);

    StringsConnSynapse141Run(&me->strings_conn_synapse141_data);

    StringsConnSynapse142Run(&me->strings_conn_synapse142_data);

    StringsConnSynapse143Run(&me->strings_conn_synapse143_data);

    StringsConnSynapse144Run(&me->strings_conn_synapse144_data);

    StringsConnSynapse145Run(&me->strings_conn_synapse145_data);

    StringsConnSynapse146Run(&me->strings_conn_synapse146_data);

    StringsConnSynapse147Run(&me->strings_conn_synapse147_data);

    StringsConnSynapse148Run(&me->strings_conn_synapse148_data);

    StringsConnSynapse149Run(&me->strings_conn_synapse149_data);

    StringsConnSynapse150Run(&me->strings_conn_synapse150_data);

    StringsConnSynapse151Run(&me->strings_conn_synapse151_data);

    StringsConnSynapse152Run(&me->strings_conn_synapse152_data);

    StringsConnSynapse153Run(&me->strings_conn_synapse153_data);

    StringsConnSynapse154Run(&me->strings_conn_synapse154_data);

    StringsConnSynapse155Run(&me->strings_conn_synapse155_data);

    StringsConnSynapse156Run(&me->strings_conn_synapse156_data);

    StringsConnSynapse157Run(&me->strings_conn_synapse157_data);

    StringsConnSynapse158Run(&me->strings_conn_synapse158_data);

    StringsConnSynapse159Run(&me->strings_conn_synapse159_data);

    StringsConnSynapse160Run(&me->strings_conn_synapse160_data);

    StringsConnSynapse161Run(&me->strings_conn_synapse161_data);

    StringsConnSynapse162Run(&me->strings_conn_synapse162_data);

    StringsConnSynapse163Run(&me->strings_conn_synapse163_data);

    StringsConnSynapse164Run(&me->strings_conn_synapse164_data);

    StringsConnSynapse165Run(&me->strings_conn_synapse165_data);

    StringsConnSynapse166Run(&me->strings_conn_synapse166_data);

    StringsConnSynapse167Run(&me->strings_conn_synapse167_data);

    StringsConnSynapse168Run(&me->strings_conn_synapse168_data);

    StringsConnSynapse169Run(&me->strings_conn_synapse169_data);

    StringsConnSynapse170Run(&me->strings_conn_synapse170_data);

    StringsConnSynapse171Run(&me->strings_conn_synapse171_data);

    StringsConnSynapse172Run(&me->strings_conn_synapse172_data);

    StringsConnSynapse173Run(&me->strings_conn_synapse173_data);

    StringsConnSynapse174Run(&me->strings_conn_synapse174_data);

    StringsConnSynapse175Run(&me->strings_conn_synapse175_data);

    StringsConnSynapse176Run(&me->strings_conn_synapse176_data);

    StringsConnSynapse177Run(&me->strings_conn_synapse177_data);

    StringsConnSynapse178Run(&me->strings_conn_synapse178_data);

    StringsConnSynapse179Run(&me->strings_conn_synapse179_data);

    StringsConnSynapse180Run(&me->strings_conn_synapse180_data);

    StringsConnSynapse181Run(&me->strings_conn_synapse181_data);

    StringsConnSynapse182Run(&me->strings_conn_synapse182_data);

    StringsConnSynapse183Run(&me->strings_conn_synapse183_data);

    StringsConnSynapse184Run(&me->strings_conn_synapse184_data);

    StringsConnSynapse185Run(&me->strings_conn_synapse185_data);

    StringsConnSynapse186Run(&me->strings_conn_synapse186_data);

    StringsConnSynapse187Run(&me->strings_conn_synapse187_data);

    StringsConnSynapse188Run(&me->strings_conn_synapse188_data);

    StringsConnSynapse189Run(&me->strings_conn_synapse189_data);

    StringsConnSynapse190Run(&me->strings_conn_synapse190_data);

    StringsConnSynapse191Run(&me->strings_conn_synapse191_data);

    StringsConnSynapse192Run(&me->strings_conn_synapse192_data);

    StringsConnSynapse193Run(&me->strings_conn_synapse193_data);

    StringsConnSynapse194Run(&me->strings_conn_synapse194_data);

    StringsConnSynapse195Run(&me->strings_conn_synapse195_data);

    StringsConnSynapse196Run(&me->strings_conn_synapse196_data);

    StringsConnSynapse197Run(&me->strings_conn_synapse197_data);

    StringsConnSynapse198Run(&me->strings_conn_synapse198_data);

    StringsConnSynapse199Run(&me->strings_conn_synapse199_data);

    // Output Mapping
    me->strings_0_out = 0.0 + me->strings_conn_synapse0_data.out * -2.859992067011085E-4 + me->strings_conn_synapse1_data.out * -0.0068060539524811125 + me->strings_conn_synapse2_data.out * -0.007949579433841251 + me->strings_conn_synapse3_data.out * 2.3577193407062224E-6 + me->strings_conn_synapse4_data.out * 0.0023173497144223718 + me->strings_conn_synapse5_data.out * 0.01963089428003146 + me->strings_conn_synapse6_data.out * 2.9071501599171943E-4 + me->strings_conn_synapse7_data.out * -0.005350775859979664 + me->strings_conn_synapse8_data.out * 0.006058131680592072 + me->strings_conn_synapse9_data.out * 0.003173909336423002 + me->strings_conn_synapse10_data.out * 5.012528377115753E-4 + me->strings_conn_synapse11_data.out * 3.272540115498824E-5 + me->strings_conn_synapse12_data.out * 0.0023352120696076683 + me->strings_conn_synapse13_data.out * 1.7301084980118642E-4 + me->strings_conn_synapse14_data.out * 8.346595660011371E-5 + me->strings_conn_synapse15_data.out * -3.584973167179009E-5 + me->strings_conn_synapse16_data.out * 0.004009907979672529 + me->strings_conn_synapse17_data.out * -9.904956984963E-4 + me->strings_conn_synapse18_data.out * -0.0013412429152786234 + me->strings_conn_synapse19_data.out * 4.907195916918119E-4 + me->strings_conn_synapse20_data.out * 7.271637702862235E-4 + me->strings_conn_synapse21_data.out * 5.624023336583149E-4 + me->strings_conn_synapse22_data.out * 0.00679248549594054 + me->strings_conn_synapse23_data.out * 7.898972964193495E-5 + me->strings_conn_synapse24_data.out * -0.002134089839375542 + me->strings_conn_synapse25_data.out * 0.0031910469370865957 + me->strings_conn_synapse26_data.out * -4.3041872743661687E-4 + me->strings_conn_synapse27_data.out * 0.0024840507316847868 + me->strings_conn_synapse28_data.out * 1.0696493857307428E-4 + me->strings_conn_synapse29_data.out * -0.010504925764557676 + me->strings_conn_synapse30_data.out * 0.0012109976610496034 + me->strings_conn_synapse31_data.out * 3.9117364179056414E-4 + me->strings_conn_synapse32_data.out * -0.0052659970706052835 + me->strings_conn_synapse33_data.out * -6.183964150297764E-5 + me->strings_conn_synapse34_data.out * 3.9514461279741654E-4 + me->strings_conn_synapse35_data.out * 0.0029295454348656435 + me->strings_conn_synapse36_data.out * 3.6068562545699356E-4 + me->strings_conn_synapse37_data.out * 9.859394198335892E-4 + me->strings_conn_synapse38_data.out * -9.582107477479603E-4 + me->strings_conn_synapse39_data.out * 0.0012946451773838818 + me->strings_conn_synapse40_data.out * 0.0038177223471341643 + me->strings_conn_synapse41_data.out * -1.0665906139447953E-5 + me->strings_conn_synapse42_data.out * 0.001615411083966312 + me->strings_conn_synapse43_data.out * 0.0017977177108712877 + me->strings_conn_synapse44_data.out * -0.006999158695189573 + me->strings_conn_synapse45_data.out * 7.277646946347162E-5 + me->strings_conn_synapse46_data.out * -5.853718634312897E-4 + me->strings_conn_synapse47_data.out * -0.0015321627425677815 + me->strings_conn_synapse48_data.out * 0.0012313462022645655 + me->strings_conn_synapse49_data.out * 0.009052062326804758 + me->strings_conn_synapse50_data.out * 4.5556015137910796E-4 + me->strings_conn_synapse51_data.out * 7.60517254370341E-4 + me->strings_conn_synapse52_data.out * 4.5684436324083046E-4 + me->strings_conn_synapse53_data.out * 0.00139193966129547 + me->strings_conn_synapse54_data.out * -0.0032979492997198675 + me->strings_conn_synapse55_data.out * 0.0016183534149115735 + me->strings_conn_synapse56_data.out * 3.470247622222814E-5 + me->strings_conn_synapse57_data.out * 0.0027704344841093407 + me->strings_conn_synapse58_data.out * 0.007018459930949658 + me->strings_conn_synapse59_data.out * 0.009395255515322314 + me->strings_conn_synapse60_data.out * -0.004394969925502461 + me->strings_conn_synapse61_data.out * 1.0386714772495252E-4 + me->strings_conn_synapse62_data.out * 0.02267898264774523 + me->strings_conn_synapse63_data.out * 0.009590202140352623 + me->strings_conn_synapse64_data.out * 0.0010199064964799766 + me->strings_conn_synapse65_data.out * -4.6726406549113315E-6 + me->strings_conn_synapse66_data.out * -3.230542326719233E-5 + me->strings_conn_synapse67_data.out * -5.60966522383917E-5 + me->strings_conn_synapse68_data.out * -1.0894563119069071E-5 + me->strings_conn_synapse69_data.out * -4.134546417027677E-5 + me->strings_conn_synapse70_data.out * 2.3428040407568957E-5 + me->strings_conn_synapse71_data.out * -1.343497494481971E-4 + me->strings_conn_synapse72_data.out * 1.6991894059651715E-5 + me->strings_conn_synapse73_data.out * 0.0018480086002990088 + me->strings_conn_synapse74_data.out * -3.62688669470299E-4 + me->strings_conn_synapse75_data.out * 0.001072927072887937 + me->strings_conn_synapse76_data.out * 0.005956387569211814 + me->strings_conn_synapse77_data.out * 3.333791945224883E-5 + me->strings_conn_synapse78_data.out * 3.036826223817399E-5 + me->strings_conn_synapse79_data.out * 2.3937351910931485E-5 + me->strings_conn_synapse80_data.out * 2.1572228269774915E-5 + me->strings_conn_synapse81_data.out * 0.004052419706457421 + me->strings_conn_synapse82_data.out * -0.0014786157188182159 + me->strings_conn_synapse83_data.out * 2.541183563499893E-5 + me->strings_conn_synapse84_data.out * 0.0011834826139249563 + me->strings_conn_synapse85_data.out * -0.005963727961160849 + me->strings_conn_synapse86_data.out * 0.001041443829549551 + me->strings_conn_synapse87_data.out * -0.003434446702147942 + me->strings_conn_synapse88_data.out * -2.0503105534968836E-5 + me->strings_conn_synapse89_data.out * 1.1367210933805074E-4 + me->strings_conn_synapse90_data.out * 0.002288661799010584 + me->strings_conn_synapse91_data.out * 0.011740345114434086 + me->strings_conn_synapse92_data.out * -6.11044463447622E-4 + me->strings_conn_synapse93_data.out * 3.831198776511923E-5 + me->strings_conn_synapse94_data.out * 0.004225506950295534 + me->strings_conn_synapse95_data.out * 3.9644125859367976E-4 + me->strings_conn_synapse96_data.out * -0.01772788989169234 + me->strings_conn_synapse97_data.out * 7.631447727088572E-4 + me->strings_conn_synapse98_data.out * -8.254409811894243E-5 + me->strings_conn_synapse99_data.out * 1.534186008459753E-4 + me->strings_conn_synapse100_data.out * 0.0014831229501676014 + me->strings_conn_synapse101_data.out * 1.3877756479982025E-4 + me->strings_conn_synapse102_data.out * -0.009830620184672848 + me->strings_conn_synapse103_data.out * -1.912993651474127E-4 + me->strings_conn_synapse104_data.out * -0.001018761378231427 + me->strings_conn_synapse105_data.out * 7.56951035245185E-4 + me->strings_conn_synapse106_data.out * 0.0012029680166955492 + me->strings_conn_synapse107_data.out * 3.290668271080822E-4 + me->strings_conn_synapse108_data.out * 2.768384463991946E-4 + me->strings_conn_synapse109_data.out * 0.0012563060708304392 + me->strings_conn_synapse110_data.out * 0.008016409480470197 + me->strings_conn_synapse111_data.out * 6.492247299132137E-5 + me->strings_conn_synapse112_data.out * -0.0033754859779661353 + me->strings_conn_synapse113_data.out * 0.0019576813889537574 + me->strings_conn_synapse114_data.out * -1.1790206670421352E-4 + me->strings_conn_synapse115_data.out * -0.016822247778208493 + me->strings_conn_synapse116_data.out * -3.5057573007346324E-5 + me->strings_conn_synapse117_data.out * 6.678163379895329E-4 + me->strings_conn_synapse118_data.out * -0.0032645338938574768 + me->strings_conn_synapse119_data.out * 0.0012024422578932042 + me->strings_conn_synapse120_data.out * 0.004344046795238145 + me->strings_conn_synapse121_data.out * -6.427260724073921E-6 + me->strings_conn_synapse122_data.out * 0.007874298744847458 + me->strings_conn_synapse123_data.out * -3.579967266426732E-5 + me->strings_conn_synapse124_data.out * 2.350269231857612E-5 + me->strings_conn_synapse125_data.out * 0.0033826714858904527 + me->strings_conn_synapse126_data.out * 6.030549696396628E-5 + me->strings_conn_synapse127_data.out * 0.010348029541009945 + me->strings_conn_synapse128_data.out * -2.6601566275166565E-4 + me->strings_conn_synapse129_data.out * 2.6144581367777967E-5 + me->strings_conn_synapse130_data.out * 3.3496758315194083E-4 + me->strings_conn_synapse131_data.out * 5.492433445170866E-4 + me->strings_conn_synapse132_data.out * 1.6451244172935672E-4 + me->strings_conn_synapse133_data.out * 0.0012536776293687031 + me->strings_conn_synapse134_data.out * 0.004348972601052794 + me->strings_conn_synapse135_data.out * 0.00537515120571415 + me->strings_conn_synapse136_data.out * -1.1892106536076862E-4 + me->strings_conn_synapse137_data.out * -6.347105097089502E-4 + me->strings_conn_synapse138_data.out * -5.2502788737046616E-5 + me->strings_conn_synapse139_data.out * 0.001012927336355483 + me->strings_conn_synapse140_data.out * 8.160505938972324E-5 + me->strings_conn_synapse141_data.out * 8.528376904500897E-5 + me->strings_conn_synapse142_data.out * 2.6037343787973415E-4 + me->strings_conn_synapse143_data.out * -0.006333701263551044 + me->strings_conn_synapse144_data.out * -4.532669627905533E-5 + me->strings_conn_synapse145_data.out * 0.003165615848661026 + me->strings_conn_synapse146_data.out * 0.0012331027707511105 + me->strings_conn_synapse147_data.out * 9.695372711537753E-5 + me->strings_conn_synapse148_data.out * 0.006878842189657728 + me->strings_conn_synapse149_data.out * 9.011987086346746E-4 + me->strings_conn_synapse150_data.out * -0.0031825007570481373 + me->strings_conn_synapse151_data.out * 1.6172610650725934E-4 + me->strings_conn_synapse152_data.out * -0.0049726652076414884 + me->strings_conn_synapse153_data.out * -3.425088870544868E-4 + me->strings_conn_synapse154_data.out * 4.8816687004892467E-4 + me->strings_conn_synapse155_data.out * 0.002744762562360715 + me->strings_conn_synapse156_data.out * 3.794489658087864E-5 + me->strings_conn_synapse157_data.out * 3.5578485612991155E-5 + me->strings_conn_synapse158_data.out * 0.0028746139339282336 + me->strings_conn_synapse159_data.out * -0.0027106375347173577 + me->strings_conn_synapse160_data.out * 0.0012659988705237956 + me->strings_conn_synapse161_data.out * 6.506971142831652E-4 + me->strings_conn_synapse162_data.out * 6.342964442060345E-6 + me->strings_conn_synapse163_data.out * -0.003759385432712532 + me->strings_conn_synapse164_data.out * -3.6645178489639154E-4 + me->strings_conn_synapse165_data.out * 6.188204011752857E-4 + me->strings_conn_synapse166_data.out * 5.225117502083182E-4 + me->strings_conn_synapse167_data.out * -8.360816139068714E-5 + me->strings_conn_synapse168_data.out * 5.093855878425824E-4 + me->strings_conn_synapse169_data.out * -0.0032755439794014017 + me->strings_conn_synapse170_data.out * 0.002842088648179421 + me->strings_conn_synapse171_data.out * -9.507345129846027E-4 + me->strings_conn_synapse172_data.out * 9.613022199636215E-5 + me->strings_conn_synapse173_data.out * 0.006843215749887958 + me->strings_conn_synapse174_data.out * 0.004335588316892038 + me->strings_conn_synapse175_data.out * 2.3119484842100977E-5 + me->strings_conn_synapse176_data.out * 8.249364036900499E-5 + me->strings_conn_synapse177_data.out * -0.0054836362567378845 + me->strings_conn_synapse178_data.out * 8.705332360106152E-4 + me->strings_conn_synapse179_data.out * -0.001075894182183367 + me->strings_conn_synapse180_data.out * -5.202673601418833E-5 + me->strings_conn_synapse181_data.out * 0.03985905316732162 + me->strings_conn_synapse182_data.out * -0.007057422593913682 + me->strings_conn_synapse183_data.out * 0.008875158054855913 + me->strings_conn_synapse184_data.out * 1.874236769532788E-4 + me->strings_conn_synapse185_data.out * -6.01132362552606E-4 + me->strings_conn_synapse186_data.out * 0.0052675139523297755 + me->strings_conn_synapse187_data.out * 2.014233584746352E-4 + me->strings_conn_synapse188_data.out * 0.0014284430278506707 + me->strings_conn_synapse189_data.out * 6.99766244407222E-4 + me->strings_conn_synapse190_data.out * 5.36118678379437E-5 + me->strings_conn_synapse191_data.out * 6.289759590435394E-5 + me->strings_conn_synapse192_data.out * 0.001079323709348127 + me->strings_conn_synapse193_data.out * -0.0024878203349980093 + me->strings_conn_synapse194_data.out * 8.100260823381103E-4 + me->strings_conn_synapse195_data.out * 0.001961066661301291 + me->strings_conn_synapse196_data.out * -5.948852441179837E-5 + me->strings_conn_synapse197_data.out * -1.223020064972033E-4 + me->strings_conn_synapse198_data.out * 0.0060807394579362505 + me->strings_conn_synapse199_data.out * 4.482102128301762E-4;
    me->strings_1_out = 0.0 + me->strings_conn_synapse0_data.out * 0.0015965065685758523 + me->strings_conn_synapse1_data.out * 0.005291553460635003 + me->strings_conn_synapse2_data.out * -0.007888976257622745 + me->strings_conn_synapse3_data.out * 8.78362484512242E-5 + me->strings_conn_synapse4_data.out * 3.647416102096407E-4 + me->strings_conn_synapse5_data.out * -7.476851352086142E-4 + me->strings_conn_synapse6_data.out * 5.055561963397542E-4 + me->strings_conn_synapse7_data.out * -0.009112259838640273 + me->strings_conn_synapse8_data.out * 0.0016441108062519773 + me->strings_conn_synapse9_data.out * -1.857305368526721E-4 + me->strings_conn_synapse10_data.out * 0.0010861379720820425 + me->strings_conn_synapse11_data.out * -6.643242692682335E-5 + me->strings_conn_synapse12_data.out * 5.131199762163379E-4 + me->strings_conn_synapse13_data.out * 8.154294957245979E-4 + me->strings_conn_synapse14_data.out * 6.81701775292181E-4 + me->strings_conn_synapse15_data.out * -6.377435425221433E-5 + me->strings_conn_synapse16_data.out * -4.4389927801671006E-5 + me->strings_conn_synapse17_data.out * -0.01282114705854971 + me->strings_conn_synapse18_data.out * 0.010924148617324082 + me->strings_conn_synapse19_data.out * 0.0010770178485648534 + me->strings_conn_synapse20_data.out * 0.0010136367252174126 + me->strings_conn_synapse21_data.out * 0.0010376709086951817 + me->strings_conn_synapse22_data.out * 3.5907777663362744E-4 + me->strings_conn_synapse23_data.out * -4.3348880034982474E-5 + me->strings_conn_synapse24_data.out * 0.005001795167697305 + me->strings_conn_synapse25_data.out * -3.2286832511964266E-4 + me->strings_conn_synapse26_data.out * 5.740681481733936E-4 + me->strings_conn_synapse27_data.out * -0.00496328115548335 + me->strings_conn_synapse28_data.out * 5.756312591742386E-4 + me->strings_conn_synapse29_data.out * 0.007243747054595135 + me->strings_conn_synapse30_data.out * 6.17393735163924E-4 + me->strings_conn_synapse31_data.out * 0.001183254410264897 + me->strings_conn_synapse32_data.out * 0.004454055544533501 + me->strings_conn_synapse33_data.out * -1.6076847551528336E-4 + me->strings_conn_synapse34_data.out * 8.715115678543349E-4 + me->strings_conn_synapse35_data.out * -0.003614040473288057 + me->strings_conn_synapse36_data.out * 0.0010658985478422724 + me->strings_conn_synapse37_data.out * -2.2015665258760136E-4 + me->strings_conn_synapse38_data.out * 0.0016850722091763329 + me->strings_conn_synapse39_data.out * 1.3727510062254697E-5 + me->strings_conn_synapse40_data.out * -0.003245316861818624 + me->strings_conn_synapse41_data.out * 0.0019495161942226997 + me->strings_conn_synapse42_data.out * 0.0017066158410488363 + me->strings_conn_synapse43_data.out * 2.0180598691727964E-4 + me->strings_conn_synapse44_data.out * -0.0023231593403820073 + me->strings_conn_synapse45_data.out * -9.418684493085577E-5 + me->strings_conn_synapse46_data.out * 0.0016090810474327939 + me->strings_conn_synapse47_data.out * 0.0017140861618593676 + me->strings_conn_synapse48_data.out * 0.0012239214406248226 + me->strings_conn_synapse49_data.out * -0.005213562770646409 + me->strings_conn_synapse50_data.out * 0.001290264230974402 + me->strings_conn_synapse51_data.out * 0.001178416430978292 + me->strings_conn_synapse52_data.out * 0.0024831657449566106 + me->strings_conn_synapse53_data.out * -0.003149201738111662 + me->strings_conn_synapse54_data.out * -9.105229094592628E-4 + me->strings_conn_synapse55_data.out * 0.0015717900052312794 + me->strings_conn_synapse56_data.out * 5.871425702151817E-5 + me->strings_conn_synapse57_data.out * 0.005542241196160142 + me->strings_conn_synapse58_data.out * -0.004306659166114419 + me->strings_conn_synapse59_data.out * -0.0011606195515158858 + me->strings_conn_synapse60_data.out * 0.007184881175282624 + me->strings_conn_synapse61_data.out * 5.9363583409213044E-5 + me->strings_conn_synapse62_data.out * -0.010879433302176382 + me->strings_conn_synapse63_data.out * -3.083704879682263E-4 + me->strings_conn_synapse64_data.out * 0.0013989788740768297 + me->strings_conn_synapse65_data.out * -1.5476875829885346E-4 + me->strings_conn_synapse66_data.out * -3.963549563502561E-5 + me->strings_conn_synapse67_data.out * -2.2687255889238667E-5 + me->strings_conn_synapse68_data.out * 0.004462833952185053 + me->strings_conn_synapse69_data.out * -2.5940963760227852E-5 + me->strings_conn_synapse70_data.out * 7.147868271874918E-5 + me->strings_conn_synapse71_data.out * 4.9988663385570865E-5 + me->strings_conn_synapse72_data.out * -7.932996021240206E-5 + me->strings_conn_synapse73_data.out * 1.2687505560476359E-4 + me->strings_conn_synapse74_data.out * 5.511762188314537E-4 + me->strings_conn_synapse75_data.out * -8.867825431666395E-5 + me->strings_conn_synapse76_data.out * -0.003903340248150216 + me->strings_conn_synapse77_data.out * -1.4377720719348873E-4 + me->strings_conn_synapse78_data.out * 7.55755814602485E-5 + me->strings_conn_synapse79_data.out * 5.4145794408927154E-5 + me->strings_conn_synapse80_data.out * -1.1420421887344954E-4 + me->strings_conn_synapse81_data.out * 7.847307881064974E-4 + me->strings_conn_synapse82_data.out * 0.001400041506756926 + me->strings_conn_synapse83_data.out * 1.527739475428135E-5 + me->strings_conn_synapse84_data.out * 0.0012777095008360982 + me->strings_conn_synapse85_data.out * 0.016663714424779267 + me->strings_conn_synapse86_data.out * 0.0020183051867738535 + me->strings_conn_synapse87_data.out * -3.849387074211626E-4 + me->strings_conn_synapse88_data.out * -3.653407948984928E-5 + me->strings_conn_synapse89_data.out * 0.002722262265425661 + me->strings_conn_synapse90_data.out * -5.335641563471469E-5 + me->strings_conn_synapse91_data.out * -0.005344051665259254 + me->strings_conn_synapse92_data.out * 0.0016331102489222506 + me->strings_conn_synapse93_data.out * 8.528651185344145E-5 + me->strings_conn_synapse94_data.out * 0.008150297857774507 + me->strings_conn_synapse95_data.out * 0.00388586244745512 + me->strings_conn_synapse96_data.out * 0.025452861925510786 + me->strings_conn_synapse97_data.out * 0.001210490527456521 + me->strings_conn_synapse98_data.out * -3.2383438752801036E-5 + me->strings_conn_synapse99_data.out * -3.960833533998869E-5 + me->strings_conn_synapse100_data.out * -0.002303009729901336 + me->strings_conn_synapse101_data.out * 0.0017127378985973515 + me->strings_conn_synapse102_data.out * 0.004865720643073665 + me->strings_conn_synapse103_data.out * -1.2013690970071064E-4 + me->strings_conn_synapse104_data.out * 0.002104376214133036 + me->strings_conn_synapse105_data.out * -7.30386240619967E-4 + me->strings_conn_synapse106_data.out * -2.2578252721447008E-4 + me->strings_conn_synapse107_data.out * 7.097049003352257E-4 + me->strings_conn_synapse108_data.out * 0.0014356649130180714 + me->strings_conn_synapse109_data.out * 0.0016316047875886233 + me->strings_conn_synapse110_data.out * 0.0022596404921485435 + me->strings_conn_synapse111_data.out * 5.361527281282775E-5 + me->strings_conn_synapse112_data.out * 0.002600628594213321 + me->strings_conn_synapse113_data.out * 7.565134404556174E-4 + me->strings_conn_synapse114_data.out * -2.3197078296398287E-5 + me->strings_conn_synapse115_data.out * -0.004308828882475638 + me->strings_conn_synapse116_data.out * 2.828406002806619E-5 + me->strings_conn_synapse117_data.out * -0.001182532517155164 + me->strings_conn_synapse118_data.out * -0.011839101310055201 + me->strings_conn_synapse119_data.out * 0.001110344924200334 + me->strings_conn_synapse120_data.out * 0.0019691416468140487 + me->strings_conn_synapse121_data.out * -6.418304555001972E-5 + me->strings_conn_synapse122_data.out * -0.01047657336105707 + me->strings_conn_synapse123_data.out * -2.804518868066426E-5 + me->strings_conn_synapse124_data.out * 3.024773586263003E-5 + me->strings_conn_synapse125_data.out * -7.255224155443029E-5 + me->strings_conn_synapse126_data.out * 4.496678766474698E-5 + me->strings_conn_synapse127_data.out * 0.0046615167275483186 + me->strings_conn_synapse128_data.out * -3.497923089019264E-4 + me->strings_conn_synapse129_data.out * 0.0011146057026362698 + me->strings_conn_synapse130_data.out * 0.0013856889429524413 + me->strings_conn_synapse131_data.out * 9.58154696537024E-4 + me->strings_conn_synapse132_data.out * 0.003606735856389757 + me->strings_conn_synapse133_data.out * 0.0010165586582283673 + me->strings_conn_synapse134_data.out * 0.011241809696359586 + me->strings_conn_synapse135_data.out * -5.940415930111904E-4 + me->strings_conn_synapse136_data.out * -2.4213952862503287E-5 + me->strings_conn_synapse137_data.out * 9.309698241975162E-4 + me->strings_conn_synapse138_data.out * -3.799463613721867E-5 + me->strings_conn_synapse139_data.out * 0.0018926400637295179 + me->strings_conn_synapse140_data.out * 7.178142638475585E-5 + me->strings_conn_synapse141_data.out * 1.3249410721302786E-5 + me->strings_conn_synapse142_data.out * 9.400021155855086E-4 + me->strings_conn_synapse143_data.out * -8.07622758757634E-4 + me->strings_conn_synapse144_data.out * 3.133797825533141E-5 + me->strings_conn_synapse145_data.out * -0.0017346337184820514 + me->strings_conn_synapse146_data.out * 0.0020124777162166497 + me->strings_conn_synapse147_data.out * 1.1906525619908476E-5 + me->strings_conn_synapse148_data.out * -0.002273486648735628 + me->strings_conn_synapse149_data.out * 7.557496699518275E-4 + me->strings_conn_synapse150_data.out * 0.00346937845720031 + me->strings_conn_synapse151_data.out * 0.001300830163231876 + me->strings_conn_synapse152_data.out * 0.0022459802324770535 + me->strings_conn_synapse153_data.out * 0.001300595811926448 + me->strings_conn_synapse154_data.out * 0.0016650204058466106 + me->strings_conn_synapse155_data.out * -0.0025994249408565883 + me->strings_conn_synapse156_data.out * -1.9540914111766105E-5 + me->strings_conn_synapse157_data.out * 6.354350170075811E-4 + me->strings_conn_synapse158_data.out * 0.003050732183488209 + me->strings_conn_synapse159_data.out * 0.011248078688012371 + me->strings_conn_synapse160_data.out * 0.001830654152469244 + me->strings_conn_synapse161_data.out * 0.0011516514982316552 + me->strings_conn_synapse162_data.out * -5.891222268076568E-5 + me->strings_conn_synapse163_data.out * 0.0022553810474165224 + me->strings_conn_synapse164_data.out * 0.0031776642034903944 + me->strings_conn_synapse165_data.out * 0.0013208155369951562 + me->strings_conn_synapse166_data.out * 0.0022506714174733737 + me->strings_conn_synapse167_data.out * 7.915519557419987E-4 + me->strings_conn_synapse168_data.out * 5.83440724247456E-4 + me->strings_conn_synapse169_data.out * 0.0018874396665306452 + me->strings_conn_synapse170_data.out * -4.522323892736705E-5 + me->strings_conn_synapse171_data.out * 0.0014950159855653842 + me->strings_conn_synapse172_data.out * 0.0012149878350344843 + me->strings_conn_synapse173_data.out * -3.002143924539147E-4 + me->strings_conn_synapse174_data.out * -0.0017943313074948789 + me->strings_conn_synapse175_data.out * 6.482529134168704E-5 + me->strings_conn_synapse176_data.out * -1.3919211024226633E-4 + me->strings_conn_synapse177_data.out * -1.9878320317165697E-4 + me->strings_conn_synapse178_data.out * 7.759964316221026E-4 + me->strings_conn_synapse179_data.out * 0.0012298425740587344 + me->strings_conn_synapse180_data.out * -8.185432000246559E-5 + me->strings_conn_synapse181_data.out * -0.01686941388678628 + me->strings_conn_synapse182_data.out * -0.002365474799002626 + me->strings_conn_synapse183_data.out * -0.002136486312760377 + me->strings_conn_synapse184_data.out * 7.419344961751724E-4 + me->strings_conn_synapse185_data.out * 0.005855137293630086 + me->strings_conn_synapse186_data.out * -0.004453070152905789 + me->strings_conn_synapse187_data.out * 0.001060806288539706 + me->strings_conn_synapse188_data.out * -0.0017101637547970268 + me->strings_conn_synapse189_data.out * 7.462519529652431E-4 + me->strings_conn_synapse190_data.out * -7.801199433441995E-6 + me->strings_conn_synapse191_data.out * 2.0942674790970382E-5 + me->strings_conn_synapse192_data.out * -1.7172469065706891E-4 + me->strings_conn_synapse193_data.out * -0.005551479730834039 + me->strings_conn_synapse194_data.out * 0.002717178362550318 + me->strings_conn_synapse195_data.out * -0.0012196102496668587 + me->strings_conn_synapse196_data.out * 7.58430988168629E-5 + me->strings_conn_synapse197_data.out * -8.711471238087923E-5 + me->strings_conn_synapse198_data.out * 0.002503651236993189 + me->strings_conn_synapse199_data.out * -0.010800791081433494;
    me->strings_2_out = 0.0 + me->strings_conn_synapse0_data.out * 7.677674885010578E-4 + me->strings_conn_synapse1_data.out * -0.0022548609908664093 + me->strings_conn_synapse2_data.out * 0.00807991319876324 + me->strings_conn_synapse3_data.out * -6.721902559399972E-5 + me->strings_conn_synapse4_data.out * -3.9419551352754586E-4 + me->strings_conn_synapse5_data.out * -0.014401482822965066 + me->strings_conn_synapse6_data.out * 9.971473546493506E-4 + me->strings_conn_synapse7_data.out * 0.01443592626171217 + me->strings_conn_synapse8_data.out * 0.0015943551903050196 + me->strings_conn_synapse9_data.out * -0.00652396005721154 + me->strings_conn_synapse10_data.out * 9.938269813681662E-4 + me->strings_conn_synapse11_data.out * 8.91911840201018E-5 + me->strings_conn_synapse12_data.out * 0.0014038169308846578 + me->strings_conn_synapse13_data.out * 7.131288613728701E-4 + me->strings_conn_synapse14_data.out * 1.9442937283002917E-4 + me->strings_conn_synapse15_data.out * 4.991550439585101E-5 + me->strings_conn_synapse16_data.out * -0.0022663648573977313 + me->strings_conn_synapse17_data.out * 0.012840313537319561 + me->strings_conn_synapse18_data.out * -0.008036917075172016 + me->strings_conn_synapse19_data.out * 0.0019462259427912212 + me->strings_conn_synapse20_data.out * 0.001131757074248063 + me->strings_conn_synapse21_data.out * 4.246225996712352E-4 + me->strings_conn_synapse22_data.out * -0.007211394167242683 + me->strings_conn_synapse23_data.out * 9.019047710745093E-5 + me->strings_conn_synapse24_data.out * -0.0018601631530916838 + me->strings_conn_synapse25_data.out * -0.0010298582283706913 + me->strings_conn_synapse26_data.out * -0.0011886982037670546 + me->strings_conn_synapse27_data.out * 0.012230553433996585 + me->strings_conn_synapse28_data.out * 8.865792635191208E-4 + me->strings_conn_synapse29_data.out * 0.009670744099946104 + me->strings_conn_synapse30_data.out * 0.0015072476115881273 + me->strings_conn_synapse31_data.out * 0.0011303750462646261 + me->strings_conn_synapse32_data.out * -0.00589487480975084 + me->strings_conn_synapse33_data.out * -1.2215091385769702E-4 + me->strings_conn_synapse34_data.out * 6.442852747381943E-4 + me->strings_conn_synapse35_data.out * 9.873372511523609E-5 + me->strings_conn_synapse36_data.out * 4.4419739997774116E-4 + me->strings_conn_synapse37_data.out * 0.0012069009629352768 + me->strings_conn_synapse38_data.out * 0.0025352531174432902 + me->strings_conn_synapse39_data.out * 6.6185899266162E-4 + me->strings_conn_synapse40_data.out * 0.0034451360949363462 + me->strings_conn_synapse41_data.out * -6.383136403234772E-4 + me->strings_conn_synapse42_data.out * 0.0014703809500698616 + me->strings_conn_synapse43_data.out * 0.0020810356940901857 + me->strings_conn_synapse44_data.out * 0.012325032301893194 + me->strings_conn_synapse45_data.out * -1.0686843450824311E-5 + me->strings_conn_synapse46_data.out * 1.6352506846178258E-4 + me->strings_conn_synapse47_data.out * 0.0011340655891961867 + me->strings_conn_synapse48_data.out * 0.0013189771673316393 + me->strings_conn_synapse49_data.out * -0.0022114079328242374 + me->strings_conn_synapse50_data.out * 0.001303255873986301 + me->strings_conn_synapse51_data.out * -0.0010672216881169791 + me->strings_conn_synapse52_data.out * -0.004016810325173916 + me->strings_conn_synapse53_data.out * 0.00251624646019541 + me->strings_conn_synapse54_data.out * -0.004041056734391699 + me->strings_conn_synapse55_data.out * 0.00136573508599843 + me->strings_conn_synapse56_data.out * -9.941003842589645E-6 + me->strings_conn_synapse57_data.out * -0.00855616402390529 + me->strings_conn_synapse58_data.out * -0.0015098035074432785 + me->strings_conn_synapse59_data.out * -0.003371078098687697 + me->strings_conn_synapse60_data.out * 7.051460033577634E-4 + me->strings_conn_synapse61_data.out * -1.0501665096783937E-5 + me->strings_conn_synapse62_data.out * 2.1267005497859886E-4 + me->strings_conn_synapse63_data.out * -0.00599341858260699 + me->strings_conn_synapse64_data.out * 0.0017598055559859976 + me->strings_conn_synapse65_data.out * 8.531875311818435E-5 + me->strings_conn_synapse66_data.out * -7.619871788201129E-5 + me->strings_conn_synapse67_data.out * 1.1444224730877987E-4 + me->strings_conn_synapse68_data.out * 2.734454830313108E-4 + me->strings_conn_synapse69_data.out * 7.778981567999929E-5 + me->strings_conn_synapse70_data.out * -3.3526813506081E-5 + me->strings_conn_synapse71_data.out * 4.166240536575758E-5 + me->strings_conn_synapse72_data.out * -7.587913072155916E-5 + me->strings_conn_synapse73_data.out * -1.9634868920263723E-4 + me->strings_conn_synapse74_data.out * -1.1561479955987552E-4 + me->strings_conn_synapse75_data.out * 6.744813309290892E-4 + me->strings_conn_synapse76_data.out * -0.0018622237734343286 + me->strings_conn_synapse77_data.out * -9.035204654774562E-7 + me->strings_conn_synapse78_data.out * -1.642691476335897E-5 + me->strings_conn_synapse79_data.out * -5.6263843444557036E-5 + me->strings_conn_synapse80_data.out * -3.1590255424335634E-5 + me->strings_conn_synapse81_data.out * 0.0016764545108387818 + me->strings_conn_synapse82_data.out * 0.0020083360724051117 + me->strings_conn_synapse83_data.out * -4.193324595641913E-5 + me->strings_conn_synapse84_data.out * 0.0010168792005130602 + me->strings_conn_synapse85_data.out * -0.0023957090961336854 + me->strings_conn_synapse86_data.out * 4.291852768151125E-4 + me->strings_conn_synapse87_data.out * 0.0020191455166909474 + me->strings_conn_synapse88_data.out * -2.136514341798647E-5 + me->strings_conn_synapse89_data.out * 6.759401299581191E-4 + me->strings_conn_synapse90_data.out * -9.986324949705144E-4 + me->strings_conn_synapse91_data.out * -0.0057665031457643555 + me->strings_conn_synapse92_data.out * 0.0018551590161407833 + me->strings_conn_synapse93_data.out * 1.5083224232131543E-4 + me->strings_conn_synapse94_data.out * -0.00637647508375996 + me->strings_conn_synapse95_data.out * 9.965090446332546E-4 + me->strings_conn_synapse96_data.out * -0.004335230109139557 + me->strings_conn_synapse97_data.out * 0.0013071981373284538 + me->strings_conn_synapse98_data.out * 3.0749090747341964E-6 + me->strings_conn_synapse99_data.out * -1.572006961381614E-4 + me->strings_conn_synapse100_data.out * 0.0018782267785521268 + me->strings_conn_synapse101_data.out * 6.047600111088593E-4 + me->strings_conn_synapse102_data.out * 0.0063918827208069824 + me->strings_conn_synapse103_data.out * 1.8417771107802563E-5 + me->strings_conn_synapse104_data.out * 0.0037544284340623644 + me->strings_conn_synapse105_data.out * 0.0020514460304451704 + me->strings_conn_synapse106_data.out * 9.207021269731458E-4 + me->strings_conn_synapse107_data.out * -3.611540019876471E-5 + me->strings_conn_synapse108_data.out * 0.0012990177485893695 + me->strings_conn_synapse109_data.out * 0.00208607471902853 + me->strings_conn_synapse110_data.out * 0.012527054275376167 + me->strings_conn_synapse111_data.out * 6.62059013582535E-5 + me->strings_conn_synapse112_data.out * -0.0017729837209004503 + me->strings_conn_synapse113_data.out * -2.260555919335257E-4 + me->strings_conn_synapse114_data.out * 2.3645788260214678E-5 + me->strings_conn_synapse115_data.out * 0.02069523933705848 + me->strings_conn_synapse116_data.out * 1.0359232472278946E-4 + me->strings_conn_synapse117_data.out * 5.421084448332945E-4 + me->strings_conn_synapse118_data.out * 0.016357011644280637 + me->strings_conn_synapse119_data.out * 2.6593374584034065E-4 + me->strings_conn_synapse120_data.out * -0.0016844939845728727 + me->strings_conn_synapse121_data.out * -2.0055347686442903E-5 + me->strings_conn_synapse122_data.out * 0.003049859622097482 + me->strings_conn_synapse123_data.out * 5.31089037805018E-5 + me->strings_conn_synapse124_data.out * -1.784274539056408E-5 + me->strings_conn_synapse125_data.out * -0.0016868269038177348 + me->strings_conn_synapse126_data.out * -8.063253705413048E-6 + me->strings_conn_synapse127_data.out * -0.009876914618738209 + me->strings_conn_synapse128_data.out * 0.00605820636694928 + me->strings_conn_synapse129_data.out * 0.002746061997484542 + me->strings_conn_synapse130_data.out * 0.001253037747405007 + me->strings_conn_synapse131_data.out * 7.908856652704817E-4 + me->strings_conn_synapse132_data.out * -0.006150430759672283 + me->strings_conn_synapse133_data.out * 0.001147886686307458 + me->strings_conn_synapse134_data.out * -0.01833974078592324 + me->strings_conn_synapse135_data.out * -0.0020979727496966594 + me->strings_conn_synapse136_data.out * 5.648548770650572E-5 + me->strings_conn_synapse137_data.out * 9.94643604395027E-4 + me->strings_conn_synapse138_data.out * 7.975656813170662E-5 + me->strings_conn_synapse139_data.out * 0.0013233854074767661 + me->strings_conn_synapse140_data.out * 5.272537463274656E-5 + me->strings_conn_synapse141_data.out * 3.438130389781183E-5 + me->strings_conn_synapse142_data.out * 5.850044363230967E-4 + me->strings_conn_synapse143_data.out * 0.0023495029219573224 + me->strings_conn_synapse144_data.out * -5.1168661800348205E-6 + me->strings_conn_synapse145_data.out * 4.8034810321939626E-4 + me->strings_conn_synapse146_data.out * 0.0021635983884623956 + me->strings_conn_synapse147_data.out * 1.3720297093824726E-5 + me->strings_conn_synapse148_data.out * 9.53087588367735E-4 + me->strings_conn_synapse149_data.out * 8.370496437640775E-4 + me->strings_conn_synapse150_data.out * 0.0024250110651934625 + me->strings_conn_synapse151_data.out * 3.871823997765777E-4 + me->strings_conn_synapse152_data.out * -0.0077715251892055345 + me->strings_conn_synapse153_data.out * -6.569169854422417E-5 + me->strings_conn_synapse154_data.out * 9.961593573813497E-4 + me->strings_conn_synapse155_data.out * 0.0013523562450889956 + me->strings_conn_synapse156_data.out * 1.901767302338314E-5 + me->strings_conn_synapse157_data.out * 1.3748556764515908E-4 + me->strings_conn_synapse158_data.out * -0.0038375929830701413 + me->strings_conn_synapse159_data.out * -0.0021341027383087645 + me->strings_conn_synapse160_data.out * 0.0014247821656142095 + me->strings_conn_synapse161_data.out * 9.815987478205325E-4 + me->strings_conn_synapse162_data.out * 5.80806949749238E-5 + me->strings_conn_synapse163_data.out * 0.008000431865779508 + me->strings_conn_synapse164_data.out * -0.0030220207378871236 + me->strings_conn_synapse165_data.out * 0.001225015435802303 + me->strings_conn_synapse166_data.out * -7.588061985074267E-4 + me->strings_conn_synapse167_data.out * 2.3162977679428348E-4 + me->strings_conn_synapse168_data.out * 0.0010855017585934838 + me->strings_conn_synapse169_data.out * 0.0032982330853974138 + me->strings_conn_synapse170_data.out * 5.941816073409543E-4 + me->strings_conn_synapse171_data.out * 0.0015695688579856284 + me->strings_conn_synapse172_data.out * 0.0011227404218157899 + me->strings_conn_synapse173_data.out * 0.0020233821886258417 + me->strings_conn_synapse174_data.out * 0.002183672768117572 + me->strings_conn_synapse175_data.out * -1.570397134639505E-5 + me->strings_conn_synapse176_data.out * -2.4924911408640945E-5 + me->strings_conn_synapse177_data.out * 0.009865052921603574 + me->strings_conn_synapse178_data.out * 6.441022406510117E-4 + me->strings_conn_synapse179_data.out * 0.001793284710918917 + me->strings_conn_synapse180_data.out * -3.333200296687427E-5 + me->strings_conn_synapse181_data.out * -0.022500957394504535 + me->strings_conn_synapse182_data.out * 0.014013589750010534 + me->strings_conn_synapse183_data.out * -0.003892715829292607 + me->strings_conn_synapse184_data.out * 7.216947406088823E-4 + me->strings_conn_synapse185_data.out * -0.0025558265517116097 + me->strings_conn_synapse186_data.out * 8.740244430685554E-4 + me->strings_conn_synapse187_data.out * 4.965334711726249E-4 + me->strings_conn_synapse188_data.out * -4.457727855942212E-4 + me->strings_conn_synapse189_data.out * 6.358662819854772E-4 + me->strings_conn_synapse190_data.out * -1.365885658303676E-5 + me->strings_conn_synapse191_data.out * 2.1616531884594956E-5 + me->strings_conn_synapse192_data.out * 7.573128736074378E-4 + me->strings_conn_synapse193_data.out * 0.011082100981488659 + me->strings_conn_synapse194_data.out * 4.619018158338844E-4 + me->strings_conn_synapse195_data.out * 0.0014762265591768532 + me->strings_conn_synapse196_data.out * -3.405044690562691E-5 + me->strings_conn_synapse197_data.out * 7.824271374041656E-5 + me->strings_conn_synapse198_data.out * -0.0066162532431549535 + me->strings_conn_synapse199_data.out * 0.010821594719174979;
}