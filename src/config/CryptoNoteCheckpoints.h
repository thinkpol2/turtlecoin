// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint64_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{       0, "7fb97df81221dd1366051b2d0bc7f49c66c22ac4431d879c895b06d66ef66f4c"},
{       2, "2ef060801dd27327533580cfa538849f9e1968d13418f2dd2535774a8c494bf4"},
{    5000, "1325029c8be54b9e027f17ec481a0a361e4821381d1d12de1492e92cd38d4c11"},
{   10000, "08b25f220656df008499f36c593bc7b875e3598eae0c9c32ff195e735e51ff1d"},
{   15000, "8d83bdfde2e42b3be9ef194cd327ad5f893c9cab249395378e03aee8db9d420a"},
{   20000, "aed3a0fe6adc5a828e4b9cfa97cea53d2ae565089b583756058e5c71682fde4d"},
{   25000, "cd175f1ed7d6b2bf3e0ed7585aacd17c57b4cd708c4bd32183224d45716767c5"},
{   30000, "90f91f95ea58a37b98cacd3c024fa2eaaa33e0eadc632aa3b61b061fb06b3efe"},
{   35000, "7da853cb5d44abf72f2b2da43c6571e8287eec077a9c9059692f5b5c1ed3f73e"},
{   40000, "da9451a44540a96aff987d4046a13b20ffe4bc08a0ac536a0c196f00d24a90ee"},
{   45000, "122e4010229f1a2a99ed81ab9c7519a4cd5c23e9754f21a17b4a1e33411caf28"},
{   50000, "dd40ba6a33e7c6ff84927d510881e285eba9a17cbde43da587aa6cc41883b852"},
{   55000, "0caf8cd5552afc5701cfcc29bf8e8292064a65cbb4ffc26ae24decf7e43838bf"},
{   60000, "1e2f5f6c9c4b4b3c44e45ea1bd9aa2893721a44793fb743564e6b105d5f978ba"},
{   65000, "b55164b838f342d2a2258aac5b6ce230141f14e9f2472818ac0e4cf0263130ed"},
{   70000, "33c5871e424d72525ac351baad3d698f0886e11836eed8db878ae6b436128074"},
{   75000, "2425d24ba8bd69f9601430f3a5a545bdc3931ddd30f06f82ceeec2766c9ca74a"},
{   80000, "9a62c2b5d8ae89a86019c52964c7f74c8b29504c0088d21d7f1f8484ad103440"},
{   85000, "dc2d2e4ecb85c13d28872d875cccaf4f90d7e3ffd5cd134119c53633f802296a"},
{   90000, "a123b24e7d1ea23eb610129ffad2b575baefac243c026c1ea7381fefcd1bd743"},
{   95000, "04310be9aa0aaa2432c97cfce9db8153c3872942024015132220d95837a7f7df"},
{  100000, "0559c2aad34dc8f47b30fefa2652aca9039d6ec0137af3fd0beb16d7c6f91b1d"},
{  105000, "feaf9c526496c66efbe237d929fb65e6f102fa9b9158424c97d7ee3736a6b658"},
{  110000, "23c14bb24a598df879e154ca745a6610e759765e68e8aa6b9c960f2c621d41f4"},
{  115000, "e874317e8308896ee6694eb73159edccabdaacc09981908ec7a06640be6a6a46"},
{  120000, "c78efd3fd072f3993bb1fff4bc02998057e749846dac1f63fb57e6b1fa1abb2d"},
{  125000, "eb7115cc9701d5757bc9e89c29150cac97115502860c919580ab3e51bf55bc13"},
{  130000, "6db14e442b7774e3f240342e4efc56ed73165fb94e3bc9d2798e9e9011a4fa02"},
{  135000, "dc90ae322b120f9b34474ff536edf3d16b7c5e9794e14aca5343a22279a803d2"},
{  140000, "0138d4b8a46de402691e40e0b912ceb54e1c7894583f6a9177bea18b66d5385a"},
{  145000, "3713cd82b49e2300ebd74e359895709a0f9da1ace1903dd1731b66d02b7cc4bb"},
{  150000, "ff867db0eb78ada7375656aafc452fe46a364ce998eb9add59399c13fc91accb"},
{  155000, "a03383ee6938ab7f2ddbd0a2036c8b41db82e32cc91bb17b1d3d86ae50361170"},
{  160000, "ec666aaa200f72c1e928ac9b8b38c43bf0d1c97b7d4020dea3fe94a5a041da4a"},
{  165000, "a0899e0fd93a48c3828a472c960012f2f0582d320de7f2ca9b80ff3ee139f1f0"},
{  170000, "9453b1bf99e98901949c7d88c9f6db8744b413f8160aa0ac0a467d2375c1f8fd"},
{  175000, "d5286be301c0c9f3df317929bae432dec1160baf658c24cace8adc942c62dd44"},
{  180000, "195deec0a5dff662f89f6bad28f205ddb3c72d778e7bfe9e0362cf9b244b791d"},
{  185000, "d741fcfa4c085a055bc248e56db5ff18d6e0665590d8271e9a445819e50cbed4"},
{  190000, "d881cd9e76ca0890bd881e75dd1a611558a44543a68326aeefe33f656db0fb21"},
{  195000, "48b5c133876d2cc4d60976501981c0af1057321c4e404531c1fa6e04e3b31c50"},
{  200000, "3438412001e186b0de417819353046199ad99c4e05b488e8391d7cc6c80a918e"},
{  205000, "43b5199c3af492afcdd22072d3b1a0673dbbf24b892cf9d141612f00244dbfe6"},
{  210000, "8c784e294af9694f4d5d817ef6637e561eb4a478d99d942d2da1a3906359a2ff"},
{  215000, "98f0ec88e9e9c756808b3a36e1860888f466868ef0fca7de360b82ad26f65c7b"},
{  220000, "5e43f24ff1e5e85e1c6f86cd09d1854ea76c605ca6c6ada4ea5fd3873c062cec"},
{  225000, "816c3af64da7b26d3d77ee6087e3f5c44652ffe1f66f94902f72afb94f4f44e9"},
{  230000, "95b16e0e248c39a7fd26c6f7fac420f317dd6deb9ee9bc541022e4412a9517be"},
{  235000, "c629cd44e582f30aab010d071c46297f104ec8f093e798ed5de003faef4c3f0d"},
{  240000, "c6617c3d1e873071e217d3970ec5aa56eab3839061ad80b45d3cd137b2c1f3c5"},
{  245000, "44a0a64a7817c7b2c56d27cd5a396892418b8c797433c1c3517f3d3425080c01"},
{  250000, "2df370f9c7648d158c570344066ce479abd0425162023afb8088109aa311fbe4"},
{  255000, "2d6e05ef80ad0a51109e39ead7e9d0ef06f9668c6a7358093497ed12ae5569e0"},
{  260000, "de79c513a8ff2408968c813f95e9bacb346dc736fd4db12aa522b6c35b61870b"},
{  265000, "a5908d9b7ab9a81fb4788b3297e207a338d3eb95e43d536dbd65ef3416a95a3e"},
{  270000, "81025a563355ec4b4cc327b4d22a421ef2b72e2fc80309994ee417ab1e34be04"},
{  275000, "9935e59e95b81251b053c9aa1b82eef393a13004e4c0b6efff1e181f5262feca"},
{  280000, "0864401ffb378cd03ad45ce3b7f8077dfd1cbe563e56ddf5155a87347ed0cf44"},
{  285000, "0281cdc8bb3c7a076cd7244fc7816c8feb1c8eb985869ff859a444cd8c2e9d65"},
{  290000, "f571dfd0f9c8e332d1c683953bfe7fc94b5e7344c1df1ccd80909fd746656bc2"},
{  295000, "f33b271c9cfeab3dba4957be57fbecf45a4cea52861979a9dd9d8d2b56c48ec0"},
{  300000, "a0ad53a2bc6c7ac6fd6f92586ade93994c49bdc4fb269f4c43bcc87ed7d07e66"},
{  305000, "33792d85e883f054158ad253285f2ced61798e393135a2d591ccb5ccc60ee724"},
{  310000, "5143cea534ef2ba5a5e18c0877c9c8877d469d3ae040406a65cbf23ea06b4585"},
{  315000, "7bb70271b257d3cb784b026dd9dea1aacb1e6feb8b31c0151819861226b75e88"},
{  320000, "f9f4f51eea457570bf6c1beb599147d03ba4c13c573222fde9454018a0e531f7"},
{  325000, "18cc18d052c4b16f3aa415aa860f012d37028cf61c77f0fd4126aed67f0803b3"},
{  330000, "d63c41bfb0c5468461c924b3983c05816295f358df2599363db96fd1eb257036"},
{  335000, "528ae5c23aee04bee553a963832b59f72bf08903209caac1f84ea4b0056d5464"},
{  340000, "8181936abc5edc3b25c3d5f39fce7ef4a63f332d9d310afa507170f793a3dbd8"},
{  345000, "89bacab01b987b42af745c67571bf87d3edfd686f3c16f0f1bed0fe99fcfa0d4"},
{  350000, "45aaec7312e7b85ae1c05408fbf4fe88ee44a72b85d9c9277f17596a0da84bfd"},
{  355000, "139e4926dc3a688f2ec6f043062b8398b605e608befff67aac37eeba7c53e2ef"},
{  360000, "e3820a2023ea1c14dc866f1e6c06299da7b823bbd0ddcf00165d30e54ad21e79"},
{  365000, "b7f30224ec3ff327bfaecf566e183d91027800f6ea35b1f83fb5e0d8e496b91d"},
{  370000, "7a9e8b08ce3eaa8fc41f5367953f23d825db2efa8a1e90870c891a9fe9d85963"},
{  375000, "e7b60d984e97f4b2868757acac22592c2f392f691baf22b1c481180b4b8c6c8b"},
{  380000, "a22ac5093c02908015f1f5daa75e29bbb8e2a481fc87f3d5b299c7429ebb04ce"},
{  385000, "220f6db2928f4e99eb2c23a81d8c713a6fb1e155d6ca213747d7aebbb3d8c088"},
{  390000, "cce9f7ce3b2108809cf53a9d950a0b0deaa4554d65b5ec1444cfc8485833934c"},
{  395000, "ecab3b211d9f9a56ba2f3f579bc829d54310890bd9559da03541619af75e51a7"},
{  400000, "956c87d587448b688ff412804255e5a832b069c25c8d6050c3f70b8db0a68225"},
{  405000, "f0e2816a69913b509094b62a13a6091cbd62f55baabf21212cd4f6bba7c59f55"},
{  410000, "bae4358d5bab0742e16b2c07a0685b4169da5ef64aa89456168b2d0013e99106"},
{  415000, "421570a88b01c7494e48d1be18b82e3d107d69bbb7cbd73a1ba86ad26f7dd8fb"},
{  420000, "abdd8c64b6208ba834a1ffbf02dd00a1c68e546fcdc336c9332a48ff78133268"},
{  425000, "f7bc310d2f97eba33445c78fc37b7879d6cf836587649d53ffea169f7fd0318a"},
{  430000, "6e49d1584c8f858703b9761731948de097244d038b19fb7274e96ccb50dec220"},
{  435000, "8070296e0236c616cc2503feb0cf1cb90ae7c673c4053c08f5486d9d0fd73296"},
{  440000, "88f5405105d7258ffb061983f3d8cc17adfead8f6348aeb9d23cf16d54935b76"},
{  445000, "8abba34d38fe6c2974436c203ea75e43a38e415bb79ecd133af6b860103dbc20"},
{  450000, "6660add67afd71598faf36a05e9d1f83025a3486711faf5a1fdb1ef9b611149f"},
{  455000, "afd91e635df92abd8e55df11c3d10aee110f5b9d70092257eca8ed40f1ff5dec"},
{  460000, "274fe3d3a09977c041b5ec5a870c057af6ce798e68e302962504da10512803fb"},
{  465000, "7476451d3a53070372306e76f0a0e1cd35f86440f3a721ea07654efbe542114f"},
{  470000, "87ee44fcc68d75c6b82c14e6989097421861fcb8270e18e44f331978e8ce1051"},
{  475000, "d7b0a23790b03ef71feefda1c81a98520af66498b4547a3fd3c183a4b744de0f"},
{  480000, "0d5eeefb2bd097b1ae2da69f22a6ca327e541745f6ce9cbe5cfcd5e256253be6"},
{  485000, "bee7b183804a22f10a758be2bce45ff356546c52d0e985355e461a99dcfeb2b2"},
{  490000, "212288303c9bad46584db9dec680f7f9756f448da398b1e1b8c8615637df18fd"},
{  495000, "b93aad27a0f70162e26bcd82b299d7b0d5baf6213313615e11be7a0ebf2a1091"},
{  500000, "62f0058453292af5e1aa070f8526f7642ab6974c6af2c17088c21b31679c813d"},
{  505000, "42fdc7f9e2587f22ca3b65d6ae3eebfe1896fe1296bc4b4195171443b9bca759"},
{  510000, "6818d833049dd02ee8b2dccfce6fbc38254f9803738fdc2a9103953977286151"},
{  515000, "98bf8d74e1f664e3886e15f3c72a90b816446ae319b5a47e129643c6b8c8d4b9"},
{  520000, "4fc64bd70e644ece44751cad91a7b156697c8a4ba1004f28577deae1a06765f3"},
{  525000, "b3c708d066435b3781f6945059f620dbf023028ea7a57fdc0a89e2c0c5ccb742"},
{  530000, "b2c8e2206b2d8a29d71d8b08da59806662deac36274530b069bda1a609e3cd2a"},
{  535000, "bd015d5d0c06f99716d2adf6d64b8269a95dd39761552ba67ce3f021cac515d3"},
{  540000, "0a5574e0880cd59dd9a3aaa04ca53c6b7b5bda5754f8c9ed3ab6673eaf5bcb64"},
{  545000, "c971e2534ffae5ee9d0e7f9cd2f75fb4d21a0600beedc4fdcbaff9c43aa921ef"},
{  550000, "e839382ffc21a54ee43de63c77a38352f85e948c0806e918f94d6cb94af2d74b"},
{  555000, "8f26c4a573fb479e009250e906a696ee229e698a2ba4d5d36186da04f9155f68"},
{  560000, "609ee1ab220bf00dc88e616f21db9684c1b570db9184799c952a590811d364a4"},
{  565000, "66fc9f981bd2f7f1775b5bbc9cdf983623f5dfdcc870e6a38d95c196ba0c677f"},
{  570000, "bd281d68772ec430be555dee57e485dfeee0ed106e22aec5e2f1409a1638ed93"},
{  575000, "c7efe5a723c854bb81ef77a5a3370e68cd4eadac40f9a4e8e390fe3761db83ef"},
{  580000, "445fe4a61f1ca17f6558e61bda6d59cca3d30e0d4837807f4b69d0499e8443fe"},
{  585000, "d59efaf1422c5c9dde2ee00942eaedbce567be0b342ccd0227853c52555e404f"},
{  590000, "b867144a8df2b85a6cd6426fc053c25d1aa56ea1babb076947d77e03eb6d57b0"},
{  595000, "d93adf2255f86caf30460b45dfeea538f36d9fc783e143616bbe6f8dc3a32157"},
{  600000, "234266e7a2b03534df7d7a0b9403eeaabad316b86222575076c599f77c812200"},
{  605000, "cba35971385cd7e243b645d3e06ab3e5f0430285d257c8390791cedd8840810f"},
{  610000, "0fc4afd5f049f7c39ba95b54eaec703da8ea90f3358019079e4a57c411fdf360"},
{  615000, "b0d784591bca95488996b017e53f55d71ec757e2c735f90b973fb5d90dcd3eb6"},
{  620000, "01883f5bac52d683ea3d4dd56a53a362bd8eada339448428f0d42b125eac9e2d"},
{  625000, "32462524739adac6af7afac9e791b7a9e4d2bebab76347c488aaa3b504e90df0"},
{  630000, "6650cc9d4546e82dc5ac1faecab83fb2523624f4fce0bbb3050bebec29ab110b"},
{  635000, "172e403932f16532a6c0ee8465edd4687914312ca73ccde8cd05fd1334effc4b"},
{  640000, "2cbf230b2218d8a0cbc353a861b20d0d7c1c7ed7cfd0a0d912af4a8f8d20c31d"},
{  645000, "6bcad95101dc68977b44b7fdf064dd395d922d39ff0e487fe8f57ad9651db7cc"},
{  650000, "ca5939a8fd0823c663e199af8657ed9d67f324abf8a2aaf4b58ee565bd6dc1ab"},
{  655000, "679e87b0975fae8f1700e4708835f91786de98f543b94304d5b306f9c694b766"},
{  660000, "ab1e32754eaba47429f1d5bfff1e7b44e6ca68624eafb9b36c4ecdd65e5d4b2f"},
{  665000, "744b56bf373abeb7ebce54427d477eb56859be57bed99d70e72014e48433235d"},
{  670000, "3ba7cc34927c9a1edf24dbb05fd7022f782f50067774a6477a8f3baff09da9bc"},
{  675000, "1aa8c6029432c29d6a26f1c3e6bd895a9c60e14ac951d7860e8d05e815994d99"},
{  680000, "2b4984c2aa62923a80927b158c3b71197e8e95f7cfb2e88115ee47cd1b24cb4b"},
{  685000, "8baf7a3c2cb656495b8eed6c12722aff9c61a420b643d0b824683d8c401e5b00"},
{  690000, "6d562412e80ba57c9499ad800172d7724cb92537cc378d6d00b2c464b4db966c"},
{  695000, "602c4944dd964f42bf934fcfaa2ead2461c383e3f72c8c9a572736bc32bb80b6"},
{  700000, "d339790bcff3313b935a3442c9da913f526b6bce8fbaebda54f8858b9c1c5aa9"},
{  705000, "4da1513d0a01a026db41316567af7b1616ebca39fea33c6140f8e9cc8cbe2e54"},
{  710000, "ff9c3e233f1a8c7c21cd0b6961b1b68a8545c7b54355cd40e7fa1982f828fb76"},
{  715000, "3459af0d43678f663b1c28bdbe89417878f447df529f7c2d699acc9cbed013a9"},
{  720000, "6db93223babb9499c94171dedf39f55a29bcbb9cd469f49da8aca78c60b48946"},
{  725000, "e4dce12039c887f40bac58f65d401f343d15e20e61c40b955ba577bed313f291"},
{  730000, "73d856bfdac0e052f1b9bdf7f157ca6e8cc85fe1c040eca6f529a451034991bb"},
{  735000, "d723da51b1663eb9970d61cbd522fcdc2667da971f520e80d22bd9bf6ba86a12"},
{  740000, "e8b3b83b494457ed041ff1ad01928dcdee3689ac8a33a9429169fded0ee0cdfc"},
{  745000, "1fd0b85a31b64d1631c09672c03c644296439c775f3dc9657bd812c06b98d895"},
{  750000, "8b7a9bcb49b8d127723b26b3ab91b9e3ee52ed9bc4c9cc3ef6d9ce1b4f6c9520"},
{  755000, "aaabbd901cc90c6f7b86d4573bf96529ff5bd6810ab26e0d7798bab407d9e0e3"},
{  760000, "b10a349dd60a1fe0160eba2ea9eaea8b8726919e1533509d025358f42163d34c"},
{  765000, "6f0c679f296e24d564e8a4e406fa80c471c5fb31698f23f03728f009ef1f04ef"},
{  770000, "d6cea5520251ba57d9aec70711a0156ca9b6b933c68e0fbfc102237b63e0178b"},
{  775000, "1b87b145d1b4dc99fc681e93bcd337da1e06c271bae4dc66e8ff9a994768ea09"},
{  780000, "2822709e1d827482e0c064dd33c7dcb311ca5e8300a3ec5e5509678c3f9c6363"},
{  785000, "1b328f0d30edf12964eafffe7609680c54abf1720ba296f3d6e8131c145e30a2"},
{  790000, "e60e00899d841b870c64ab253b6678127f4707ff6568ed1574c3679c7fd2df97"},
{  795000, "aebcd0114155d1b99b3bdd0dfda952def566b4f0446a1cac50d7f8e2b988c236"},
{  800000, "32df598e8f48bcd100371d70136c3f7287a83d0fffd00277e8b624fb17dfe738"},
{  805000, "951d5e97b7a3bfecebe284368f6b5ed09ec94f0efc44f096bb331b25c130e845"},
{  810000, "7eb228ffa07d24f8e274d1367342e13169ed83c2659cba95036ecabf0e292f66"},
{  815000, "4a41251470cd5da0f6baabfc1aa136c48c7bb0aea8b4c171e4db3687c7a053b7"},
{  820000, "52489870b9e7678b88425ae0f9e05cb7e38607374b87f083f89fc2d66d98458a"},
{  825000, "4a930cf52eb5a3aed39d471bb6a9ba419ae99efa1a0c20687ad7b1e7ae55320b"},
{  830000, "3cdb9d60b02977b24a1a6daea782d7f12e2a3a5bafd5cad2698395a4d59285f4"},
{  835000, "7e2298d44d69a5cf46fb5ae59032d9a32044ea54c74b2ec6027e021435c3c325"},
{  840000, "475764354a1fb33ea3bf2639ae9683caa77fdb93b4a4ef205c28a12fe3b37d21"},
{  845000, "09119e4e03e7ef5f4919d966ffb051a5e8d4a73b277bbc1402a6105bdb11d54b"},
{  850000, "d52586efb350fd5c263374fa92e24eec7be928e02a6ddaf95c5c255ec0ff33d5"},
{  855000, "43da13e86cf37f78c286b76def50251ffd64483c5194541f98a103aa2ea6f7eb"},
{  860000, "3f609c720e1fe206ab466647fb4461916ef3fc2862d086f3fde57a9da195bc64"},
{  865000, "db01344e07347bda9d0c74fd9009fb3643c9cd4af0b893ece171e129e6657f08"},
{  870000, "985069ffeb61f7a08df1624d79e5dc83eefc00803c955171dfa0d5d605fdbbc4"},
{  875000, "10abda229f872b43c850e274845d00f8f0676e25a9156c16dc8066438596b188"},
{  880000, "411eedf7bdea60a5fc9c588022417cd836f39b86433f7872bd0200260c33e510"},
{  885000, "f92440d48151b0dc6636b580075e825eb918bd0fdf1d715632836984a426a106"},
{  890000, "ef7952bcc003e1fc77f5c33fdf3eadc8de7646dee18743d2d7c8ec2375b2ba9e"},
{  895000, "f0d8535756430c6e5245d0f0289d1798bfc5582d4d2bad0c1c6ee0ccb3a0451a"},
{  900000, "575da01a402aae40a1967bd55590eb263a4cab4c0e312ed7c672e20c97da4d0c"},
{  905000, "0abad38f45f8316fed8530d911a2fd46b3affae67f2f50d60c92a8ec0a76fcc2"},
{  910000, "6331c0570ff4ebf8b875ca8d1fe1df947b32e9245293359feecec95ad9a99ad3"},
{  915000, "8fef7539415be18e1b2235d725fc6c21435c20f69364ab80336d88dc9f58789f"},
{  920000, "3adae8fff06db30919f26fd00da5e05d36efbd23628c94899d5f06795652e912"},
{  925000, "2e85fa3ba9edc70b7ce376b860d5d0f54018231eea896ea9ea7b34d333ce2e2d"},
{  930000, "ebd8e243a6befe1993763d64ef3c004aacd194dde52c7cf8270bd6a04e3ca973"},
{  935000, "a09df0aeea69f2c4d34e1cce81e0ed23f44a28f718d869e753a731bf3e1d231b"},
{  940000, "8916f8e10e3c268a2e2fc7bec4ba172bf64e3ab5626fe7a6e532f00e2cc9c7ac"},
{  945000, "4de5ff18b1186776d722b20ac58ab480d2e7d975e533bc300b8f88decb7e2e84"},
{  950000, "35d0202ad82fe357a9fab7d8b002135c91d85c16e72bfd4712e2c5ce8884fc10"},
{  955000, "d0d2095ba5f9e826597fd80cb96641aa54c0d338ff55e0f63ce9c5c576e59dc6"},
{  960000, "9db2e02aaada76610537f83570533546dabfd9d3bc6ee3150a2450e97b1f8ee0"},
{  965000, "bfee487de34f1640d72075a8a582407c8cff32fbe26455cd7ddb756ac4dfffa4"},
{  970000, "0d7b568a97a1760b3cc404520940ae68f449d98ef0b5118c4a7e23ec0aaf302c"},
{  975000, "f37497c2991a01554eec510158a2ac87bc67f2cb2c205ab9cd625f8668866c1e"},
{  980000, "9a9fa7588d107009a040a843ec71f837496eeabf7514b20aecbde3b7ec4cd9c3"},
{  985000, "0b52d3fe8ca6ca018fd07b9127cf4af9a72d7a43e0805e6ab6318e478b1f7f22"},
{  990000, "4691492b0b70dd753a8e653b788fc4eedbc193dfa97e5a9926f0aeab8980b882"},
{  995000, "4ae87fce0be28bd5ca8f709ef5dd04d68eef7a434374f9561fbea74ae1f42509"},
{ 1000000, "cec44b86eec8e26cfbe1b78fa50c893ffef90fe4c7b0d6f0b17d6c290f98cce7"},
{ 1005000, "0a107c8069a8360e192ce3208b44524937c03ce16317c6a723bb9401afc4b030"},
{ 1010000, "1aa723d5892eef4f5c699f41f232cd8b30304fe6f68a272be604a8b647999337"},
{ 1015000, "cf2999cbc56f8897a2e2fa9468993bd644a4d4b2578254456c4c8e09bd3aaa36"},
{ 1020000, "492bb6417e937a665d53f0b69ced3fe05b2c2fb6e23498ce7817e8c350aac220"},
{ 1025000, "63eac00dfbf9233c8cc1c10076f8f0dfc27962d923b6a3cf74555d2b07689898"},
{ 1030000, "38262415ae2dd43521f7c04713e356c64b0856fc1716d3139cb57f9bc6a298f5"},
{ 1035000, "3fadff17f730baaa5f8c8beb95de731048f37be7ca9d224e8faf85d3b8f13b0b"},
{ 1040000, "46474e6e7cd6b9247bdd694ac16096ae3d358c373ec1f5799b4e69913857d7ca"},
{ 1045000, "60b27cb5571d6cea3fb2275db542585f2c854be3a319416b256be1477c851912"},
{ 1050000, "06b509b24517013c0b950dcb49d79ce3d73c083f532682218efc42743b63cb7e"},
{ 1055000, "726b55d4514eee2968f004967188cf0e6c5a86c231c35c68abd5fe8fadfef07e"},
{ 1060000, "ab1fc742a48db39e722a59e176a490e57da675afe7486806bf5c8036435ece99"},
{ 1065000, "f68d3626bb1611aba62025b29da3d1141fabd3d7fcd1d1a918b6e54611f0d06a"},
{ 1070000, "377e35ee7874f5af5db65310c6832669a1095e2c6913b6bdeaa318e6b7fcd6b9"},
{ 1075000, "83daf1052cc45d0524845ce6a594027cf07629fd3508e9600a46299e627e7ab9"},
{ 1080000, "c76c4dcbc93104bc0537fe0cd286965ec048f1c67cd107ef6be1712de85cad26"},
{ 1085000, "dde248a05448f66435d750b4090b3395d62875cf3a14f06f7eebb41668bc2f7b"},
{ 1090000, "7b08498a685b8b228dc321d0f01c9a3bff6872a4da22632e9415155bdf5bc705"},
{ 1095000, "0e531b8d7bf1638d93128133afdb5da1c60e8eaf76c68295cd5ae075b5322952"},
{ 1100000, "4460dff0a1e1796e01b3255904264e42882347d98d9a74fbd91d7affd54a547c"},
{ 1105000, "5f513d411dc3471af0861d131dea63babe3c567ff4021f4eb1b66df798a918d3"},
{ 1110000, "a0158aba06243e7fc260c4843458bc193ab999507a3597a97165fc124d462bbe"},
{ 1115000, "4f9770c4941ca7f25b736cd87780abc73af00111a490d0edd74c984b8c9b41d8"},
{ 1120000, "f1e44b258b0b8393c062eb6ae07664e9167006cb41e07d93fa735dbe66021644"},
{ 1125000, "ca9be4be6e023a98f47753e44bf7010a026902ddaba7d6757367ea0054b4cefc"},
{ 1130000, "b2d8bec52ea8aa6ea031310d7dd7d37e676920243af231b1c7e0ada8c24c17e1"},
{ 1135000, "cf3abf964d76fd8049067d25534110b8d862efb6b9f60309112f90993eb15f6f"},
{ 1140000, "decc18a97cc5b8e6b421e29108521d76f44c19049a6383e1afa674588b289b50"},
{ 1145000, "44b0498c2452a959c5c6cc5bcc8c22e83d98d13b4acc5901a508f4a97b497e54"},
{ 1150000, "923a3252c2b24de040c1cbd59c7759dbe93fb8bb83a735e09991373be990aa1c"},
{ 1155000, "d8d9c20bb793ffbe9efd7216157fe997ee3f242d437f9ac7eba93a7a1e92957f"},
{ 1160000, "a77a150026995f96dad129ea67e86f7b7de71d348d2738294a469453330e16a7"},
{ 1165000, "485e6cdbeca7cd138094f1e342c1706a721232ab9d11eefd6300d86f0bcaa6a7"},
{ 1170000, "69e259b92b94a37c1e0154e16562c8ae0431329097350f976fba97d0232c0396"},
{ 1175000, "85fde010c0f47d3be200cbe42ccb67c10973748923f93a166ba8ebfd5a475cad"},
{ 1180000, "37358ec4297e83474da92ce87c83aada85325c1b5614a15f91bc97e49482805c"},
{ 1185000, "280de5d569263c49682423f98d132b1fdd0764232fd8a01afabea81367796e21"},
{ 1190000, "903b24eae8f0376b964ce9b6de84f62bbf9f3872d46b04c56dd95f48ed4dda40"},
{ 1195000, "f958f04059c2146fe4a580178bb65055af557c8db2a93387bd4da2d965bda31c"},
{ 1200000, "fcab13ae0b430433292f9b164f7de8e2d2caaff6e9d6bc82d1c0c1c77a1d6626"},
{ 1205000, "2ed68e520b1fa78cd16a5dc5c091db1d8e21733b77b6ce249814ee5467c01d30"},
{ 1210000, "d0e1f93483a2af500bcec575e057d8ef4a0c69424636a483d09aa517785a3a1f"},
{ 1215000, "d6b5c6679102111c98f8fbb9608df7bb080481ee5e150f42e49fee4bc70e51fa"},
{ 1220000, "7b1a8f7b136079df72d6f234ed7f153e88f9b11e2f3bfebd16edd8b3884d974f"},
{ 1225000, "e8b265a317aaded38eecd799ccf25531d3d915ed191d451a8fae26135b6aa427"},
{ 1230000, "bd237954d5b8279ecfacf7a80fe11db3cb076db43844c1bb0d24e56a4517ce16"},
{ 1235000, "ef28baeab2cba25db7ca061d9a191d312544b96647027feeec787b1a02d8cc3d"},
{ 1240000, "bd29a0d7df9118447b1e358aac0bac45d0848ce264c36501dac0a29400789186"},
{ 1245000, "cafc82744648819ffbc6f21815da806b8aa22c3932e199ca655c32fa0bd48126"},
{ 1250000, "b125a2e256fde278184e051e714396d9e61c39ed13260aa8cc089edf3042b136"},
{ 1255000, "7acddea0d5c82ee321e61e93443bf36163f66091e2539a04c4e5c83e6078e019"},
{ 1260000, "4d37afb45de064208b22c2b62191203dafc8dae05ea4f79a4dfb865ae157dae7"},
{ 1265000, "09c60290bff90665fe8df9efb883a4fbdf85561b0288fac2a63541140204e551"}
};
}
