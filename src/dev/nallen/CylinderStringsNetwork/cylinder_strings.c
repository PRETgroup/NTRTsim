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
    me->strings_0_out = 0.0 + me->strings_conn_synapse0_data.out * -0.008689582192363349 + me->strings_conn_synapse1_data.out * 3.8931073016575053E-4 + me->strings_conn_synapse2_data.out * 1.387695071119422E-4 + me->strings_conn_synapse3_data.out * 4.505819484613896E-4 + me->strings_conn_synapse4_data.out * -4.195952232299887E-5 + me->strings_conn_synapse5_data.out * 0.0010504674111131065 + me->strings_conn_synapse6_data.out * 9.143339927761524E-4 + me->strings_conn_synapse7_data.out * -9.830738522276193E-6 + me->strings_conn_synapse8_data.out * -0.008302516539008117 + me->strings_conn_synapse9_data.out * 2.1767640995544696E-4 + me->strings_conn_synapse10_data.out * 7.052644665316036E-6 + me->strings_conn_synapse11_data.out * 2.806881954243059E-5 + me->strings_conn_synapse12_data.out * 0.0011790283696660486 + me->strings_conn_synapse13_data.out * 3.879369259444315E-5 + me->strings_conn_synapse14_data.out * 9.122138557459958E-4 + me->strings_conn_synapse15_data.out * -0.012657645747380972 + me->strings_conn_synapse16_data.out * 4.5946189517498105E-4 + me->strings_conn_synapse17_data.out * 0.0010149579649977392 + me->strings_conn_synapse18_data.out * -6.685362077846328E-5 + me->strings_conn_synapse19_data.out * 5.608124455180729E-4 + me->strings_conn_synapse20_data.out * 0.0015434199307227227 + me->strings_conn_synapse21_data.out * 0.0010114917448759374 + me->strings_conn_synapse22_data.out * 8.012610978306682E-4 + me->strings_conn_synapse23_data.out * -5.150745587678532E-5 + me->strings_conn_synapse24_data.out * -0.007700069854493281 + me->strings_conn_synapse25_data.out * 5.316495130858856E-5 + me->strings_conn_synapse26_data.out * -6.034021900246462E-5 + me->strings_conn_synapse27_data.out * 0.0026732930047728572 + me->strings_conn_synapse28_data.out * -0.00328399425571355 + me->strings_conn_synapse29_data.out * 0.002613358063699041 + me->strings_conn_synapse30_data.out * 0.0011645127634917574 + me->strings_conn_synapse31_data.out * -9.110764007481065E-5 + me->strings_conn_synapse32_data.out * 2.2121732437800474E-4 + me->strings_conn_synapse33_data.out * 4.28370393612347E-5 + me->strings_conn_synapse34_data.out * 0.0011944263478052583 + me->strings_conn_synapse35_data.out * 6.34018300261252E-4 + me->strings_conn_synapse36_data.out * -2.7407211304142434E-5 + me->strings_conn_synapse37_data.out * 9.830802701681451E-4 + me->strings_conn_synapse38_data.out * 8.44592092732357E-5 + me->strings_conn_synapse39_data.out * 0.001174974104984499 + me->strings_conn_synapse40_data.out * 0.0013127185753768775 + me->strings_conn_synapse41_data.out * 0.0045244161417388774 + me->strings_conn_synapse42_data.out * 3.179939244592652E-5 + me->strings_conn_synapse43_data.out * 0.0019635416130444005 + me->strings_conn_synapse44_data.out * 6.596996674206605E-4 + me->strings_conn_synapse45_data.out * 5.440042681387225E-4 + me->strings_conn_synapse46_data.out * 4.2829114814983644E-4 + me->strings_conn_synapse47_data.out * -3.163910892696099E-5 + me->strings_conn_synapse48_data.out * 0.0033343210947623606 + me->strings_conn_synapse49_data.out * 0.0015270046964233363 + me->strings_conn_synapse50_data.out * -3.443357985075874E-5 + me->strings_conn_synapse51_data.out * -9.885722245719445E-5 + me->strings_conn_synapse52_data.out * -2.3029150685889103E-5 + me->strings_conn_synapse53_data.out * -1.7301409830133334E-5 + me->strings_conn_synapse54_data.out * 0.005472389500000982 + me->strings_conn_synapse55_data.out * -7.73975014439969E-5 + me->strings_conn_synapse56_data.out * 0.0026106339938243343 + me->strings_conn_synapse57_data.out * 1.557276778597162E-4 + me->strings_conn_synapse58_data.out * -5.208724888214364E-5 + me->strings_conn_synapse59_data.out * 2.4381593766414467E-5 + me->strings_conn_synapse60_data.out * 0.0012777456480788916 + me->strings_conn_synapse61_data.out * -0.0048502803396175895 + me->strings_conn_synapse62_data.out * 7.28217313112352E-4 + me->strings_conn_synapse63_data.out * 6.799886380362032E-4 + me->strings_conn_synapse64_data.out * 1.3118485568425447E-4 + me->strings_conn_synapse65_data.out * -1.7110136403429873E-5 + me->strings_conn_synapse66_data.out * -1.0571408424771887E-4 + me->strings_conn_synapse67_data.out * 7.464583598019279E-4 + me->strings_conn_synapse68_data.out * 0.0010467262987727153 + me->strings_conn_synapse69_data.out * -5.113719167389277E-5 + me->strings_conn_synapse70_data.out * 0.003738632417315856 + me->strings_conn_synapse71_data.out * -1.6957243574481796E-5 + me->strings_conn_synapse72_data.out * 4.976733978663701E-5 + me->strings_conn_synapse73_data.out * 4.920384729124023E-4 + me->strings_conn_synapse74_data.out * 6.096465863201072E-4 + me->strings_conn_synapse75_data.out * -6.199704337412077E-5 + me->strings_conn_synapse76_data.out * 2.1831817015037E-5 + me->strings_conn_synapse77_data.out * 1.4192254648797822E-4 + me->strings_conn_synapse78_data.out * -0.006170440069489199 + me->strings_conn_synapse79_data.out * 0.0011405591599841568 + me->strings_conn_synapse80_data.out * 2.9278494147418066E-4 + me->strings_conn_synapse81_data.out * -2.829736018145275E-5 + me->strings_conn_synapse82_data.out * -1.0387932547933401E-5 + me->strings_conn_synapse83_data.out * 1.233336034910458E-4 + me->strings_conn_synapse84_data.out * -6.17681155288311E-5 + me->strings_conn_synapse85_data.out * 8.170680998019794E-4 + me->strings_conn_synapse86_data.out * 0.001050159167313566 + me->strings_conn_synapse87_data.out * 8.592172635380447E-4 + me->strings_conn_synapse88_data.out * 7.000906599192568E-7 + me->strings_conn_synapse89_data.out * 5.380055985955626E-5 + me->strings_conn_synapse90_data.out * -6.624491543662784E-5 + me->strings_conn_synapse91_data.out * 9.71959402990024E-6 + me->strings_conn_synapse92_data.out * 2.2881693746295264E-5 + me->strings_conn_synapse93_data.out * 3.350260036608146E-5 + me->strings_conn_synapse94_data.out * -3.174826640412103E-5 + me->strings_conn_synapse95_data.out * 4.3069810126810976E-5 + me->strings_conn_synapse96_data.out * -0.002466956815444477 + me->strings_conn_synapse97_data.out * 4.3896689439158846E-4 + me->strings_conn_synapse98_data.out * 0.0017902095219024662 + me->strings_conn_synapse99_data.out * 7.34868642111841E-5 + me->strings_conn_synapse100_data.out * -1.4957318015335587E-5 + me->strings_conn_synapse101_data.out * 4.655680815694359E-5 + me->strings_conn_synapse102_data.out * 7.234270879473008E-4 + me->strings_conn_synapse103_data.out * 3.846492581577527E-5 + me->strings_conn_synapse104_data.out * 3.4641279188948805E-4 + me->strings_conn_synapse105_data.out * 1.5631155730382038E-4 + me->strings_conn_synapse106_data.out * 0.003630280223214139 + me->strings_conn_synapse107_data.out * 0.0015557283518457582 + me->strings_conn_synapse108_data.out * -8.474498380322048E-4 + me->strings_conn_synapse109_data.out * 0.0018474154797976918 + me->strings_conn_synapse110_data.out * 2.7493207764534346E-5 + me->strings_conn_synapse111_data.out * -6.046598249402547E-5 + me->strings_conn_synapse112_data.out * -2.8751012039576658E-5 + me->strings_conn_synapse113_data.out * -2.1200428754212933E-5 + me->strings_conn_synapse114_data.out * 1.0152622166810134E-4 + me->strings_conn_synapse115_data.out * -4.720210275364043E-5 + me->strings_conn_synapse116_data.out * 4.749796873707571E-5 + me->strings_conn_synapse117_data.out * 5.441692167767717E-4 + me->strings_conn_synapse118_data.out * 0.0014848201686740996 + me->strings_conn_synapse119_data.out * 6.364637835861305E-4 + me->strings_conn_synapse120_data.out * -2.163100821496554E-5 + me->strings_conn_synapse121_data.out * 9.046331643826736E-4 + me->strings_conn_synapse122_data.out * -2.4138254799622548E-5 + me->strings_conn_synapse123_data.out * 0.0031882716968538514 + me->strings_conn_synapse124_data.out * 0.0010018107786392233 + me->strings_conn_synapse125_data.out * -4.8703818887588656E-5 + me->strings_conn_synapse126_data.out * 0.0010491373493739192 + me->strings_conn_synapse127_data.out * 0.0011259586114407973 + me->strings_conn_synapse128_data.out * 0.0014616201356256143 + me->strings_conn_synapse129_data.out * -4.218437321057611E-5 + me->strings_conn_synapse130_data.out * -4.320531891864453E-5 + me->strings_conn_synapse131_data.out * 8.152822707241104E-4 + me->strings_conn_synapse132_data.out * -5.9868990227770797E-5 + me->strings_conn_synapse133_data.out * 0.0015155138416173208 + me->strings_conn_synapse134_data.out * 0.003407065170557835 + me->strings_conn_synapse135_data.out * 0.0019980005779710293 + me->strings_conn_synapse136_data.out * -8.232366041848157E-5 + me->strings_conn_synapse137_data.out * 0.0014305574861569084 + me->strings_conn_synapse138_data.out * 5.828776186866954E-4 + me->strings_conn_synapse139_data.out * 1.7040308007691512E-5 + me->strings_conn_synapse140_data.out * 2.8956281163350284E-5 + me->strings_conn_synapse141_data.out * -4.093692746020386E-5 + me->strings_conn_synapse142_data.out * 0.001066804987575822 + me->strings_conn_synapse143_data.out * -0.00734456761287532 + me->strings_conn_synapse144_data.out * 3.499627216134089E-5 + me->strings_conn_synapse145_data.out * -8.969698637336886E-5 + me->strings_conn_synapse146_data.out * 0.0015524311657090224 + me->strings_conn_synapse147_data.out * 5.68531316386668E-5 + me->strings_conn_synapse148_data.out * 0.0022147924430651203 + me->strings_conn_synapse149_data.out * 8.15046308373958E-4 + me->strings_conn_synapse150_data.out * 1.3027190363108776E-4 + me->strings_conn_synapse151_data.out * -4.132832676756909E-7 + me->strings_conn_synapse152_data.out * 4.2309937560292604E-5 + me->strings_conn_synapse153_data.out * -0.0016561226937049044 + me->strings_conn_synapse154_data.out * -5.432406293455127E-6 + me->strings_conn_synapse155_data.out * 2.0640379159785098E-4 + me->strings_conn_synapse156_data.out * -1.8146948944604612E-5 + me->strings_conn_synapse157_data.out * 0.0011909255255656555 + me->strings_conn_synapse158_data.out * 5.530916848758E-4 + me->strings_conn_synapse159_data.out * 3.567311179704644E-5 + me->strings_conn_synapse160_data.out * -1.6403567890077477E-5 + me->strings_conn_synapse161_data.out * 0.0011152652958212946 + me->strings_conn_synapse162_data.out * 8.901201234590059E-6 + me->strings_conn_synapse163_data.out * -4.8631597614986234E-5 + me->strings_conn_synapse164_data.out * 2.8448549442206894E-4 + me->strings_conn_synapse165_data.out * 4.7074201672203667E-5 + me->strings_conn_synapse166_data.out * -5.925940465095684E-5 + me->strings_conn_synapse167_data.out * -8.997131979301993E-5 + me->strings_conn_synapse168_data.out * 7.187254349897505E-5 + me->strings_conn_synapse169_data.out * -3.975720736184058E-5 + me->strings_conn_synapse170_data.out * 7.001348299327303E-5 + me->strings_conn_synapse171_data.out * -0.0018009220936479422 + me->strings_conn_synapse172_data.out * 0.001473571121600374 + me->strings_conn_synapse173_data.out * 7.681843767353935E-4 + me->strings_conn_synapse174_data.out * -9.614625139654521E-6 + me->strings_conn_synapse175_data.out * 0.0013736410587195976 + me->strings_conn_synapse176_data.out * -0.0036217004241936336 + me->strings_conn_synapse177_data.out * 3.7398347155252537E-4 + me->strings_conn_synapse178_data.out * 7.728166115098699E-5 + me->strings_conn_synapse179_data.out * 3.2051501193386297E-4 + me->strings_conn_synapse180_data.out * -5.706545248484162E-5 + me->strings_conn_synapse181_data.out * 0.0010202325309900484 + me->strings_conn_synapse182_data.out * 8.103249457657248E-5 + me->strings_conn_synapse183_data.out * 9.654798908713655E-4 + me->strings_conn_synapse184_data.out * 5.353333070991791E-5 + me->strings_conn_synapse185_data.out * 8.487929964732856E-4 + me->strings_conn_synapse186_data.out * 6.862801436573022E-5 + me->strings_conn_synapse187_data.out * -4.96593046202219E-5 + me->strings_conn_synapse188_data.out * 8.344248759447115E-4 + me->strings_conn_synapse189_data.out * 9.797651693200097E-5 + me->strings_conn_synapse190_data.out * -2.786353562217389E-5 + me->strings_conn_synapse191_data.out * -9.5406273376057E-5 + me->strings_conn_synapse192_data.out * -2.3717757694523385E-5 + me->strings_conn_synapse193_data.out * 3.589207809944246E-4 + me->strings_conn_synapse194_data.out * -2.817523880995044E-5 + me->strings_conn_synapse195_data.out * 0.0014410317096881177 + me->strings_conn_synapse196_data.out * 9.804380849490605E-4 + me->strings_conn_synapse197_data.out * 0.0010807845864891734 + me->strings_conn_synapse198_data.out * 0.001082434809414002 + me->strings_conn_synapse199_data.out * 6.854688782407797E-4;
    me->strings_1_out = 0.0 + me->strings_conn_synapse0_data.out * 0.006252517725879502 + me->strings_conn_synapse1_data.out * -5.262184550999809E-4 + me->strings_conn_synapse2_data.out * -2.2641743607722936E-5 + me->strings_conn_synapse3_data.out * -1.0298291378879765E-4 + me->strings_conn_synapse4_data.out * -1.5554409135580676E-4 + me->strings_conn_synapse5_data.out * 0.0011366574939776907 + me->strings_conn_synapse6_data.out * 8.859919169233611E-4 + me->strings_conn_synapse7_data.out * -2.2181411524073595E-6 + me->strings_conn_synapse8_data.out * 0.0017316074874352825 + me->strings_conn_synapse9_data.out * -1.366272819340314E-4 + me->strings_conn_synapse10_data.out * -1.116719640381905E-4 + me->strings_conn_synapse11_data.out * 8.62187051219979E-5 + me->strings_conn_synapse12_data.out * 9.454238854700208E-4 + me->strings_conn_synapse13_data.out * -3.0031648361131206E-5 + me->strings_conn_synapse14_data.out * 5.18310708740377E-4 + me->strings_conn_synapse15_data.out * 0.009495501052199585 + me->strings_conn_synapse16_data.out * 3.8949456945523725E-4 + me->strings_conn_synapse17_data.out * 0.0010868975563185417 + me->strings_conn_synapse18_data.out * -4.90554311117024E-5 + me->strings_conn_synapse19_data.out * 5.288861349727454E-4 + me->strings_conn_synapse20_data.out * 0.0018183589899732717 + me->strings_conn_synapse21_data.out * 0.0013132638892533947 + me->strings_conn_synapse22_data.out * 0.001027179039229551 + me->strings_conn_synapse23_data.out * -7.326660565531263E-5 + me->strings_conn_synapse24_data.out * 0.0060211599027814545 + me->strings_conn_synapse25_data.out * -1.8692226880327134E-5 + me->strings_conn_synapse26_data.out * 8.993067182309835E-5 + me->strings_conn_synapse27_data.out * 0.0019926282422542715 + me->strings_conn_synapse28_data.out * -0.0030553104896873583 + me->strings_conn_synapse29_data.out * 0.0020173569754477127 + me->strings_conn_synapse30_data.out * 0.0013561314090460924 + me->strings_conn_synapse31_data.out * 9.174878731514456E-5 + me->strings_conn_synapse32_data.out * -1.7152356442342144E-4 + me->strings_conn_synapse33_data.out * -7.61500804353207E-5 + me->strings_conn_synapse34_data.out * 0.001403844696326187 + me->strings_conn_synapse35_data.out * 2.2689663097316128E-4 + me->strings_conn_synapse36_data.out * 1.1163300177924543E-4 + me->strings_conn_synapse37_data.out * 0.0011089971489875716 + me->strings_conn_synapse38_data.out * -2.942615946147281E-5 + me->strings_conn_synapse39_data.out * 0.001431747971463317 + me->strings_conn_synapse40_data.out * 0.0013150500995503438 + me->strings_conn_synapse41_data.out * -0.004723163200931456 + me->strings_conn_synapse42_data.out * 1.476361283149621E-5 + me->strings_conn_synapse43_data.out * 0.0019998223178821976 + me->strings_conn_synapse44_data.out * 9.621944671840756E-4 + me->strings_conn_synapse45_data.out * 6.435389581105005E-4 + me->strings_conn_synapse46_data.out * 8.909218413912605E-5 + me->strings_conn_synapse47_data.out * 8.774769724659116E-5 + me->strings_conn_synapse48_data.out * 0.0038270060510193398 + me->strings_conn_synapse49_data.out * 0.0015263000358739702 + me->strings_conn_synapse50_data.out * 6.792482285404657E-6 + me->strings_conn_synapse51_data.out * -1.361898137131402E-4 + me->strings_conn_synapse52_data.out * -3.58592360229849E-5 + me->strings_conn_synapse53_data.out * 3.719182489051399E-5 + me->strings_conn_synapse54_data.out * -0.001023813216768318 + me->strings_conn_synapse55_data.out * -3.7496855321561347E-6 + me->strings_conn_synapse56_data.out * -0.0035274322516192186 + me->strings_conn_synapse57_data.out * -1.1620395737425006E-5 + me->strings_conn_synapse58_data.out * -2.959834059904898E-5 + me->strings_conn_synapse59_data.out * 1.103068222928263E-4 + me->strings_conn_synapse60_data.out * 0.001576798281774091 + me->strings_conn_synapse61_data.out * 0.009213745209133874 + me->strings_conn_synapse62_data.out * 9.085190406670212E-4 + me->strings_conn_synapse63_data.out * 3.846111809308169E-4 + me->strings_conn_synapse64_data.out * -3.178123116218091E-5 + me->strings_conn_synapse65_data.out * 2.532235531555402E-5 + me->strings_conn_synapse66_data.out * 2.751553677891433E-6 + me->strings_conn_synapse67_data.out * 7.89431513681353E-4 + me->strings_conn_synapse68_data.out * 0.001238067192999927 + me->strings_conn_synapse69_data.out * -3.292892551781496E-5 + me->strings_conn_synapse70_data.out * 1.143567318309035E-4 + me->strings_conn_synapse71_data.out * 8.13275933829223E-5 + me->strings_conn_synapse72_data.out * -5.0530318687179035E-5 + me->strings_conn_synapse73_data.out * 4.6798715793302517E-4 + me->strings_conn_synapse74_data.out * 5.576134035328873E-4 + me->strings_conn_synapse75_data.out * 3.372908288242943E-5 + me->strings_conn_synapse76_data.out * -1.3055686587624461E-5 + me->strings_conn_synapse77_data.out * 2.989641926561827E-5 + me->strings_conn_synapse78_data.out * -7.723199271303916E-4 + me->strings_conn_synapse79_data.out * 0.0013723562637593238 + me->strings_conn_synapse80_data.out * -3.5879361933223577E-4 + me->strings_conn_synapse81_data.out * -7.905085131790886E-5 + me->strings_conn_synapse82_data.out * 5.1001614823081676E-5 + me->strings_conn_synapse83_data.out * -1.9429012576110068E-5 + me->strings_conn_synapse84_data.out * -7.80893433437389E-5 + me->strings_conn_synapse85_data.out * 0.0010492462611438446 + me->strings_conn_synapse86_data.out * 0.0011204836225875067 + me->strings_conn_synapse87_data.out * 8.838586130536773E-4 + me->strings_conn_synapse88_data.out * -8.907136850747381E-8 + me->strings_conn_synapse89_data.out * -2.2327597953937976E-5 + me->strings_conn_synapse90_data.out * -1.1789939503120644E-4 + me->strings_conn_synapse91_data.out * -6.093126304010496E-5 + me->strings_conn_synapse92_data.out * 1.0862867133900024E-4 + me->strings_conn_synapse93_data.out * 6.693403470371147E-5 + me->strings_conn_synapse94_data.out * -3.3725403073521114E-5 + me->strings_conn_synapse95_data.out * 7.220118888602674E-5 + me->strings_conn_synapse96_data.out * 0.010941780406079077 + me->strings_conn_synapse97_data.out * -0.0018381565184999755 + me->strings_conn_synapse98_data.out * 0.00211389180440699 + me->strings_conn_synapse99_data.out * 3.054039975365145E-5 + me->strings_conn_synapse100_data.out * -3.902140405396549E-5 + me->strings_conn_synapse101_data.out * -5.432904224433308E-5 + me->strings_conn_synapse102_data.out * 2.577905544820822E-4 + me->strings_conn_synapse103_data.out * 2.9026991719044264E-5 + me->strings_conn_synapse104_data.out * 1.7803943067547953E-4 + me->strings_conn_synapse105_data.out * -7.361318046753987E-4 + me->strings_conn_synapse106_data.out * -0.0024005540363642667 + me->strings_conn_synapse107_data.out * 0.0018830034616852788 + me->strings_conn_synapse108_data.out * -0.003204678130612456 + me->strings_conn_synapse109_data.out * 0.0018281767122146173 + me->strings_conn_synapse110_data.out * -5.876839061962314E-5 + me->strings_conn_synapse111_data.out * 1.0599280057988984E-4 + me->strings_conn_synapse112_data.out * 5.7676747449101346E-5 + me->strings_conn_synapse113_data.out * -4.826128264967018E-5 + me->strings_conn_synapse114_data.out * 1.618950069566735E-4 + me->strings_conn_synapse115_data.out * -5.357831816145205E-5 + me->strings_conn_synapse116_data.out * 6.071003549340315E-8 + me->strings_conn_synapse117_data.out * 6.441786236958307E-4 + me->strings_conn_synapse118_data.out * 4.719467292589423E-4 + me->strings_conn_synapse119_data.out * 6.562473085525041E-4 + me->strings_conn_synapse120_data.out * 5.669617988656986E-5 + me->strings_conn_synapse121_data.out * 0.0011770984333608384 + me->strings_conn_synapse122_data.out * 4.614135794463407E-5 + me->strings_conn_synapse123_data.out * 0.001488680120769328 + me->strings_conn_synapse124_data.out * 9.395993076756337E-4 + me->strings_conn_synapse125_data.out * -2.473716951079107E-5 + me->strings_conn_synapse126_data.out * 0.0011889859009294847 + me->strings_conn_synapse127_data.out * 0.0013515319342901372 + me->strings_conn_synapse128_data.out * 0.001421011391919896 + me->strings_conn_synapse129_data.out * 5.58930984601586E-5 + me->strings_conn_synapse130_data.out * 7.152954893436918E-5 + me->strings_conn_synapse131_data.out * 0.0011434545473778548 + me->strings_conn_synapse132_data.out * -1.632889040457879E-5 + me->strings_conn_synapse133_data.out * 0.0017858627207874528 + me->strings_conn_synapse134_data.out * 3.560295223199828E-4 + me->strings_conn_synapse135_data.out * 0.002308818361919385 + me->strings_conn_synapse136_data.out * 5.1893487208302585E-5 + me->strings_conn_synapse137_data.out * 0.0015789594099898205 + me->strings_conn_synapse138_data.out * 5.586416478776486E-4 + me->strings_conn_synapse139_data.out * -6.222985703344138E-5 + me->strings_conn_synapse140_data.out * -1.9752621073925914E-5 + me->strings_conn_synapse141_data.out * 4.1431624721220186E-5 + me->strings_conn_synapse142_data.out * 0.0012303142388262291 + me->strings_conn_synapse143_data.out * 0.002506213058769992 + me->strings_conn_synapse144_data.out * -4.752791900351582E-5 + me->strings_conn_synapse145_data.out * 2.1127346625270536E-5 + me->strings_conn_synapse146_data.out * 4.883186511477813E-4 + me->strings_conn_synapse147_data.out * 3.3568072818114536E-6 + me->strings_conn_synapse148_data.out * 0.0019225535972270794 + me->strings_conn_synapse149_data.out * 9.13726912375542E-4 + me->strings_conn_synapse150_data.out * 2.1532461442018284E-4 + me->strings_conn_synapse151_data.out * -4.7748474057399676E-5 + me->strings_conn_synapse152_data.out * 1.1564952469484996E-4 + me->strings_conn_synapse153_data.out * 0.007020160415330161 + me->strings_conn_synapse154_data.out * 8.236227505495849E-5 + me->strings_conn_synapse155_data.out * -7.026286532243384E-6 + me->strings_conn_synapse156_data.out * -5.913944303858161E-6 + me->strings_conn_synapse157_data.out * 9.385547824029953E-4 + me->strings_conn_synapse158_data.out * -0.0012078453773472465 + me->strings_conn_synapse159_data.out * 8.931757421026474E-5 + me->strings_conn_synapse160_data.out * -7.301884988246867E-5 + me->strings_conn_synapse161_data.out * 0.0012967508703295816 + me->strings_conn_synapse162_data.out * 2.4027743294413756E-5 + me->strings_conn_synapse163_data.out * 7.132768944266938E-5 + me->strings_conn_synapse164_data.out * -1.3559581899428826E-5 + me->strings_conn_synapse165_data.out * -1.2238296624336037E-4 + me->strings_conn_synapse166_data.out * -1.6201875858519805E-5 + me->strings_conn_synapse167_data.out * 8.575629187902463E-6 + me->strings_conn_synapse168_data.out * -3.804165890697458E-4 + me->strings_conn_synapse169_data.out * -4.1097036438659217E-4 + me->strings_conn_synapse170_data.out * -2.0547503278731127E-5 + me->strings_conn_synapse171_data.out * 0.00735031772646836 + me->strings_conn_synapse172_data.out * 0.001435540494330755 + me->strings_conn_synapse173_data.out * 0.0010020231841581827 + me->strings_conn_synapse174_data.out * -4.9589100782157965E-6 + me->strings_conn_synapse175_data.out * 0.0013940843768392203 + me->strings_conn_synapse176_data.out * -6.17736296389772E-4 + me->strings_conn_synapse177_data.out * 1.2824992519609775E-4 + me->strings_conn_synapse178_data.out * 2.934567049102082E-5 + me->strings_conn_synapse179_data.out * 5.13029196764031E-5 + me->strings_conn_synapse180_data.out * -2.3016046087232105E-5 + me->strings_conn_synapse181_data.out * 0.0012388430869695768 + me->strings_conn_synapse182_data.out * 1.4863529754915565E-5 + me->strings_conn_synapse183_data.out * 0.0011052220336020186 + me->strings_conn_synapse184_data.out * -1.1173092117914967E-5 + me->strings_conn_synapse185_data.out * 5.742401396116123E-4 + me->strings_conn_synapse186_data.out * 7.373807333669568E-5 + me->strings_conn_synapse187_data.out * -1.35353996564567E-4 + me->strings_conn_synapse188_data.out * 8.3668935288776E-4 + me->strings_conn_synapse189_data.out * 7.941654289710527E-5 + me->strings_conn_synapse190_data.out * 6.583035056977317E-6 + me->strings_conn_synapse191_data.out * 7.872087286619843E-5 + me->strings_conn_synapse192_data.out * 7.2503724897052885E-6 + me->strings_conn_synapse193_data.out * -4.309264914913058E-4 + me->strings_conn_synapse194_data.out * 1.548835127629248E-5 + me->strings_conn_synapse195_data.out * 0.0013681396982255997 + me->strings_conn_synapse196_data.out * 1.2633846540101139E-4 + me->strings_conn_synapse197_data.out * 0.0012521991843254783 + me->strings_conn_synapse198_data.out * 0.0011019281563381836 + me->strings_conn_synapse199_data.out * -0.004603549655161036;
    me->strings_2_out = 0.0 + me->strings_conn_synapse0_data.out * -5.25517895017533E-5 + me->strings_conn_synapse1_data.out * 0.0014505049786719384 + me->strings_conn_synapse2_data.out * 5.368151415523279E-5 + me->strings_conn_synapse3_data.out * 0.0014968626869627897 + me->strings_conn_synapse4_data.out * -1.1444894831858632E-4 + me->strings_conn_synapse5_data.out * 0.001493719398274577 + me->strings_conn_synapse6_data.out * -4.645418416553241E-4 + me->strings_conn_synapse7_data.out * -1.3367864691119235E-5 + me->strings_conn_synapse8_data.out * 0.006916604242888595 + me->strings_conn_synapse9_data.out * -1.013556727060715E-5 + me->strings_conn_synapse10_data.out * -5.048644462174775E-5 + me->strings_conn_synapse11_data.out * 5.0607587131184666E-5 + me->strings_conn_synapse12_data.out * 0.0025560829362633337 + me->strings_conn_synapse13_data.out * -2.420178865337922E-5 + me->strings_conn_synapse14_data.out * -0.0010218288745716835 + me->strings_conn_synapse15_data.out * -8.9640612405211E-4 + me->strings_conn_synapse16_data.out * 0.001441633900848165 + me->strings_conn_synapse17_data.out * 0.0019919440843621573 + me->strings_conn_synapse18_data.out * -2.323952919219666E-5 + me->strings_conn_synapse19_data.out * 8.987173608755791E-4 + me->strings_conn_synapse20_data.out * 0.002063126067542348 + me->strings_conn_synapse21_data.out * 5.853858050503412E-4 + me->strings_conn_synapse22_data.out * 5.357131444714796E-4 + me->strings_conn_synapse23_data.out * 3.862069137009553E-5 + me->strings_conn_synapse24_data.out * -8.863755262319016E-4 + me->strings_conn_synapse25_data.out * 4.4040656164435055E-5 + me->strings_conn_synapse26_data.out * 3.284677621406692E-5 + me->strings_conn_synapse27_data.out * -0.0034776173173786157 + me->strings_conn_synapse28_data.out * 0.0053088927496947125 + me->strings_conn_synapse29_data.out * -0.003455507812554724 + me->strings_conn_synapse30_data.out * 6.554490917093541E-4 + me->strings_conn_synapse31_data.out * -4.859184974364314E-5 + me->strings_conn_synapse32_data.out * 0.0016128923382196713 + me->strings_conn_synapse33_data.out * 3.773864436611154E-6 + me->strings_conn_synapse34_data.out * 6.770836592502346E-4 + me->strings_conn_synapse35_data.out * -3.8408491948109963E-4 + me->strings_conn_synapse36_data.out * 8.271681660631482E-5 + me->strings_conn_synapse37_data.out * 0.0013403352796867558 + me->strings_conn_synapse38_data.out * 1.3016323115973568E-5 + me->strings_conn_synapse39_data.out * 7.757444739701066E-4 + me->strings_conn_synapse40_data.out * -5.271718832182856E-5 + me->strings_conn_synapse41_data.out * 0.0017560916722730228 + me->strings_conn_synapse42_data.out * 5.975500952606361E-5 + me->strings_conn_synapse43_data.out * 5.148078542821885E-4 + me->strings_conn_synapse44_data.out * -3.4224050234437427E-4 + me->strings_conn_synapse45_data.out * 7.739073208541035E-4 + me->strings_conn_synapse46_data.out * 0.0013489023936775033 + me->strings_conn_synapse47_data.out * -2.134904239900608E-5 + me->strings_conn_synapse48_data.out * -0.00491851336913363 + me->strings_conn_synapse49_data.out * 0.0023064886820804925 + me->strings_conn_synapse50_data.out * 5.4431066859656315E-5 + me->strings_conn_synapse51_data.out * 9.712396562079384E-5 + me->strings_conn_synapse52_data.out * -1.3706466315983672E-4 + me->strings_conn_synapse53_data.out * -5.381040887086908E-5 + me->strings_conn_synapse54_data.out * -0.0035638894900092903 + me->strings_conn_synapse55_data.out * -1.3111018884037038E-5 + me->strings_conn_synapse56_data.out * 0.0023787312175934765 + me->strings_conn_synapse57_data.out * 0.0011133919000966247 + me->strings_conn_synapse58_data.out * 5.913096637781223E-5 + me->strings_conn_synapse59_data.out * -2.900189049773298E-5 + me->strings_conn_synapse60_data.out * 2.5356732503515814E-4 + me->strings_conn_synapse61_data.out * -0.0034830478252868067 + me->strings_conn_synapse62_data.out * 2.9617566671841813E-4 + me->strings_conn_synapse63_data.out * 0.0018478351362310227 + me->strings_conn_synapse64_data.out * 0.0012224831518671106 + me->strings_conn_synapse65_data.out * -2.7919721788555264E-5 + me->strings_conn_synapse66_data.out * 2.7555721529898975E-5 + me->strings_conn_synapse67_data.out * 0.0015662728145375948 + me->strings_conn_synapse68_data.out * 3.414370061383257E-4 + me->strings_conn_synapse69_data.out * -1.0869230653725623E-4 + me->strings_conn_synapse70_data.out * -0.0023457020164529153 + me->strings_conn_synapse71_data.out * -6.195023376911396E-5 + me->strings_conn_synapse72_data.out * -4.070986384568701E-6 + me->strings_conn_synapse73_data.out * 0.0013841649051779003 + me->strings_conn_synapse74_data.out * 0.0014282862089436937 + me->strings_conn_synapse75_data.out * -5.9755787971043517E-5 + me->strings_conn_synapse76_data.out * -1.2032770522492532E-5 + me->strings_conn_synapse77_data.out * -1.6098697036783554E-4 + me->strings_conn_synapse78_data.out * 0.008499925210583537 + me->strings_conn_synapse79_data.out * 4.0415703357107456E-4 + me->strings_conn_synapse80_data.out * 0.001954958083846692 + me->strings_conn_synapse81_data.out * -3.80499719477823E-5 + me->strings_conn_synapse82_data.out * -3.576185640992324E-5 + me->strings_conn_synapse83_data.out * 2.6641265642962954E-6 + me->strings_conn_synapse84_data.out * 8.763414538375497E-5 + me->strings_conn_synapse85_data.out * 2.914230530622524E-4 + me->strings_conn_synapse86_data.out * 1.2030216444500965E-4 + me->strings_conn_synapse87_data.out * 8.385713817848804E-4 + me->strings_conn_synapse88_data.out * -7.620543822731139E-6 + me->strings_conn_synapse89_data.out * -1.7485693359845944E-5 + me->strings_conn_synapse90_data.out * 3.781852069203179E-5 + me->strings_conn_synapse91_data.out * -9.821030703089959E-6 + me->strings_conn_synapse92_data.out * -3.5720456439560113E-6 + me->strings_conn_synapse93_data.out * -1.857081937760509E-5 + me->strings_conn_synapse94_data.out * 5.080817053904142E-6 + me->strings_conn_synapse95_data.out * -7.980191996273409E-5 + me->strings_conn_synapse96_data.out * -0.0035157491730148194 + me->strings_conn_synapse97_data.out * 0.002182864606775047 + me->strings_conn_synapse98_data.out * 0.0018335784088853017 + me->strings_conn_synapse99_data.out * -4.437311008520461E-5 + me->strings_conn_synapse100_data.out * 2.8637753910683984E-5 + me->strings_conn_synapse101_data.out * -1.2134209309531812E-5 + me->strings_conn_synapse102_data.out * 0.002176145775062504 + me->strings_conn_synapse103_data.out * 1.1318391355673805E-5 + me->strings_conn_synapse104_data.out * 0.0016150247343487978 + me->strings_conn_synapse105_data.out * 0.0016571903245408877 + me->strings_conn_synapse106_data.out * -3.442767125306349E-4 + me->strings_conn_synapse107_data.out * 0.0010224587104889515 + me->strings_conn_synapse108_data.out * 0.004389430624865942 + me->strings_conn_synapse109_data.out * 1.936578939416753E-4 + me->strings_conn_synapse110_data.out * 3.724086862363577E-5 + me->strings_conn_synapse111_data.out * 1.1386219526106402E-4 + me->strings_conn_synapse112_data.out * 8.265355460618774E-6 + me->strings_conn_synapse113_data.out * -5.123430498149779E-6 + me->strings_conn_synapse114_data.out * -1.545225732872308E-5 + me->strings_conn_synapse115_data.out * -5.8615576165018304E-5 + me->strings_conn_synapse116_data.out * -3.177121348326704E-5 + me->strings_conn_synapse117_data.out * 9.666448592791428E-4 + me->strings_conn_synapse118_data.out * 0.0027792911886360193 + me->strings_conn_synapse119_data.out * -2.1455390939719606E-4 + me->strings_conn_synapse120_data.out * -3.7755576431996136E-6 + me->strings_conn_synapse121_data.out * 0.0010247848908792822 + me->strings_conn_synapse122_data.out * -5.822963623117157E-5 + me->strings_conn_synapse123_data.out * -7.826760280542387E-4 + me->strings_conn_synapse124_data.out * -5.225884296320581E-4 + me->strings_conn_synapse125_data.out * -3.560366852743453E-5 + me->strings_conn_synapse126_data.out * -8.820868348194357E-5 + me->strings_conn_synapse127_data.out * 3.916298717087692E-4 + me->strings_conn_synapse128_data.out * -6.302457538103565E-4 + me->strings_conn_synapse129_data.out * 4.20066883090455E-5 + me->strings_conn_synapse130_data.out * 2.8529834481969887E-5 + me->strings_conn_synapse131_data.out * 6.091533082263719E-4 + me->strings_conn_synapse132_data.out * 3.590714235500853E-5 + me->strings_conn_synapse133_data.out * 0.002164229117827893 + me->strings_conn_synapse134_data.out * -0.002470486191111362 + me->strings_conn_synapse135_data.out * 0.0014672189310242089 + me->strings_conn_synapse136_data.out * 1.1087690817846865E-4 + me->strings_conn_synapse137_data.out * 4.682193292992503E-4 + me->strings_conn_synapse138_data.out * 0.0014266814202730258 + me->strings_conn_synapse139_data.out * 1.9231054571813488E-5 + me->strings_conn_synapse140_data.out * -5.168607401762485E-5 + me->strings_conn_synapse141_data.out * -1.7842714321842165E-5 + me->strings_conn_synapse142_data.out * -8.330529451376667E-6 + me->strings_conn_synapse143_data.out * 0.006259166623262423 + me->strings_conn_synapse144_data.out * 6.844092134446669E-5 + me->strings_conn_synapse145_data.out * 5.812264360477811E-5 + me->strings_conn_synapse146_data.out * -0.0016607388224206313 + me->strings_conn_synapse147_data.out * -1.6838668835976197E-5 + me->strings_conn_synapse148_data.out * 3.755683195206988E-4 + me->strings_conn_synapse149_data.out * 3.755427553264109E-4 + me->strings_conn_synapse150_data.out * 1.4937068904202294E-4 + me->strings_conn_synapse151_data.out * -3.941491949631352E-5 + me->strings_conn_synapse152_data.out * 6.908301240692095E-5 + me->strings_conn_synapse153_data.out * -0.0042116876064753695 + me->strings_conn_synapse154_data.out * -4.005754704833506E-5 + me->strings_conn_synapse155_data.out * 3.226423267857608E-5 + me->strings_conn_synapse156_data.out * -2.976226087925619E-5 + me->strings_conn_synapse157_data.out * 0.0023825808621947353 + me->strings_conn_synapse158_data.out * 0.0012259482144412895 + me->strings_conn_synapse159_data.out * -1.3684795194575763E-5 + me->strings_conn_synapse160_data.out * 6.233062186736645E-5 + me->strings_conn_synapse161_data.out * 0.0012078614819652721 + me->strings_conn_synapse162_data.out * 1.3421757513869717E-4 + me->strings_conn_synapse163_data.out * 7.285090864919363E-5 + me->strings_conn_synapse164_data.out * 0.0011900730048778592 + me->strings_conn_synapse165_data.out * 1.4745578180142952E-5 + me->strings_conn_synapse166_data.out * 1.2401309198419232E-5 + me->strings_conn_synapse167_data.out * 8.72783287367283E-6 + me->strings_conn_synapse168_data.out * 0.0011917552113269532 + me->strings_conn_synapse169_data.out * 6.307169145113122E-4 + me->strings_conn_synapse170_data.out * -5.618131104529176E-5 + me->strings_conn_synapse171_data.out * -0.004184666498422116 + me->strings_conn_synapse172_data.out * -1.442557218453114E-4 + me->strings_conn_synapse173_data.out * 0.0012240424438985625 + me->strings_conn_synapse174_data.out * -1.4839617934022732E-5 + me->strings_conn_synapse175_data.out * -1.936196779990357E-4 + me->strings_conn_synapse176_data.out * 0.0054148912724227855 + me->strings_conn_synapse177_data.out * 0.0013691013078993906 + me->strings_conn_synapse178_data.out * 2.3706841420417346E-5 + me->strings_conn_synapse179_data.out * 0.001328072195843844 + me->strings_conn_synapse180_data.out * -7.0527983581101E-5 + me->strings_conn_synapse181_data.out * 0.0016469231131502142 + me->strings_conn_synapse182_data.out * -5.9586119864372485E-5 + me->strings_conn_synapse183_data.out * 1.2837335505212202E-4 + me->strings_conn_synapse184_data.out * -9.874939327295124E-6 + me->strings_conn_synapse185_data.out * 0.0021524255703388316 + me->strings_conn_synapse186_data.out * 7.594655556881461E-5 + me->strings_conn_synapse187_data.out * 5.2509726289153624E-5 + me->strings_conn_synapse188_data.out * -6.436766353471342E-4 + me->strings_conn_synapse189_data.out * 5.812481137231893E-5 + me->strings_conn_synapse190_data.out * -1.2073180695137137E-4 + me->strings_conn_synapse191_data.out * 1.139776765226329E-4 + me->strings_conn_synapse192_data.out * 3.679807826446172E-5 + me->strings_conn_synapse193_data.out * 0.0019026042965922733 + me->strings_conn_synapse194_data.out * 5.121115758033311E-5 + me->strings_conn_synapse195_data.out * 0.0024860047569980202 + me->strings_conn_synapse196_data.out * 0.002489973302619412 + me->strings_conn_synapse197_data.out * -4.938186036410996E-4 + me->strings_conn_synapse198_data.out * -7.441163811440099E-5 + me->strings_conn_synapse199_data.out * 0.006651632051560504;
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
    me->strings_input_0_data.in = 0.6086110560850002 + me->setpoint_in * -1.8816961201707638 + me->orientation_in * -0.7382058112611115;
    me->strings_input_1_data.in = 2.9558813999093663 + me->setpoint_in * 1.3773705845922513 + me->orientation_in * 1.654333923241799;
    me->strings_input_10_data.in = -15.47644895566956 + me->setpoint_in * -1.5262464471849235 + me->orientation_in * 6.083058286305992;
    me->strings_input_100_data.in = -58.6402348453953 + me->setpoint_in * 11.959326970101033 + me->orientation_in * -11.294563282036837;
    me->strings_input_101_data.in = -5.467336899689641 + me->setpoint_in * -0.821108228474839 + me->orientation_in * 2.593182101175249;
    me->strings_input_102_data.in = 6.414473034505793 + me->setpoint_in * 1.886879019936535 + me->orientation_in * 1.4541630561711858;
    me->strings_input_103_data.in = -30.319317888195215 + me->setpoint_in * 9.121041058356186 + me->orientation_in * 1.7103509287725853;
    me->strings_input_104_data.in = 4.7537264574830775 + me->setpoint_in * 1.186138092579884 + me->orientation_in * 2.717394289919589;
    me->strings_input_105_data.in = 3.1268361025860254 + me->setpoint_in * 1.791645438986485 + me->orientation_in * 4.483738318187597;
    me->strings_input_106_data.in = -4.962271821491245 + me->setpoint_in * -5.3639895512592215 + me->orientation_in * -1.540179927675494;
    me->strings_input_107_data.in = 10.2472427750283 + me->setpoint_in * -1.174200198939628 + me->orientation_in * -2.475038821195927;
    me->strings_input_108_data.in = 1.6358362849807881 + me->setpoint_in * 2.1999971712838833 + me->orientation_in * -3.2388201204166145;
    me->strings_input_109_data.in = 8.821997198283933 + me->setpoint_in * -2.2954068876010068 + me->orientation_in * -1.3478061229945895;
    me->strings_input_11_data.in = -4.252501854648047 + me->setpoint_in * -2.238813259855067 + me->orientation_in * 1.239728103010349;
    me->strings_input_110_data.in = -26.88888480115002 + me->setpoint_in * 0.25019712475978434 + me->orientation_in * 7.2384296149699665;
    me->strings_input_111_data.in = -1.1996157176884163 + me->setpoint_in * -0.8785953459730932 + me->orientation_in * 2.2596696586387197;
    me->strings_input_112_data.in = -7.180589428305602 + me->setpoint_in * -3.174545913704078 + me->orientation_in * 2.477629137447226;
    me->strings_input_113_data.in = -6.758335520823616 + me->setpoint_in * 1.948645631038137 + me->orientation_in * -2.5189793476845845;
    me->strings_input_114_data.in = -216.74456202421902 + me->setpoint_in * -38.511167033751484 + me->orientation_in * -31.65611605472359;
    me->strings_input_115_data.in = -31.947423706287907 + me->setpoint_in * -3.6896320581317097 + me->orientation_in * -10.14814019320782;
    me->strings_input_116_data.in = -1.1040151747817304 + me->setpoint_in * 0.29312777660386746 + me->orientation_in * -2.383389757137162;
    me->strings_input_117_data.in = 4.44517743845117 + me->setpoint_in * 0.2682548220838739 + me->orientation_in * -0.6899798349861695;
    me->strings_input_118_data.in = 13.115115054135172 + me->setpoint_in * 4.422590340871814 + me->orientation_in * -0.29210155611282246;
    me->strings_input_119_data.in = 2.830925066594209 + me->setpoint_in * -0.7191293194701708 + me->orientation_in * 0.874746358433422;
    me->strings_input_12_data.in = 14.007242621372464 + me->setpoint_in * 3.2395547457779923 + me->orientation_in * 0.39894578776047007;
    me->strings_input_120_data.in = -3.7475579104634473 + me->setpoint_in * 1.4142605525308598 + me->orientation_in * -2.6627766915328;
    me->strings_input_121_data.in = 5.169137016688194 + me->setpoint_in * -0.09748826236494808 + me->orientation_in * -1.4731393029383282;
    me->strings_input_122_data.in = -20.668811139034588 + me->setpoint_in * 11.681526798911044 + me->orientation_in * 1.0673477333027095;
    me->strings_input_123_data.in = 10.212189784303416 + me->setpoint_in * -5.1949893807443415 + me->orientation_in * 1.8884995422092539;
    me->strings_input_124_data.in = 2.3869245113924986 + me->setpoint_in * -1.0113660643327143 + me->orientation_in * 0.6023104464967892;
    me->strings_input_125_data.in = -8.24915073142179 + me->setpoint_in * -4.683305382898983 + me->orientation_in * -0.1325038919869083;
    me->strings_input_126_data.in = 4.239926899890442 + me->setpoint_in * -1.1343924351941779 + me->orientation_in * -0.7149264334616389;
    me->strings_input_127_data.in = 6.913936989764615 + me->setpoint_in * -1.1661695897863011 + me->orientation_in * 0.8526614719408124;
    me->strings_input_128_data.in = 5.523038477577038 + me->setpoint_in * -2.083628913125902 + me->orientation_in * -1.9443878686608156;
    me->strings_input_129_data.in = -8.369353546222941 + me->setpoint_in * 4.609048478666586 + me->orientation_in * 4.5801790233365;
    me->strings_input_13_data.in = -16.115738843656317 + me->setpoint_in * -1.2738246618800428 + me->orientation_in * -4.896804513124596;
    me->strings_input_130_data.in = -3.802673501481258 + me->setpoint_in * -2.000334032602628 + me->orientation_in * 2.282256085003175;
    me->strings_input_131_data.in = 4.68150289246429 + me->setpoint_in * -0.4590913609886775 + me->orientation_in * 0.633251954426194;
    me->strings_input_132_data.in = -19.759112176407314 + me->setpoint_in * 4.851743683262845 + me->orientation_in * 2.8488238305069875;
    me->strings_input_133_data.in = 15.75158382588653 + me->setpoint_in * 0.8418377860591904 + me->orientation_in * 2.86357390553836;
    me->strings_input_134_data.in = 3.9183647449708583 + me->setpoint_in * -2.890013754165628 + me->orientation_in * 4.910587199867318;
    me->strings_input_135_data.in = 15.195923759221092 + me->setpoint_in * -1.7516079461279694 + me->orientation_in * -4.012862807632635;
    me->strings_input_136_data.in = -4.599721246493506 + me->setpoint_in * -1.8368484142017443 + me->orientation_in * 2.37446059671887;
    me->strings_input_137_data.in = 7.572795107373835 + me->setpoint_in * -1.3910311150196206 + me->orientation_in * 0.36178845020346984;
    me->strings_input_138_data.in = 5.177766555511711 + me->setpoint_in * 0.8914448791723057 + me->orientation_in * 0.2559634945545067;
    me->strings_input_139_data.in = -100.50373532342395 + me->setpoint_in * 22.47059941522661 + me->orientation_in * 9.64039764396943;
    me->strings_input_14_data.in = 2.561369112031596 + me->setpoint_in * -1.4095443711322349 + me->orientation_in * -0.5024837996375556;
    me->strings_input_140_data.in = -55.22351505128688 + me->setpoint_in * 11.979189241018485 + me->orientation_in * -6.63339719944083;
    me->strings_input_141_data.in = -5.467652787921741 + me->setpoint_in * -3.592882093028413 + me->orientation_in * 0.12413780686230888;
    me->strings_input_142_data.in = 4.0142727501596465 + me->setpoint_in * -0.9046106338594839 + me->orientation_in * 0.08836110798844386;
    me->strings_input_143_data.in = 0.17585954727385245 + me->setpoint_in * 3.7256818710197104 + me->orientation_in * -1.7672032655157088;
    me->strings_input_144_data.in = -11.473471754415833 + me->setpoint_in * 7.788375541583849 + me->orientation_in * -6.078572005596292;
    me->strings_input_145_data.in = -8.14005288033274 + me->setpoint_in * 1.3988284322688107 + me->orientation_in * 3.8474044891160757;
    me->strings_input_146_data.in = 0.5833611335920641 + me->setpoint_in * 0.3867463951865172 + me->orientation_in * -2.5046980027323413;
    me->strings_input_147_data.in = -4.650783584747655 + me->setpoint_in * 3.8346890982526056 + me->orientation_in * 3.5784313184788625;
    me->strings_input_148_data.in = 11.058405674476592 + me->setpoint_in * -3.2048298079734154 + me->orientation_in * -2.807614252693344;
    me->strings_input_149_data.in = 4.275095306261728 + me->setpoint_in * -0.44868937698161904 + me->orientation_in * 2.3994851851540413;
    me->strings_input_15_data.in = 0.42078737359350715 + me->setpoint_in * -3.333315694544368 + me->orientation_in * -3.7570478627183435;
    me->strings_input_150_data.in = -46.677806947045035 + me->setpoint_in * 0.9759740324413798 + me->orientation_in * 14.74788616887121;
    me->strings_input_151_data.in = -13.551131169098168 + me->setpoint_in * -1.3576744785294799 + me->orientation_in * 4.750312191599967;
    me->strings_input_152_data.in = -22.322229193126844 + me->setpoint_in * 0.0232392199523526 + me->orientation_in * 7.334558877658427;
    me->strings_input_153_data.in = 1.597637236227325 + me->setpoint_in * -1.391130892117264 + me->orientation_in * -0.5968267568917958;
    me->strings_input_154_data.in = -6.1313001412620425 + me->setpoint_in * 5.633055783612714 + me->orientation_in * 2.008109381025406;
    me->strings_input_155_data.in = -87.24923516741026 + me->setpoint_in * 10.781506451804237 + me->orientation_in * 16.871267707992164;
    me->strings_input_156_data.in = -24.328435596606724 + me->setpoint_in * 7.921830356493292 + me->orientation_in * -9.636086336169278;
    me->strings_input_157_data.in = 11.09591064222272 + me->setpoint_in * 2.382479762731381 + me->orientation_in * 1.3000692668405625;
    me->strings_input_158_data.in = 2.053434180117736 + me->setpoint_in * 1.2414596914632143 + me->orientation_in * -3.0253875271997854;
    me->strings_input_159_data.in = -0.18975572807939978 + me->setpoint_in * 0.7654350781905551 + me->orientation_in * -2.417355886762452;
    me->strings_input_16_data.in = 4.727991595076701 + me->setpoint_in * 0.8127442538417045 + me->orientation_in * -0.13133731605270516;
    me->strings_input_160_data.in = -118.83120724359188 + me->setpoint_in * -8.829010316881316 + me->orientation_in * -26.883659396519025;
    me->strings_input_161_data.in = 7.51656465590477 + me->setpoint_in * -0.08397422926447588 + me->orientation_in * 1.4073225889135816;
    me->strings_input_162_data.in = -50.191748985482846 + me->setpoint_in * 15.119096055816915 + me->orientation_in * -1.4768122570986773;
    me->strings_input_163_data.in = -0.07449113384201089 + me->setpoint_in * -0.1970717662945556 + me->orientation_in * 1.602368925401537;
    me->strings_input_164_data.in = 3.088922053421556 + me->setpoint_in * 0.8202916321975137 + me->orientation_in * -0.2693734679843406;
    me->strings_input_165_data.in = -93.16389041511916 + me->setpoint_in * 2.33003121766181 + me->orientation_in * 23.82139019476818;
    me->strings_input_166_data.in = -9.05345065571782 + me->setpoint_in * 4.29905024454412 + me->orientation_in * -0.8340463027027479;
    me->strings_input_167_data.in = -18.342524785218018 + me->setpoint_in * 6.989309025643176 + me->orientation_in * 7.877792242179395;
    me->strings_input_168_data.in = 2.548747732071652 + me->setpoint_in * 0.9267116710735124 + me->orientation_in * 0.14380701340375254;
    me->strings_input_169_data.in = 1.7783845174704913 + me->setpoint_in * 0.7434427204471532 + me->orientation_in * 1.2480957857771418;
    me->strings_input_17_data.in = 10.914048867421256 + me->setpoint_in * 1.527148050751044 + me->orientation_in * 1.33786905768241;
    me->strings_input_170_data.in = -2.1936007706393514 + me->setpoint_in * -1.3328579513452343 + me->orientation_in * -8.24443726264646;
    me->strings_input_171_data.in = 1.565882620969914 + me->setpoint_in * -1.3844099235151077 + me->orientation_in * -0.25960049808350344;
    me->strings_input_172_data.in = 7.101411155613963 + me->setpoint_in * -2.133321437744015 + me->orientation_in * -1.4400491545961578;
    me->strings_input_173_data.in = 6.6603026722977114 + me->setpoint_in * 0.23210105547171056 + me->orientation_in * 1.4356688350395324;
    me->strings_input_174_data.in = -12.384351257505083 + me->setpoint_in * 0.11717161743754989 + me->orientation_in * -4.150065302973904;
    me->strings_input_175_data.in = 5.014306284301762 + me->setpoint_in * -1.6395652414565054 + me->orientation_in * -2.2418577097164882;
    me->strings_input_176_data.in = -0.8372741550007279 + me->setpoint_in * -2.791400047221723 + me->orientation_in * 2.806798421076135;
    me->strings_input_177_data.in = 4.36775177671845 + me->setpoint_in * 1.0516336608539025 + me->orientation_in * 0.33805930457449274;
    me->strings_input_178_data.in = -29.221470689350596 + me->setpoint_in * -6.186889410857174 + me->orientation_in * 5.149453659870328;
    me->strings_input_179_data.in = 3.6221812298750686 + me->setpoint_in * 0.9073035386579057 + me->orientation_in * -0.26665907981547177;
    me->strings_input_18_data.in = -44.917147307243965 + me->setpoint_in * 9.231233079637144 + me->orientation_in * -7.683312701301001;
    me->strings_input_180_data.in = -101.64315465860045 + me->setpoint_in * 12.291765619751255 + me->orientation_in * -19.23137642296908;
    me->strings_input_181_data.in = 9.975101057909232 + me->setpoint_in * 0.5569236874040471 + me->orientation_in * -1.948597568715253;
    me->strings_input_182_data.in = -30.099834952610163 + me->setpoint_in * -11.018625642541073 + me->orientation_in * 0.03445845917723721;
    me->strings_input_183_data.in = 4.21787226497761 + me->setpoint_in * -0.8325622126346025 + me->orientation_in * 0.13453984594400245;
    me->strings_input_184_data.in = -0.6620654369614625 + me->setpoint_in * -1.088869813943441 + me->orientation_in * -1.3078210695267336;
    me->strings_input_185_data.in = 9.074796386223417 + me->setpoint_in * 2.1564621527955614 + me->orientation_in * -0.27927528860631134;
    me->strings_input_186_data.in = -11.066592081796976 + me->setpoint_in * -3.230332531784303 + me->orientation_in * -4.7213841587558445;
    me->strings_input_187_data.in = -150.673353067154 + me->setpoint_in * 8.76868657938401 + me->orientation_in * -34.948754476850105;
    me->strings_input_188_data.in = 2.710398034539696 + me->setpoint_in * -0.9704198859779508 + me->orientation_in * 0.3877242131815274;
    me->strings_input_189_data.in = -15.216773273588295 + me->setpoint_in * 8.236026074734278 + me->orientation_in * -7.306428875560145;
    me->strings_input_19_data.in = 4.3964602394173955 + me->setpoint_in * 0.35033835565045557 + me->orientation_in * 1.0667534349628274;
    me->strings_input_190_data.in = -51.90502598814127 + me->setpoint_in * -5.479990011828401 + me->orientation_in * 15.67435895964838;
    me->strings_input_191_data.in = -0.8446530832484682 + me->setpoint_in * -0.39044541324580634 + me->orientation_in * 4.274479690021037;
    me->strings_input_192_data.in = -5.254022246257941 + me->setpoint_in * 2.669125119485951 + me->orientation_in * -1.0664295523469387;
    me->strings_input_193_data.in = 3.466332320826581 + me->setpoint_in * 1.6573224621789036 + me->orientation_in * -0.005182931997942546;
    me->strings_input_194_data.in = -17.90120085389865 + me->setpoint_in * -3.63946673601544 + me->orientation_in * -3.8513727571454393;
    me->strings_input_195_data.in = 16.105514872716107 + me->setpoint_in * 2.91607018966146 + me->orientation_in * -1.2726179412913006;
    me->strings_input_196_data.in = 7.867286005098694 + me->setpoint_in * 2.9392642081644462 + me->orientation_in * 5.723876599086853;
    me->strings_input_197_data.in = 4.226365325158706 + me->setpoint_in * -1.4366559396349419 + me->orientation_in * 0.32585355236847424;
    me->strings_input_198_data.in = 4.738844001735323 + me->setpoint_in * -1.0985407822276654 + me->orientation_in * 0.5640346837790043;
    me->strings_input_199_data.in = -4.526531578881596 + me->setpoint_in * -6.194637231172705 + me->orientation_in * -2.8912978539329957;
    me->strings_input_2_data.in = -6.033514394270232 + me->setpoint_in * -0.024021757127013578 + me->orientation_in * -7.581567331652619;
    me->strings_input_20_data.in = 15.628916458273252 + me->setpoint_in * 0.5590072068429215 + me->orientation_in * 2.8805869135466557;
    me->strings_input_21_data.in = 6.2258194973712575 + me->setpoint_in * -0.7966592621520631 + me->orientation_in * 0.7523766769204611;
    me->strings_input_22_data.in = 5.599887614122988 + me->setpoint_in * -0.34447280469463154 + me->orientation_in * -3.5217644615132526;
    me->strings_input_23_data.in = -10.30124011501173 + me->setpoint_in * 2.2020267023717968 + me->orientation_in * 3.0109387682109423;
    me->strings_input_24_data.in = 0.7453219171375172 + me->setpoint_in * -1.4749877161725573 + me->orientation_in * -1.0645861384252076;
    me->strings_input_25_data.in = -74.3929312431199 + me->setpoint_in * 1.284654797980573 + me->orientation_in * -21.529499725538873;
    me->strings_input_26_data.in = -0.5130330327675872 + me->setpoint_in * -1.1916308272311549 + me->orientation_in * 5.414359783076901;
    me->strings_input_27_data.in = -2.5823909802041323 + me->setpoint_in * 3.444596116624441 + me->orientation_in * -1.768593116174797;
    me->strings_input_28_data.in = 1.1782299776973957 + me->setpoint_in * 2.7744773812219345 + me->orientation_in * 1.4027307049516626;
    me->strings_input_29_data.in = -2.5086023500421284 + me->setpoint_in * 3.3787685249976516 + me->orientation_in * -2.1588982600504742;
    me->strings_input_3_data.in = 4.98597335736771 + me->setpoint_in * 1.357406778998058 + me->orientation_in * -2.306447364438855;
    me->strings_input_30_data.in = 5.973152744218704 + me->setpoint_in * -0.9501114201021548 + me->orientation_in * -1.8502319419770765;
    me->strings_input_31_data.in = -16.497002513886446 + me->setpoint_in * -10.77686475050529 + me->orientation_in * 3.167351086417563;
    me->strings_input_32_data.in = 3.680431803922984 + me->setpoint_in * 1.3154200648274796 + me->orientation_in * -1.4076614662819935;
    me->strings_input_33_data.in = -56.25244174354091 + me->setpoint_in * 14.630565416284048 + me->orientation_in * 5.739698507137028;
    me->strings_input_34_data.in = 6.10732191655931 + me->setpoint_in * -0.6367726041658917 + me->orientation_in * 1.1321810197886122;
    me->strings_input_35_data.in = 1.9347986832742663 + me->setpoint_in * -0.8480657678970175 + me->orientation_in * 1.3268611051102943;
    me->strings_input_36_data.in = -10.076619631101206 + me->setpoint_in * -1.787923723885208 + me->orientation_in * -4.474424437303717;
    me->strings_input_37_data.in = 7.267158089793485 + me->setpoint_in * 0.25587545762092956 + me->orientation_in * -1.3683615065464942;
    me->strings_input_38_data.in = -58.20949388055918 + me->setpoint_in * -18.097328672353747 + me->orientation_in * -1.6535631956109818;
    me->strings_input_39_data.in = 7.7124841840469065 + me->setpoint_in * -0.7268397489180791 + me->orientation_in * 1.6342121206510671;
    me->strings_input_4_data.in = -5.615477578120419 + me->setpoint_in * 2.072881188046583 + me->orientation_in * 7.968517302510904;
    me->strings_input_40_data.in = 5.033060244174966 + me->setpoint_in * -1.3797603167727197 + me->orientation_in * 3.360478736204306;
    me->strings_input_41_data.in = -7.367427849093053 + me->setpoint_in * -8.139533740229549 + me->orientation_in * 2.6729206364240516;
    me->strings_input_42_data.in = -1.726715131896448 + me->setpoint_in * -0.17485255014911175 + me->orientation_in * -5.05864273774867;
    me->strings_input_43_data.in = 12.681219733270154 + me->setpoint_in * -3.0499640914516735 + me->orientation_in * 3.2638371296139703;
    me->strings_input_44_data.in = 3.015591462432025 + me->setpoint_in * -0.9328380717161882 + me->orientation_in * -1.5660537584691105;
    me->strings_input_45_data.in = 3.8517326789930952 + me->setpoint_in * 0.1500184789311667 + me->orientation_in * -0.6816323278066424;
    me->strings_input_46_data.in = 4.041424145636634 + me->setpoint_in * 0.9373085978206874 + me->orientation_in * 0.23753168242487452;
    me->strings_input_47_data.in = -8.86196776791402 + me->setpoint_in * -5.06090466048432 + me->orientation_in * 0.3342606972217464;
    me->strings_input_48_data.in = -6.697463844802305 + me->setpoint_in * 7.555810029444062 + me->orientation_in * 5.100374302932291;
    me->strings_input_49_data.in = 15.497431789009994 + me->setpoint_in * 1.8472807017625406 + me->orientation_in * 3.335220749729281;
    me->strings_input_5_data.in = 8.883754930808808 + me->setpoint_in * 0.3028330376843282 + me->orientation_in * 2.3376565650497687;
    me->strings_input_50_data.in = -12.65214836510946 + me->setpoint_in * -3.0051523321317 + me->orientation_in * -3.849180905301732;
    me->strings_input_51_data.in = -16.62761243839574 + me->setpoint_in * 4.69520934855921 + me->orientation_in * 4.968585424800236;
    me->strings_input_52_data.in = -35.39539091820177 + me->setpoint_in * -2.1947796633550616 + me->orientation_in * -11.309788966589286;
    me->strings_input_53_data.in = -2.650135512930268 + me->setpoint_in * 2.027818624389708 + me->orientation_in * 2.9638158407671398;
    me->strings_input_54_data.in = 6.774633635079164 + me->setpoint_in * -5.54182435247695 + me->orientation_in * 0.7177007970004492;
    me->strings_input_55_data.in = -8.361351641136785 + me->setpoint_in * 3.3684934196451604 + me->orientation_in * -0.8760997463175488;
    me->strings_input_56_data.in = 6.520853432081978 + me->setpoint_in * 5.810180480919785 + me->orientation_in * 0.3473193594672677;
    me->strings_input_57_data.in = 2.992400198522953 + me->setpoint_in * 0.7876269305064163 + me->orientation_in * 0.6474280432586821;
    me->strings_input_58_data.in = -12.696280399888538 + me->setpoint_in * 3.748207051363357 + me->orientation_in * 2.3622268767721195;
    me->strings_input_59_data.in = -77.0237411180976 + me->setpoint_in * 12.42946383830555 + me->orientation_in * -14.181242360796926;
    me->strings_input_6_data.in = 2.4843700853024564 + me->setpoint_in * -1.0029883032797062 + me->orientation_in * -0.3224217148765559;
    me->strings_input_60_data.in = 6.655888946374785 + me->setpoint_in * -1.391937677716874 + me->orientation_in * 0.27004580452723354;
    me->strings_input_61_data.in = 1.2521960657534086 + me->setpoint_in * -1.3127943199356422 + me->orientation_in * -0.07847585505215364;
    me->strings_input_62_data.in = 4.019232584406933 + me->setpoint_in * -0.561146546065159 + me->orientation_in * -0.4324594038672273;
    me->strings_input_63_data.in = 6.436517546545916 + me->setpoint_in * 1.4033605931333883 + me->orientation_in * -0.9598946062057071;
    me->strings_input_64_data.in = 3.0469273220396964 + me->setpoint_in * 0.8505673935411637 + me->orientation_in * 0.024064946230351544;
    me->strings_input_65_data.in = -4.933622912815652 + me->setpoint_in * 0.2354303041766631 + me->orientation_in * -2.5774213344119663;
    me->strings_input_66_data.in = -54.810236830139864 + me->setpoint_in * -14.95838234234374 + me->orientation_in * -3.790736298399008;
    me->strings_input_67_data.in = 7.2424578585937756 + me->setpoint_in * 0.7378841637030974 + me->orientation_in * -1.6622963470100767;
    me->strings_input_68_data.in = 5.321797999321953 + me->setpoint_in * -0.8404278458571284 + me->orientation_in * 1.237271137778665;
    me->strings_input_69_data.in = -30.524073331643002 + me->setpoint_in * -2.2793840682156072 + me->orientation_in * -10.047122732092468;
    me->strings_input_7_data.in = -195.97700426351741 + me->setpoint_in * 15.241856114281765 + me->orientation_in * -43.59610418925493;
    me->strings_input_70_data.in = 5.768396358419393 + me->setpoint_in * -4.2439682636114044 + me->orientation_in * 1.8521331243316113;
    me->strings_input_71_data.in = -77.8026900134595 + me->setpoint_in * 10.71979210113472 + me->orientation_in * -14.786446524965271;
    me->strings_input_72_data.in = -58.086417762505135 + me->setpoint_in * -17.318105843951574 + me->orientation_in * -3.8141754441418825;
    me->strings_input_73_data.in = 5.807225702146804 + me->setpoint_in * 0.8649234978102205 + me->orientation_in * -0.5150978193303333;
    me->strings_input_74_data.in = 5.639964222084767 + me->setpoint_in * 0.8455171471215088 + me->orientation_in * 1.082989513006308;
    me->strings_input_75_data.in = -21.890387083894716 + me->setpoint_in * -5.966731333489664 + me->orientation_in * 5.293268626599396;
    me->strings_input_76_data.in = -38.35552890076744 + me->setpoint_in * -8.02315160559488 + me->orientation_in * 5.487812582331234;
    me->strings_input_77_data.in = -75.84072643782918 + me->setpoint_in * 17.88826781075335 + me->orientation_in * -4.057307955450984;
    me->strings_input_78_data.in = -2.683253456472433 + me->setpoint_in * -5.721741074162176 + me->orientation_in * 3.655964177332667;
    me->strings_input_79_data.in = 5.84500465325416 + me->setpoint_in * -0.9428142533385225 + me->orientation_in * 0.44720523099325055;
    me->strings_input_8_data.in = -1.5867363773011016 + me->setpoint_in * -4.701367015995867 + me->orientation_in * -2.3769348107165618;
    me->strings_input_80_data.in = 5.565296810111333 + me->setpoint_in * 2.0907421406000517 + me->orientation_in * 1.5090126361808052;
    me->strings_input_81_data.in = -11.169735330039886 + me->setpoint_in * -6.5838762613937245 + me->orientation_in * -0.8107934265530238;
    me->strings_input_82_data.in = -30.28838249893375 + me->setpoint_in * 8.092254344205886 + me->orientation_in * -5.916766827444491;
    me->strings_input_83_data.in = -27.220377057417316 + me->setpoint_in * -9.02259309544059 + me->orientation_in * -4.9234399274742415;
    me->strings_input_84_data.in = -13.2177501082244 + me->setpoint_in * 7.296528784458217 + me->orientation_in * 1.607002589504655;
    me->strings_input_85_data.in = 4.564108504258735 + me->setpoint_in * -0.6006286546662079 + me->orientation_in * -0.5968665283647774;
    me->strings_input_86_data.in = 3.545615799753327 + me->setpoint_in * -0.80647364495265 + me->orientation_in * -1.2619973688693655;
    me->strings_input_87_data.in = 5.955956154359196 + me->setpoint_in * -0.18917318619150644 + me->orientation_in * 6.7002688361265665;
    me->strings_input_88_data.in = -9.882251486676743 + me->setpoint_in * -1.0020471103250093 + me->orientation_in * 6.489589202120246;
    me->strings_input_89_data.in = -5.233747301313331 + me->setpoint_in * -2.4743179455912996 + me->orientation_in * -0.38396438175787695;
    me->strings_input_9_data.in = -159.55913847294562 + me->setpoint_in * 8.550344912613626 + me->orientation_in * 37.68841186835789;
    me->strings_input_90_data.in = -128.41635685390088 + me->setpoint_in * -9.181564549326088 + me->orientation_in * -31.231775376034662;
    me->strings_input_91_data.in = -33.470197512127164 + me->setpoint_in * -6.175818645608161 + me->orientation_in * 11.64138197106299;
    me->strings_input_92_data.in = -0.785026264534938 + me->setpoint_in * 0.9786451175800399 + me->orientation_in * -1.7394445600581425;
    me->strings_input_93_data.in = -105.8729394420407 + me->setpoint_in * 17.650744673064562 + me->orientation_in * -17.748112920961717;
    me->strings_input_94_data.in = -7.366442746197734 + me->setpoint_in * 3.276352045520263 + me->orientation_in * -0.11320136558011083;
    me->strings_input_95_data.in = -7.272072940175157 + me->setpoint_in * -2.749833228806647 + me->orientation_in * -4.964757567604094;
    me->strings_input_96_data.in = -3.7418101126234378 + me->setpoint_in * 5.478807600513087 + me->orientation_in * 2.5571900446011306;
    me->strings_input_97_data.in = 1.3835004628476104 + me->setpoint_in * 0.9181925946061242 + me->orientation_in * 1.9354129866404612;
    me->strings_input_98_data.in = 17.39566792703176 + me->setpoint_in * -0.5058264705588555 + me->orientation_in * -3.9046222064933813;
    me->strings_input_99_data.in = -2.5347510004251603 + me->setpoint_in * 2.2976729903352013 + me->orientation_in * -0.8352576073534368;

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
    me->strings_0_out = 0.0 + me->strings_conn_synapse0_data.out * -0.008689582192363349 + me->strings_conn_synapse1_data.out * 3.8931073016575053E-4 + me->strings_conn_synapse2_data.out * 1.387695071119422E-4 + me->strings_conn_synapse3_data.out * 4.505819484613896E-4 + me->strings_conn_synapse4_data.out * -4.195952232299887E-5 + me->strings_conn_synapse5_data.out * 0.0010504674111131065 + me->strings_conn_synapse6_data.out * 9.143339927761524E-4 + me->strings_conn_synapse7_data.out * -9.830738522276193E-6 + me->strings_conn_synapse8_data.out * -0.008302516539008117 + me->strings_conn_synapse9_data.out * 2.1767640995544696E-4 + me->strings_conn_synapse10_data.out * 7.052644665316036E-6 + me->strings_conn_synapse11_data.out * 2.806881954243059E-5 + me->strings_conn_synapse12_data.out * 0.0011790283696660486 + me->strings_conn_synapse13_data.out * 3.879369259444315E-5 + me->strings_conn_synapse14_data.out * 9.122138557459958E-4 + me->strings_conn_synapse15_data.out * -0.012657645747380972 + me->strings_conn_synapse16_data.out * 4.5946189517498105E-4 + me->strings_conn_synapse17_data.out * 0.0010149579649977392 + me->strings_conn_synapse18_data.out * -6.685362077846328E-5 + me->strings_conn_synapse19_data.out * 5.608124455180729E-4 + me->strings_conn_synapse20_data.out * 0.0015434199307227227 + me->strings_conn_synapse21_data.out * 0.0010114917448759374 + me->strings_conn_synapse22_data.out * 8.012610978306682E-4 + me->strings_conn_synapse23_data.out * -5.150745587678532E-5 + me->strings_conn_synapse24_data.out * -0.007700069854493281 + me->strings_conn_synapse25_data.out * 5.316495130858856E-5 + me->strings_conn_synapse26_data.out * -6.034021900246462E-5 + me->strings_conn_synapse27_data.out * 0.0026732930047728572 + me->strings_conn_synapse28_data.out * -0.00328399425571355 + me->strings_conn_synapse29_data.out * 0.002613358063699041 + me->strings_conn_synapse30_data.out * 0.0011645127634917574 + me->strings_conn_synapse31_data.out * -9.110764007481065E-5 + me->strings_conn_synapse32_data.out * 2.2121732437800474E-4 + me->strings_conn_synapse33_data.out * 4.28370393612347E-5 + me->strings_conn_synapse34_data.out * 0.0011944263478052583 + me->strings_conn_synapse35_data.out * 6.34018300261252E-4 + me->strings_conn_synapse36_data.out * -2.7407211304142434E-5 + me->strings_conn_synapse37_data.out * 9.830802701681451E-4 + me->strings_conn_synapse38_data.out * 8.44592092732357E-5 + me->strings_conn_synapse39_data.out * 0.001174974104984499 + me->strings_conn_synapse40_data.out * 0.0013127185753768775 + me->strings_conn_synapse41_data.out * 0.0045244161417388774 + me->strings_conn_synapse42_data.out * 3.179939244592652E-5 + me->strings_conn_synapse43_data.out * 0.0019635416130444005 + me->strings_conn_synapse44_data.out * 6.596996674206605E-4 + me->strings_conn_synapse45_data.out * 5.440042681387225E-4 + me->strings_conn_synapse46_data.out * 4.2829114814983644E-4 + me->strings_conn_synapse47_data.out * -3.163910892696099E-5 + me->strings_conn_synapse48_data.out * 0.0033343210947623606 + me->strings_conn_synapse49_data.out * 0.0015270046964233363 + me->strings_conn_synapse50_data.out * -3.443357985075874E-5 + me->strings_conn_synapse51_data.out * -9.885722245719445E-5 + me->strings_conn_synapse52_data.out * -2.3029150685889103E-5 + me->strings_conn_synapse53_data.out * -1.7301409830133334E-5 + me->strings_conn_synapse54_data.out * 0.005472389500000982 + me->strings_conn_synapse55_data.out * -7.73975014439969E-5 + me->strings_conn_synapse56_data.out * 0.0026106339938243343 + me->strings_conn_synapse57_data.out * 1.557276778597162E-4 + me->strings_conn_synapse58_data.out * -5.208724888214364E-5 + me->strings_conn_synapse59_data.out * 2.4381593766414467E-5 + me->strings_conn_synapse60_data.out * 0.0012777456480788916 + me->strings_conn_synapse61_data.out * -0.0048502803396175895 + me->strings_conn_synapse62_data.out * 7.28217313112352E-4 + me->strings_conn_synapse63_data.out * 6.799886380362032E-4 + me->strings_conn_synapse64_data.out * 1.3118485568425447E-4 + me->strings_conn_synapse65_data.out * -1.7110136403429873E-5 + me->strings_conn_synapse66_data.out * -1.0571408424771887E-4 + me->strings_conn_synapse67_data.out * 7.464583598019279E-4 + me->strings_conn_synapse68_data.out * 0.0010467262987727153 + me->strings_conn_synapse69_data.out * -5.113719167389277E-5 + me->strings_conn_synapse70_data.out * 0.003738632417315856 + me->strings_conn_synapse71_data.out * -1.6957243574481796E-5 + me->strings_conn_synapse72_data.out * 4.976733978663701E-5 + me->strings_conn_synapse73_data.out * 4.920384729124023E-4 + me->strings_conn_synapse74_data.out * 6.096465863201072E-4 + me->strings_conn_synapse75_data.out * -6.199704337412077E-5 + me->strings_conn_synapse76_data.out * 2.1831817015037E-5 + me->strings_conn_synapse77_data.out * 1.4192254648797822E-4 + me->strings_conn_synapse78_data.out * -0.006170440069489199 + me->strings_conn_synapse79_data.out * 0.0011405591599841568 + me->strings_conn_synapse80_data.out * 2.9278494147418066E-4 + me->strings_conn_synapse81_data.out * -2.829736018145275E-5 + me->strings_conn_synapse82_data.out * -1.0387932547933401E-5 + me->strings_conn_synapse83_data.out * 1.233336034910458E-4 + me->strings_conn_synapse84_data.out * -6.17681155288311E-5 + me->strings_conn_synapse85_data.out * 8.170680998019794E-4 + me->strings_conn_synapse86_data.out * 0.001050159167313566 + me->strings_conn_synapse87_data.out * 8.592172635380447E-4 + me->strings_conn_synapse88_data.out * 7.000906599192568E-7 + me->strings_conn_synapse89_data.out * 5.380055985955626E-5 + me->strings_conn_synapse90_data.out * -6.624491543662784E-5 + me->strings_conn_synapse91_data.out * 9.71959402990024E-6 + me->strings_conn_synapse92_data.out * 2.2881693746295264E-5 + me->strings_conn_synapse93_data.out * 3.350260036608146E-5 + me->strings_conn_synapse94_data.out * -3.174826640412103E-5 + me->strings_conn_synapse95_data.out * 4.3069810126810976E-5 + me->strings_conn_synapse96_data.out * -0.002466956815444477 + me->strings_conn_synapse97_data.out * 4.3896689439158846E-4 + me->strings_conn_synapse98_data.out * 0.0017902095219024662 + me->strings_conn_synapse99_data.out * 7.34868642111841E-5 + me->strings_conn_synapse100_data.out * -1.4957318015335587E-5 + me->strings_conn_synapse101_data.out * 4.655680815694359E-5 + me->strings_conn_synapse102_data.out * 7.234270879473008E-4 + me->strings_conn_synapse103_data.out * 3.846492581577527E-5 + me->strings_conn_synapse104_data.out * 3.4641279188948805E-4 + me->strings_conn_synapse105_data.out * 1.5631155730382038E-4 + me->strings_conn_synapse106_data.out * 0.003630280223214139 + me->strings_conn_synapse107_data.out * 0.0015557283518457582 + me->strings_conn_synapse108_data.out * -8.474498380322048E-4 + me->strings_conn_synapse109_data.out * 0.0018474154797976918 + me->strings_conn_synapse110_data.out * 2.7493207764534346E-5 + me->strings_conn_synapse111_data.out * -6.046598249402547E-5 + me->strings_conn_synapse112_data.out * -2.8751012039576658E-5 + me->strings_conn_synapse113_data.out * -2.1200428754212933E-5 + me->strings_conn_synapse114_data.out * 1.0152622166810134E-4 + me->strings_conn_synapse115_data.out * -4.720210275364043E-5 + me->strings_conn_synapse116_data.out * 4.749796873707571E-5 + me->strings_conn_synapse117_data.out * 5.441692167767717E-4 + me->strings_conn_synapse118_data.out * 0.0014848201686740996 + me->strings_conn_synapse119_data.out * 6.364637835861305E-4 + me->strings_conn_synapse120_data.out * -2.163100821496554E-5 + me->strings_conn_synapse121_data.out * 9.046331643826736E-4 + me->strings_conn_synapse122_data.out * -2.4138254799622548E-5 + me->strings_conn_synapse123_data.out * 0.0031882716968538514 + me->strings_conn_synapse124_data.out * 0.0010018107786392233 + me->strings_conn_synapse125_data.out * -4.8703818887588656E-5 + me->strings_conn_synapse126_data.out * 0.0010491373493739192 + me->strings_conn_synapse127_data.out * 0.0011259586114407973 + me->strings_conn_synapse128_data.out * 0.0014616201356256143 + me->strings_conn_synapse129_data.out * -4.218437321057611E-5 + me->strings_conn_synapse130_data.out * -4.320531891864453E-5 + me->strings_conn_synapse131_data.out * 8.152822707241104E-4 + me->strings_conn_synapse132_data.out * -5.9868990227770797E-5 + me->strings_conn_synapse133_data.out * 0.0015155138416173208 + me->strings_conn_synapse134_data.out * 0.003407065170557835 + me->strings_conn_synapse135_data.out * 0.0019980005779710293 + me->strings_conn_synapse136_data.out * -8.232366041848157E-5 + me->strings_conn_synapse137_data.out * 0.0014305574861569084 + me->strings_conn_synapse138_data.out * 5.828776186866954E-4 + me->strings_conn_synapse139_data.out * 1.7040308007691512E-5 + me->strings_conn_synapse140_data.out * 2.8956281163350284E-5 + me->strings_conn_synapse141_data.out * -4.093692746020386E-5 + me->strings_conn_synapse142_data.out * 0.001066804987575822 + me->strings_conn_synapse143_data.out * -0.00734456761287532 + me->strings_conn_synapse144_data.out * 3.499627216134089E-5 + me->strings_conn_synapse145_data.out * -8.969698637336886E-5 + me->strings_conn_synapse146_data.out * 0.0015524311657090224 + me->strings_conn_synapse147_data.out * 5.68531316386668E-5 + me->strings_conn_synapse148_data.out * 0.0022147924430651203 + me->strings_conn_synapse149_data.out * 8.15046308373958E-4 + me->strings_conn_synapse150_data.out * 1.3027190363108776E-4 + me->strings_conn_synapse151_data.out * -4.132832676756909E-7 + me->strings_conn_synapse152_data.out * 4.2309937560292604E-5 + me->strings_conn_synapse153_data.out * -0.0016561226937049044 + me->strings_conn_synapse154_data.out * -5.432406293455127E-6 + me->strings_conn_synapse155_data.out * 2.0640379159785098E-4 + me->strings_conn_synapse156_data.out * -1.8146948944604612E-5 + me->strings_conn_synapse157_data.out * 0.0011909255255656555 + me->strings_conn_synapse158_data.out * 5.530916848758E-4 + me->strings_conn_synapse159_data.out * 3.567311179704644E-5 + me->strings_conn_synapse160_data.out * -1.6403567890077477E-5 + me->strings_conn_synapse161_data.out * 0.0011152652958212946 + me->strings_conn_synapse162_data.out * 8.901201234590059E-6 + me->strings_conn_synapse163_data.out * -4.8631597614986234E-5 + me->strings_conn_synapse164_data.out * 2.8448549442206894E-4 + me->strings_conn_synapse165_data.out * 4.7074201672203667E-5 + me->strings_conn_synapse166_data.out * -5.925940465095684E-5 + me->strings_conn_synapse167_data.out * -8.997131979301993E-5 + me->strings_conn_synapse168_data.out * 7.187254349897505E-5 + me->strings_conn_synapse169_data.out * -3.975720736184058E-5 + me->strings_conn_synapse170_data.out * 7.001348299327303E-5 + me->strings_conn_synapse171_data.out * -0.0018009220936479422 + me->strings_conn_synapse172_data.out * 0.001473571121600374 + me->strings_conn_synapse173_data.out * 7.681843767353935E-4 + me->strings_conn_synapse174_data.out * -9.614625139654521E-6 + me->strings_conn_synapse175_data.out * 0.0013736410587195976 + me->strings_conn_synapse176_data.out * -0.0036217004241936336 + me->strings_conn_synapse177_data.out * 3.7398347155252537E-4 + me->strings_conn_synapse178_data.out * 7.728166115098699E-5 + me->strings_conn_synapse179_data.out * 3.2051501193386297E-4 + me->strings_conn_synapse180_data.out * -5.706545248484162E-5 + me->strings_conn_synapse181_data.out * 0.0010202325309900484 + me->strings_conn_synapse182_data.out * 8.103249457657248E-5 + me->strings_conn_synapse183_data.out * 9.654798908713655E-4 + me->strings_conn_synapse184_data.out * 5.353333070991791E-5 + me->strings_conn_synapse185_data.out * 8.487929964732856E-4 + me->strings_conn_synapse186_data.out * 6.862801436573022E-5 + me->strings_conn_synapse187_data.out * -4.96593046202219E-5 + me->strings_conn_synapse188_data.out * 8.344248759447115E-4 + me->strings_conn_synapse189_data.out * 9.797651693200097E-5 + me->strings_conn_synapse190_data.out * -2.786353562217389E-5 + me->strings_conn_synapse191_data.out * -9.5406273376057E-5 + me->strings_conn_synapse192_data.out * -2.3717757694523385E-5 + me->strings_conn_synapse193_data.out * 3.589207809944246E-4 + me->strings_conn_synapse194_data.out * -2.817523880995044E-5 + me->strings_conn_synapse195_data.out * 0.0014410317096881177 + me->strings_conn_synapse196_data.out * 9.804380849490605E-4 + me->strings_conn_synapse197_data.out * 0.0010807845864891734 + me->strings_conn_synapse198_data.out * 0.001082434809414002 + me->strings_conn_synapse199_data.out * 6.854688782407797E-4;
    me->strings_1_out = 0.0 + me->strings_conn_synapse0_data.out * 0.006252517725879502 + me->strings_conn_synapse1_data.out * -5.262184550999809E-4 + me->strings_conn_synapse2_data.out * -2.2641743607722936E-5 + me->strings_conn_synapse3_data.out * -1.0298291378879765E-4 + me->strings_conn_synapse4_data.out * -1.5554409135580676E-4 + me->strings_conn_synapse5_data.out * 0.0011366574939776907 + me->strings_conn_synapse6_data.out * 8.859919169233611E-4 + me->strings_conn_synapse7_data.out * -2.2181411524073595E-6 + me->strings_conn_synapse8_data.out * 0.0017316074874352825 + me->strings_conn_synapse9_data.out * -1.366272819340314E-4 + me->strings_conn_synapse10_data.out * -1.116719640381905E-4 + me->strings_conn_synapse11_data.out * 8.62187051219979E-5 + me->strings_conn_synapse12_data.out * 9.454238854700208E-4 + me->strings_conn_synapse13_data.out * -3.0031648361131206E-5 + me->strings_conn_synapse14_data.out * 5.18310708740377E-4 + me->strings_conn_synapse15_data.out * 0.009495501052199585 + me->strings_conn_synapse16_data.out * 3.8949456945523725E-4 + me->strings_conn_synapse17_data.out * 0.0010868975563185417 + me->strings_conn_synapse18_data.out * -4.90554311117024E-5 + me->strings_conn_synapse19_data.out * 5.288861349727454E-4 + me->strings_conn_synapse20_data.out * 0.0018183589899732717 + me->strings_conn_synapse21_data.out * 0.0013132638892533947 + me->strings_conn_synapse22_data.out * 0.001027179039229551 + me->strings_conn_synapse23_data.out * -7.326660565531263E-5 + me->strings_conn_synapse24_data.out * 0.0060211599027814545 + me->strings_conn_synapse25_data.out * -1.8692226880327134E-5 + me->strings_conn_synapse26_data.out * 8.993067182309835E-5 + me->strings_conn_synapse27_data.out * 0.0019926282422542715 + me->strings_conn_synapse28_data.out * -0.0030553104896873583 + me->strings_conn_synapse29_data.out * 0.0020173569754477127 + me->strings_conn_synapse30_data.out * 0.0013561314090460924 + me->strings_conn_synapse31_data.out * 9.174878731514456E-5 + me->strings_conn_synapse32_data.out * -1.7152356442342144E-4 + me->strings_conn_synapse33_data.out * -7.61500804353207E-5 + me->strings_conn_synapse34_data.out * 0.001403844696326187 + me->strings_conn_synapse35_data.out * 2.2689663097316128E-4 + me->strings_conn_synapse36_data.out * 1.1163300177924543E-4 + me->strings_conn_synapse37_data.out * 0.0011089971489875716 + me->strings_conn_synapse38_data.out * -2.942615946147281E-5 + me->strings_conn_synapse39_data.out * 0.001431747971463317 + me->strings_conn_synapse40_data.out * 0.0013150500995503438 + me->strings_conn_synapse41_data.out * -0.004723163200931456 + me->strings_conn_synapse42_data.out * 1.476361283149621E-5 + me->strings_conn_synapse43_data.out * 0.0019998223178821976 + me->strings_conn_synapse44_data.out * 9.621944671840756E-4 + me->strings_conn_synapse45_data.out * 6.435389581105005E-4 + me->strings_conn_synapse46_data.out * 8.909218413912605E-5 + me->strings_conn_synapse47_data.out * 8.774769724659116E-5 + me->strings_conn_synapse48_data.out * 0.0038270060510193398 + me->strings_conn_synapse49_data.out * 0.0015263000358739702 + me->strings_conn_synapse50_data.out * 6.792482285404657E-6 + me->strings_conn_synapse51_data.out * -1.361898137131402E-4 + me->strings_conn_synapse52_data.out * -3.58592360229849E-5 + me->strings_conn_synapse53_data.out * 3.719182489051399E-5 + me->strings_conn_synapse54_data.out * -0.001023813216768318 + me->strings_conn_synapse55_data.out * -3.7496855321561347E-6 + me->strings_conn_synapse56_data.out * -0.0035274322516192186 + me->strings_conn_synapse57_data.out * -1.1620395737425006E-5 + me->strings_conn_synapse58_data.out * -2.959834059904898E-5 + me->strings_conn_synapse59_data.out * 1.103068222928263E-4 + me->strings_conn_synapse60_data.out * 0.001576798281774091 + me->strings_conn_synapse61_data.out * 0.009213745209133874 + me->strings_conn_synapse62_data.out * 9.085190406670212E-4 + me->strings_conn_synapse63_data.out * 3.846111809308169E-4 + me->strings_conn_synapse64_data.out * -3.178123116218091E-5 + me->strings_conn_synapse65_data.out * 2.532235531555402E-5 + me->strings_conn_synapse66_data.out * 2.751553677891433E-6 + me->strings_conn_synapse67_data.out * 7.89431513681353E-4 + me->strings_conn_synapse68_data.out * 0.001238067192999927 + me->strings_conn_synapse69_data.out * -3.292892551781496E-5 + me->strings_conn_synapse70_data.out * 1.143567318309035E-4 + me->strings_conn_synapse71_data.out * 8.13275933829223E-5 + me->strings_conn_synapse72_data.out * -5.0530318687179035E-5 + me->strings_conn_synapse73_data.out * 4.6798715793302517E-4 + me->strings_conn_synapse74_data.out * 5.576134035328873E-4 + me->strings_conn_synapse75_data.out * 3.372908288242943E-5 + me->strings_conn_synapse76_data.out * -1.3055686587624461E-5 + me->strings_conn_synapse77_data.out * 2.989641926561827E-5 + me->strings_conn_synapse78_data.out * -7.723199271303916E-4 + me->strings_conn_synapse79_data.out * 0.0013723562637593238 + me->strings_conn_synapse80_data.out * -3.5879361933223577E-4 + me->strings_conn_synapse81_data.out * -7.905085131790886E-5 + me->strings_conn_synapse82_data.out * 5.1001614823081676E-5 + me->strings_conn_synapse83_data.out * -1.9429012576110068E-5 + me->strings_conn_synapse84_data.out * -7.80893433437389E-5 + me->strings_conn_synapse85_data.out * 0.0010492462611438446 + me->strings_conn_synapse86_data.out * 0.0011204836225875067 + me->strings_conn_synapse87_data.out * 8.838586130536773E-4 + me->strings_conn_synapse88_data.out * -8.907136850747381E-8 + me->strings_conn_synapse89_data.out * -2.2327597953937976E-5 + me->strings_conn_synapse90_data.out * -1.1789939503120644E-4 + me->strings_conn_synapse91_data.out * -6.093126304010496E-5 + me->strings_conn_synapse92_data.out * 1.0862867133900024E-4 + me->strings_conn_synapse93_data.out * 6.693403470371147E-5 + me->strings_conn_synapse94_data.out * -3.3725403073521114E-5 + me->strings_conn_synapse95_data.out * 7.220118888602674E-5 + me->strings_conn_synapse96_data.out * 0.010941780406079077 + me->strings_conn_synapse97_data.out * -0.0018381565184999755 + me->strings_conn_synapse98_data.out * 0.00211389180440699 + me->strings_conn_synapse99_data.out * 3.054039975365145E-5 + me->strings_conn_synapse100_data.out * -3.902140405396549E-5 + me->strings_conn_synapse101_data.out * -5.432904224433308E-5 + me->strings_conn_synapse102_data.out * 2.577905544820822E-4 + me->strings_conn_synapse103_data.out * 2.9026991719044264E-5 + me->strings_conn_synapse104_data.out * 1.7803943067547953E-4 + me->strings_conn_synapse105_data.out * -7.361318046753987E-4 + me->strings_conn_synapse106_data.out * -0.0024005540363642667 + me->strings_conn_synapse107_data.out * 0.0018830034616852788 + me->strings_conn_synapse108_data.out * -0.003204678130612456 + me->strings_conn_synapse109_data.out * 0.0018281767122146173 + me->strings_conn_synapse110_data.out * -5.876839061962314E-5 + me->strings_conn_synapse111_data.out * 1.0599280057988984E-4 + me->strings_conn_synapse112_data.out * 5.7676747449101346E-5 + me->strings_conn_synapse113_data.out * -4.826128264967018E-5 + me->strings_conn_synapse114_data.out * 1.618950069566735E-4 + me->strings_conn_synapse115_data.out * -5.357831816145205E-5 + me->strings_conn_synapse116_data.out * 6.071003549340315E-8 + me->strings_conn_synapse117_data.out * 6.441786236958307E-4 + me->strings_conn_synapse118_data.out * 4.719467292589423E-4 + me->strings_conn_synapse119_data.out * 6.562473085525041E-4 + me->strings_conn_synapse120_data.out * 5.669617988656986E-5 + me->strings_conn_synapse121_data.out * 0.0011770984333608384 + me->strings_conn_synapse122_data.out * 4.614135794463407E-5 + me->strings_conn_synapse123_data.out * 0.001488680120769328 + me->strings_conn_synapse124_data.out * 9.395993076756337E-4 + me->strings_conn_synapse125_data.out * -2.473716951079107E-5 + me->strings_conn_synapse126_data.out * 0.0011889859009294847 + me->strings_conn_synapse127_data.out * 0.0013515319342901372 + me->strings_conn_synapse128_data.out * 0.001421011391919896 + me->strings_conn_synapse129_data.out * 5.58930984601586E-5 + me->strings_conn_synapse130_data.out * 7.152954893436918E-5 + me->strings_conn_synapse131_data.out * 0.0011434545473778548 + me->strings_conn_synapse132_data.out * -1.632889040457879E-5 + me->strings_conn_synapse133_data.out * 0.0017858627207874528 + me->strings_conn_synapse134_data.out * 3.560295223199828E-4 + me->strings_conn_synapse135_data.out * 0.002308818361919385 + me->strings_conn_synapse136_data.out * 5.1893487208302585E-5 + me->strings_conn_synapse137_data.out * 0.0015789594099898205 + me->strings_conn_synapse138_data.out * 5.586416478776486E-4 + me->strings_conn_synapse139_data.out * -6.222985703344138E-5 + me->strings_conn_synapse140_data.out * -1.9752621073925914E-5 + me->strings_conn_synapse141_data.out * 4.1431624721220186E-5 + me->strings_conn_synapse142_data.out * 0.0012303142388262291 + me->strings_conn_synapse143_data.out * 0.002506213058769992 + me->strings_conn_synapse144_data.out * -4.752791900351582E-5 + me->strings_conn_synapse145_data.out * 2.1127346625270536E-5 + me->strings_conn_synapse146_data.out * 4.883186511477813E-4 + me->strings_conn_synapse147_data.out * 3.3568072818114536E-6 + me->strings_conn_synapse148_data.out * 0.0019225535972270794 + me->strings_conn_synapse149_data.out * 9.13726912375542E-4 + me->strings_conn_synapse150_data.out * 2.1532461442018284E-4 + me->strings_conn_synapse151_data.out * -4.7748474057399676E-5 + me->strings_conn_synapse152_data.out * 1.1564952469484996E-4 + me->strings_conn_synapse153_data.out * 0.007020160415330161 + me->strings_conn_synapse154_data.out * 8.236227505495849E-5 + me->strings_conn_synapse155_data.out * -7.026286532243384E-6 + me->strings_conn_synapse156_data.out * -5.913944303858161E-6 + me->strings_conn_synapse157_data.out * 9.385547824029953E-4 + me->strings_conn_synapse158_data.out * -0.0012078453773472465 + me->strings_conn_synapse159_data.out * 8.931757421026474E-5 + me->strings_conn_synapse160_data.out * -7.301884988246867E-5 + me->strings_conn_synapse161_data.out * 0.0012967508703295816 + me->strings_conn_synapse162_data.out * 2.4027743294413756E-5 + me->strings_conn_synapse163_data.out * 7.132768944266938E-5 + me->strings_conn_synapse164_data.out * -1.3559581899428826E-5 + me->strings_conn_synapse165_data.out * -1.2238296624336037E-4 + me->strings_conn_synapse166_data.out * -1.6201875858519805E-5 + me->strings_conn_synapse167_data.out * 8.575629187902463E-6 + me->strings_conn_synapse168_data.out * -3.804165890697458E-4 + me->strings_conn_synapse169_data.out * -4.1097036438659217E-4 + me->strings_conn_synapse170_data.out * -2.0547503278731127E-5 + me->strings_conn_synapse171_data.out * 0.00735031772646836 + me->strings_conn_synapse172_data.out * 0.001435540494330755 + me->strings_conn_synapse173_data.out * 0.0010020231841581827 + me->strings_conn_synapse174_data.out * -4.9589100782157965E-6 + me->strings_conn_synapse175_data.out * 0.0013940843768392203 + me->strings_conn_synapse176_data.out * -6.17736296389772E-4 + me->strings_conn_synapse177_data.out * 1.2824992519609775E-4 + me->strings_conn_synapse178_data.out * 2.934567049102082E-5 + me->strings_conn_synapse179_data.out * 5.13029196764031E-5 + me->strings_conn_synapse180_data.out * -2.3016046087232105E-5 + me->strings_conn_synapse181_data.out * 0.0012388430869695768 + me->strings_conn_synapse182_data.out * 1.4863529754915565E-5 + me->strings_conn_synapse183_data.out * 0.0011052220336020186 + me->strings_conn_synapse184_data.out * -1.1173092117914967E-5 + me->strings_conn_synapse185_data.out * 5.742401396116123E-4 + me->strings_conn_synapse186_data.out * 7.373807333669568E-5 + me->strings_conn_synapse187_data.out * -1.35353996564567E-4 + me->strings_conn_synapse188_data.out * 8.3668935288776E-4 + me->strings_conn_synapse189_data.out * 7.941654289710527E-5 + me->strings_conn_synapse190_data.out * 6.583035056977317E-6 + me->strings_conn_synapse191_data.out * 7.872087286619843E-5 + me->strings_conn_synapse192_data.out * 7.2503724897052885E-6 + me->strings_conn_synapse193_data.out * -4.309264914913058E-4 + me->strings_conn_synapse194_data.out * 1.548835127629248E-5 + me->strings_conn_synapse195_data.out * 0.0013681396982255997 + me->strings_conn_synapse196_data.out * 1.2633846540101139E-4 + me->strings_conn_synapse197_data.out * 0.0012521991843254783 + me->strings_conn_synapse198_data.out * 0.0011019281563381836 + me->strings_conn_synapse199_data.out * -0.004603549655161036;
    me->strings_2_out = 0.0 + me->strings_conn_synapse0_data.out * -5.25517895017533E-5 + me->strings_conn_synapse1_data.out * 0.0014505049786719384 + me->strings_conn_synapse2_data.out * 5.368151415523279E-5 + me->strings_conn_synapse3_data.out * 0.0014968626869627897 + me->strings_conn_synapse4_data.out * -1.1444894831858632E-4 + me->strings_conn_synapse5_data.out * 0.001493719398274577 + me->strings_conn_synapse6_data.out * -4.645418416553241E-4 + me->strings_conn_synapse7_data.out * -1.3367864691119235E-5 + me->strings_conn_synapse8_data.out * 0.006916604242888595 + me->strings_conn_synapse9_data.out * -1.013556727060715E-5 + me->strings_conn_synapse10_data.out * -5.048644462174775E-5 + me->strings_conn_synapse11_data.out * 5.0607587131184666E-5 + me->strings_conn_synapse12_data.out * 0.0025560829362633337 + me->strings_conn_synapse13_data.out * -2.420178865337922E-5 + me->strings_conn_synapse14_data.out * -0.0010218288745716835 + me->strings_conn_synapse15_data.out * -8.9640612405211E-4 + me->strings_conn_synapse16_data.out * 0.001441633900848165 + me->strings_conn_synapse17_data.out * 0.0019919440843621573 + me->strings_conn_synapse18_data.out * -2.323952919219666E-5 + me->strings_conn_synapse19_data.out * 8.987173608755791E-4 + me->strings_conn_synapse20_data.out * 0.002063126067542348 + me->strings_conn_synapse21_data.out * 5.853858050503412E-4 + me->strings_conn_synapse22_data.out * 5.357131444714796E-4 + me->strings_conn_synapse23_data.out * 3.862069137009553E-5 + me->strings_conn_synapse24_data.out * -8.863755262319016E-4 + me->strings_conn_synapse25_data.out * 4.4040656164435055E-5 + me->strings_conn_synapse26_data.out * 3.284677621406692E-5 + me->strings_conn_synapse27_data.out * -0.0034776173173786157 + me->strings_conn_synapse28_data.out * 0.0053088927496947125 + me->strings_conn_synapse29_data.out * -0.003455507812554724 + me->strings_conn_synapse30_data.out * 6.554490917093541E-4 + me->strings_conn_synapse31_data.out * -4.859184974364314E-5 + me->strings_conn_synapse32_data.out * 0.0016128923382196713 + me->strings_conn_synapse33_data.out * 3.773864436611154E-6 + me->strings_conn_synapse34_data.out * 6.770836592502346E-4 + me->strings_conn_synapse35_data.out * -3.8408491948109963E-4 + me->strings_conn_synapse36_data.out * 8.271681660631482E-5 + me->strings_conn_synapse37_data.out * 0.0013403352796867558 + me->strings_conn_synapse38_data.out * 1.3016323115973568E-5 + me->strings_conn_synapse39_data.out * 7.757444739701066E-4 + me->strings_conn_synapse40_data.out * -5.271718832182856E-5 + me->strings_conn_synapse41_data.out * 0.0017560916722730228 + me->strings_conn_synapse42_data.out * 5.975500952606361E-5 + me->strings_conn_synapse43_data.out * 5.148078542821885E-4 + me->strings_conn_synapse44_data.out * -3.4224050234437427E-4 + me->strings_conn_synapse45_data.out * 7.739073208541035E-4 + me->strings_conn_synapse46_data.out * 0.0013489023936775033 + me->strings_conn_synapse47_data.out * -2.134904239900608E-5 + me->strings_conn_synapse48_data.out * -0.00491851336913363 + me->strings_conn_synapse49_data.out * 0.0023064886820804925 + me->strings_conn_synapse50_data.out * 5.4431066859656315E-5 + me->strings_conn_synapse51_data.out * 9.712396562079384E-5 + me->strings_conn_synapse52_data.out * -1.3706466315983672E-4 + me->strings_conn_synapse53_data.out * -5.381040887086908E-5 + me->strings_conn_synapse54_data.out * -0.0035638894900092903 + me->strings_conn_synapse55_data.out * -1.3111018884037038E-5 + me->strings_conn_synapse56_data.out * 0.0023787312175934765 + me->strings_conn_synapse57_data.out * 0.0011133919000966247 + me->strings_conn_synapse58_data.out * 5.913096637781223E-5 + me->strings_conn_synapse59_data.out * -2.900189049773298E-5 + me->strings_conn_synapse60_data.out * 2.5356732503515814E-4 + me->strings_conn_synapse61_data.out * -0.0034830478252868067 + me->strings_conn_synapse62_data.out * 2.9617566671841813E-4 + me->strings_conn_synapse63_data.out * 0.0018478351362310227 + me->strings_conn_synapse64_data.out * 0.0012224831518671106 + me->strings_conn_synapse65_data.out * -2.7919721788555264E-5 + me->strings_conn_synapse66_data.out * 2.7555721529898975E-5 + me->strings_conn_synapse67_data.out * 0.0015662728145375948 + me->strings_conn_synapse68_data.out * 3.414370061383257E-4 + me->strings_conn_synapse69_data.out * -1.0869230653725623E-4 + me->strings_conn_synapse70_data.out * -0.0023457020164529153 + me->strings_conn_synapse71_data.out * -6.195023376911396E-5 + me->strings_conn_synapse72_data.out * -4.070986384568701E-6 + me->strings_conn_synapse73_data.out * 0.0013841649051779003 + me->strings_conn_synapse74_data.out * 0.0014282862089436937 + me->strings_conn_synapse75_data.out * -5.9755787971043517E-5 + me->strings_conn_synapse76_data.out * -1.2032770522492532E-5 + me->strings_conn_synapse77_data.out * -1.6098697036783554E-4 + me->strings_conn_synapse78_data.out * 0.008499925210583537 + me->strings_conn_synapse79_data.out * 4.0415703357107456E-4 + me->strings_conn_synapse80_data.out * 0.001954958083846692 + me->strings_conn_synapse81_data.out * -3.80499719477823E-5 + me->strings_conn_synapse82_data.out * -3.576185640992324E-5 + me->strings_conn_synapse83_data.out * 2.6641265642962954E-6 + me->strings_conn_synapse84_data.out * 8.763414538375497E-5 + me->strings_conn_synapse85_data.out * 2.914230530622524E-4 + me->strings_conn_synapse86_data.out * 1.2030216444500965E-4 + me->strings_conn_synapse87_data.out * 8.385713817848804E-4 + me->strings_conn_synapse88_data.out * -7.620543822731139E-6 + me->strings_conn_synapse89_data.out * -1.7485693359845944E-5 + me->strings_conn_synapse90_data.out * 3.781852069203179E-5 + me->strings_conn_synapse91_data.out * -9.821030703089959E-6 + me->strings_conn_synapse92_data.out * -3.5720456439560113E-6 + me->strings_conn_synapse93_data.out * -1.857081937760509E-5 + me->strings_conn_synapse94_data.out * 5.080817053904142E-6 + me->strings_conn_synapse95_data.out * -7.980191996273409E-5 + me->strings_conn_synapse96_data.out * -0.0035157491730148194 + me->strings_conn_synapse97_data.out * 0.002182864606775047 + me->strings_conn_synapse98_data.out * 0.0018335784088853017 + me->strings_conn_synapse99_data.out * -4.437311008520461E-5 + me->strings_conn_synapse100_data.out * 2.8637753910683984E-5 + me->strings_conn_synapse101_data.out * -1.2134209309531812E-5 + me->strings_conn_synapse102_data.out * 0.002176145775062504 + me->strings_conn_synapse103_data.out * 1.1318391355673805E-5 + me->strings_conn_synapse104_data.out * 0.0016150247343487978 + me->strings_conn_synapse105_data.out * 0.0016571903245408877 + me->strings_conn_synapse106_data.out * -3.442767125306349E-4 + me->strings_conn_synapse107_data.out * 0.0010224587104889515 + me->strings_conn_synapse108_data.out * 0.004389430624865942 + me->strings_conn_synapse109_data.out * 1.936578939416753E-4 + me->strings_conn_synapse110_data.out * 3.724086862363577E-5 + me->strings_conn_synapse111_data.out * 1.1386219526106402E-4 + me->strings_conn_synapse112_data.out * 8.265355460618774E-6 + me->strings_conn_synapse113_data.out * -5.123430498149779E-6 + me->strings_conn_synapse114_data.out * -1.545225732872308E-5 + me->strings_conn_synapse115_data.out * -5.8615576165018304E-5 + me->strings_conn_synapse116_data.out * -3.177121348326704E-5 + me->strings_conn_synapse117_data.out * 9.666448592791428E-4 + me->strings_conn_synapse118_data.out * 0.0027792911886360193 + me->strings_conn_synapse119_data.out * -2.1455390939719606E-4 + me->strings_conn_synapse120_data.out * -3.7755576431996136E-6 + me->strings_conn_synapse121_data.out * 0.0010247848908792822 + me->strings_conn_synapse122_data.out * -5.822963623117157E-5 + me->strings_conn_synapse123_data.out * -7.826760280542387E-4 + me->strings_conn_synapse124_data.out * -5.225884296320581E-4 + me->strings_conn_synapse125_data.out * -3.560366852743453E-5 + me->strings_conn_synapse126_data.out * -8.820868348194357E-5 + me->strings_conn_synapse127_data.out * 3.916298717087692E-4 + me->strings_conn_synapse128_data.out * -6.302457538103565E-4 + me->strings_conn_synapse129_data.out * 4.20066883090455E-5 + me->strings_conn_synapse130_data.out * 2.8529834481969887E-5 + me->strings_conn_synapse131_data.out * 6.091533082263719E-4 + me->strings_conn_synapse132_data.out * 3.590714235500853E-5 + me->strings_conn_synapse133_data.out * 0.002164229117827893 + me->strings_conn_synapse134_data.out * -0.002470486191111362 + me->strings_conn_synapse135_data.out * 0.0014672189310242089 + me->strings_conn_synapse136_data.out * 1.1087690817846865E-4 + me->strings_conn_synapse137_data.out * 4.682193292992503E-4 + me->strings_conn_synapse138_data.out * 0.0014266814202730258 + me->strings_conn_synapse139_data.out * 1.9231054571813488E-5 + me->strings_conn_synapse140_data.out * -5.168607401762485E-5 + me->strings_conn_synapse141_data.out * -1.7842714321842165E-5 + me->strings_conn_synapse142_data.out * -8.330529451376667E-6 + me->strings_conn_synapse143_data.out * 0.006259166623262423 + me->strings_conn_synapse144_data.out * 6.844092134446669E-5 + me->strings_conn_synapse145_data.out * 5.812264360477811E-5 + me->strings_conn_synapse146_data.out * -0.0016607388224206313 + me->strings_conn_synapse147_data.out * -1.6838668835976197E-5 + me->strings_conn_synapse148_data.out * 3.755683195206988E-4 + me->strings_conn_synapse149_data.out * 3.755427553264109E-4 + me->strings_conn_synapse150_data.out * 1.4937068904202294E-4 + me->strings_conn_synapse151_data.out * -3.941491949631352E-5 + me->strings_conn_synapse152_data.out * 6.908301240692095E-5 + me->strings_conn_synapse153_data.out * -0.0042116876064753695 + me->strings_conn_synapse154_data.out * -4.005754704833506E-5 + me->strings_conn_synapse155_data.out * 3.226423267857608E-5 + me->strings_conn_synapse156_data.out * -2.976226087925619E-5 + me->strings_conn_synapse157_data.out * 0.0023825808621947353 + me->strings_conn_synapse158_data.out * 0.0012259482144412895 + me->strings_conn_synapse159_data.out * -1.3684795194575763E-5 + me->strings_conn_synapse160_data.out * 6.233062186736645E-5 + me->strings_conn_synapse161_data.out * 0.0012078614819652721 + me->strings_conn_synapse162_data.out * 1.3421757513869717E-4 + me->strings_conn_synapse163_data.out * 7.285090864919363E-5 + me->strings_conn_synapse164_data.out * 0.0011900730048778592 + me->strings_conn_synapse165_data.out * 1.4745578180142952E-5 + me->strings_conn_synapse166_data.out * 1.2401309198419232E-5 + me->strings_conn_synapse167_data.out * 8.72783287367283E-6 + me->strings_conn_synapse168_data.out * 0.0011917552113269532 + me->strings_conn_synapse169_data.out * 6.307169145113122E-4 + me->strings_conn_synapse170_data.out * -5.618131104529176E-5 + me->strings_conn_synapse171_data.out * -0.004184666498422116 + me->strings_conn_synapse172_data.out * -1.442557218453114E-4 + me->strings_conn_synapse173_data.out * 0.0012240424438985625 + me->strings_conn_synapse174_data.out * -1.4839617934022732E-5 + me->strings_conn_synapse175_data.out * -1.936196779990357E-4 + me->strings_conn_synapse176_data.out * 0.0054148912724227855 + me->strings_conn_synapse177_data.out * 0.0013691013078993906 + me->strings_conn_synapse178_data.out * 2.3706841420417346E-5 + me->strings_conn_synapse179_data.out * 0.001328072195843844 + me->strings_conn_synapse180_data.out * -7.0527983581101E-5 + me->strings_conn_synapse181_data.out * 0.0016469231131502142 + me->strings_conn_synapse182_data.out * -5.9586119864372485E-5 + me->strings_conn_synapse183_data.out * 1.2837335505212202E-4 + me->strings_conn_synapse184_data.out * -9.874939327295124E-6 + me->strings_conn_synapse185_data.out * 0.0021524255703388316 + me->strings_conn_synapse186_data.out * 7.594655556881461E-5 + me->strings_conn_synapse187_data.out * 5.2509726289153624E-5 + me->strings_conn_synapse188_data.out * -6.436766353471342E-4 + me->strings_conn_synapse189_data.out * 5.812481137231893E-5 + me->strings_conn_synapse190_data.out * -1.2073180695137137E-4 + me->strings_conn_synapse191_data.out * 1.139776765226329E-4 + me->strings_conn_synapse192_data.out * 3.679807826446172E-5 + me->strings_conn_synapse193_data.out * 0.0019026042965922733 + me->strings_conn_synapse194_data.out * 5.121115758033311E-5 + me->strings_conn_synapse195_data.out * 0.0024860047569980202 + me->strings_conn_synapse196_data.out * 0.002489973302619412 + me->strings_conn_synapse197_data.out * -4.938186036410996E-4 + me->strings_conn_synapse198_data.out * -7.441163811440099E-5 + me->strings_conn_synapse199_data.out * 0.006651632051560504;
}