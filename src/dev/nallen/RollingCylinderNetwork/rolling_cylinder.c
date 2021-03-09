#include "rolling_cylinder.h"

static double CheckSpike(bool spike, double weight) {
    if(spike) {
        return weight;
    }
    return 0.0;
}


// rolling_cylinder Initialisation function
void RollingCylinderInit(RollingCylinder* me) {
    // Initialise Sub-objects
    Ensemble00Init(&me->ensemble0_0_data);

    Ensemble01Init(&me->ensemble0_1_data);

    Ensemble02Init(&me->ensemble0_2_data);

    Ensemble03Init(&me->ensemble0_3_data);

    Ensemble04Init(&me->ensemble0_4_data);

    Ensemble05Init(&me->ensemble0_5_data);

    Ensemble06Init(&me->ensemble0_6_data);

    Ensemble07Init(&me->ensemble0_7_data);

    Ensemble08Init(&me->ensemble0_8_data);

    Ensemble09Init(&me->ensemble0_9_data);

    Ensemble010Init(&me->ensemble0_10_data);

    Ensemble011Init(&me->ensemble0_11_data);

    Ensemble012Init(&me->ensemble0_12_data);

    Ensemble013Init(&me->ensemble0_13_data);

    Ensemble014Init(&me->ensemble0_14_data);

    Ensemble015Init(&me->ensemble0_15_data);

    Ensemble016Init(&me->ensemble0_16_data);

    Ensemble017Init(&me->ensemble0_17_data);

    Ensemble018Init(&me->ensemble0_18_data);

    Ensemble019Init(&me->ensemble0_19_data);

    Ensemble020Init(&me->ensemble0_20_data);

    Ensemble021Init(&me->ensemble0_21_data);

    Ensemble022Init(&me->ensemble0_22_data);

    Ensemble023Init(&me->ensemble0_23_data);

    Ensemble024Init(&me->ensemble0_24_data);

    Ensemble025Init(&me->ensemble0_25_data);

    Ensemble026Init(&me->ensemble0_26_data);

    Ensemble027Init(&me->ensemble0_27_data);

    Ensemble028Init(&me->ensemble0_28_data);

    Ensemble029Init(&me->ensemble0_29_data);

    Ensemble030Init(&me->ensemble0_30_data);

    Ensemble031Init(&me->ensemble0_31_data);

    Ensemble032Init(&me->ensemble0_32_data);

    Ensemble033Init(&me->ensemble0_33_data);

    Ensemble034Init(&me->ensemble0_34_data);

    Ensemble035Init(&me->ensemble0_35_data);

    Ensemble036Init(&me->ensemble0_36_data);

    Ensemble037Init(&me->ensemble0_37_data);

    Ensemble038Init(&me->ensemble0_38_data);

    Ensemble039Init(&me->ensemble0_39_data);

    Ensemble040Init(&me->ensemble0_40_data);

    Ensemble041Init(&me->ensemble0_41_data);

    Ensemble042Init(&me->ensemble0_42_data);

    Ensemble043Init(&me->ensemble0_43_data);

    Ensemble044Init(&me->ensemble0_44_data);

    Ensemble045Init(&me->ensemble0_45_data);

    Ensemble046Init(&me->ensemble0_46_data);

    Ensemble047Init(&me->ensemble0_47_data);

    Ensemble048Init(&me->ensemble0_48_data);

    Ensemble049Init(&me->ensemble0_49_data);

    Ensemble050Init(&me->ensemble0_50_data);

    Ensemble051Init(&me->ensemble0_51_data);

    Ensemble052Init(&me->ensemble0_52_data);

    Ensemble053Init(&me->ensemble0_53_data);

    Ensemble054Init(&me->ensemble0_54_data);

    Ensemble055Init(&me->ensemble0_55_data);

    Ensemble056Init(&me->ensemble0_56_data);

    Ensemble057Init(&me->ensemble0_57_data);

    Ensemble058Init(&me->ensemble0_58_data);

    Ensemble059Init(&me->ensemble0_59_data);

    Ensemble060Init(&me->ensemble0_60_data);

    Ensemble061Init(&me->ensemble0_61_data);

    Ensemble062Init(&me->ensemble0_62_data);

    Ensemble063Init(&me->ensemble0_63_data);

    Ensemble064Init(&me->ensemble0_64_data);

    Ensemble065Init(&me->ensemble0_65_data);

    Ensemble066Init(&me->ensemble0_66_data);

    Ensemble067Init(&me->ensemble0_67_data);

    Ensemble068Init(&me->ensemble0_68_data);

    Ensemble069Init(&me->ensemble0_69_data);

    Ensemble070Init(&me->ensemble0_70_data);

    Ensemble071Init(&me->ensemble0_71_data);

    Ensemble072Init(&me->ensemble0_72_data);

    Ensemble073Init(&me->ensemble0_73_data);

    Ensemble074Init(&me->ensemble0_74_data);

    Ensemble075Init(&me->ensemble0_75_data);

    Ensemble076Init(&me->ensemble0_76_data);

    Ensemble077Init(&me->ensemble0_77_data);

    Ensemble078Init(&me->ensemble0_78_data);

    Ensemble079Init(&me->ensemble0_79_data);

    Ensemble080Init(&me->ensemble0_80_data);

    Ensemble081Init(&me->ensemble0_81_data);

    Ensemble082Init(&me->ensemble0_82_data);

    Ensemble083Init(&me->ensemble0_83_data);

    Ensemble084Init(&me->ensemble0_84_data);

    Ensemble085Init(&me->ensemble0_85_data);

    Ensemble086Init(&me->ensemble0_86_data);

    Ensemble087Init(&me->ensemble0_87_data);

    Ensemble088Init(&me->ensemble0_88_data);

    Ensemble089Init(&me->ensemble0_89_data);

    Ensemble090Init(&me->ensemble0_90_data);

    Ensemble091Init(&me->ensemble0_91_data);

    Ensemble092Init(&me->ensemble0_92_data);

    Ensemble093Init(&me->ensemble0_93_data);

    Ensemble094Init(&me->ensemble0_94_data);

    Ensemble095Init(&me->ensemble0_95_data);

    Ensemble096Init(&me->ensemble0_96_data);

    Ensemble097Init(&me->ensemble0_97_data);

    Ensemble098Init(&me->ensemble0_98_data);

    Ensemble099Init(&me->ensemble0_99_data);

    Connection0Synapse0Init(&me->connection0_synapse0_data);

    Connection0Synapse1Init(&me->connection0_synapse1_data);

    Connection0Synapse2Init(&me->connection0_synapse2_data);

    Connection0Synapse3Init(&me->connection0_synapse3_data);

    Connection0Synapse4Init(&me->connection0_synapse4_data);

    Connection0Synapse5Init(&me->connection0_synapse5_data);

    Connection0Synapse6Init(&me->connection0_synapse6_data);

    Connection0Synapse7Init(&me->connection0_synapse7_data);

    Connection0Synapse8Init(&me->connection0_synapse8_data);

    Connection0Synapse9Init(&me->connection0_synapse9_data);

    Connection0Synapse10Init(&me->connection0_synapse10_data);

    Connection0Synapse11Init(&me->connection0_synapse11_data);

    Connection0Synapse12Init(&me->connection0_synapse12_data);

    Connection0Synapse13Init(&me->connection0_synapse13_data);

    Connection0Synapse14Init(&me->connection0_synapse14_data);

    Connection0Synapse15Init(&me->connection0_synapse15_data);

    Connection0Synapse16Init(&me->connection0_synapse16_data);

    Connection0Synapse17Init(&me->connection0_synapse17_data);

    Connection0Synapse18Init(&me->connection0_synapse18_data);

    Connection0Synapse19Init(&me->connection0_synapse19_data);

    Connection0Synapse20Init(&me->connection0_synapse20_data);

    Connection0Synapse21Init(&me->connection0_synapse21_data);

    Connection0Synapse22Init(&me->connection0_synapse22_data);

    Connection0Synapse23Init(&me->connection0_synapse23_data);

    Connection0Synapse24Init(&me->connection0_synapse24_data);

    Connection0Synapse25Init(&me->connection0_synapse25_data);

    Connection0Synapse26Init(&me->connection0_synapse26_data);

    Connection0Synapse27Init(&me->connection0_synapse27_data);

    Connection0Synapse28Init(&me->connection0_synapse28_data);

    Connection0Synapse29Init(&me->connection0_synapse29_data);

    Connection0Synapse30Init(&me->connection0_synapse30_data);

    Connection0Synapse31Init(&me->connection0_synapse31_data);

    Connection0Synapse32Init(&me->connection0_synapse32_data);

    Connection0Synapse33Init(&me->connection0_synapse33_data);

    Connection0Synapse34Init(&me->connection0_synapse34_data);

    Connection0Synapse35Init(&me->connection0_synapse35_data);

    Connection0Synapse36Init(&me->connection0_synapse36_data);

    Connection0Synapse37Init(&me->connection0_synapse37_data);

    Connection0Synapse38Init(&me->connection0_synapse38_data);

    Connection0Synapse39Init(&me->connection0_synapse39_data);

    Connection0Synapse40Init(&me->connection0_synapse40_data);

    Connection0Synapse41Init(&me->connection0_synapse41_data);

    Connection0Synapse42Init(&me->connection0_synapse42_data);

    Connection0Synapse43Init(&me->connection0_synapse43_data);

    Connection0Synapse44Init(&me->connection0_synapse44_data);

    Connection0Synapse45Init(&me->connection0_synapse45_data);

    Connection0Synapse46Init(&me->connection0_synapse46_data);

    Connection0Synapse47Init(&me->connection0_synapse47_data);

    Connection0Synapse48Init(&me->connection0_synapse48_data);

    Connection0Synapse49Init(&me->connection0_synapse49_data);

    Connection0Synapse50Init(&me->connection0_synapse50_data);

    Connection0Synapse51Init(&me->connection0_synapse51_data);

    Connection0Synapse52Init(&me->connection0_synapse52_data);

    Connection0Synapse53Init(&me->connection0_synapse53_data);

    Connection0Synapse54Init(&me->connection0_synapse54_data);

    Connection0Synapse55Init(&me->connection0_synapse55_data);

    Connection0Synapse56Init(&me->connection0_synapse56_data);

    Connection0Synapse57Init(&me->connection0_synapse57_data);

    Connection0Synapse58Init(&me->connection0_synapse58_data);

    Connection0Synapse59Init(&me->connection0_synapse59_data);

    Connection0Synapse60Init(&me->connection0_synapse60_data);

    Connection0Synapse61Init(&me->connection0_synapse61_data);

    Connection0Synapse62Init(&me->connection0_synapse62_data);

    Connection0Synapse63Init(&me->connection0_synapse63_data);

    Connection0Synapse64Init(&me->connection0_synapse64_data);

    Connection0Synapse65Init(&me->connection0_synapse65_data);

    Connection0Synapse66Init(&me->connection0_synapse66_data);

    Connection0Synapse67Init(&me->connection0_synapse67_data);

    Connection0Synapse68Init(&me->connection0_synapse68_data);

    Connection0Synapse69Init(&me->connection0_synapse69_data);

    Connection0Synapse70Init(&me->connection0_synapse70_data);

    Connection0Synapse71Init(&me->connection0_synapse71_data);

    Connection0Synapse72Init(&me->connection0_synapse72_data);

    Connection0Synapse73Init(&me->connection0_synapse73_data);

    Connection0Synapse74Init(&me->connection0_synapse74_data);

    Connection0Synapse75Init(&me->connection0_synapse75_data);

    Connection0Synapse76Init(&me->connection0_synapse76_data);

    Connection0Synapse77Init(&me->connection0_synapse77_data);

    Connection0Synapse78Init(&me->connection0_synapse78_data);

    Connection0Synapse79Init(&me->connection0_synapse79_data);

    Connection0Synapse80Init(&me->connection0_synapse80_data);

    Connection0Synapse81Init(&me->connection0_synapse81_data);

    Connection0Synapse82Init(&me->connection0_synapse82_data);

    Connection0Synapse83Init(&me->connection0_synapse83_data);

    Connection0Synapse84Init(&me->connection0_synapse84_data);

    Connection0Synapse85Init(&me->connection0_synapse85_data);

    Connection0Synapse86Init(&me->connection0_synapse86_data);

    Connection0Synapse87Init(&me->connection0_synapse87_data);

    Connection0Synapse88Init(&me->connection0_synapse88_data);

    Connection0Synapse89Init(&me->connection0_synapse89_data);

    Connection0Synapse90Init(&me->connection0_synapse90_data);

    Connection0Synapse91Init(&me->connection0_synapse91_data);

    Connection0Synapse92Init(&me->connection0_synapse92_data);

    Connection0Synapse93Init(&me->connection0_synapse93_data);

    Connection0Synapse94Init(&me->connection0_synapse94_data);

    Connection0Synapse95Init(&me->connection0_synapse95_data);

    Connection0Synapse96Init(&me->connection0_synapse96_data);

    Connection0Synapse97Init(&me->connection0_synapse97_data);

    Connection0Synapse98Init(&me->connection0_synapse98_data);

    Connection0Synapse99Init(&me->connection0_synapse99_data);

    // Initialise Outputs
    me->control_out = 0.0 + me->connection0_synapse0_data.out * -3.1973198058021156E-5 + me->connection0_synapse1_data.out * -3.148519375059026E-5 + me->connection0_synapse2_data.out * 7.683537571241309E-5 + me->connection0_synapse3_data.out * -1.587567475484017E-4 + me->connection0_synapse4_data.out * -5.7446471300976475E-5 + me->connection0_synapse5_data.out * -1.2707545002390306E-5 + me->connection0_synapse6_data.out * -5.956319050640994E-5 + me->connection0_synapse7_data.out * -5.9998630111240905E-5 + me->connection0_synapse8_data.out * -2.944628045581371E-5 + me->connection0_synapse9_data.out * 1.3755484847349225E-4 + me->connection0_synapse10_data.out * -1.0846659520133512E-5 + me->connection0_synapse11_data.out * 7.254997872046631E-5 + me->connection0_synapse12_data.out * -1.375485552269316E-4 + me->connection0_synapse13_data.out * -4.4463944895252697E-5 + me->connection0_synapse14_data.out * -7.877924664007391E-5 + me->connection0_synapse15_data.out * 8.808224364003815E-5 + me->connection0_synapse16_data.out * 7.878283189709836E-5 + me->connection0_synapse17_data.out * 1.3014031300246018E-4 + me->connection0_synapse18_data.out * -5.3335513750616264E-5 + me->connection0_synapse19_data.out * -1.365636689249939E-4 + me->connection0_synapse20_data.out * 1.2121866680047252E-4 + me->connection0_synapse21_data.out * 1.3923730789891416E-4 + me->connection0_synapse22_data.out * 3.1323276270177394E-5 + me->connection0_synapse23_data.out * 5.784696693830796E-5 + me->connection0_synapse24_data.out * -1.3475194970500397E-4 + me->connection0_synapse25_data.out * -9.900027810899029E-5 + me->connection0_synapse26_data.out * -2.2339926937927875E-4 + me->connection0_synapse27_data.out * -2.8385991594277158E-5 + me->connection0_synapse28_data.out * -1.0288231303385144E-4 + me->connection0_synapse29_data.out * -6.036270619286167E-6 + me->connection0_synapse30_data.out * -5.464623611696847E-5 + me->connection0_synapse31_data.out * -1.220432860573788E-4 + me->connection0_synapse32_data.out * -1.0778907047643065E-4 + me->connection0_synapse33_data.out * -2.2980100393125366E-5 + me->connection0_synapse34_data.out * -2.474662587654999E-5 + me->connection0_synapse35_data.out * -2.3943942005774272E-4 + me->connection0_synapse36_data.out * 6.648103112082944E-5 + me->connection0_synapse37_data.out * -5.547528367218728E-5 + me->connection0_synapse38_data.out * 1.4043116078045871E-4 + me->connection0_synapse39_data.out * -6.521593551080548E-5 + me->connection0_synapse40_data.out * -4.275498193171342E-5 + me->connection0_synapse41_data.out * 2.2289483830353968E-5 + me->connection0_synapse42_data.out * -1.9170546329040395E-4 + me->connection0_synapse43_data.out * 1.062722226735815E-4 + me->connection0_synapse44_data.out * -1.0951907116347594E-4 + me->connection0_synapse45_data.out * 8.377978544405583E-6 + me->connection0_synapse46_data.out * 7.942078172609713E-5 + me->connection0_synapse47_data.out * 8.13960702700824E-6 + me->connection0_synapse48_data.out * -4.792541669312138E-5 + me->connection0_synapse49_data.out * 1.2807606724036922E-4 + me->connection0_synapse50_data.out * -1.5039860709832912E-4 + me->connection0_synapse51_data.out * -5.401391631641675E-5 + me->connection0_synapse52_data.out * 1.4036732302871372E-5 + me->connection0_synapse53_data.out * 1.946616183023455E-5 + me->connection0_synapse54_data.out * -4.5216180403312964E-5 + me->connection0_synapse55_data.out * 9.01172005212177E-5 + me->connection0_synapse56_data.out * 3.37057531342798E-5 + me->connection0_synapse57_data.out * 5.075884812686824E-5 + me->connection0_synapse58_data.out * -1.4295615506553958E-4 + me->connection0_synapse59_data.out * 1.0494345237171222E-4 + me->connection0_synapse60_data.out * 8.623367092923032E-5 + me->connection0_synapse61_data.out * -1.7484771285356473E-4 + me->connection0_synapse62_data.out * 4.477020011363512E-5 + me->connection0_synapse63_data.out * 8.996317856055845E-5 + me->connection0_synapse64_data.out * -2.600240505219632E-5 + me->connection0_synapse65_data.out * 1.1575647096187413E-5 + me->connection0_synapse66_data.out * 1.3800304608975304E-4 + me->connection0_synapse67_data.out * 2.293773616916103E-5 + me->connection0_synapse68_data.out * -8.759808637761258E-5 + me->connection0_synapse69_data.out * -8.128905336532839E-5 + me->connection0_synapse70_data.out * -8.520062176651909E-5 + me->connection0_synapse71_data.out * -8.103850538369207E-6 + me->connection0_synapse72_data.out * 1.3770268646668088E-4 + me->connection0_synapse73_data.out * -2.226693480091335E-4 + me->connection0_synapse74_data.out * -6.22862398625388E-6 + me->connection0_synapse75_data.out * 1.4767458810588505E-4 + me->connection0_synapse76_data.out * 1.2853888976069878E-4 + me->connection0_synapse77_data.out * -8.196074178814997E-5 + me->connection0_synapse78_data.out * -6.302228072025616E-5 + me->connection0_synapse79_data.out * 1.1828578342784554E-4 + me->connection0_synapse80_data.out * -1.1209161898958472E-4 + me->connection0_synapse81_data.out * 8.851822655560683E-5 + me->connection0_synapse82_data.out * -4.720205752272364E-5 + me->connection0_synapse83_data.out * -3.620089755587223E-5 + me->connection0_synapse84_data.out * -1.23134270300812E-4 + me->connection0_synapse85_data.out * -1.082259651936971E-5 + me->connection0_synapse86_data.out * 7.045911240426997E-5 + me->connection0_synapse87_data.out * 1.4237437695519792E-4 + me->connection0_synapse88_data.out * 5.4562567140019745E-5 + me->connection0_synapse89_data.out * 1.7512687675070153E-4 + me->connection0_synapse90_data.out * 7.716743249366392E-5 + me->connection0_synapse91_data.out * 1.0159767306072579E-4 + me->connection0_synapse92_data.out * 8.137227981733532E-5 + me->connection0_synapse93_data.out * -8.178357742710902E-5 + me->connection0_synapse94_data.out * -7.154565363428348E-5 + me->connection0_synapse95_data.out * 1.1507984824569317E-4 + me->connection0_synapse96_data.out * 1.59874773539747E-4 + me->connection0_synapse97_data.out * -1.2179884745757238E-4 + me->connection0_synapse98_data.out * 8.422256711983084E-5 + me->connection0_synapse99_data.out * 6.933332318113644E-5;
}

// rolling_cylinder Execution function
void RollingCylinderRun(RollingCylinder* me) {
    // Mappings
    me->connection0_synapse0_data.in = CheckSpike(me->ensemble0_0_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse1_data.in = CheckSpike(me->ensemble0_1_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse10_data.in = CheckSpike(me->ensemble0_10_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse11_data.in = CheckSpike(me->ensemble0_11_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse12_data.in = CheckSpike(me->ensemble0_12_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse13_data.in = CheckSpike(me->ensemble0_13_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse14_data.in = CheckSpike(me->ensemble0_14_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse15_data.in = CheckSpike(me->ensemble0_15_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse16_data.in = CheckSpike(me->ensemble0_16_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse17_data.in = CheckSpike(me->ensemble0_17_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse18_data.in = CheckSpike(me->ensemble0_18_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse19_data.in = CheckSpike(me->ensemble0_19_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse2_data.in = CheckSpike(me->ensemble0_2_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse20_data.in = CheckSpike(me->ensemble0_20_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse21_data.in = CheckSpike(me->ensemble0_21_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse22_data.in = CheckSpike(me->ensemble0_22_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse23_data.in = CheckSpike(me->ensemble0_23_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse24_data.in = CheckSpike(me->ensemble0_24_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse25_data.in = CheckSpike(me->ensemble0_25_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse26_data.in = CheckSpike(me->ensemble0_26_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse27_data.in = CheckSpike(me->ensemble0_27_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse28_data.in = CheckSpike(me->ensemble0_28_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse29_data.in = CheckSpike(me->ensemble0_29_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse3_data.in = CheckSpike(me->ensemble0_3_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse30_data.in = CheckSpike(me->ensemble0_30_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse31_data.in = CheckSpike(me->ensemble0_31_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse32_data.in = CheckSpike(me->ensemble0_32_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse33_data.in = CheckSpike(me->ensemble0_33_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse34_data.in = CheckSpike(me->ensemble0_34_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse35_data.in = CheckSpike(me->ensemble0_35_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse36_data.in = CheckSpike(me->ensemble0_36_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse37_data.in = CheckSpike(me->ensemble0_37_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse38_data.in = CheckSpike(me->ensemble0_38_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse39_data.in = CheckSpike(me->ensemble0_39_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse4_data.in = CheckSpike(me->ensemble0_4_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse40_data.in = CheckSpike(me->ensemble0_40_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse41_data.in = CheckSpike(me->ensemble0_41_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse42_data.in = CheckSpike(me->ensemble0_42_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse43_data.in = CheckSpike(me->ensemble0_43_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse44_data.in = CheckSpike(me->ensemble0_44_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse45_data.in = CheckSpike(me->ensemble0_45_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse46_data.in = CheckSpike(me->ensemble0_46_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse47_data.in = CheckSpike(me->ensemble0_47_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse48_data.in = CheckSpike(me->ensemble0_48_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse49_data.in = CheckSpike(me->ensemble0_49_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse5_data.in = CheckSpike(me->ensemble0_5_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse50_data.in = CheckSpike(me->ensemble0_50_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse51_data.in = CheckSpike(me->ensemble0_51_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse52_data.in = CheckSpike(me->ensemble0_52_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse53_data.in = CheckSpike(me->ensemble0_53_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse54_data.in = CheckSpike(me->ensemble0_54_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse55_data.in = CheckSpike(me->ensemble0_55_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse56_data.in = CheckSpike(me->ensemble0_56_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse57_data.in = CheckSpike(me->ensemble0_57_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse58_data.in = CheckSpike(me->ensemble0_58_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse59_data.in = CheckSpike(me->ensemble0_59_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse6_data.in = CheckSpike(me->ensemble0_6_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse60_data.in = CheckSpike(me->ensemble0_60_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse61_data.in = CheckSpike(me->ensemble0_61_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse62_data.in = CheckSpike(me->ensemble0_62_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse63_data.in = CheckSpike(me->ensemble0_63_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse64_data.in = CheckSpike(me->ensemble0_64_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse65_data.in = CheckSpike(me->ensemble0_65_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse66_data.in = CheckSpike(me->ensemble0_66_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse67_data.in = CheckSpike(me->ensemble0_67_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse68_data.in = CheckSpike(me->ensemble0_68_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse69_data.in = CheckSpike(me->ensemble0_69_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse7_data.in = CheckSpike(me->ensemble0_7_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse70_data.in = CheckSpike(me->ensemble0_70_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse71_data.in = CheckSpike(me->ensemble0_71_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse72_data.in = CheckSpike(me->ensemble0_72_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse73_data.in = CheckSpike(me->ensemble0_73_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse74_data.in = CheckSpike(me->ensemble0_74_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse75_data.in = CheckSpike(me->ensemble0_75_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse76_data.in = CheckSpike(me->ensemble0_76_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse77_data.in = CheckSpike(me->ensemble0_77_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse78_data.in = CheckSpike(me->ensemble0_78_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse79_data.in = CheckSpike(me->ensemble0_79_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse8_data.in = CheckSpike(me->ensemble0_8_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse80_data.in = CheckSpike(me->ensemble0_80_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse81_data.in = CheckSpike(me->ensemble0_81_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse82_data.in = CheckSpike(me->ensemble0_82_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse83_data.in = CheckSpike(me->ensemble0_83_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse84_data.in = CheckSpike(me->ensemble0_84_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse85_data.in = CheckSpike(me->ensemble0_85_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse86_data.in = CheckSpike(me->ensemble0_86_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse87_data.in = CheckSpike(me->ensemble0_87_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse88_data.in = CheckSpike(me->ensemble0_88_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse89_data.in = CheckSpike(me->ensemble0_89_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse9_data.in = CheckSpike(me->ensemble0_9_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse90_data.in = CheckSpike(me->ensemble0_90_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse91_data.in = CheckSpike(me->ensemble0_91_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse92_data.in = CheckSpike(me->ensemble0_92_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse93_data.in = CheckSpike(me->ensemble0_93_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse94_data.in = CheckSpike(me->ensemble0_94_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse95_data.in = CheckSpike(me->ensemble0_95_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse96_data.in = CheckSpike(me->ensemble0_96_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse97_data.in = CheckSpike(me->ensemble0_97_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse98_data.in = CheckSpike(me->ensemble0_98_data.spike, 1.0 / STEP_SIZE);
    me->connection0_synapse99_data.in = CheckSpike(me->ensemble0_99_data.spike, 1.0 / STEP_SIZE);
    me->ensemble0_0_data.in = -32.38028724528916 + me->speed_in * 6.727695907506076 + me->setpoint_in * 6.727695907506076;
    me->ensemble0_1_data.in = -34.146077895010116 + me->speed_in * 6.678026802249102 + me->setpoint_in * 6.678026802249102;
    me->ensemble0_10_data.in = -62.971057188151555 + me->speed_in * 7.4471701575710085 + me->setpoint_in * 7.4471701575710085;
    me->ensemble0_11_data.in = 1.9362185523258215 + me->speed_in * -0.617130275140893 + me->setpoint_in * -0.617130275140893;
    me->ensemble0_12_data.in = 6.279861085696544 + me->speed_in * 1.5399062991900327 + me->setpoint_in * 1.5399062991900327;
    me->ensemble0_13_data.in = -60.68797576672078 + me->speed_in * -8.78834528535503 + me->setpoint_in * -8.78834528535503;
    me->ensemble0_14_data.in = 16.18525400216302 + me->speed_in * 2.370637202114466 + me->setpoint_in * 2.370637202114466;
    me->ensemble0_15_data.in = 2.235313773616675 + me->speed_in * -0.5385498321405281 + me->setpoint_in * -0.5385498321405281;
    me->ensemble0_16_data.in = -18.135877259301626 + me->speed_in * -4.780381464469889 + me->setpoint_in * -4.780381464469889;
    me->ensemble0_17_data.in = 7.846809976863105 + me->speed_in * -0.9307353870255841 + me->setpoint_in * -0.9307353870255841;
    me->ensemble0_18_data.in = 3.5320107690393385 + me->speed_in * 0.3836266256127608 + me->setpoint_in * 0.3836266256127608;
    me->ensemble0_19_data.in = 2.4375843677607216 + me->speed_in * 1.4033214810248833 + me->setpoint_in * 1.4033214810248833;
    me->ensemble0_2_data.in = 5.056533996790138 + me->speed_in * -0.5034859910838415 + me->setpoint_in * -0.5034859910838415;
    me->ensemble0_20_data.in = 3.3369064019701073 + me->speed_in * -0.6720042902974821 + me->setpoint_in * -0.6720042902974821;
    me->ensemble0_21_data.in = 5.465010565753636 + me->speed_in * -1.1036311705770674 + me->setpoint_in * -1.1036311705770674;
    me->ensemble0_22_data.in = -7.269785441797611 + me->speed_in * 1.9233617302483275 + me->setpoint_in * 1.9233617302483275;
    me->ensemble0_23_data.in = 2.929270721184092 + me->speed_in * -0.4309540608170221 + me->setpoint_in * -0.4309540608170221;
    me->ensemble0_24_data.in = -8.820567507773506 + me->speed_in * 4.620044752796936 + me->setpoint_in * 4.620044752796936;
    me->ensemble0_25_data.in = 3.5465625249547403 + me->speed_in * 0.8004263836327901 + me->setpoint_in * 0.8004263836327901;
    me->ensemble0_26_data.in = 4.75677551900672 + me->speed_in * 2.909722893434081 + me->setpoint_in * 2.909722893434081;
    me->ensemble0_27_data.in = -74.5198576042485 + me->speed_in * -10.52445325551872 + me->setpoint_in * -10.52445325551872;
    me->ensemble0_28_data.in = -3.936278646867163 + me->speed_in * 3.2584280965669663 + me->setpoint_in * 3.2584280965669663;
    me->ensemble0_29_data.in = 19.52200551956906 + me->speed_in * 1.906466886139068 + me->setpoint_in * 1.906466886139068;
    me->ensemble0_3_data.in = 7.0073027240071095 + me->speed_in * 2.6676668992126706 + me->setpoint_in * 2.6676668992126706;
    me->ensemble0_30_data.in = -86.20754539129929 + me->speed_in * -12.440911541167734 + me->setpoint_in * -12.440911541167734;
    me->ensemble0_31_data.in = 5.4908699151484415 + me->speed_in * 1.2989408301012946 + me->setpoint_in * 1.2989408301012946;
    me->ensemble0_32_data.in = 7.282309145767675 + me->speed_in * 1.2860936353423607 + me->setpoint_in * 1.2860936353423607;
    me->ensemble0_33_data.in = 9.809452036431077 + me->speed_in * 0.88425537834784 + me->setpoint_in * 0.88425537834784;
    me->ensemble0_34_data.in = 4.172796192360036 + me->speed_in * 0.4030953786066971 + me->setpoint_in * 0.4030953786066971;
    me->ensemble0_35_data.in = 5.156230090322066 + me->speed_in * 3.1091374961089735 + me->setpoint_in * 3.1091374961089735;
    me->ensemble0_36_data.in = -4.716445928746203 + me->speed_in * -1.7395813824309048 + me->setpoint_in * -1.7395813824309048;
    me->ensemble0_37_data.in = 10.205088831947009 + me->speed_in * 1.5380703725686646 + me->setpoint_in * 1.5380703725686646;
    me->ensemble0_38_data.in = 6.847694405263638 + me->speed_in * -0.8480644277211276 + me->setpoint_in * -0.8480644277211276;
    me->ensemble0_39_data.in = -2.0642285634084137 + me->speed_in * 1.5322809121330252 + me->setpoint_in * 1.5322809121330252;
    me->ensemble0_4_data.in = 11.9430393236235 + me->speed_in * 1.2179711232466708 + me->setpoint_in * 1.2179711232466708;
    me->ensemble0_40_data.in = -9.14113067006997 + me->speed_in * 3.0650422033257945 + me->setpoint_in * 3.0650422033257945;
    me->ensemble0_41_data.in = -6.358930011942824 + me->speed_in * 1.9097468398692494 + me->setpoint_in * 1.9097468398692494;
    me->ensemble0_42_data.in = 7.680386894807726 + me->speed_in * 3.2391907355690797 + me->setpoint_in * 3.2391907355690797;
    me->ensemble0_43_data.in = 5.116508551204279 + me->speed_in * -0.5617418240961439 + me->setpoint_in * -0.5617418240961439;
    me->ensemble0_44_data.in = 7.257779085903699 + me->speed_in * 1.3278207684472052 + me->setpoint_in * 1.3278207684472052;
    me->ensemble0_45_data.in = -41.88722661776452 + me->speed_in * -6.463086253219208 + me->setpoint_in * -6.463086253219208;
    me->ensemble0_46_data.in = 4.996086315232905 + me->speed_in * -0.42954569634939566 + me->setpoint_in * -0.42954569634939566;
    me->ensemble0_47_data.in = -37.67860982547179 + me->speed_in * -5.829078561234619 + me->setpoint_in * -5.829078561234619;
    me->ensemble0_48_data.in = 5.719245619242174 + me->speed_in * 0.6752298751721284 + me->setpoint_in * 0.6752298751721284;
    me->ensemble0_49_data.in = 6.7347723718746195 + me->speed_in * -0.8848352044806342 + me->setpoint_in * -0.8848352044806342;
    me->ensemble0_5_data.in = -20.85567680050639 + me->speed_in * -3.072128649099792 + me->setpoint_in * -3.072128649099792;
    me->ensemble0_50_data.in = 6.394308382587574 + me->speed_in * 2.3829362367980282 + me->setpoint_in * 2.3829362367980282;
    me->ensemble0_51_data.in = -14.014554712927975 + me->speed_in * -2.6569674453158663 + me->setpoint_in * -2.6569674453158663;
    me->ensemble0_52_data.in = -3.7162438325878524 + me->speed_in * -1.1100731656534206 + me->setpoint_in * -1.1100731656534206;
    me->ensemble0_53_data.in = -55.216857168786426 + me->speed_in * -7.126326533474201 + me->setpoint_in * -7.126326533474201;
    me->ensemble0_54_data.in = 4.027945528443187 + me->speed_in * 0.5290750041558676 + me->setpoint_in * 0.5290750041558676;
    me->ensemble0_55_data.in = 12.324288858184273 + me->speed_in * -2.0475298206657184 + me->setpoint_in * -2.0475298206657184;
    me->ensemble0_56_data.in = -2.8318083030969965 + me->speed_in * -1.062685485492838 + me->setpoint_in * -1.062685485492838;
    me->ensemble0_57_data.in = -10.205016403383674 + me->speed_in * -2.426836441643799 + me->setpoint_in * -2.426836441643799;
    me->ensemble0_58_data.in = 2.024209269338388 + me->speed_in * 2.541378492301074 + me->setpoint_in * 2.541378492301074;
    me->ensemble0_59_data.in = -3.6337266171115967 + me->speed_in * -2.436087855422296 + me->setpoint_in * -2.436087855422296;
    me->ensemble0_6_data.in = 11.502520662153554 + me->speed_in * 1.6966760219897488 + me->setpoint_in * 1.6966760219897488;
    me->ensemble0_60_data.in = 6.726348699305541 + me->speed_in * -0.660016390198886 + me->setpoint_in * -0.660016390198886;
    me->ensemble0_61_data.in = 9.908248830914689 + me->speed_in * 2.705436954096635 + me->setpoint_in * 2.705436954096635;
    me->ensemble0_62_data.in = -14.745085693326597 + me->speed_in * -3.1531430338253514 + me->setpoint_in * -3.1531430338253514;
    me->ensemble0_63_data.in = 17.231327904426106 + me->speed_in * -1.6691703805431124 + me->setpoint_in * -1.6691703805431124;
    me->ensemble0_64_data.in = 4.647195291619057 + me->speed_in * 0.3711883105931489 + me->setpoint_in * 0.3711883105931489;
    me->ensemble0_65_data.in = -60.81725277963871 + me->speed_in * 6.9747219179094575 + me->setpoint_in * 6.9747219179094575;
    me->ensemble0_66_data.in = 3.948266358654087 + me->speed_in * -1.3120063095756131 + me->setpoint_in * -1.3120063095756131;
    me->ensemble0_67_data.in = -1.294265714147222 + me->speed_in * 2.9014460456559594 + me->setpoint_in * 2.9014460456559594;
    me->ensemble0_68_data.in = 8.695939074781075 + me->speed_in * 1.1675758036566388 + me->setpoint_in * 1.1675758036566388;
    me->ensemble0_69_data.in = 9.237805698493492 + me->speed_in * 1.440011881086162 + me->setpoint_in * 1.440011881086162;
    me->ensemble0_7_data.in = 10.730278079524746 + me->speed_in * 1.5748781936536116 + me->setpoint_in * 1.5748781936536116;
    me->ensemble0_70_data.in = -18.46171924501643 + me->speed_in * 3.346371778302666 + me->setpoint_in * 3.346371778302666;
    me->ensemble0_71_data.in = -29.120664100486348 + me->speed_in * -5.075856304025125 + me->setpoint_in * -5.075856304025125;
    me->ensemble0_72_data.in = 12.885595418670087 + me->speed_in * -1.8646163329369094 + me->setpoint_in * -1.8646163329369094;
    me->ensemble0_73_data.in = 3.366022630824242 + me->speed_in * 3.7054414712484984 + me->setpoint_in * 3.7054414712484984;
    me->ensemble0_74_data.in = -14.680276363835063 + me->speed_in * -2.325578838835884 + me->setpoint_in * -2.325578838835884;
    me->ensemble0_75_data.in = 9.823538410350213 + me->speed_in * -1.161711984147762 + me->setpoint_in * -1.161711984147762;
    me->ensemble0_76_data.in = 3.4154499428733702 + me->speed_in * -1.0281788217388497 + me->setpoint_in * -1.0281788217388497;
    me->ensemble0_77_data.in = 4.302576243179022 + me->speed_in * 0.7770850022422271 + me->setpoint_in * 0.7770850022422271;
    me->ensemble0_78_data.in = -3.5851548362498304 + me->speed_in * 1.8720087020704699 + me->setpoint_in * 1.8720087020704699;
    me->ensemble0_79_data.in = 6.574546210171894 + me->speed_in * -0.7577360507180022 + me->setpoint_in * -0.7577360507180022;
    me->ensemble0_8_data.in = -37.78619091715102 + me->speed_in * -5.659786531068717 + me->setpoint_in * -5.659786531068717;
    me->ensemble0_80_data.in = 2.033893475824339 + me->speed_in * 0.9313132268949941 + me->setpoint_in * 0.9313132268949941;
    me->ensemble0_81_data.in = 5.002826128947846 + me->speed_in * -0.6487076422154814 + me->setpoint_in * -0.6487076422154814;
    me->ensemble0_82_data.in = -0.9519453409662408 + me->speed_in * 0.9608022212285372 + me->setpoint_in * 0.9608022212285372;
    me->ensemble0_83_data.in = -2.4444374452499615 + me->speed_in * 1.2908223500950142 + me->setpoint_in * 1.2908223500950142;
    me->ensemble0_84_data.in = -31.803116672805587 + me->speed_in * 5.038565097182622 + me->setpoint_in * 5.038565097182622;
    me->ensemble0_85_data.in = -11.306233436014375 + me->speed_in * 3.3852164371729914 + me->setpoint_in * 3.3852164371729914;
    me->ensemble0_86_data.in = -180.49881618808604 + me->speed_in * -21.23062549515121 + me->setpoint_in * -21.23062549515121;
    me->ensemble0_87_data.in = 7.1186327156472196 + me->speed_in * -0.9211092281782054 + me->setpoint_in * -0.9211092281782054;
    me->ensemble0_88_data.in = -35.95366303045505 + me->speed_in * -5.965348300763798 + me->setpoint_in * -5.965348300763798;
    me->ensemble0_89_data.in = 6.42719776160069 + me->speed_in * -1.7356788554150366 + me->setpoint_in * -1.7356788554150366;
    me->ensemble0_9_data.in = 8.162033428895121 + me->speed_in * -0.9635963128060077 + me->setpoint_in * -0.9635963128060077;
    me->ensemble0_90_data.in = 5.0489544690815436 + me->speed_in * -0.4345837691544648 + me->setpoint_in * -0.4345837691544648;
    me->ensemble0_91_data.in = 2.788040116008963 + me->speed_in * -0.5259711895624946 + me->setpoint_in * -0.5259711895624946;
    me->ensemble0_92_data.in = -4.125564809356347 + me->speed_in * -1.7183398318659964 + me->setpoint_in * -1.7183398318659964;
    me->ensemble0_93_data.in = -3.074962259323967 + me->speed_in * 1.8647599691057355 + me->setpoint_in * 1.8647599691057355;
    me->ensemble0_94_data.in = 2.7848373663979284 + me->speed_in * 0.661246467340421 + me->setpoint_in * 0.661246467340421;
    me->ensemble0_95_data.in = 3.189829139734288 + me->speed_in * -0.6915622603829743 + me->setpoint_in * -0.6915622603829743;
    me->ensemble0_96_data.in = 10.116447378340046 + me->speed_in * -1.3761881422335311 + me->setpoint_in * -1.3761881422335311;
    me->ensemble0_97_data.in = 5.840451789654721 + me->speed_in * 1.893480809590582 + me->setpoint_in * 1.893480809590582;
    me->ensemble0_98_data.in = 6.510039797331093 + me->speed_in * -0.6390243921397152 + me->setpoint_in * -0.6390243921397152;
    me->ensemble0_99_data.in = -22.362356667869108 + me->speed_in * -5.765400248092411 + me->setpoint_in * -5.765400248092411;

    // Run Automata
    Ensemble00Run(&me->ensemble0_0_data);

    Ensemble01Run(&me->ensemble0_1_data);

    Ensemble02Run(&me->ensemble0_2_data);

    Ensemble03Run(&me->ensemble0_3_data);

    Ensemble04Run(&me->ensemble0_4_data);

    Ensemble05Run(&me->ensemble0_5_data);

    Ensemble06Run(&me->ensemble0_6_data);

    Ensemble07Run(&me->ensemble0_7_data);

    Ensemble08Run(&me->ensemble0_8_data);

    Ensemble09Run(&me->ensemble0_9_data);

    Ensemble010Run(&me->ensemble0_10_data);

    Ensemble011Run(&me->ensemble0_11_data);

    Ensemble012Run(&me->ensemble0_12_data);

    Ensemble013Run(&me->ensemble0_13_data);

    Ensemble014Run(&me->ensemble0_14_data);

    Ensemble015Run(&me->ensemble0_15_data);

    Ensemble016Run(&me->ensemble0_16_data);

    Ensemble017Run(&me->ensemble0_17_data);

    Ensemble018Run(&me->ensemble0_18_data);

    Ensemble019Run(&me->ensemble0_19_data);

    Ensemble020Run(&me->ensemble0_20_data);

    Ensemble021Run(&me->ensemble0_21_data);

    Ensemble022Run(&me->ensemble0_22_data);

    Ensemble023Run(&me->ensemble0_23_data);

    Ensemble024Run(&me->ensemble0_24_data);

    Ensemble025Run(&me->ensemble0_25_data);

    Ensemble026Run(&me->ensemble0_26_data);

    Ensemble027Run(&me->ensemble0_27_data);

    Ensemble028Run(&me->ensemble0_28_data);

    Ensemble029Run(&me->ensemble0_29_data);

    Ensemble030Run(&me->ensemble0_30_data);

    Ensemble031Run(&me->ensemble0_31_data);

    Ensemble032Run(&me->ensemble0_32_data);

    Ensemble033Run(&me->ensemble0_33_data);

    Ensemble034Run(&me->ensemble0_34_data);

    Ensemble035Run(&me->ensemble0_35_data);

    Ensemble036Run(&me->ensemble0_36_data);

    Ensemble037Run(&me->ensemble0_37_data);

    Ensemble038Run(&me->ensemble0_38_data);

    Ensemble039Run(&me->ensemble0_39_data);

    Ensemble040Run(&me->ensemble0_40_data);

    Ensemble041Run(&me->ensemble0_41_data);

    Ensemble042Run(&me->ensemble0_42_data);

    Ensemble043Run(&me->ensemble0_43_data);

    Ensemble044Run(&me->ensemble0_44_data);

    Ensemble045Run(&me->ensemble0_45_data);

    Ensemble046Run(&me->ensemble0_46_data);

    Ensemble047Run(&me->ensemble0_47_data);

    Ensemble048Run(&me->ensemble0_48_data);

    Ensemble049Run(&me->ensemble0_49_data);

    Ensemble050Run(&me->ensemble0_50_data);

    Ensemble051Run(&me->ensemble0_51_data);

    Ensemble052Run(&me->ensemble0_52_data);

    Ensemble053Run(&me->ensemble0_53_data);

    Ensemble054Run(&me->ensemble0_54_data);

    Ensemble055Run(&me->ensemble0_55_data);

    Ensemble056Run(&me->ensemble0_56_data);

    Ensemble057Run(&me->ensemble0_57_data);

    Ensemble058Run(&me->ensemble0_58_data);

    Ensemble059Run(&me->ensemble0_59_data);

    Ensemble060Run(&me->ensemble0_60_data);

    Ensemble061Run(&me->ensemble0_61_data);

    Ensemble062Run(&me->ensemble0_62_data);

    Ensemble063Run(&me->ensemble0_63_data);

    Ensemble064Run(&me->ensemble0_64_data);

    Ensemble065Run(&me->ensemble0_65_data);

    Ensemble066Run(&me->ensemble0_66_data);

    Ensemble067Run(&me->ensemble0_67_data);

    Ensemble068Run(&me->ensemble0_68_data);

    Ensemble069Run(&me->ensemble0_69_data);

    Ensemble070Run(&me->ensemble0_70_data);

    Ensemble071Run(&me->ensemble0_71_data);

    Ensemble072Run(&me->ensemble0_72_data);

    Ensemble073Run(&me->ensemble0_73_data);

    Ensemble074Run(&me->ensemble0_74_data);

    Ensemble075Run(&me->ensemble0_75_data);

    Ensemble076Run(&me->ensemble0_76_data);

    Ensemble077Run(&me->ensemble0_77_data);

    Ensemble078Run(&me->ensemble0_78_data);

    Ensemble079Run(&me->ensemble0_79_data);

    Ensemble080Run(&me->ensemble0_80_data);

    Ensemble081Run(&me->ensemble0_81_data);

    Ensemble082Run(&me->ensemble0_82_data);

    Ensemble083Run(&me->ensemble0_83_data);

    Ensemble084Run(&me->ensemble0_84_data);

    Ensemble085Run(&me->ensemble0_85_data);

    Ensemble086Run(&me->ensemble0_86_data);

    Ensemble087Run(&me->ensemble0_87_data);

    Ensemble088Run(&me->ensemble0_88_data);

    Ensemble089Run(&me->ensemble0_89_data);

    Ensemble090Run(&me->ensemble0_90_data);

    Ensemble091Run(&me->ensemble0_91_data);

    Ensemble092Run(&me->ensemble0_92_data);

    Ensemble093Run(&me->ensemble0_93_data);

    Ensemble094Run(&me->ensemble0_94_data);

    Ensemble095Run(&me->ensemble0_95_data);

    Ensemble096Run(&me->ensemble0_96_data);

    Ensemble097Run(&me->ensemble0_97_data);

    Ensemble098Run(&me->ensemble0_98_data);

    Ensemble099Run(&me->ensemble0_99_data);

    Connection0Synapse0Run(&me->connection0_synapse0_data);

    Connection0Synapse1Run(&me->connection0_synapse1_data);

    Connection0Synapse2Run(&me->connection0_synapse2_data);

    Connection0Synapse3Run(&me->connection0_synapse3_data);

    Connection0Synapse4Run(&me->connection0_synapse4_data);

    Connection0Synapse5Run(&me->connection0_synapse5_data);

    Connection0Synapse6Run(&me->connection0_synapse6_data);

    Connection0Synapse7Run(&me->connection0_synapse7_data);

    Connection0Synapse8Run(&me->connection0_synapse8_data);

    Connection0Synapse9Run(&me->connection0_synapse9_data);

    Connection0Synapse10Run(&me->connection0_synapse10_data);

    Connection0Synapse11Run(&me->connection0_synapse11_data);

    Connection0Synapse12Run(&me->connection0_synapse12_data);

    Connection0Synapse13Run(&me->connection0_synapse13_data);

    Connection0Synapse14Run(&me->connection0_synapse14_data);

    Connection0Synapse15Run(&me->connection0_synapse15_data);

    Connection0Synapse16Run(&me->connection0_synapse16_data);

    Connection0Synapse17Run(&me->connection0_synapse17_data);

    Connection0Synapse18Run(&me->connection0_synapse18_data);

    Connection0Synapse19Run(&me->connection0_synapse19_data);

    Connection0Synapse20Run(&me->connection0_synapse20_data);

    Connection0Synapse21Run(&me->connection0_synapse21_data);

    Connection0Synapse22Run(&me->connection0_synapse22_data);

    Connection0Synapse23Run(&me->connection0_synapse23_data);

    Connection0Synapse24Run(&me->connection0_synapse24_data);

    Connection0Synapse25Run(&me->connection0_synapse25_data);

    Connection0Synapse26Run(&me->connection0_synapse26_data);

    Connection0Synapse27Run(&me->connection0_synapse27_data);

    Connection0Synapse28Run(&me->connection0_synapse28_data);

    Connection0Synapse29Run(&me->connection0_synapse29_data);

    Connection0Synapse30Run(&me->connection0_synapse30_data);

    Connection0Synapse31Run(&me->connection0_synapse31_data);

    Connection0Synapse32Run(&me->connection0_synapse32_data);

    Connection0Synapse33Run(&me->connection0_synapse33_data);

    Connection0Synapse34Run(&me->connection0_synapse34_data);

    Connection0Synapse35Run(&me->connection0_synapse35_data);

    Connection0Synapse36Run(&me->connection0_synapse36_data);

    Connection0Synapse37Run(&me->connection0_synapse37_data);

    Connection0Synapse38Run(&me->connection0_synapse38_data);

    Connection0Synapse39Run(&me->connection0_synapse39_data);

    Connection0Synapse40Run(&me->connection0_synapse40_data);

    Connection0Synapse41Run(&me->connection0_synapse41_data);

    Connection0Synapse42Run(&me->connection0_synapse42_data);

    Connection0Synapse43Run(&me->connection0_synapse43_data);

    Connection0Synapse44Run(&me->connection0_synapse44_data);

    Connection0Synapse45Run(&me->connection0_synapse45_data);

    Connection0Synapse46Run(&me->connection0_synapse46_data);

    Connection0Synapse47Run(&me->connection0_synapse47_data);

    Connection0Synapse48Run(&me->connection0_synapse48_data);

    Connection0Synapse49Run(&me->connection0_synapse49_data);

    Connection0Synapse50Run(&me->connection0_synapse50_data);

    Connection0Synapse51Run(&me->connection0_synapse51_data);

    Connection0Synapse52Run(&me->connection0_synapse52_data);

    Connection0Synapse53Run(&me->connection0_synapse53_data);

    Connection0Synapse54Run(&me->connection0_synapse54_data);

    Connection0Synapse55Run(&me->connection0_synapse55_data);

    Connection0Synapse56Run(&me->connection0_synapse56_data);

    Connection0Synapse57Run(&me->connection0_synapse57_data);

    Connection0Synapse58Run(&me->connection0_synapse58_data);

    Connection0Synapse59Run(&me->connection0_synapse59_data);

    Connection0Synapse60Run(&me->connection0_synapse60_data);

    Connection0Synapse61Run(&me->connection0_synapse61_data);

    Connection0Synapse62Run(&me->connection0_synapse62_data);

    Connection0Synapse63Run(&me->connection0_synapse63_data);

    Connection0Synapse64Run(&me->connection0_synapse64_data);

    Connection0Synapse65Run(&me->connection0_synapse65_data);

    Connection0Synapse66Run(&me->connection0_synapse66_data);

    Connection0Synapse67Run(&me->connection0_synapse67_data);

    Connection0Synapse68Run(&me->connection0_synapse68_data);

    Connection0Synapse69Run(&me->connection0_synapse69_data);

    Connection0Synapse70Run(&me->connection0_synapse70_data);

    Connection0Synapse71Run(&me->connection0_synapse71_data);

    Connection0Synapse72Run(&me->connection0_synapse72_data);

    Connection0Synapse73Run(&me->connection0_synapse73_data);

    Connection0Synapse74Run(&me->connection0_synapse74_data);

    Connection0Synapse75Run(&me->connection0_synapse75_data);

    Connection0Synapse76Run(&me->connection0_synapse76_data);

    Connection0Synapse77Run(&me->connection0_synapse77_data);

    Connection0Synapse78Run(&me->connection0_synapse78_data);

    Connection0Synapse79Run(&me->connection0_synapse79_data);

    Connection0Synapse80Run(&me->connection0_synapse80_data);

    Connection0Synapse81Run(&me->connection0_synapse81_data);

    Connection0Synapse82Run(&me->connection0_synapse82_data);

    Connection0Synapse83Run(&me->connection0_synapse83_data);

    Connection0Synapse84Run(&me->connection0_synapse84_data);

    Connection0Synapse85Run(&me->connection0_synapse85_data);

    Connection0Synapse86Run(&me->connection0_synapse86_data);

    Connection0Synapse87Run(&me->connection0_synapse87_data);

    Connection0Synapse88Run(&me->connection0_synapse88_data);

    Connection0Synapse89Run(&me->connection0_synapse89_data);

    Connection0Synapse90Run(&me->connection0_synapse90_data);

    Connection0Synapse91Run(&me->connection0_synapse91_data);

    Connection0Synapse92Run(&me->connection0_synapse92_data);

    Connection0Synapse93Run(&me->connection0_synapse93_data);

    Connection0Synapse94Run(&me->connection0_synapse94_data);

    Connection0Synapse95Run(&me->connection0_synapse95_data);

    Connection0Synapse96Run(&me->connection0_synapse96_data);

    Connection0Synapse97Run(&me->connection0_synapse97_data);

    Connection0Synapse98Run(&me->connection0_synapse98_data);

    Connection0Synapse99Run(&me->connection0_synapse99_data);

    // Output Mapping
    me->control_out = 0.0 + me->connection0_synapse0_data.out * -3.1973198058021156E-5 + me->connection0_synapse1_data.out * -3.148519375059026E-5 + me->connection0_synapse2_data.out * 7.683537571241309E-5 + me->connection0_synapse3_data.out * -1.587567475484017E-4 + me->connection0_synapse4_data.out * -5.7446471300976475E-5 + me->connection0_synapse5_data.out * -1.2707545002390306E-5 + me->connection0_synapse6_data.out * -5.956319050640994E-5 + me->connection0_synapse7_data.out * -5.9998630111240905E-5 + me->connection0_synapse8_data.out * -2.944628045581371E-5 + me->connection0_synapse9_data.out * 1.3755484847349225E-4 + me->connection0_synapse10_data.out * -1.0846659520133512E-5 + me->connection0_synapse11_data.out * 7.254997872046631E-5 + me->connection0_synapse12_data.out * -1.375485552269316E-4 + me->connection0_synapse13_data.out * -4.4463944895252697E-5 + me->connection0_synapse14_data.out * -7.877924664007391E-5 + me->connection0_synapse15_data.out * 8.808224364003815E-5 + me->connection0_synapse16_data.out * 7.878283189709836E-5 + me->connection0_synapse17_data.out * 1.3014031300246018E-4 + me->connection0_synapse18_data.out * -5.3335513750616264E-5 + me->connection0_synapse19_data.out * -1.365636689249939E-4 + me->connection0_synapse20_data.out * 1.2121866680047252E-4 + me->connection0_synapse21_data.out * 1.3923730789891416E-4 + me->connection0_synapse22_data.out * 3.1323276270177394E-5 + me->connection0_synapse23_data.out * 5.784696693830796E-5 + me->connection0_synapse24_data.out * -1.3475194970500397E-4 + me->connection0_synapse25_data.out * -9.900027810899029E-5 + me->connection0_synapse26_data.out * -2.2339926937927875E-4 + me->connection0_synapse27_data.out * -2.8385991594277158E-5 + me->connection0_synapse28_data.out * -1.0288231303385144E-4 + me->connection0_synapse29_data.out * -6.036270619286167E-6 + me->connection0_synapse30_data.out * -5.464623611696847E-5 + me->connection0_synapse31_data.out * -1.220432860573788E-4 + me->connection0_synapse32_data.out * -1.0778907047643065E-4 + me->connection0_synapse33_data.out * -2.2980100393125366E-5 + me->connection0_synapse34_data.out * -2.474662587654999E-5 + me->connection0_synapse35_data.out * -2.3943942005774272E-4 + me->connection0_synapse36_data.out * 6.648103112082944E-5 + me->connection0_synapse37_data.out * -5.547528367218728E-5 + me->connection0_synapse38_data.out * 1.4043116078045871E-4 + me->connection0_synapse39_data.out * -6.521593551080548E-5 + me->connection0_synapse40_data.out * -4.275498193171342E-5 + me->connection0_synapse41_data.out * 2.2289483830353968E-5 + me->connection0_synapse42_data.out * -1.9170546329040395E-4 + me->connection0_synapse43_data.out * 1.062722226735815E-4 + me->connection0_synapse44_data.out * -1.0951907116347594E-4 + me->connection0_synapse45_data.out * 8.377978544405583E-6 + me->connection0_synapse46_data.out * 7.942078172609713E-5 + me->connection0_synapse47_data.out * 8.13960702700824E-6 + me->connection0_synapse48_data.out * -4.792541669312138E-5 + me->connection0_synapse49_data.out * 1.2807606724036922E-4 + me->connection0_synapse50_data.out * -1.5039860709832912E-4 + me->connection0_synapse51_data.out * -5.401391631641675E-5 + me->connection0_synapse52_data.out * 1.4036732302871372E-5 + me->connection0_synapse53_data.out * 1.946616183023455E-5 + me->connection0_synapse54_data.out * -4.5216180403312964E-5 + me->connection0_synapse55_data.out * 9.01172005212177E-5 + me->connection0_synapse56_data.out * 3.37057531342798E-5 + me->connection0_synapse57_data.out * 5.075884812686824E-5 + me->connection0_synapse58_data.out * -1.4295615506553958E-4 + me->connection0_synapse59_data.out * 1.0494345237171222E-4 + me->connection0_synapse60_data.out * 8.623367092923032E-5 + me->connection0_synapse61_data.out * -1.7484771285356473E-4 + me->connection0_synapse62_data.out * 4.477020011363512E-5 + me->connection0_synapse63_data.out * 8.996317856055845E-5 + me->connection0_synapse64_data.out * -2.600240505219632E-5 + me->connection0_synapse65_data.out * 1.1575647096187413E-5 + me->connection0_synapse66_data.out * 1.3800304608975304E-4 + me->connection0_synapse67_data.out * 2.293773616916103E-5 + me->connection0_synapse68_data.out * -8.759808637761258E-5 + me->connection0_synapse69_data.out * -8.128905336532839E-5 + me->connection0_synapse70_data.out * -8.520062176651909E-5 + me->connection0_synapse71_data.out * -8.103850538369207E-6 + me->connection0_synapse72_data.out * 1.3770268646668088E-4 + me->connection0_synapse73_data.out * -2.226693480091335E-4 + me->connection0_synapse74_data.out * -6.22862398625388E-6 + me->connection0_synapse75_data.out * 1.4767458810588505E-4 + me->connection0_synapse76_data.out * 1.2853888976069878E-4 + me->connection0_synapse77_data.out * -8.196074178814997E-5 + me->connection0_synapse78_data.out * -6.302228072025616E-5 + me->connection0_synapse79_data.out * 1.1828578342784554E-4 + me->connection0_synapse80_data.out * -1.1209161898958472E-4 + me->connection0_synapse81_data.out * 8.851822655560683E-5 + me->connection0_synapse82_data.out * -4.720205752272364E-5 + me->connection0_synapse83_data.out * -3.620089755587223E-5 + me->connection0_synapse84_data.out * -1.23134270300812E-4 + me->connection0_synapse85_data.out * -1.082259651936971E-5 + me->connection0_synapse86_data.out * 7.045911240426997E-5 + me->connection0_synapse87_data.out * 1.4237437695519792E-4 + me->connection0_synapse88_data.out * 5.4562567140019745E-5 + me->connection0_synapse89_data.out * 1.7512687675070153E-4 + me->connection0_synapse90_data.out * 7.716743249366392E-5 + me->connection0_synapse91_data.out * 1.0159767306072579E-4 + me->connection0_synapse92_data.out * 8.137227981733532E-5 + me->connection0_synapse93_data.out * -8.178357742710902E-5 + me->connection0_synapse94_data.out * -7.154565363428348E-5 + me->connection0_synapse95_data.out * 1.1507984824569317E-4 + me->connection0_synapse96_data.out * 1.59874773539747E-4 + me->connection0_synapse97_data.out * -1.2179884745757238E-4 + me->connection0_synapse98_data.out * 8.422256711983084E-5 + me->connection0_synapse99_data.out * 6.933332318113644E-5;
}