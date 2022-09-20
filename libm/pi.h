#ifndef __RLIBM_PI_H__
#define __RLIBM_PI_H__


static const double atan_vals[256] = {
 0x1.ffffd5555bbbcp-10,
 0x1.7ffee00184ca6p-8,
 0x1.3ffd655f1929cp-7,
 0x1.bff8dadf2e78cp-7,
 0x1.1ff8685c3e636p-6,
 0x1.5ff223a639d5cp-6,
 0x1.9fe91f99362d6p-6,
 0x1.dfdcdca1cbe7p-6,
 0x1.0fe66da9b94eep-5,
 0x1.2fdc4e3737dddp-5,
 0x1.4fcfd072dff79p-5,
 0x1.6fc0b4f27d5bbp-5,
 0x1.8faebc6b17abap-5,
 0x1.af99a7b3dd42fp-5,
 0x1.cf8137c90a177p-5,
 0x1.ef652dceca4dcp-5,
 0x1.07a2a58a0c16fp-4,
 0x1.1790a88aca931p-4,
 0x1.277c80c02ec4dp-4,
 0x1.37660f1a6b5d8p-4,
 0x1.474d34a4bbb9dp-4,
 0x1.5731d286c4ecbp-4,
 0x1.6713ca05f38b3p-4,
 0x1.76f2fc86d613dp-4,
 0x1.86cf4b8e73cbfp-4,
 0x1.96a898c39fefbp-4,
 0x1.a67ec5f04910ap-4,
 0x1.b651b502c480ap-4,
 0x1.c621480f15a6ap-4,
 0x1.d5ed6150311dcp-4,
 0x1.e5b5e3293b7cfp-4,
 0x1.f57ab026c3a9p-4,
 0x1.029dd57ffc493p-3,
 0x1.0a7c5b4bed20fp-3,
 0x1.1258daff330b4p-3,
 0x1.1a334638df0d3p-3,
 0x1.220b8eafa5aa3p-3,
 0x1.29e1a6326d7d6p-3,
 0x1.31b57ea8db38dp-3,
 0x1.39870a13dafd5p-3,
 0x1.41563a8e2700dp-3,
 0x1.4923024ccb781p-3,
 0x1.50ed539fa7b92p-3,
 0x1.58b520f1ec8e1p-3,
 0x1.607a5cca97ad8p-3,
 0x1.683cf9ccec514p-3,
 0x1.6ffceab8e8e2cp-3,
 0x1.77ba226bb9b5ap-3,
 0x1.7f7493e028c98p-3,
 0x1.872c322f0a8ccp-3,
 0x1.8ee0f08fa79a2p-3,
 0x1.9692c258236b8p-3,
 0x1.9e419afddffe1p-3,
 0x1.a5ed6e15de61fp-3,
 0x1.ad962f551c32fp-3,
 0x1.b53bd290edf69p-3,
 0x1.bcde4bbf565c2p-3,
 0x1.c47d8ef75a5dcp-3,
 0x1.cc199071523f5p-3,
 0x1.d3b24487376b7p-3,
 0x1.db479fb4ef2c9p-3,
 0x1.e2d996989242ep-3,
 0x1.ea681df2b156bp-3,
 0x1.f1f32aa696486p-3,
 0x1.f97ab1ba825f5p-3,
 0x1.007f542bf4ac6p-2,
 0x1.043f81e5d4acep-2,
 0x1.07fddcc31fe2ep-2,
 0x1.0bba5f8dfd7efp-2,
 0x1.0f7505229485fp-2,
 0x1.132dc86f219e3p-2,
 0x1.16e4a4740b56cp-2,
 0x1.1a999443f4eafp-2,
 0x1.1e4c9303cf84dp-2,
 0x1.21fd9beaea015p-2,
 0x1.25acaa42ff38fp-2,
 0x1.2959b96842d04p-2,
 0x1.2d04c4c96c935p-2,
 0x1.30adc7e7c25f9p-2,
 0x1.3454be5720ap-2,
 0x1.37f9a3be015f3p-2,
 0x1.3b9c73d581f2ep-2,
 0x1.3f3d2a6967464p-2,
 0x1.42dbc35820c56p-2,
 0x1.46783a92c9f05p-2,
 0x1.4a128c1d2a987p-2,
 0x1.4daab40db5cep-2,
 0x1.5140ae8d8781bp-2,
 0x1.54d477d860e03p-2,
 0x1.58660c3ca36b2p-2,
 0x1.5bf5681b4ad65p-2,
 0x1.5f8287e7e5acdp-2,
 0x1.630d68288cc4p-2,
 0x1.66960575d9823p-2,
 0x1.6a1c5c7adafcep-2,
 0x1.6da069f509f63p-2,
 0x1.71222ab43bbcep-2,
 0x1.74a19b9a93f63p-2,
 0x1.781eb99c7556ap-2,
 0x1.7b9981c0714fp-2,
 0x1.7f11f11f36b43p-2,
 0x1.828804e37f674p-2,
 0x1.85fbba49fd035p-2,
 0x1.896d0ea144979p-2,
 0x1.8cdbff49b9739p-2,
 0x1.904889b5770aap-2,
 0x1.93b2ab6839f5cp-2,
 0x1.971a61f74818bp-2,
 0x1.9a7fab0957f14p-2,
 0x1.9de284567716p-2,
 0x1.a142eba7efea6p-2,
 0x1.a4a0ded82e8f4p-2,
 0x1.a7fc5bd2a514p-2,
 0x1.ab556093aeeffp-2,
 0x1.aeabeb2873c8cp-2,
 0x1.b1fff9aec98c4p-2,
 0x1.b5518a5515e3ap-2,
 0x1.b8a09b5a2f055p-2,
 0x1.bbed2b0d3bec1p-2,
 0x1.bf3737cd93f87p-2,
 0x1.c27ec00a9e02ap-2,
 0x1.c5c3c243aee29p-2,
 0x1.c9063d07e7736p-2,
 0x1.cc462ef612186p-2,
 0x1.cf8396bc7fc8ep-2,
 0x1.d2be7318e4a81p-2,
 0x1.d5f6c2d8342f1p-2,
 0x1.d92c84d67cedap-2,
 0x1.dc5fb7fec3e8p-2,
 0x1.df905b4adf958p-2,
 0x1.e2be6dc352873p-2,
 0x1.e5e9ee7f25b96p-2,
 0x1.e912dca3c2973p-2,
 0x1.ec393764ccb3cp-2,
 0x1.ef5cfe03fb3e2p-2,
 0x1.f27e2fd0f235bp-2,
 0x1.f59ccc291b62ap-2,
 0x1.f8b8d2777f17cp-2,
 0x1.fbd242349cc26p-2,
 0x1.fee91ae6434c8p-2,
 0x1.00feae0fb4aafp-1,
 0x1.028782c002a43p-1,
 0x1.040f0b5a72a5ep-1,
 0x1.059547bbc38eap-1,
 0x1.071a37c6f7e7bp-1,
 0x1.089ddb6541ba5p-1,
 0x1.0a203285ee5dep-1,
 0x1.0ba13d1e523fp-1,
 0x1.0d20fb29b4a33p-1,
 0x1.0e9f6ca93b696p-1,
 0x1.101c91a3d6cadp-1,
 0x1.11986a262d1c6p-1,
 0x1.1312f64286933p-1,
 0x1.148c3610b90dfp-1,
 0x1.160429ae13e44p-1,
 0x1.177ad13d4bbe4p-1,
 0x1.18f02ce666752p-1,
 0x1.1a643cd6a6ff5p-1,
 0x1.1bd7014079684p-1,
 0x1.1d487a5b5ed71p-1,
 0x1.1eb8a863d9a38p-1,
 0x1.20278b9b597c5p-1,
 0x1.21952448279f2p-1,
 0x1.230172b553239p-1,
 0x1.246c77329d5b5p-1,
 0x1.25d632146646fp-1,
 0x1.273ea3b399229p-1,
 0x1.28a5cc6d99099p-1,
 0x1.2a0baca42db4p-1,
 0x1.2b7044bd704d9p-1,
 0x1.2cd39523b867fp-1,
 0x1.2e359e458909p-1,
 0x1.2f9660957dd6p-1,
 0x1.30f5dc8a385cfp-1,
 0x1.3254129e4d7bep-1,
 0x1.33b1035032e8bp-1,
 0x1.350caf222cd8ap-1,
 0x1.3667169a3bc9p-1,
 0x1.37c03a420a69ep-1,
 0x1.39181aa6dbab3p-1,
 0x1.3a6eb85978edp-1,
 0x1.3bc413ee20537p-1,
 0x1.3d182dfc733f7p-1,
 0x1.3e6b071f64ebcp-1,
 0x1.3fbc9ff529305p-1,
 0x1.410cf91f236acp-1,
 0x1.425c1341d58e1p-1,
 0x1.43a9ef04cf58dp-1,
 0x1.44f68d129db2ap-1,
 0x1.4641ee18ba32p-1,
 0x1.478c12c77ac96p-1,
 0x1.48d4fbd2019d6p-1,
 0x1.4a1ca9ee2d036p-1,
 0x1.4b631dd487a98p-1,
 0x1.4ca8584038e77p-1,
 0x1.4dec59eef5396p-1,
 0x1.4f2f23a0eee48p-1,
 0x1.5070b618c6c51p-1,
 0x1.51b1121b7d47bp-1,
 0x1.52f03870638b9p-1,
 0x1.542e29e10cb08p-1,
 0x1.556ae7393f4e6p-1,
 0x1.56a67146e7184p-1,
 0x1.57e0c8da06a94p-1,
 0x1.5919eec4a97d2p-1,
 0x1.5a51e3dad612fp-1,
 0x1.5b88a8f2803bp-1,
 0x1.5cbe3ee37b8fbp-1,
 0x1.5df2a6876e18ap-1,
 0x1.5f25e0b9c3197p-1,
 0x1.6057ee579e0a6p-1,
 0x1.6188d03fcdbc7p-1,
 0x1.62b88752bfa7ap-1,
 0x1.63e714727363ep-1,
 0x1.651478826e4c8p-1,
 0x1.6640b467af4dep-1,
 0x1.676bc908a2dd2p-1,
 0x1.6895b74d171a5p-1,
 0x1.69be801e301c2p-1,
 0x1.6ae624665c656p-1,
 0x1.6c0ca51149842p-1,
 0x1.6d32030bd8da2p-1,
 0x1.6e563f44148e8p-1,
 0x1.6f795aa924a84p-1,
 0x1.709b562b44518p-1,
 0x1.71bc32bbb743ap-1,
 0x1.72dbf14cbf5b2p-1,
 0x1.73fa92d19253fp-1,
 0x1.7518183e4fad6p-1,
 0x1.76348287f6b5ap-1,
 0x1.774fd2a45cbcap-1,
 0x1.786a098a236dfp-1,
 0x1.79832830af511p-1,
 0x1.7a9b2f901e709p-1,
 0x1.7bb220a13f275p-1,
 0x1.7cc7fc5d87134p-1,
 0x1.7ddcc3bf0a2e3p-1,
 0x1.7ef077c0720b7p-1,
 0x1.8003195cf53acp-1,
 0x1.8114a9904ecfap-1,
 0x1.82252956b60d1p-1,
 0x1.833499acd6355p-1,
 0x1.8442fb8fc67d3p-1,
 0x1.85504ffd0222dp-1,
 0x1.865c97f260a79p-1,
 0x1.8767d46e0e2c1p-1,
 0x1.8872066e83ef7p-1,
 0x1.897b2ef280efcp-1,
 0x1.8a834ef902ac6p-1,
 0x1.8b8a67813e0ap-1,
 0x1.8c90798a98574p-1,
 0x1.8d958614a071bp-1,
 0x1.8e998e1f080cp-1,
 0x1.8f9c92a99d131p-1,
 0x1.909e94b443333p-1,
 0x1.919f953eed7c9p-1
};

static const double _512_over_pi_28[8] = {
  0x1.45f306cp+7,
  0x1.c9c882ap-21,
  0x1.4fe13a8p-51,
  0x1.f47d4dp-78,
  0x1.bb81b6cp-105,
  0x1.4acc9ep-135,
  0x1.0e4107cp-162,
  0x1.ca2c756p-189
};

static const double _512_over_pi_28_exp[8] = {-20, -48, -76, -104, -132, -160, -188, -216};

#endif
