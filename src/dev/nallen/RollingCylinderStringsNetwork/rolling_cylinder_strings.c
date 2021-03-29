#include "rolling_cylinder_strings.h"

static double CheckSpike(bool spike, double weight) {
    if(spike) {
        return weight;
    }
    return 0.0;
}


// rolling_cylinder_strings Initialisation function
void RollingCylinderStringsInit(RollingCylinderStrings* me) {
    // Initialise Sub-objects
    PositionInputs0Init(&me->position_inputs_0_data);

    PositionInputs1Init(&me->position_inputs_1_data);

    PositionInputs2Init(&me->position_inputs_2_data);

    PositionInputs3Init(&me->position_inputs_3_data);

    PositionInputs4Init(&me->position_inputs_4_data);

    PositionInputs5Init(&me->position_inputs_5_data);

    PositionInputs6Init(&me->position_inputs_6_data);

    PositionInputs7Init(&me->position_inputs_7_data);

    PositionInputs8Init(&me->position_inputs_8_data);

    PositionInputs9Init(&me->position_inputs_9_data);

    PositionInputs10Init(&me->position_inputs_10_data);

    PositionInputs11Init(&me->position_inputs_11_data);

    PositionInputs12Init(&me->position_inputs_12_data);

    PositionInputs13Init(&me->position_inputs_13_data);

    PositionInputs14Init(&me->position_inputs_14_data);

    PositionInputs15Init(&me->position_inputs_15_data);

    PositionInputs16Init(&me->position_inputs_16_data);

    PositionInputs17Init(&me->position_inputs_17_data);

    PositionInputs18Init(&me->position_inputs_18_data);

    PositionInputs19Init(&me->position_inputs_19_data);

    PositionInputs20Init(&me->position_inputs_20_data);

    PositionInputs21Init(&me->position_inputs_21_data);

    PositionInputs22Init(&me->position_inputs_22_data);

    PositionInputs23Init(&me->position_inputs_23_data);

    PositionInputs24Init(&me->position_inputs_24_data);

    PositionInputs25Init(&me->position_inputs_25_data);

    PositionInputs26Init(&me->position_inputs_26_data);

    PositionInputs27Init(&me->position_inputs_27_data);

    PositionInputs28Init(&me->position_inputs_28_data);

    PositionInputs29Init(&me->position_inputs_29_data);

    PositionInputs30Init(&me->position_inputs_30_data);

    PositionInputs31Init(&me->position_inputs_31_data);

    PositionInputs32Init(&me->position_inputs_32_data);

    PositionInputs33Init(&me->position_inputs_33_data);

    PositionInputs34Init(&me->position_inputs_34_data);

    PositionInputs35Init(&me->position_inputs_35_data);

    PositionInputs36Init(&me->position_inputs_36_data);

    PositionInputs37Init(&me->position_inputs_37_data);

    PositionInputs38Init(&me->position_inputs_38_data);

    PositionInputs39Init(&me->position_inputs_39_data);

    PositionInputs40Init(&me->position_inputs_40_data);

    PositionInputs41Init(&me->position_inputs_41_data);

    PositionInputs42Init(&me->position_inputs_42_data);

    PositionInputs43Init(&me->position_inputs_43_data);

    PositionInputs44Init(&me->position_inputs_44_data);

    PositionInputs45Init(&me->position_inputs_45_data);

    PositionInputs46Init(&me->position_inputs_46_data);

    PositionInputs47Init(&me->position_inputs_47_data);

    PositionInputs48Init(&me->position_inputs_48_data);

    PositionInputs49Init(&me->position_inputs_49_data);

    PositionInputs50Init(&me->position_inputs_50_data);

    PositionInputs51Init(&me->position_inputs_51_data);

    PositionInputs52Init(&me->position_inputs_52_data);

    PositionInputs53Init(&me->position_inputs_53_data);

    PositionInputs54Init(&me->position_inputs_54_data);

    PositionInputs55Init(&me->position_inputs_55_data);

    PositionInputs56Init(&me->position_inputs_56_data);

    PositionInputs57Init(&me->position_inputs_57_data);

    PositionInputs58Init(&me->position_inputs_58_data);

    PositionInputs59Init(&me->position_inputs_59_data);

    PositionInputs60Init(&me->position_inputs_60_data);

    PositionInputs61Init(&me->position_inputs_61_data);

    PositionInputs62Init(&me->position_inputs_62_data);

    PositionInputs63Init(&me->position_inputs_63_data);

    PositionInputs64Init(&me->position_inputs_64_data);

    PositionInputs65Init(&me->position_inputs_65_data);

    PositionInputs66Init(&me->position_inputs_66_data);

    PositionInputs67Init(&me->position_inputs_67_data);

    PositionInputs68Init(&me->position_inputs_68_data);

    PositionInputs69Init(&me->position_inputs_69_data);

    PositionInputs70Init(&me->position_inputs_70_data);

    PositionInputs71Init(&me->position_inputs_71_data);

    PositionInputs72Init(&me->position_inputs_72_data);

    PositionInputs73Init(&me->position_inputs_73_data);

    PositionInputs74Init(&me->position_inputs_74_data);

    PositionInputs75Init(&me->position_inputs_75_data);

    PositionInputs76Init(&me->position_inputs_76_data);

    PositionInputs77Init(&me->position_inputs_77_data);

    PositionInputs78Init(&me->position_inputs_78_data);

    PositionInputs79Init(&me->position_inputs_79_data);

    PositionInputs80Init(&me->position_inputs_80_data);

    PositionInputs81Init(&me->position_inputs_81_data);

    PositionInputs82Init(&me->position_inputs_82_data);

    PositionInputs83Init(&me->position_inputs_83_data);

    PositionInputs84Init(&me->position_inputs_84_data);

    PositionInputs85Init(&me->position_inputs_85_data);

    PositionInputs86Init(&me->position_inputs_86_data);

    PositionInputs87Init(&me->position_inputs_87_data);

    PositionInputs88Init(&me->position_inputs_88_data);

    PositionInputs89Init(&me->position_inputs_89_data);

    PositionInputs90Init(&me->position_inputs_90_data);

    PositionInputs91Init(&me->position_inputs_91_data);

    PositionInputs92Init(&me->position_inputs_92_data);

    PositionInputs93Init(&me->position_inputs_93_data);

    PositionInputs94Init(&me->position_inputs_94_data);

    PositionInputs95Init(&me->position_inputs_95_data);

    PositionInputs96Init(&me->position_inputs_96_data);

    PositionInputs97Init(&me->position_inputs_97_data);

    PositionInputs98Init(&me->position_inputs_98_data);

    PositionInputs99Init(&me->position_inputs_99_data);

    PositionConnSynapse0Init(&me->position_conn_synapse0_data);

    PositionConnSynapse1Init(&me->position_conn_synapse1_data);

    PositionConnSynapse2Init(&me->position_conn_synapse2_data);

    PositionConnSynapse3Init(&me->position_conn_synapse3_data);

    PositionConnSynapse4Init(&me->position_conn_synapse4_data);

    PositionConnSynapse5Init(&me->position_conn_synapse5_data);

    PositionConnSynapse6Init(&me->position_conn_synapse6_data);

    PositionConnSynapse7Init(&me->position_conn_synapse7_data);

    PositionConnSynapse8Init(&me->position_conn_synapse8_data);

    PositionConnSynapse9Init(&me->position_conn_synapse9_data);

    PositionConnSynapse10Init(&me->position_conn_synapse10_data);

    PositionConnSynapse11Init(&me->position_conn_synapse11_data);

    PositionConnSynapse12Init(&me->position_conn_synapse12_data);

    PositionConnSynapse13Init(&me->position_conn_synapse13_data);

    PositionConnSynapse14Init(&me->position_conn_synapse14_data);

    PositionConnSynapse15Init(&me->position_conn_synapse15_data);

    PositionConnSynapse16Init(&me->position_conn_synapse16_data);

    PositionConnSynapse17Init(&me->position_conn_synapse17_data);

    PositionConnSynapse18Init(&me->position_conn_synapse18_data);

    PositionConnSynapse19Init(&me->position_conn_synapse19_data);

    PositionConnSynapse20Init(&me->position_conn_synapse20_data);

    PositionConnSynapse21Init(&me->position_conn_synapse21_data);

    PositionConnSynapse22Init(&me->position_conn_synapse22_data);

    PositionConnSynapse23Init(&me->position_conn_synapse23_data);

    PositionConnSynapse24Init(&me->position_conn_synapse24_data);

    PositionConnSynapse25Init(&me->position_conn_synapse25_data);

    PositionConnSynapse26Init(&me->position_conn_synapse26_data);

    PositionConnSynapse27Init(&me->position_conn_synapse27_data);

    PositionConnSynapse28Init(&me->position_conn_synapse28_data);

    PositionConnSynapse29Init(&me->position_conn_synapse29_data);

    PositionConnSynapse30Init(&me->position_conn_synapse30_data);

    PositionConnSynapse31Init(&me->position_conn_synapse31_data);

    PositionConnSynapse32Init(&me->position_conn_synapse32_data);

    PositionConnSynapse33Init(&me->position_conn_synapse33_data);

    PositionConnSynapse34Init(&me->position_conn_synapse34_data);

    PositionConnSynapse35Init(&me->position_conn_synapse35_data);

    PositionConnSynapse36Init(&me->position_conn_synapse36_data);

    PositionConnSynapse37Init(&me->position_conn_synapse37_data);

    PositionConnSynapse38Init(&me->position_conn_synapse38_data);

    PositionConnSynapse39Init(&me->position_conn_synapse39_data);

    PositionConnSynapse40Init(&me->position_conn_synapse40_data);

    PositionConnSynapse41Init(&me->position_conn_synapse41_data);

    PositionConnSynapse42Init(&me->position_conn_synapse42_data);

    PositionConnSynapse43Init(&me->position_conn_synapse43_data);

    PositionConnSynapse44Init(&me->position_conn_synapse44_data);

    PositionConnSynapse45Init(&me->position_conn_synapse45_data);

    PositionConnSynapse46Init(&me->position_conn_synapse46_data);

    PositionConnSynapse47Init(&me->position_conn_synapse47_data);

    PositionConnSynapse48Init(&me->position_conn_synapse48_data);

    PositionConnSynapse49Init(&me->position_conn_synapse49_data);

    PositionConnSynapse50Init(&me->position_conn_synapse50_data);

    PositionConnSynapse51Init(&me->position_conn_synapse51_data);

    PositionConnSynapse52Init(&me->position_conn_synapse52_data);

    PositionConnSynapse53Init(&me->position_conn_synapse53_data);

    PositionConnSynapse54Init(&me->position_conn_synapse54_data);

    PositionConnSynapse55Init(&me->position_conn_synapse55_data);

    PositionConnSynapse56Init(&me->position_conn_synapse56_data);

    PositionConnSynapse57Init(&me->position_conn_synapse57_data);

    PositionConnSynapse58Init(&me->position_conn_synapse58_data);

    PositionConnSynapse59Init(&me->position_conn_synapse59_data);

    PositionConnSynapse60Init(&me->position_conn_synapse60_data);

    PositionConnSynapse61Init(&me->position_conn_synapse61_data);

    PositionConnSynapse62Init(&me->position_conn_synapse62_data);

    PositionConnSynapse63Init(&me->position_conn_synapse63_data);

    PositionConnSynapse64Init(&me->position_conn_synapse64_data);

    PositionConnSynapse65Init(&me->position_conn_synapse65_data);

    PositionConnSynapse66Init(&me->position_conn_synapse66_data);

    PositionConnSynapse67Init(&me->position_conn_synapse67_data);

    PositionConnSynapse68Init(&me->position_conn_synapse68_data);

    PositionConnSynapse69Init(&me->position_conn_synapse69_data);

    PositionConnSynapse70Init(&me->position_conn_synapse70_data);

    PositionConnSynapse71Init(&me->position_conn_synapse71_data);

    PositionConnSynapse72Init(&me->position_conn_synapse72_data);

    PositionConnSynapse73Init(&me->position_conn_synapse73_data);

    PositionConnSynapse74Init(&me->position_conn_synapse74_data);

    PositionConnSynapse75Init(&me->position_conn_synapse75_data);

    PositionConnSynapse76Init(&me->position_conn_synapse76_data);

    PositionConnSynapse77Init(&me->position_conn_synapse77_data);

    PositionConnSynapse78Init(&me->position_conn_synapse78_data);

    PositionConnSynapse79Init(&me->position_conn_synapse79_data);

    PositionConnSynapse80Init(&me->position_conn_synapse80_data);

    PositionConnSynapse81Init(&me->position_conn_synapse81_data);

    PositionConnSynapse82Init(&me->position_conn_synapse82_data);

    PositionConnSynapse83Init(&me->position_conn_synapse83_data);

    PositionConnSynapse84Init(&me->position_conn_synapse84_data);

    PositionConnSynapse85Init(&me->position_conn_synapse85_data);

    PositionConnSynapse86Init(&me->position_conn_synapse86_data);

    PositionConnSynapse87Init(&me->position_conn_synapse87_data);

    PositionConnSynapse88Init(&me->position_conn_synapse88_data);

    PositionConnSynapse89Init(&me->position_conn_synapse89_data);

    PositionConnSynapse90Init(&me->position_conn_synapse90_data);

    PositionConnSynapse91Init(&me->position_conn_synapse91_data);

    PositionConnSynapse92Init(&me->position_conn_synapse92_data);

    PositionConnSynapse93Init(&me->position_conn_synapse93_data);

    PositionConnSynapse94Init(&me->position_conn_synapse94_data);

    PositionConnSynapse95Init(&me->position_conn_synapse95_data);

    PositionConnSynapse96Init(&me->position_conn_synapse96_data);

    PositionConnSynapse97Init(&me->position_conn_synapse97_data);

    PositionConnSynapse98Init(&me->position_conn_synapse98_data);

    PositionConnSynapse99Init(&me->position_conn_synapse99_data);

    // Initialise Outputs
    me->strings_0_out = 0.0 + me->position_conn_synapse0_data.out * -1.8636289262856753E-5 + me->position_conn_synapse1_data.out * 4.2025322758704794E-4 + me->position_conn_synapse2_data.out * 0.0016330491249098439 + me->position_conn_synapse3_data.out * 2.0092387089946494E-4 + me->position_conn_synapse4_data.out * -5.79293812085544E-6 + me->position_conn_synapse5_data.out * -9.592003539374262E-6 + me->position_conn_synapse6_data.out * -4.473062338409516E-6 + me->position_conn_synapse7_data.out * -1.241653872906826E-5 + me->position_conn_synapse8_data.out * 0.0012131226828558778 + me->position_conn_synapse9_data.out * 4.917926177261082E-4 + me->position_conn_synapse10_data.out * 3.2665198766704923E-4 + me->position_conn_synapse11_data.out * -0.001197815318143104 + me->position_conn_synapse12_data.out * 0.0014242110735608812 + me->position_conn_synapse13_data.out * 0.0029951174204731817 + me->position_conn_synapse14_data.out * 0.0018479676248707208 + me->position_conn_synapse15_data.out * 3.55014608273056E-4 + me->position_conn_synapse16_data.out * 2.543458817031124E-4 + me->position_conn_synapse17_data.out * -0.0011639261600198143 + me->position_conn_synapse18_data.out * 0.0013389290257945054 + me->position_conn_synapse19_data.out * 0.0015680700528076827 + me->position_conn_synapse20_data.out * -2.3392333212900684E-5 + me->position_conn_synapse21_data.out * 9.114826538652117E-4 + me->position_conn_synapse22_data.out * 0.0014011865529256348 + me->position_conn_synapse23_data.out * -8.580403424811474E-4 + me->position_conn_synapse24_data.out * 1.9302236300931817E-5 + me->position_conn_synapse25_data.out * -6.278258298754116E-4 + me->position_conn_synapse26_data.out * -5.469489246116854E-4 + me->position_conn_synapse27_data.out * -9.03607049438334E-4 + me->position_conn_synapse28_data.out * 0.0016530145963680111 + me->position_conn_synapse29_data.out * -1.8290883995245188E-5 + me->position_conn_synapse30_data.out * 2.2258268543761433E-6 + me->position_conn_synapse31_data.out * 0.0019684278438446396 + me->position_conn_synapse32_data.out * -7.873088433576614E-4 + me->position_conn_synapse33_data.out * 0.0014929366534702226 + me->position_conn_synapse34_data.out * 7.515758052703302E-5 + me->position_conn_synapse35_data.out * 0.0014917936232882582 + me->position_conn_synapse36_data.out * -0.003575691082177799 + me->position_conn_synapse37_data.out * -1.8193839228974505E-5 + me->position_conn_synapse38_data.out * 0.0018896168161262287 + me->position_conn_synapse39_data.out * 8.303332290517213E-4 + me->position_conn_synapse40_data.out * 0.004104134153369121 + me->position_conn_synapse41_data.out * -5.13564689517382E-7 + me->position_conn_synapse42_data.out * -6.243882699468947E-5 + me->position_conn_synapse43_data.out * 0.0010515420684783794 + me->position_conn_synapse44_data.out * 8.111783858647349E-4 + me->position_conn_synapse45_data.out * 1.475253238148094E-5 + me->position_conn_synapse46_data.out * 6.416793062535015E-5 + me->position_conn_synapse47_data.out * -1.0465170173185052E-5 + me->position_conn_synapse48_data.out * -1.270389812721338E-5 + me->position_conn_synapse49_data.out * 0.0026462338347299896 + me->position_conn_synapse50_data.out * 0.0011460511335712297 + me->position_conn_synapse51_data.out * -1.1727676862512162E-5 + me->position_conn_synapse52_data.out * -3.2655213161986456E-4 + me->position_conn_synapse53_data.out * -0.0017907569642792247 + me->position_conn_synapse54_data.out * 2.920450277512873E-5 + me->position_conn_synapse55_data.out * 0.001392843129889718 + me->position_conn_synapse56_data.out * -3.942355152961744E-6 + me->position_conn_synapse57_data.out * -0.0024162322525697346 + me->position_conn_synapse58_data.out * -8.499599020535357E-4 + me->position_conn_synapse59_data.out * 0.0011422575808787555 + me->position_conn_synapse60_data.out * -0.0018315512632059354 + me->position_conn_synapse61_data.out * -9.347504443547979E-7 + me->position_conn_synapse62_data.out * -2.7241368738235335E-5 + me->position_conn_synapse63_data.out * -8.767335606814065E-6 + me->position_conn_synapse64_data.out * 0.004655707050067384 + me->position_conn_synapse65_data.out * -3.0936564584183275E-5 + me->position_conn_synapse66_data.out * -9.157326932015657E-4 + me->position_conn_synapse67_data.out * -5.463841910551397E-6 + me->position_conn_synapse68_data.out * 0.001212026650343229 + me->position_conn_synapse69_data.out * 2.167269231627178E-5 + me->position_conn_synapse70_data.out * -2.4987202865781658E-5 + me->position_conn_synapse71_data.out * -2.7063372875661E-4 + me->position_conn_synapse72_data.out * -1.260364616535011E-4 + me->position_conn_synapse73_data.out * 0.0011609866113312737 + me->position_conn_synapse74_data.out * -6.981198964485192E-4 + me->position_conn_synapse75_data.out * -5.788644627347579E-4 + me->position_conn_synapse76_data.out * 0.0011967475787691157 + me->position_conn_synapse77_data.out * -7.481990511787237E-6 + me->position_conn_synapse78_data.out * -3.6786652059783524E-4 + me->position_conn_synapse79_data.out * 4.971168536298362E-5 + me->position_conn_synapse80_data.out * -0.0017288583214597453 + me->position_conn_synapse81_data.out * 5.746426358120763E-5 + me->position_conn_synapse82_data.out * -5.58520703736633E-6 + me->position_conn_synapse83_data.out * -3.2316000578825006E-5 + me->position_conn_synapse84_data.out * -3.8992876262528855E-4 + me->position_conn_synapse85_data.out * 0.0028785106721649616 + me->position_conn_synapse86_data.out * 9.424636156498356E-4 + me->position_conn_synapse87_data.out * -5.49744903507218E-6 + me->position_conn_synapse88_data.out * -9.742677237039283E-4 + me->position_conn_synapse89_data.out * 0.0015897451555111576 + me->position_conn_synapse90_data.out * 6.677380336981299E-4 + me->position_conn_synapse91_data.out * -3.5232198882060693E-6 + me->position_conn_synapse92_data.out * -6.568368042622186E-6 + me->position_conn_synapse93_data.out * -0.0017656145526929966 + me->position_conn_synapse94_data.out * 0.0020144217934501465 + me->position_conn_synapse95_data.out * 9.104950561823835E-6 + me->position_conn_synapse96_data.out * 2.646444552271698E-5 + me->position_conn_synapse97_data.out * 0.0018791053455273685 + me->position_conn_synapse98_data.out * -6.472405495469722E-4 + me->position_conn_synapse99_data.out * 5.8509997596236906E-5;
    me->strings_1_out = 0.0 + me->position_conn_synapse0_data.out * -1.8636289262856753E-5 + me->position_conn_synapse1_data.out * 9.144934852011241E-4 + me->position_conn_synapse2_data.out * -5.429383459349121E-4 + me->position_conn_synapse3_data.out * -9.18329022340327E-4 + me->position_conn_synapse4_data.out * -5.79293812085544E-6 + me->position_conn_synapse5_data.out * -9.592003539374262E-6 + me->position_conn_synapse6_data.out * -4.473062338409516E-6 + me->position_conn_synapse7_data.out * -1.241653872906826E-5 + me->position_conn_synapse8_data.out * 0.0024517782273903964 + me->position_conn_synapse9_data.out * -9.613023011405439E-5 + me->position_conn_synapse10_data.out * -0.0010353965378194377 + me->position_conn_synapse11_data.out * 0.004982287342470976 + me->position_conn_synapse12_data.out * 0.00376275609631484 + me->position_conn_synapse13_data.out * -0.0018783052804837203 + me->position_conn_synapse14_data.out * 0.0018410525768634465 + me->position_conn_synapse15_data.out * 0.003386074846596944 + me->position_conn_synapse16_data.out * 0.0028510776038177567 + me->position_conn_synapse17_data.out * 0.005071262859224399 + me->position_conn_synapse18_data.out * 3.5630103238688446E-4 + me->position_conn_synapse19_data.out * -0.001297325521205406 + me->position_conn_synapse20_data.out * -2.3392333212900684E-5 + me->position_conn_synapse21_data.out * 0.0012037450236345977 + me->position_conn_synapse22_data.out * 0.0021945873444452584 + me->position_conn_synapse23_data.out * -9.721596912137192E-5 + me->position_conn_synapse24_data.out * 1.9302236300931817E-5 + me->position_conn_synapse25_data.out * 0.0028856612118104913 + me->position_conn_synapse26_data.out * 4.713977231289878E-5 + me->position_conn_synapse27_data.out * 4.044702614379531E-5 + me->position_conn_synapse28_data.out * 0.001708992143998337 + me->position_conn_synapse29_data.out * -1.8290883995245188E-5 + me->position_conn_synapse30_data.out * 2.2258268543761433E-6 + me->position_conn_synapse31_data.out * 0.0020226280906463596 + me->position_conn_synapse32_data.out * 0.0034611060599128783 + me->position_conn_synapse33_data.out * 0.0022957735485416115 + me->position_conn_synapse34_data.out * 0.002846653215480694 + me->position_conn_synapse35_data.out * 6.126359728776507E-4 + me->position_conn_synapse36_data.out * 0.005724622607033704 + me->position_conn_synapse37_data.out * -1.8193839228974505E-5 + me->position_conn_synapse38_data.out * 0.0033589107110035296 + me->position_conn_synapse39_data.out * -0.0016772558549931079 + me->position_conn_synapse40_data.out * -0.0013910705824415883 + me->position_conn_synapse41_data.out * -5.13564689517382E-7 + me->position_conn_synapse42_data.out * -6.243882699468947E-5 + me->position_conn_synapse43_data.out * 5.814181578019359E-4 + me->position_conn_synapse44_data.out * 0.0014800964062066896 + me->position_conn_synapse45_data.out * -0.0011093418000903427 + me->position_conn_synapse46_data.out * 8.475683029706103E-4 + me->position_conn_synapse47_data.out * -1.0465170173185052E-5 + me->position_conn_synapse48_data.out * -1.270389812721338E-5 + me->position_conn_synapse49_data.out * 0.0028383335633291994 + me->position_conn_synapse50_data.out * -1.4087738612234091E-4 + me->position_conn_synapse51_data.out * -1.1727676862512162E-5 + me->position_conn_synapse52_data.out * 0.0017811710801852823 + me->position_conn_synapse53_data.out * 0.003644826159465185 + me->position_conn_synapse54_data.out * 2.920450277512873E-5 + me->position_conn_synapse55_data.out * 0.004764523148577798 + me->position_conn_synapse56_data.out * -3.942355152961744E-6 + me->position_conn_synapse57_data.out * 1.2052682376622878E-5 + me->position_conn_synapse58_data.out * 0.0012591390012806646 + me->position_conn_synapse59_data.out * 0.0020364773352274943 + me->position_conn_synapse60_data.out * 0.001049981423271018 + me->position_conn_synapse61_data.out * -9.347504443547979E-7 + me->position_conn_synapse62_data.out * -2.7241368738235335E-5 + me->position_conn_synapse63_data.out * -8.767335606814065E-6 + me->position_conn_synapse64_data.out * -0.0019556142993647965 + me->position_conn_synapse65_data.out * -3.0936564584183275E-5 + me->position_conn_synapse66_data.out * -5.471505221923519E-4 + me->position_conn_synapse67_data.out * -5.463841910551397E-6 + me->position_conn_synapse68_data.out * 0.005120855327065354 + me->position_conn_synapse69_data.out * 2.167269231627178E-5 + me->position_conn_synapse70_data.out * -2.4987202865781658E-5 + me->position_conn_synapse71_data.out * 0.0015818839409546806 + me->position_conn_synapse72_data.out * -1.1471335581050614E-4 + me->position_conn_synapse73_data.out * -6.999943667388215E-4 + me->position_conn_synapse74_data.out * 0.0012314793707899323 + me->position_conn_synapse75_data.out * 0.0026386936582661444 + me->position_conn_synapse76_data.out * 0.0022271187260585034 + me->position_conn_synapse77_data.out * -7.481990511787237E-6 + me->position_conn_synapse78_data.out * 6.805094787535672E-5 + me->position_conn_synapse79_data.out * 4.971168536298362E-5 + me->position_conn_synapse80_data.out * 0.0036059589011925948 + me->position_conn_synapse81_data.out * 5.746426358120763E-5 + me->position_conn_synapse82_data.out * -5.58520703736633E-6 + me->position_conn_synapse83_data.out * -3.2316000578825006E-5 + me->position_conn_synapse84_data.out * 0.0018775545217629666 + me->position_conn_synapse85_data.out * -3.3886450916821787E-4 + me->position_conn_synapse86_data.out * -0.0010376617207931735 + me->position_conn_synapse87_data.out * -5.49744903507218E-6 + me->position_conn_synapse88_data.out * 0.004345066222244814 + me->position_conn_synapse89_data.out * 0.004001781660241839 + me->position_conn_synapse90_data.out * 0.004823671902870519 + me->position_conn_synapse91_data.out * -3.5232198882060693E-6 + me->position_conn_synapse92_data.out * -6.568368042622186E-6 + me->position_conn_synapse93_data.out * 2.809273926280384E-5 + me->position_conn_synapse94_data.out * -4.5606263336300654E-4 + me->position_conn_synapse95_data.out * 9.104950561823835E-6 + me->position_conn_synapse96_data.out * 2.646444552271698E-5 + me->position_conn_synapse97_data.out * 8.880670406252765E-4 + me->position_conn_synapse98_data.out * 0.0031133305622913932 + me->position_conn_synapse99_data.out * 5.8509997596236906E-5;
    me->strings_2_out = 0.0 + me->position_conn_synapse0_data.out * -1.8636289262854198E-5 + me->position_conn_synapse1_data.out * 0.0043499967023869985 + me->position_conn_synapse2_data.out * 0.002093513691453737 + me->position_conn_synapse3_data.out * 0.002540359067078799 + me->position_conn_synapse4_data.out * -5.792938120848373E-6 + me->position_conn_synapse5_data.out * -9.592003539380837E-6 + me->position_conn_synapse6_data.out * -4.473062338412711E-6 + me->position_conn_synapse7_data.out * -1.2416538729071508E-5 + me->position_conn_synapse8_data.out * 6.304493033038009E-5 + me->position_conn_synapse9_data.out * -3.671077525801986E-4 + me->position_conn_synapse10_data.out * 0.004210083361108564 + me->position_conn_synapse11_data.out * -1.2746691580220576E-4 + me->position_conn_synapse12_data.out * -3.692161299579295E-4 + me->position_conn_synapse13_data.out * 0.001111307717570762 + me->position_conn_synapse14_data.out * 6.549625268151302E-4 + me->position_conn_synapse15_data.out * 0.0012413277291843715 + me->position_conn_synapse16_data.out * 6.862568434398637E-4 + me->position_conn_synapse17_data.out * -5.635857968007289E-4 + me->position_conn_synapse18_data.out * 0.0011658464000819258 + me->position_conn_synapse19_data.out * 0.0013687574091497652 + me->position_conn_synapse20_data.out * -2.339233321289893E-5 + me->position_conn_synapse21_data.out * 0.0026654496337672508 + me->position_conn_synapse22_data.out * -0.0015043333536804587 + me->position_conn_synapse23_data.out * 0.0023938548319193758 + me->position_conn_synapse24_data.out * 1.930223630093164E-5 + me->position_conn_synapse25_data.out * 5.176825031792922E-4 + me->position_conn_synapse26_data.out * 0.0013224055784601112 + me->position_conn_synapse27_data.out * 0.0019157955648171606 + me->position_conn_synapse28_data.out * 1.7136097144665206E-4 + me->position_conn_synapse29_data.out * -1.8290883995242573E-5 + me->position_conn_synapse30_data.out * 2.2258268543739995E-6 + me->position_conn_synapse31_data.out * 0.0033849223035871128 + me->position_conn_synapse32_data.out * -3.1839623202316634E-4 + me->position_conn_synapse33_data.out * -3.7449196768530506E-4 + me->position_conn_synapse34_data.out * -7.657461150880515E-4 + me->position_conn_synapse35_data.out * 0.001499173038080524 + me->position_conn_synapse36_data.out * 0.004492358553265793 + me->position_conn_synapse37_data.out * -1.819383922897449E-5 + me->position_conn_synapse38_data.out * -9.394561521542345E-4 + me->position_conn_synapse39_data.out * 0.0030684572335401487 + me->position_conn_synapse40_data.out * -0.0019992900091150216 + me->position_conn_synapse41_data.out * -5.135646895248734E-7 + me->position_conn_synapse42_data.out * -6.243882699469244E-5 + me->position_conn_synapse43_data.out * 0.0024477907008729066 + me->position_conn_synapse44_data.out * 0.0035229864209892245 + me->position_conn_synapse45_data.out * 0.003342268174862718 + me->position_conn_synapse46_data.out * 1.8884802130678677E-4 + me->position_conn_synapse47_data.out * -1.0465170173185541E-5 + me->position_conn_synapse48_data.out * -1.2703898127214962E-5 + me->position_conn_synapse49_data.out * -3.712970199309625E-4 + me->position_conn_synapse50_data.out * 0.0037244859099266688 + me->position_conn_synapse51_data.out * -1.1727676862511077E-5 + me->position_conn_synapse52_data.out * 5.3884803752774997E-5 + me->position_conn_synapse53_data.out * 0.0026438533796432915 + me->position_conn_synapse54_data.out * 2.9204502775125895E-5 + me->position_conn_synapse55_data.out * 3.9088096710829885E-4 + me->position_conn_synapse56_data.out * -3.942355152977574E-6 + me->position_conn_synapse57_data.out * 0.005789926629447643 + me->position_conn_synapse58_data.out * 0.0017525506772649517 + me->position_conn_synapse59_data.out * -0.0011843045848730022 + me->position_conn_synapse60_data.out * 0.004368974813353445 + me->position_conn_synapse61_data.out * -9.34750444349851E-7 + me->position_conn_synapse62_data.out * -2.7241368738237476E-5 + me->position_conn_synapse63_data.out * -8.767335606821873E-6 + me->position_conn_synapse64_data.out * -0.0021158753233693223 + me->position_conn_synapse65_data.out * -3.0936564584178416E-5 + me->position_conn_synapse66_data.out * 0.003922861897215314 + me->position_conn_synapse67_data.out * -5.46384191054215E-6 + me->position_conn_synapse68_data.out * -8.964089933641799E-5 + me->position_conn_synapse69_data.out * 2.1672692316268094E-5 + me->position_conn_synapse70_data.out * -2.498720286578553E-5 + me->position_conn_synapse71_data.out * 6.025708735438725E-5 + me->position_conn_synapse72_data.out * 0.004061278319497307 + me->position_conn_synapse73_data.out * -2.104596787105995E-4 + me->position_conn_synapse74_data.out * 0.0022850029748116736 + me->position_conn_synapse75_data.out * 5.2371018695472715E-6 + me->position_conn_synapse76_data.out * 0.0038929076616761238 + me->position_conn_synapse77_data.out * -7.481990511779599E-6 + me->position_conn_synapse78_data.out * 9.850738980503534E-4 + me->position_conn_synapse79_data.out * 4.9711685362992845E-5 + me->position_conn_synapse80_data.out * 0.0020436704748240785 + me->position_conn_synapse81_data.out * 5.746426358120871E-5 + me->position_conn_synapse82_data.out * -5.5852070373666945E-6 + me->position_conn_synapse83_data.out * -3.23160005788238E-5 + me->position_conn_synapse84_data.out * 6.668829075808433E-4 + me->position_conn_synapse85_data.out * 0.0013470182727014243 + me->position_conn_synapse86_data.out * 0.002894125278132879 + me->position_conn_synapse87_data.out * -5.497449035066786E-6 + me->position_conn_synapse88_data.out * 6.158246570618825E-6 + me->position_conn_synapse89_data.out * 9.508823821105013E-4 + me->position_conn_synapse90_data.out * -0.001457677480890724 + me->position_conn_synapse91_data.out * -3.523219888197363E-6 + me->position_conn_synapse92_data.out * -6.5683680426251954E-6 + me->position_conn_synapse93_data.out * 0.004227611847805556 + me->position_conn_synapse94_data.out * -0.0012855569060833565 + me->position_conn_synapse95_data.out * 9.10495056182731E-6 + me->position_conn_synapse96_data.out * 2.6464445522714728E-5 + me->position_conn_synapse97_data.out * 0.0033709615532982774 + me->position_conn_synapse98_data.out * 3.69780919698824E-5 + me->position_conn_synapse99_data.out * 5.850999759625579E-5;
}

// rolling_cylinder_strings Execution function
void RollingCylinderStringsRun(RollingCylinderStrings* me) {
    // Mappings
    me->position_conn_synapse0_data.in = CheckSpike(me->position_inputs_0_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse1_data.in = CheckSpike(me->position_inputs_1_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse10_data.in = CheckSpike(me->position_inputs_10_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse11_data.in = CheckSpike(me->position_inputs_11_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse12_data.in = CheckSpike(me->position_inputs_12_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse13_data.in = CheckSpike(me->position_inputs_13_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse14_data.in = CheckSpike(me->position_inputs_14_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse15_data.in = CheckSpike(me->position_inputs_15_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse16_data.in = CheckSpike(me->position_inputs_16_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse17_data.in = CheckSpike(me->position_inputs_17_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse18_data.in = CheckSpike(me->position_inputs_18_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse19_data.in = CheckSpike(me->position_inputs_19_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse2_data.in = CheckSpike(me->position_inputs_2_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse20_data.in = CheckSpike(me->position_inputs_20_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse21_data.in = CheckSpike(me->position_inputs_21_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse22_data.in = CheckSpike(me->position_inputs_22_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse23_data.in = CheckSpike(me->position_inputs_23_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse24_data.in = CheckSpike(me->position_inputs_24_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse25_data.in = CheckSpike(me->position_inputs_25_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse26_data.in = CheckSpike(me->position_inputs_26_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse27_data.in = CheckSpike(me->position_inputs_27_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse28_data.in = CheckSpike(me->position_inputs_28_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse29_data.in = CheckSpike(me->position_inputs_29_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse3_data.in = CheckSpike(me->position_inputs_3_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse30_data.in = CheckSpike(me->position_inputs_30_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse31_data.in = CheckSpike(me->position_inputs_31_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse32_data.in = CheckSpike(me->position_inputs_32_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse33_data.in = CheckSpike(me->position_inputs_33_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse34_data.in = CheckSpike(me->position_inputs_34_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse35_data.in = CheckSpike(me->position_inputs_35_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse36_data.in = CheckSpike(me->position_inputs_36_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse37_data.in = CheckSpike(me->position_inputs_37_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse38_data.in = CheckSpike(me->position_inputs_38_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse39_data.in = CheckSpike(me->position_inputs_39_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse4_data.in = CheckSpike(me->position_inputs_4_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse40_data.in = CheckSpike(me->position_inputs_40_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse41_data.in = CheckSpike(me->position_inputs_41_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse42_data.in = CheckSpike(me->position_inputs_42_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse43_data.in = CheckSpike(me->position_inputs_43_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse44_data.in = CheckSpike(me->position_inputs_44_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse45_data.in = CheckSpike(me->position_inputs_45_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse46_data.in = CheckSpike(me->position_inputs_46_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse47_data.in = CheckSpike(me->position_inputs_47_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse48_data.in = CheckSpike(me->position_inputs_48_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse49_data.in = CheckSpike(me->position_inputs_49_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse5_data.in = CheckSpike(me->position_inputs_5_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse50_data.in = CheckSpike(me->position_inputs_50_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse51_data.in = CheckSpike(me->position_inputs_51_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse52_data.in = CheckSpike(me->position_inputs_52_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse53_data.in = CheckSpike(me->position_inputs_53_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse54_data.in = CheckSpike(me->position_inputs_54_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse55_data.in = CheckSpike(me->position_inputs_55_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse56_data.in = CheckSpike(me->position_inputs_56_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse57_data.in = CheckSpike(me->position_inputs_57_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse58_data.in = CheckSpike(me->position_inputs_58_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse59_data.in = CheckSpike(me->position_inputs_59_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse6_data.in = CheckSpike(me->position_inputs_6_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse60_data.in = CheckSpike(me->position_inputs_60_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse61_data.in = CheckSpike(me->position_inputs_61_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse62_data.in = CheckSpike(me->position_inputs_62_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse63_data.in = CheckSpike(me->position_inputs_63_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse64_data.in = CheckSpike(me->position_inputs_64_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse65_data.in = CheckSpike(me->position_inputs_65_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse66_data.in = CheckSpike(me->position_inputs_66_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse67_data.in = CheckSpike(me->position_inputs_67_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse68_data.in = CheckSpike(me->position_inputs_68_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse69_data.in = CheckSpike(me->position_inputs_69_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse7_data.in = CheckSpike(me->position_inputs_7_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse70_data.in = CheckSpike(me->position_inputs_70_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse71_data.in = CheckSpike(me->position_inputs_71_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse72_data.in = CheckSpike(me->position_inputs_72_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse73_data.in = CheckSpike(me->position_inputs_73_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse74_data.in = CheckSpike(me->position_inputs_74_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse75_data.in = CheckSpike(me->position_inputs_75_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse76_data.in = CheckSpike(me->position_inputs_76_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse77_data.in = CheckSpike(me->position_inputs_77_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse78_data.in = CheckSpike(me->position_inputs_78_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse79_data.in = CheckSpike(me->position_inputs_79_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse8_data.in = CheckSpike(me->position_inputs_8_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse80_data.in = CheckSpike(me->position_inputs_80_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse81_data.in = CheckSpike(me->position_inputs_81_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse82_data.in = CheckSpike(me->position_inputs_82_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse83_data.in = CheckSpike(me->position_inputs_83_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse84_data.in = CheckSpike(me->position_inputs_84_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse85_data.in = CheckSpike(me->position_inputs_85_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse86_data.in = CheckSpike(me->position_inputs_86_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse87_data.in = CheckSpike(me->position_inputs_87_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse88_data.in = CheckSpike(me->position_inputs_88_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse89_data.in = CheckSpike(me->position_inputs_89_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse9_data.in = CheckSpike(me->position_inputs_9_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse90_data.in = CheckSpike(me->position_inputs_90_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse91_data.in = CheckSpike(me->position_inputs_91_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse92_data.in = CheckSpike(me->position_inputs_92_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse93_data.in = CheckSpike(me->position_inputs_93_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse94_data.in = CheckSpike(me->position_inputs_94_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse95_data.in = CheckSpike(me->position_inputs_95_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse96_data.in = CheckSpike(me->position_inputs_96_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse97_data.in = CheckSpike(me->position_inputs_97_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse98_data.in = CheckSpike(me->position_inputs_98_data.spike, 1.0 / STEP_SIZE);
    me->position_conn_synapse99_data.in = CheckSpike(me->position_inputs_99_data.spike, 1.0 / STEP_SIZE);
    me->position_inputs_0_data.in = -40.68971184503261 + me->setpoint_0_in * 0.9642269773988813 + me->setpoint_1_in * -5.534991473771185;
    me->position_inputs_1_data.in = 8.756864406765338 + me->setpoint_0_in * 1.265205592187085 + me->setpoint_1_in * 0.7751007566062577;
    me->position_inputs_10_data.in = 5.3338504586813755 + me->setpoint_0_in * 1.1130310938127104 + me->setpoint_1_in * 0.5023871944702405;
    me->position_inputs_11_data.in = 3.2067966981424045 + me->setpoint_0_in * -1.1675574594096858 + me->setpoint_1_in * 1.6580704287093506;
    me->position_inputs_12_data.in = 5.804927242204779 + me->setpoint_0_in * -0.8290235308083558 + me->setpoint_1_in * -0.1445823099187928;
    me->position_inputs_13_data.in = 3.482992777958614 + me->setpoint_0_in * 0.7624388116543905 + me->setpoint_1_in * -1.4915909804916057;
    me->position_inputs_14_data.in = 5.153636617619184 + me->setpoint_0_in * -0.09192929368204908 + me->setpoint_1_in * -0.6450603365473349;
    me->position_inputs_15_data.in = 5.486957432022949 + me->setpoint_0_in * -0.3764197862213201 + me->setpoint_1_in * 0.2826859084320896;
    me->position_inputs_16_data.in = 3.875903300254432 + me->setpoint_0_in * -0.32778059114007874 + me->setpoint_1_in * 0.18695677043564982;
    me->position_inputs_17_data.in = 0.006011490705485345 + me->setpoint_0_in * -1.8626748478378792 + me->setpoint_1_in * 0.2653120039420525;
    me->position_inputs_18_data.in = 3.421577064768535 + me->setpoint_0_in * 0.2338604559100994 + me->setpoint_1_in * -0.365725257146315;
    me->position_inputs_19_data.in = 2.4305397111793003 + me->setpoint_0_in * 0.46032857018655926 + me->setpoint_1_in * -0.44584488198497507;
    me->position_inputs_2_data.in = 4.4743616977811875 + me->setpoint_0_in * 0.6439931949431513 + me->setpoint_1_in * -0.4836297411344474;
    me->position_inputs_20_data.in = -89.23141104539656 + me->setpoint_0_in * -0.9377337255117237 + me->setpoint_1_in * -11.883190107338452;
    me->position_inputs_21_data.in = 6.058583251029019 + me->setpoint_0_in * 0.5199610675217232 + me->setpoint_1_in * 0.024461283009819784;
    me->position_inputs_22_data.in = 0.06947854864245506 + me->setpoint_0_in * -1.153036643505509 + me->setpoint_1_in * -1.189529659765411;
    me->position_inputs_23_data.in = -8.131505451978596 + me->setpoint_0_in * 3.2627724590614475 + me->setpoint_1_in * -1.117519838914875;
    me->position_inputs_24_data.in = -90.24674384787644 + me->setpoint_0_in * -12.252012488022109 + me->setpoint_1_in * -1.3511743665815816;
    me->position_inputs_25_data.in = 2.0150523484652947 + me->setpoint_0_in * -0.5350409519335488 + me->setpoint_1_in * 1.4239435920730765;
    me->position_inputs_26_data.in = -2.1693381855396763 + me->setpoint_0_in * 0.9519936798573082 + me->setpoint_1_in * 0.8660272946494965;
    me->position_inputs_27_data.in = -0.02835118807501713 + me->setpoint_0_in * 0.6055587880212765 + me->setpoint_1_in * 0.6247244119813908;
    me->position_inputs_28_data.in = 3.982503772870687 + me->setpoint_0_in * -0.16899594167600845 + me->setpoint_1_in * -0.4933740712840532;
    me->position_inputs_29_data.in = -100.57751946390493 + me->setpoint_0_in * 3.8276853219381497 + me->setpoint_1_in * -12.453645104237383;
    me->position_inputs_3_data.in = 2.5312372089846193 + me->setpoint_0_in * 0.5651092072397838 + me->setpoint_1_in * 0.09855545895229328;
    me->position_inputs_30_data.in = -57.106602574147765 + me->setpoint_0_in * 4.390691394040397 + me->setpoint_1_in * 5.139477044902192;
    me->position_inputs_31_data.in = 13.399975440282292 + me->setpoint_0_in * 1.2961923287836847 + me->setpoint_1_in * -0.7393114139849122;
    me->position_inputs_32_data.in = 1.0676635421371954 + me->setpoint_0_in * -0.8449712496311836 + me->setpoint_1_in * 0.2894078997412124;
    me->position_inputs_33_data.in = 3.753398963976482 + me->setpoint_0_in * -0.3813364994938127 + me->setpoint_1_in * -0.34690127049621977;
    me->position_inputs_34_data.in = 0.7639094101895945 + me->setpoint_0_in * -0.8517723107916655 + me->setpoint_1_in * -0.32173809130141096;
    me->position_inputs_35_data.in = 4.383388326578068 + me->setpoint_0_in * 0.3070632607290621 + me->setpoint_1_in * -0.4360740015919554;
    me->position_inputs_36_data.in = 8.362964562408084 + me->setpoint_0_in * -0.24329387952061332 + me->setpoint_1_in * 2.2071412572619766;
    me->position_inputs_37_data.in = -10.833190135687097 + me->setpoint_0_in * 0.4843355433444093 + me->setpoint_1_in * 1.769516053607166;
    me->position_inputs_38_data.in = 5.177602332238892 + me->setpoint_0_in * -0.7847442950778116 + me->setpoint_1_in * -0.41537566838262374;
    me->position_inputs_39_data.in = -0.08489737538427322 + me->setpoint_0_in * 1.9871685978125533 + me->setpoint_1_in * -0.9737660413059127;
    me->position_inputs_4_data.in = -133.47968259914919 + me->setpoint_0_in * -12.490078140937687 + me->setpoint_1_in * -8.7758156812839;
    me->position_inputs_40_data.in = 1.2698477391891916 + me->setpoint_0_in * 0.0933387972099099 + me->setpoint_1_in * -1.9874615981634063;
    me->position_inputs_41_data.in = -51.61507938658066 + me->setpoint_0_in * 4.461393363849233 + me->setpoint_1_in * 5.940433859330088;
    me->position_inputs_42_data.in = -27.945214891278372 + me->setpoint_0_in * 2.761766908671216 + me->setpoint_1_in * -6.22321864955421;
    me->position_inputs_43_data.in = 5.2082405944043915 + me->setpoint_0_in * 0.5438510483419948 + me->setpoint_1_in * -0.11269653053676588;
    me->position_inputs_44_data.in = 8.302656164260949 + me->setpoint_0_in * 0.8704513827444353 + me->setpoint_1_in * 0.3287936964287123;
    me->position_inputs_45_data.in = 0.2670174531866609 + me->setpoint_0_in * 1.814171861169922 + me->setpoint_1_in * -0.49646636049986853;
    me->position_inputs_46_data.in = -3.358376101812655 + me->setpoint_0_in * -0.9773621982954936 + me->setpoint_1_in * 2.2023350451685273;
    me->position_inputs_47_data.in = -55.10070112509154 + me->setpoint_0_in * 2.654512384859862 + me->setpoint_1_in * 6.4059916760555495;
    me->position_inputs_48_data.in = -25.814360802927844 + me->setpoint_0_in * 3.789518080225056 + me->setpoint_1_in * -4.1478277373578845;
    me->position_inputs_49_data.in = 6.745033356978336 + me->setpoint_0_in * -0.5935253415169929 + me->setpoint_1_in * -1.2111239167593313;
    me->position_inputs_5_data.in = -93.9722559579283 + me->setpoint_0_in * -6.156584286588908 + me->setpoint_1_in * -9.369702557095124;
    me->position_inputs_50_data.in = 7.444825056129558 + me->setpoint_0_in * 1.2290454420563925 + me->setpoint_1_in * 0.13554138180377223;
    me->position_inputs_51_data.in = -13.803451817259996 + me->setpoint_0_in * 1.614030540187233 + me->setpoint_1_in * -1.9999887031691355;
    me->position_inputs_52_data.in = -0.5069460610687939 + me->setpoint_0_in * -0.7789877923049261 + me->setpoint_1_in * 0.6650887748437255;
    me->position_inputs_53_data.in = 4.159266637674499 + me->setpoint_0_in * -0.3482079592138578 + me->setpoint_1_in * 1.998832586414354;
    me->position_inputs_54_data.in = -3.4591179546990007 + me->setpoint_0_in * 0.8655292810972977 + me->setpoint_1_in * 0.6932384058049349;
    me->position_inputs_55_data.in = 9.374623894992869 + me->setpoint_0_in * -1.2726765788371783 + me->setpoint_1_in * 0.1003039340951415;
    me->position_inputs_56_data.in = -20.09187274881303 + me->setpoint_0_in * 1.969172544206594 + me->setpoint_1_in * 2.9968827137821386;
    me->position_inputs_57_data.in = 1.5863484823960752 + me->setpoint_0_in * 2.9995493154341184 + me->setpoint_1_in * 1.5877016368870096;
    me->position_inputs_58_data.in = 1.8984966724121493 + me->setpoint_0_in * 0.01409434624207059 + me->setpoint_1_in * 0.8846930839474578;
    me->position_inputs_59_data.in = 1.457016070624787 + me->setpoint_0_in * -0.6189429536501554 + me->setpoint_1_in * -0.49573715864715523;
    me->position_inputs_6_data.in = -26.304493727615824 + me->setpoint_0_in * -0.681177978287235 + me->setpoint_1_in * -3.2865439304061588;
    me->position_inputs_60_data.in = 4.140314598539447 + me->setpoint_0_in * 0.6895711605653817 + me->setpoint_1_in * 1.2085783456638104;
    me->position_inputs_61_data.in = -4.983607247027847 + me->setpoint_0_in * -0.11052802608829451 + me->setpoint_1_in * 2.353471517284096;
    me->position_inputs_62_data.in = -4.527884696233517 + me->setpoint_0_in * -0.5116310256599035 + me->setpoint_1_in * -1.2346915775894958;
    me->position_inputs_63_data.in = -46.056347541984884 + me->setpoint_0_in * -5.230115380961677 + me->setpoint_1_in * 1.4312736287014558;
    me->position_inputs_64_data.in = 0.15741418899516024 + me->setpoint_0_in * 0.2712126540908264 + me->setpoint_1_in * -2.460417663517326;
    me->position_inputs_65_data.in = -31.036114212489814 + me->setpoint_0_in * 0.36784233927169896 + me->setpoint_1_in * 4.661387663669487;
    me->position_inputs_66_data.in = -1.572318308542266 + me->setpoint_0_in * 2.5393287016985835 + me->setpoint_1_in * -0.3616918877422359;
    me->position_inputs_67_data.in = -6.545527474738462 + me->setpoint_0_in * 0.20918786353424926 + me->setpoint_1_in * 1.4678541289258344;
    me->position_inputs_68_data.in = 8.810825741129285 + me->setpoint_0_in * -1.4710037430941487 + me->setpoint_1_in * 0.3048206314939239;
    me->position_inputs_69_data.in = -28.681374208755273 + me->setpoint_0_in * 4.774908031826289 + me->setpoint_1_in * -3.136863444078259;
    me->position_inputs_7_data.in = -103.80204795834112 + me->setpoint_0_in * -8.265949744653952 + me->setpoint_1_in * -9.67561942607345;
    me->position_inputs_70_data.in = -18.303132105412907 + me->setpoint_0_in * 0.5991403075144498 + me->setpoint_1_in * 2.8907290253409617;
    me->position_inputs_71_data.in = -0.25207543106698194 + me->setpoint_0_in * -0.65170827274772 + me->setpoint_1_in * 0.6312030938954318;
    me->position_inputs_72_data.in = 5.109337728450752 + me->setpoint_0_in * 0.8760130752144207 + me->setpoint_1_in * 0.615506900353758;
    me->position_inputs_73_data.in = -12.908467804337072 + me->setpoint_0_in * 3.677838884784607 + me->setpoint_1_in * -3.1400868548270964;
    me->position_inputs_74_data.in = 2.948247199134628 + me->setpoint_0_in * 0.19711394343538502 + me->setpoint_1_in * 0.4022227780932089;
    me->position_inputs_75_data.in = 1.5601613584524667 + me->setpoint_0_in * -0.5056572123362776 + me->setpoint_1_in * 0.7897629285062505;
    me->position_inputs_76_data.in = 12.433972462261574 + me->setpoint_0_in * 1.2289209839298445 + me->setpoint_1_in * 0.3778986873484641;
    me->position_inputs_77_data.in = -13.989348525474293 + me->setpoint_0_in * -1.035749573979969 + me->setpoint_1_in * 2.0271375667620473;
    me->position_inputs_78_data.in = -0.6821838243240343 + me->setpoint_0_in * 0.41768879661817965 + me->setpoint_1_in * 1.2194187683443678;
    me->position_inputs_79_data.in = -5.81120506880721 + me->setpoint_0_in * -1.467616522945674 + me->setpoint_1_in * -0.6624358937231989;
    me->position_inputs_8_data.in = 4.045565641994574 + me->setpoint_0_in * -0.35120256545966294 + me->setpoint_1_in * -0.21515663216884987;
    me->position_inputs_80_data.in = 3.840096391844403 + me->setpoint_0_in * -0.22437672044775123 + me->setpoint_1_in * 0.7300255695773754;
    me->position_inputs_81_data.in = -20.30309320610376 + me->setpoint_0_in * -3.2442028617694065 + me->setpoint_1_in * 1.5897466055425387;
    me->position_inputs_82_data.in = -181.5703873762656 + me->setpoint_0_in * -0.33134779673962245 + me->setpoint_1_in * -20.79848469913432;
    me->position_inputs_83_data.in = -32.64245759483204 + me->setpoint_0_in * 1.1437302892697725 + me->setpoint_1_in * -4.78233275422026;
    me->position_inputs_84_data.in = 1.4693757969646404 + me->setpoint_0_in * -0.2907614835659411 + me->setpoint_1_in * 1.2157745416117454;
    me->position_inputs_85_data.in = 6.554420293264894 + me->setpoint_0_in * 0.7363476594750399 + me->setpoint_1_in * -1.959696023355949;
    me->position_inputs_86_data.in = 4.129768135549817 + me->setpoint_0_in * 0.7713318198087269 + me->setpoint_1_in * -0.012211502702557619;
    me->position_inputs_87_data.in = -109.75336634944995 + me->setpoint_0_in * 14.85781144767146 + me->setpoint_1_in * -1.1709942265063904;
    me->position_inputs_88_data.in = -8.971536455215636 + me->setpoint_0_in * -4.153843156322206 + me->setpoint_1_in * 1.721157759927772;
    me->position_inputs_89_data.in = 8.914086050914474 + me->setpoint_0_in * -0.7664040332568383 + me->setpoint_1_in * -0.23567266052265487;
    me->position_inputs_9_data.in = -15.38948186145453 + me->setpoint_0_in * -2.261782570857746 + me->setpoint_1_in * -3.964117989087308;
    me->position_inputs_90_data.in = 2.857287345198258 + me->setpoint_0_in * -1.7859455171239165 + me->setpoint_1_in * -0.4285363141394705;
    me->position_inputs_91_data.in = -70.35400702607592 + me->setpoint_0_in * -6.513276129739417 + me->setpoint_1_in * 8.070780186949207;
    me->position_inputs_92_data.in = -63.90470756959206 + me->setpoint_0_in * -4.488931615774927 + me->setpoint_1_in * -5.977101594933403;
    me->position_inputs_93_data.in = -0.940051597405468 + me->setpoint_0_in * 2.1328831978802967 + me->setpoint_1_in * 0.5117837549104165;
    me->position_inputs_94_data.in = 0.24094427257515816 + me->setpoint_0_in * -0.23523273850695997 + me->setpoint_1_in * -0.8594209403143652;
    me->position_inputs_95_data.in = -66.58562022819525 + me->setpoint_0_in * -5.38185445466201 + me->setpoint_1_in * 5.89072511352223;
    me->position_inputs_96_data.in = -53.66820180843783 + me->setpoint_0_in * -8.299988353550129 + me->setpoint_1_in * 0.13140302769871112;
    me->position_inputs_97_data.in = 10.549925473367754 + me->setpoint_0_in * 1.355539647171362 + me->setpoint_1_in * -0.5616720457476717;
    me->position_inputs_98_data.in = -2.593606278719601 + me->setpoint_0_in * -1.8369371610949425 + me->setpoint_1_in * 1.206771075351545;
    me->position_inputs_99_data.in = -9.882181505958252 + me->setpoint_0_in * -2.2991921218313793 + me->setpoint_1_in * -0.10816423213394817;

    // Run Automata
    PositionInputs0Run(&me->position_inputs_0_data);

    PositionInputs1Run(&me->position_inputs_1_data);

    PositionInputs2Run(&me->position_inputs_2_data);

    PositionInputs3Run(&me->position_inputs_3_data);

    PositionInputs4Run(&me->position_inputs_4_data);

    PositionInputs5Run(&me->position_inputs_5_data);

    PositionInputs6Run(&me->position_inputs_6_data);

    PositionInputs7Run(&me->position_inputs_7_data);

    PositionInputs8Run(&me->position_inputs_8_data);

    PositionInputs9Run(&me->position_inputs_9_data);

    PositionInputs10Run(&me->position_inputs_10_data);

    PositionInputs11Run(&me->position_inputs_11_data);

    PositionInputs12Run(&me->position_inputs_12_data);

    PositionInputs13Run(&me->position_inputs_13_data);

    PositionInputs14Run(&me->position_inputs_14_data);

    PositionInputs15Run(&me->position_inputs_15_data);

    PositionInputs16Run(&me->position_inputs_16_data);

    PositionInputs17Run(&me->position_inputs_17_data);

    PositionInputs18Run(&me->position_inputs_18_data);

    PositionInputs19Run(&me->position_inputs_19_data);

    PositionInputs20Run(&me->position_inputs_20_data);

    PositionInputs21Run(&me->position_inputs_21_data);

    PositionInputs22Run(&me->position_inputs_22_data);

    PositionInputs23Run(&me->position_inputs_23_data);

    PositionInputs24Run(&me->position_inputs_24_data);

    PositionInputs25Run(&me->position_inputs_25_data);

    PositionInputs26Run(&me->position_inputs_26_data);

    PositionInputs27Run(&me->position_inputs_27_data);

    PositionInputs28Run(&me->position_inputs_28_data);

    PositionInputs29Run(&me->position_inputs_29_data);

    PositionInputs30Run(&me->position_inputs_30_data);

    PositionInputs31Run(&me->position_inputs_31_data);

    PositionInputs32Run(&me->position_inputs_32_data);

    PositionInputs33Run(&me->position_inputs_33_data);

    PositionInputs34Run(&me->position_inputs_34_data);

    PositionInputs35Run(&me->position_inputs_35_data);

    PositionInputs36Run(&me->position_inputs_36_data);

    PositionInputs37Run(&me->position_inputs_37_data);

    PositionInputs38Run(&me->position_inputs_38_data);

    PositionInputs39Run(&me->position_inputs_39_data);

    PositionInputs40Run(&me->position_inputs_40_data);

    PositionInputs41Run(&me->position_inputs_41_data);

    PositionInputs42Run(&me->position_inputs_42_data);

    PositionInputs43Run(&me->position_inputs_43_data);

    PositionInputs44Run(&me->position_inputs_44_data);

    PositionInputs45Run(&me->position_inputs_45_data);

    PositionInputs46Run(&me->position_inputs_46_data);

    PositionInputs47Run(&me->position_inputs_47_data);

    PositionInputs48Run(&me->position_inputs_48_data);

    PositionInputs49Run(&me->position_inputs_49_data);

    PositionInputs50Run(&me->position_inputs_50_data);

    PositionInputs51Run(&me->position_inputs_51_data);

    PositionInputs52Run(&me->position_inputs_52_data);

    PositionInputs53Run(&me->position_inputs_53_data);

    PositionInputs54Run(&me->position_inputs_54_data);

    PositionInputs55Run(&me->position_inputs_55_data);

    PositionInputs56Run(&me->position_inputs_56_data);

    PositionInputs57Run(&me->position_inputs_57_data);

    PositionInputs58Run(&me->position_inputs_58_data);

    PositionInputs59Run(&me->position_inputs_59_data);

    PositionInputs60Run(&me->position_inputs_60_data);

    PositionInputs61Run(&me->position_inputs_61_data);

    PositionInputs62Run(&me->position_inputs_62_data);

    PositionInputs63Run(&me->position_inputs_63_data);

    PositionInputs64Run(&me->position_inputs_64_data);

    PositionInputs65Run(&me->position_inputs_65_data);

    PositionInputs66Run(&me->position_inputs_66_data);

    PositionInputs67Run(&me->position_inputs_67_data);

    PositionInputs68Run(&me->position_inputs_68_data);

    PositionInputs69Run(&me->position_inputs_69_data);

    PositionInputs70Run(&me->position_inputs_70_data);

    PositionInputs71Run(&me->position_inputs_71_data);

    PositionInputs72Run(&me->position_inputs_72_data);

    PositionInputs73Run(&me->position_inputs_73_data);

    PositionInputs74Run(&me->position_inputs_74_data);

    PositionInputs75Run(&me->position_inputs_75_data);

    PositionInputs76Run(&me->position_inputs_76_data);

    PositionInputs77Run(&me->position_inputs_77_data);

    PositionInputs78Run(&me->position_inputs_78_data);

    PositionInputs79Run(&me->position_inputs_79_data);

    PositionInputs80Run(&me->position_inputs_80_data);

    PositionInputs81Run(&me->position_inputs_81_data);

    PositionInputs82Run(&me->position_inputs_82_data);

    PositionInputs83Run(&me->position_inputs_83_data);

    PositionInputs84Run(&me->position_inputs_84_data);

    PositionInputs85Run(&me->position_inputs_85_data);

    PositionInputs86Run(&me->position_inputs_86_data);

    PositionInputs87Run(&me->position_inputs_87_data);

    PositionInputs88Run(&me->position_inputs_88_data);

    PositionInputs89Run(&me->position_inputs_89_data);

    PositionInputs90Run(&me->position_inputs_90_data);

    PositionInputs91Run(&me->position_inputs_91_data);

    PositionInputs92Run(&me->position_inputs_92_data);

    PositionInputs93Run(&me->position_inputs_93_data);

    PositionInputs94Run(&me->position_inputs_94_data);

    PositionInputs95Run(&me->position_inputs_95_data);

    PositionInputs96Run(&me->position_inputs_96_data);

    PositionInputs97Run(&me->position_inputs_97_data);

    PositionInputs98Run(&me->position_inputs_98_data);

    PositionInputs99Run(&me->position_inputs_99_data);

    PositionConnSynapse0Run(&me->position_conn_synapse0_data);

    PositionConnSynapse1Run(&me->position_conn_synapse1_data);

    PositionConnSynapse2Run(&me->position_conn_synapse2_data);

    PositionConnSynapse3Run(&me->position_conn_synapse3_data);

    PositionConnSynapse4Run(&me->position_conn_synapse4_data);

    PositionConnSynapse5Run(&me->position_conn_synapse5_data);

    PositionConnSynapse6Run(&me->position_conn_synapse6_data);

    PositionConnSynapse7Run(&me->position_conn_synapse7_data);

    PositionConnSynapse8Run(&me->position_conn_synapse8_data);

    PositionConnSynapse9Run(&me->position_conn_synapse9_data);

    PositionConnSynapse10Run(&me->position_conn_synapse10_data);

    PositionConnSynapse11Run(&me->position_conn_synapse11_data);

    PositionConnSynapse12Run(&me->position_conn_synapse12_data);

    PositionConnSynapse13Run(&me->position_conn_synapse13_data);

    PositionConnSynapse14Run(&me->position_conn_synapse14_data);

    PositionConnSynapse15Run(&me->position_conn_synapse15_data);

    PositionConnSynapse16Run(&me->position_conn_synapse16_data);

    PositionConnSynapse17Run(&me->position_conn_synapse17_data);

    PositionConnSynapse18Run(&me->position_conn_synapse18_data);

    PositionConnSynapse19Run(&me->position_conn_synapse19_data);

    PositionConnSynapse20Run(&me->position_conn_synapse20_data);

    PositionConnSynapse21Run(&me->position_conn_synapse21_data);

    PositionConnSynapse22Run(&me->position_conn_synapse22_data);

    PositionConnSynapse23Run(&me->position_conn_synapse23_data);

    PositionConnSynapse24Run(&me->position_conn_synapse24_data);

    PositionConnSynapse25Run(&me->position_conn_synapse25_data);

    PositionConnSynapse26Run(&me->position_conn_synapse26_data);

    PositionConnSynapse27Run(&me->position_conn_synapse27_data);

    PositionConnSynapse28Run(&me->position_conn_synapse28_data);

    PositionConnSynapse29Run(&me->position_conn_synapse29_data);

    PositionConnSynapse30Run(&me->position_conn_synapse30_data);

    PositionConnSynapse31Run(&me->position_conn_synapse31_data);

    PositionConnSynapse32Run(&me->position_conn_synapse32_data);

    PositionConnSynapse33Run(&me->position_conn_synapse33_data);

    PositionConnSynapse34Run(&me->position_conn_synapse34_data);

    PositionConnSynapse35Run(&me->position_conn_synapse35_data);

    PositionConnSynapse36Run(&me->position_conn_synapse36_data);

    PositionConnSynapse37Run(&me->position_conn_synapse37_data);

    PositionConnSynapse38Run(&me->position_conn_synapse38_data);

    PositionConnSynapse39Run(&me->position_conn_synapse39_data);

    PositionConnSynapse40Run(&me->position_conn_synapse40_data);

    PositionConnSynapse41Run(&me->position_conn_synapse41_data);

    PositionConnSynapse42Run(&me->position_conn_synapse42_data);

    PositionConnSynapse43Run(&me->position_conn_synapse43_data);

    PositionConnSynapse44Run(&me->position_conn_synapse44_data);

    PositionConnSynapse45Run(&me->position_conn_synapse45_data);

    PositionConnSynapse46Run(&me->position_conn_synapse46_data);

    PositionConnSynapse47Run(&me->position_conn_synapse47_data);

    PositionConnSynapse48Run(&me->position_conn_synapse48_data);

    PositionConnSynapse49Run(&me->position_conn_synapse49_data);

    PositionConnSynapse50Run(&me->position_conn_synapse50_data);

    PositionConnSynapse51Run(&me->position_conn_synapse51_data);

    PositionConnSynapse52Run(&me->position_conn_synapse52_data);

    PositionConnSynapse53Run(&me->position_conn_synapse53_data);

    PositionConnSynapse54Run(&me->position_conn_synapse54_data);

    PositionConnSynapse55Run(&me->position_conn_synapse55_data);

    PositionConnSynapse56Run(&me->position_conn_synapse56_data);

    PositionConnSynapse57Run(&me->position_conn_synapse57_data);

    PositionConnSynapse58Run(&me->position_conn_synapse58_data);

    PositionConnSynapse59Run(&me->position_conn_synapse59_data);

    PositionConnSynapse60Run(&me->position_conn_synapse60_data);

    PositionConnSynapse61Run(&me->position_conn_synapse61_data);

    PositionConnSynapse62Run(&me->position_conn_synapse62_data);

    PositionConnSynapse63Run(&me->position_conn_synapse63_data);

    PositionConnSynapse64Run(&me->position_conn_synapse64_data);

    PositionConnSynapse65Run(&me->position_conn_synapse65_data);

    PositionConnSynapse66Run(&me->position_conn_synapse66_data);

    PositionConnSynapse67Run(&me->position_conn_synapse67_data);

    PositionConnSynapse68Run(&me->position_conn_synapse68_data);

    PositionConnSynapse69Run(&me->position_conn_synapse69_data);

    PositionConnSynapse70Run(&me->position_conn_synapse70_data);

    PositionConnSynapse71Run(&me->position_conn_synapse71_data);

    PositionConnSynapse72Run(&me->position_conn_synapse72_data);

    PositionConnSynapse73Run(&me->position_conn_synapse73_data);

    PositionConnSynapse74Run(&me->position_conn_synapse74_data);

    PositionConnSynapse75Run(&me->position_conn_synapse75_data);

    PositionConnSynapse76Run(&me->position_conn_synapse76_data);

    PositionConnSynapse77Run(&me->position_conn_synapse77_data);

    PositionConnSynapse78Run(&me->position_conn_synapse78_data);

    PositionConnSynapse79Run(&me->position_conn_synapse79_data);

    PositionConnSynapse80Run(&me->position_conn_synapse80_data);

    PositionConnSynapse81Run(&me->position_conn_synapse81_data);

    PositionConnSynapse82Run(&me->position_conn_synapse82_data);

    PositionConnSynapse83Run(&me->position_conn_synapse83_data);

    PositionConnSynapse84Run(&me->position_conn_synapse84_data);

    PositionConnSynapse85Run(&me->position_conn_synapse85_data);

    PositionConnSynapse86Run(&me->position_conn_synapse86_data);

    PositionConnSynapse87Run(&me->position_conn_synapse87_data);

    PositionConnSynapse88Run(&me->position_conn_synapse88_data);

    PositionConnSynapse89Run(&me->position_conn_synapse89_data);

    PositionConnSynapse90Run(&me->position_conn_synapse90_data);

    PositionConnSynapse91Run(&me->position_conn_synapse91_data);

    PositionConnSynapse92Run(&me->position_conn_synapse92_data);

    PositionConnSynapse93Run(&me->position_conn_synapse93_data);

    PositionConnSynapse94Run(&me->position_conn_synapse94_data);

    PositionConnSynapse95Run(&me->position_conn_synapse95_data);

    PositionConnSynapse96Run(&me->position_conn_synapse96_data);

    PositionConnSynapse97Run(&me->position_conn_synapse97_data);

    PositionConnSynapse98Run(&me->position_conn_synapse98_data);

    PositionConnSynapse99Run(&me->position_conn_synapse99_data);

    // Output Mapping
    me->strings_0_out = 0.0 + me->position_conn_synapse0_data.out * -1.8636289262856753E-5 + me->position_conn_synapse1_data.out * 4.2025322758704794E-4 + me->position_conn_synapse2_data.out * 0.0016330491249098439 + me->position_conn_synapse3_data.out * 2.0092387089946494E-4 + me->position_conn_synapse4_data.out * -5.79293812085544E-6 + me->position_conn_synapse5_data.out * -9.592003539374262E-6 + me->position_conn_synapse6_data.out * -4.473062338409516E-6 + me->position_conn_synapse7_data.out * -1.241653872906826E-5 + me->position_conn_synapse8_data.out * 0.0012131226828558778 + me->position_conn_synapse9_data.out * 4.917926177261082E-4 + me->position_conn_synapse10_data.out * 3.2665198766704923E-4 + me->position_conn_synapse11_data.out * -0.001197815318143104 + me->position_conn_synapse12_data.out * 0.0014242110735608812 + me->position_conn_synapse13_data.out * 0.0029951174204731817 + me->position_conn_synapse14_data.out * 0.0018479676248707208 + me->position_conn_synapse15_data.out * 3.55014608273056E-4 + me->position_conn_synapse16_data.out * 2.543458817031124E-4 + me->position_conn_synapse17_data.out * -0.0011639261600198143 + me->position_conn_synapse18_data.out * 0.0013389290257945054 + me->position_conn_synapse19_data.out * 0.0015680700528076827 + me->position_conn_synapse20_data.out * -2.3392333212900684E-5 + me->position_conn_synapse21_data.out * 9.114826538652117E-4 + me->position_conn_synapse22_data.out * 0.0014011865529256348 + me->position_conn_synapse23_data.out * -8.580403424811474E-4 + me->position_conn_synapse24_data.out * 1.9302236300931817E-5 + me->position_conn_synapse25_data.out * -6.278258298754116E-4 + me->position_conn_synapse26_data.out * -5.469489246116854E-4 + me->position_conn_synapse27_data.out * -9.03607049438334E-4 + me->position_conn_synapse28_data.out * 0.0016530145963680111 + me->position_conn_synapse29_data.out * -1.8290883995245188E-5 + me->position_conn_synapse30_data.out * 2.2258268543761433E-6 + me->position_conn_synapse31_data.out * 0.0019684278438446396 + me->position_conn_synapse32_data.out * -7.873088433576614E-4 + me->position_conn_synapse33_data.out * 0.0014929366534702226 + me->position_conn_synapse34_data.out * 7.515758052703302E-5 + me->position_conn_synapse35_data.out * 0.0014917936232882582 + me->position_conn_synapse36_data.out * -0.003575691082177799 + me->position_conn_synapse37_data.out * -1.8193839228974505E-5 + me->position_conn_synapse38_data.out * 0.0018896168161262287 + me->position_conn_synapse39_data.out * 8.303332290517213E-4 + me->position_conn_synapse40_data.out * 0.004104134153369121 + me->position_conn_synapse41_data.out * -5.13564689517382E-7 + me->position_conn_synapse42_data.out * -6.243882699468947E-5 + me->position_conn_synapse43_data.out * 0.0010515420684783794 + me->position_conn_synapse44_data.out * 8.111783858647349E-4 + me->position_conn_synapse45_data.out * 1.475253238148094E-5 + me->position_conn_synapse46_data.out * 6.416793062535015E-5 + me->position_conn_synapse47_data.out * -1.0465170173185052E-5 + me->position_conn_synapse48_data.out * -1.270389812721338E-5 + me->position_conn_synapse49_data.out * 0.0026462338347299896 + me->position_conn_synapse50_data.out * 0.0011460511335712297 + me->position_conn_synapse51_data.out * -1.1727676862512162E-5 + me->position_conn_synapse52_data.out * -3.2655213161986456E-4 + me->position_conn_synapse53_data.out * -0.0017907569642792247 + me->position_conn_synapse54_data.out * 2.920450277512873E-5 + me->position_conn_synapse55_data.out * 0.001392843129889718 + me->position_conn_synapse56_data.out * -3.942355152961744E-6 + me->position_conn_synapse57_data.out * -0.0024162322525697346 + me->position_conn_synapse58_data.out * -8.499599020535357E-4 + me->position_conn_synapse59_data.out * 0.0011422575808787555 + me->position_conn_synapse60_data.out * -0.0018315512632059354 + me->position_conn_synapse61_data.out * -9.347504443547979E-7 + me->position_conn_synapse62_data.out * -2.7241368738235335E-5 + me->position_conn_synapse63_data.out * -8.767335606814065E-6 + me->position_conn_synapse64_data.out * 0.004655707050067384 + me->position_conn_synapse65_data.out * -3.0936564584183275E-5 + me->position_conn_synapse66_data.out * -9.157326932015657E-4 + me->position_conn_synapse67_data.out * -5.463841910551397E-6 + me->position_conn_synapse68_data.out * 0.001212026650343229 + me->position_conn_synapse69_data.out * 2.167269231627178E-5 + me->position_conn_synapse70_data.out * -2.4987202865781658E-5 + me->position_conn_synapse71_data.out * -2.7063372875661E-4 + me->position_conn_synapse72_data.out * -1.260364616535011E-4 + me->position_conn_synapse73_data.out * 0.0011609866113312737 + me->position_conn_synapse74_data.out * -6.981198964485192E-4 + me->position_conn_synapse75_data.out * -5.788644627347579E-4 + me->position_conn_synapse76_data.out * 0.0011967475787691157 + me->position_conn_synapse77_data.out * -7.481990511787237E-6 + me->position_conn_synapse78_data.out * -3.6786652059783524E-4 + me->position_conn_synapse79_data.out * 4.971168536298362E-5 + me->position_conn_synapse80_data.out * -0.0017288583214597453 + me->position_conn_synapse81_data.out * 5.746426358120763E-5 + me->position_conn_synapse82_data.out * -5.58520703736633E-6 + me->position_conn_synapse83_data.out * -3.2316000578825006E-5 + me->position_conn_synapse84_data.out * -3.8992876262528855E-4 + me->position_conn_synapse85_data.out * 0.0028785106721649616 + me->position_conn_synapse86_data.out * 9.424636156498356E-4 + me->position_conn_synapse87_data.out * -5.49744903507218E-6 + me->position_conn_synapse88_data.out * -9.742677237039283E-4 + me->position_conn_synapse89_data.out * 0.0015897451555111576 + me->position_conn_synapse90_data.out * 6.677380336981299E-4 + me->position_conn_synapse91_data.out * -3.5232198882060693E-6 + me->position_conn_synapse92_data.out * -6.568368042622186E-6 + me->position_conn_synapse93_data.out * -0.0017656145526929966 + me->position_conn_synapse94_data.out * 0.0020144217934501465 + me->position_conn_synapse95_data.out * 9.104950561823835E-6 + me->position_conn_synapse96_data.out * 2.646444552271698E-5 + me->position_conn_synapse97_data.out * 0.0018791053455273685 + me->position_conn_synapse98_data.out * -6.472405495469722E-4 + me->position_conn_synapse99_data.out * 5.8509997596236906E-5;
    me->strings_1_out = 0.0 + me->position_conn_synapse0_data.out * -1.8636289262856753E-5 + me->position_conn_synapse1_data.out * 9.144934852011241E-4 + me->position_conn_synapse2_data.out * -5.429383459349121E-4 + me->position_conn_synapse3_data.out * -9.18329022340327E-4 + me->position_conn_synapse4_data.out * -5.79293812085544E-6 + me->position_conn_synapse5_data.out * -9.592003539374262E-6 + me->position_conn_synapse6_data.out * -4.473062338409516E-6 + me->position_conn_synapse7_data.out * -1.241653872906826E-5 + me->position_conn_synapse8_data.out * 0.0024517782273903964 + me->position_conn_synapse9_data.out * -9.613023011405439E-5 + me->position_conn_synapse10_data.out * -0.0010353965378194377 + me->position_conn_synapse11_data.out * 0.004982287342470976 + me->position_conn_synapse12_data.out * 0.00376275609631484 + me->position_conn_synapse13_data.out * -0.0018783052804837203 + me->position_conn_synapse14_data.out * 0.0018410525768634465 + me->position_conn_synapse15_data.out * 0.003386074846596944 + me->position_conn_synapse16_data.out * 0.0028510776038177567 + me->position_conn_synapse17_data.out * 0.005071262859224399 + me->position_conn_synapse18_data.out * 3.5630103238688446E-4 + me->position_conn_synapse19_data.out * -0.001297325521205406 + me->position_conn_synapse20_data.out * -2.3392333212900684E-5 + me->position_conn_synapse21_data.out * 0.0012037450236345977 + me->position_conn_synapse22_data.out * 0.0021945873444452584 + me->position_conn_synapse23_data.out * -9.721596912137192E-5 + me->position_conn_synapse24_data.out * 1.9302236300931817E-5 + me->position_conn_synapse25_data.out * 0.0028856612118104913 + me->position_conn_synapse26_data.out * 4.713977231289878E-5 + me->position_conn_synapse27_data.out * 4.044702614379531E-5 + me->position_conn_synapse28_data.out * 0.001708992143998337 + me->position_conn_synapse29_data.out * -1.8290883995245188E-5 + me->position_conn_synapse30_data.out * 2.2258268543761433E-6 + me->position_conn_synapse31_data.out * 0.0020226280906463596 + me->position_conn_synapse32_data.out * 0.0034611060599128783 + me->position_conn_synapse33_data.out * 0.0022957735485416115 + me->position_conn_synapse34_data.out * 0.002846653215480694 + me->position_conn_synapse35_data.out * 6.126359728776507E-4 + me->position_conn_synapse36_data.out * 0.005724622607033704 + me->position_conn_synapse37_data.out * -1.8193839228974505E-5 + me->position_conn_synapse38_data.out * 0.0033589107110035296 + me->position_conn_synapse39_data.out * -0.0016772558549931079 + me->position_conn_synapse40_data.out * -0.0013910705824415883 + me->position_conn_synapse41_data.out * -5.13564689517382E-7 + me->position_conn_synapse42_data.out * -6.243882699468947E-5 + me->position_conn_synapse43_data.out * 5.814181578019359E-4 + me->position_conn_synapse44_data.out * 0.0014800964062066896 + me->position_conn_synapse45_data.out * -0.0011093418000903427 + me->position_conn_synapse46_data.out * 8.475683029706103E-4 + me->position_conn_synapse47_data.out * -1.0465170173185052E-5 + me->position_conn_synapse48_data.out * -1.270389812721338E-5 + me->position_conn_synapse49_data.out * 0.0028383335633291994 + me->position_conn_synapse50_data.out * -1.4087738612234091E-4 + me->position_conn_synapse51_data.out * -1.1727676862512162E-5 + me->position_conn_synapse52_data.out * 0.0017811710801852823 + me->position_conn_synapse53_data.out * 0.003644826159465185 + me->position_conn_synapse54_data.out * 2.920450277512873E-5 + me->position_conn_synapse55_data.out * 0.004764523148577798 + me->position_conn_synapse56_data.out * -3.942355152961744E-6 + me->position_conn_synapse57_data.out * 1.2052682376622878E-5 + me->position_conn_synapse58_data.out * 0.0012591390012806646 + me->position_conn_synapse59_data.out * 0.0020364773352274943 + me->position_conn_synapse60_data.out * 0.001049981423271018 + me->position_conn_synapse61_data.out * -9.347504443547979E-7 + me->position_conn_synapse62_data.out * -2.7241368738235335E-5 + me->position_conn_synapse63_data.out * -8.767335606814065E-6 + me->position_conn_synapse64_data.out * -0.0019556142993647965 + me->position_conn_synapse65_data.out * -3.0936564584183275E-5 + me->position_conn_synapse66_data.out * -5.471505221923519E-4 + me->position_conn_synapse67_data.out * -5.463841910551397E-6 + me->position_conn_synapse68_data.out * 0.005120855327065354 + me->position_conn_synapse69_data.out * 2.167269231627178E-5 + me->position_conn_synapse70_data.out * -2.4987202865781658E-5 + me->position_conn_synapse71_data.out * 0.0015818839409546806 + me->position_conn_synapse72_data.out * -1.1471335581050614E-4 + me->position_conn_synapse73_data.out * -6.999943667388215E-4 + me->position_conn_synapse74_data.out * 0.0012314793707899323 + me->position_conn_synapse75_data.out * 0.0026386936582661444 + me->position_conn_synapse76_data.out * 0.0022271187260585034 + me->position_conn_synapse77_data.out * -7.481990511787237E-6 + me->position_conn_synapse78_data.out * 6.805094787535672E-5 + me->position_conn_synapse79_data.out * 4.971168536298362E-5 + me->position_conn_synapse80_data.out * 0.0036059589011925948 + me->position_conn_synapse81_data.out * 5.746426358120763E-5 + me->position_conn_synapse82_data.out * -5.58520703736633E-6 + me->position_conn_synapse83_data.out * -3.2316000578825006E-5 + me->position_conn_synapse84_data.out * 0.0018775545217629666 + me->position_conn_synapse85_data.out * -3.3886450916821787E-4 + me->position_conn_synapse86_data.out * -0.0010376617207931735 + me->position_conn_synapse87_data.out * -5.49744903507218E-6 + me->position_conn_synapse88_data.out * 0.004345066222244814 + me->position_conn_synapse89_data.out * 0.004001781660241839 + me->position_conn_synapse90_data.out * 0.004823671902870519 + me->position_conn_synapse91_data.out * -3.5232198882060693E-6 + me->position_conn_synapse92_data.out * -6.568368042622186E-6 + me->position_conn_synapse93_data.out * 2.809273926280384E-5 + me->position_conn_synapse94_data.out * -4.5606263336300654E-4 + me->position_conn_synapse95_data.out * 9.104950561823835E-6 + me->position_conn_synapse96_data.out * 2.646444552271698E-5 + me->position_conn_synapse97_data.out * 8.880670406252765E-4 + me->position_conn_synapse98_data.out * 0.0031133305622913932 + me->position_conn_synapse99_data.out * 5.8509997596236906E-5;
    me->strings_2_out = 0.0 + me->position_conn_synapse0_data.out * -1.8636289262854198E-5 + me->position_conn_synapse1_data.out * 0.0043499967023869985 + me->position_conn_synapse2_data.out * 0.002093513691453737 + me->position_conn_synapse3_data.out * 0.002540359067078799 + me->position_conn_synapse4_data.out * -5.792938120848373E-6 + me->position_conn_synapse5_data.out * -9.592003539380837E-6 + me->position_conn_synapse6_data.out * -4.473062338412711E-6 + me->position_conn_synapse7_data.out * -1.2416538729071508E-5 + me->position_conn_synapse8_data.out * 6.304493033038009E-5 + me->position_conn_synapse9_data.out * -3.671077525801986E-4 + me->position_conn_synapse10_data.out * 0.004210083361108564 + me->position_conn_synapse11_data.out * -1.2746691580220576E-4 + me->position_conn_synapse12_data.out * -3.692161299579295E-4 + me->position_conn_synapse13_data.out * 0.001111307717570762 + me->position_conn_synapse14_data.out * 6.549625268151302E-4 + me->position_conn_synapse15_data.out * 0.0012413277291843715 + me->position_conn_synapse16_data.out * 6.862568434398637E-4 + me->position_conn_synapse17_data.out * -5.635857968007289E-4 + me->position_conn_synapse18_data.out * 0.0011658464000819258 + me->position_conn_synapse19_data.out * 0.0013687574091497652 + me->position_conn_synapse20_data.out * -2.339233321289893E-5 + me->position_conn_synapse21_data.out * 0.0026654496337672508 + me->position_conn_synapse22_data.out * -0.0015043333536804587 + me->position_conn_synapse23_data.out * 0.0023938548319193758 + me->position_conn_synapse24_data.out * 1.930223630093164E-5 + me->position_conn_synapse25_data.out * 5.176825031792922E-4 + me->position_conn_synapse26_data.out * 0.0013224055784601112 + me->position_conn_synapse27_data.out * 0.0019157955648171606 + me->position_conn_synapse28_data.out * 1.7136097144665206E-4 + me->position_conn_synapse29_data.out * -1.8290883995242573E-5 + me->position_conn_synapse30_data.out * 2.2258268543739995E-6 + me->position_conn_synapse31_data.out * 0.0033849223035871128 + me->position_conn_synapse32_data.out * -3.1839623202316634E-4 + me->position_conn_synapse33_data.out * -3.7449196768530506E-4 + me->position_conn_synapse34_data.out * -7.657461150880515E-4 + me->position_conn_synapse35_data.out * 0.001499173038080524 + me->position_conn_synapse36_data.out * 0.004492358553265793 + me->position_conn_synapse37_data.out * -1.819383922897449E-5 + me->position_conn_synapse38_data.out * -9.394561521542345E-4 + me->position_conn_synapse39_data.out * 0.0030684572335401487 + me->position_conn_synapse40_data.out * -0.0019992900091150216 + me->position_conn_synapse41_data.out * -5.135646895248734E-7 + me->position_conn_synapse42_data.out * -6.243882699469244E-5 + me->position_conn_synapse43_data.out * 0.0024477907008729066 + me->position_conn_synapse44_data.out * 0.0035229864209892245 + me->position_conn_synapse45_data.out * 0.003342268174862718 + me->position_conn_synapse46_data.out * 1.8884802130678677E-4 + me->position_conn_synapse47_data.out * -1.0465170173185541E-5 + me->position_conn_synapse48_data.out * -1.2703898127214962E-5 + me->position_conn_synapse49_data.out * -3.712970199309625E-4 + me->position_conn_synapse50_data.out * 0.0037244859099266688 + me->position_conn_synapse51_data.out * -1.1727676862511077E-5 + me->position_conn_synapse52_data.out * 5.3884803752774997E-5 + me->position_conn_synapse53_data.out * 0.0026438533796432915 + me->position_conn_synapse54_data.out * 2.9204502775125895E-5 + me->position_conn_synapse55_data.out * 3.9088096710829885E-4 + me->position_conn_synapse56_data.out * -3.942355152977574E-6 + me->position_conn_synapse57_data.out * 0.005789926629447643 + me->position_conn_synapse58_data.out * 0.0017525506772649517 + me->position_conn_synapse59_data.out * -0.0011843045848730022 + me->position_conn_synapse60_data.out * 0.004368974813353445 + me->position_conn_synapse61_data.out * -9.34750444349851E-7 + me->position_conn_synapse62_data.out * -2.7241368738237476E-5 + me->position_conn_synapse63_data.out * -8.767335606821873E-6 + me->position_conn_synapse64_data.out * -0.0021158753233693223 + me->position_conn_synapse65_data.out * -3.0936564584178416E-5 + me->position_conn_synapse66_data.out * 0.003922861897215314 + me->position_conn_synapse67_data.out * -5.46384191054215E-6 + me->position_conn_synapse68_data.out * -8.964089933641799E-5 + me->position_conn_synapse69_data.out * 2.1672692316268094E-5 + me->position_conn_synapse70_data.out * -2.498720286578553E-5 + me->position_conn_synapse71_data.out * 6.025708735438725E-5 + me->position_conn_synapse72_data.out * 0.004061278319497307 + me->position_conn_synapse73_data.out * -2.104596787105995E-4 + me->position_conn_synapse74_data.out * 0.0022850029748116736 + me->position_conn_synapse75_data.out * 5.2371018695472715E-6 + me->position_conn_synapse76_data.out * 0.0038929076616761238 + me->position_conn_synapse77_data.out * -7.481990511779599E-6 + me->position_conn_synapse78_data.out * 9.850738980503534E-4 + me->position_conn_synapse79_data.out * 4.9711685362992845E-5 + me->position_conn_synapse80_data.out * 0.0020436704748240785 + me->position_conn_synapse81_data.out * 5.746426358120871E-5 + me->position_conn_synapse82_data.out * -5.5852070373666945E-6 + me->position_conn_synapse83_data.out * -3.23160005788238E-5 + me->position_conn_synapse84_data.out * 6.668829075808433E-4 + me->position_conn_synapse85_data.out * 0.0013470182727014243 + me->position_conn_synapse86_data.out * 0.002894125278132879 + me->position_conn_synapse87_data.out * -5.497449035066786E-6 + me->position_conn_synapse88_data.out * 6.158246570618825E-6 + me->position_conn_synapse89_data.out * 9.508823821105013E-4 + me->position_conn_synapse90_data.out * -0.001457677480890724 + me->position_conn_synapse91_data.out * -3.523219888197363E-6 + me->position_conn_synapse92_data.out * -6.5683680426251954E-6 + me->position_conn_synapse93_data.out * 0.004227611847805556 + me->position_conn_synapse94_data.out * -0.0012855569060833565 + me->position_conn_synapse95_data.out * 9.10495056182731E-6 + me->position_conn_synapse96_data.out * 2.6464445522714728E-5 + me->position_conn_synapse97_data.out * 0.0033709615532982774 + me->position_conn_synapse98_data.out * 3.69780919698824E-5 + me->position_conn_synapse99_data.out * 5.850999759625579E-5;
}