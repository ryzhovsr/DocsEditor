#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
		<summary></summary>
		*/
		enum class LocaleIDs : int
		{
			LanguageNotSet = 0,
			x_none = 127,
			af_ZA = 1072,
			sq_AL = 1052,
			am_ET = 1118,
			gsw_FR = 1156,
			ar_DZ = 5121,
			ar_BH = 15361,
			ar_EG = 3073,
			ar_IQ = 2049,
			ar_JO = 11265,
			ar_KW = 13313,
			ar_LB = 12289,
			ar_LY = 4097,
			ar_MA = 6145,
			ar_OM = 8193,
			ar_QA = 16385,
			ar_SA = 1025,
			ar_SY = 10241,
			ar_TN = 7169,
			ar_AE = 14337,
			ar_YE = 9217,
			hy_AM = 1067,
			as_IN = 1101,
			az_Cyrl_AZ = 2092,
			az_Latn_AZ = 1068,
			ba_RU = 1133,
			eu_ES = 1069,
			be_BY = 1059,
			bn_BD = 2117,
			bn_IN = 1093,
			bs_Cyrl_BA = 8218,
			bs_Latn_BA = 5146,
			bg_BG = 1026,
			br_FR = 1150,
			my_MM = 1109,
			ca_ES = 1027,
			chr_US = 1116,
			zh_HK = 3076,
			zh_MO = 5124,
			zh_CN = 2052,
			zh_SG = 4100,
			zh_TW = 1028,
			co_FR = 1155,
			hr_BA = 4122,
			hr_HR = 1050,
			cs_CZ = 1029,
			da_DK = 1030,
			prs_AF = 1164,
			dv_MV = 1125,
			nl_BE = 2067,
			nl_NL = 1043,
			bin_NG = 1126,
			et_EE = 1061,
			en_AU = 3081,
			en_BZ = 10249,
			en_CA = 4105,
			en_029 = 9225,
			en_HK = 15369,
			en_IN = 16393,
			en_ID = 14345,
			en_IE = 6153,
			en_JM = 8201,
			en_MY = 17417,
			en_NZ = 5129,
			en_PH = 13321,
			en_SG = 18441,
			en_ZA = 7177,
			en_TT = 11273,
			en_GB = 2057,
			en_US = 1033,
			en_ZW = 12297,
			fo_FO = 1080,
			fil_PH = 1124,
			fi_FI = 1035,
			fr_BE = 2060,
			fr_CM = 11276,
			fr_CA = 3084,
			fr_CD = 9228,
			fr_CI = 12300,
			fr_FR = 1036,
			fr_HT = 15372,
			fr_LU = 5132,
			fr_ML = 13324,
			fr_MC = 6156,
			fr_MA = 14348,
			fr_RE = 8204,
			fr_SN = 10252,
			fr_CH = 4108,
			fr_fr_WINDIES = 7180,
			fy_NL = 1122,
			ff_NG = 1127,
			gd_GB = 1084,
			gl_ES = 1110,
			ka_GE = 1079,
			de_AT = 3079,
			de_DE = 1031,
			de_LI = 5127,
			de_LU = 4103,
			de_CH = 2055,
			el_GR = 1032,
			gn_PY = 1140,
			gu_IN = 1095,
			kl_GL = 1135,
			ha_Latn_NG = 1128,
			haw_US = 1141,
			he_IL = 1037,
			hi_IN = 1081,
			hu_HU = 1038,
			ibb_NG = 1129,
			is_IS = 1039,
			ig_NG = 1136,
			id_ID = 1057,
			iu_Latn_CA = 2141,
			iu_Cans_CA = 1117,
			it_IT = 1040,
			it_CH = 2064,
			ga_IE = 2108,
			xh_ZA = 1076,
			zu_ZA = 1077,
			kn_IN = 1099,
			kr_NG = 1137,
			ks_Deva = 2144,
			ks_Arab = 1120,
			kk_KZ = 1087,
			km_KH = 1107,
			kok_IN = 1111,
			ko_KR = 1042,
			ky_KG = 1088,
			qut_GT = 1158,
			rw_RW = 1159,
			lo_LA = 1108,
			la_Latn = 1142,
			lv_LV = 1062,
			lt_LT = 1063,
			dsb_DE = 2094,
			lb_LU = 1134,
			mk_MK = 1071,
			ms_BN = 2110,
			ms_MY = 1086,
			ml_IN = 1100,
			mt_MT = 1082,
			mni_IN = 1112,
			mi_NZ = 1153,
			mr_IN = 1102,
			arn_CL = 1146,
			mn_MN = 1104,
			mn_Mong_CN = 2128,
			ne_NP = 1121,
			ne_IN = 2145,
			nb_NO = 1044,
			nn_NO = 2068,
			oc_FR = 1154,
			or_IN = 1096,
			om_Ethi_ET = 1138,
			pap_AN = 1145,
			ps_AF = 1123,
			fa_IR = 1065,
			pl_PL = 1045,
			pt_BR = 1046,
			pt_PT = 2070,
			pa_IN = 1094,
			pa_PK = 2118,
			quz_BO = 1131,
			guz_EC = 2155,
			guz_PE = 3179,
			ro_RO = 1048,
			ro_MO = 2072,
			rm_CH = 1047,
			ru_RU = 1049,
			ru_MO = 2073,
			smn_FI = 9275,
			smj_NO = 4155,
			smj_SE = 5179,
			se_FI = 3131,
			se_NO = 1083,
			se_SE = 2107,
			sms_FI = 8251,
			sma_NO = 6203,
			sma_SE = 7227,
			sa_IN = 1103,
			sr_Cyrl_BA = 7194,
			sr_Cyrl_CS = 3098,
			sr_Latn_BA = 6170,
			sr_Latn_CS = 2074,
			nso_ZA = 1132,
			tn_ZA = 1074,
			sd_Arab_PK = 2137,
			sd_Deva_IN = 1113,
			si_LK = 1115,
			sk_SK = 1051,
			sl_SI = 1060,
			so_SO = 1143,
			es_AR = 11274,
			es_BO = 16394,
			es_CL = 13322,
			es_CO = 9226,
			es_CR = 5130,
			es_DO = 7178,
			es_EC = 12298,
			es_SV = 17418,
			es_GT = 4106,
			es_HN = 18442,
			es_MX = 2058,
			es_NI = 19466,
			es_PA = 6154,
			es_PY = 15370,
			es_PE = 10250,
			es_PR = 20490,
			es_ES = 3082,
			es_ES_tradnl = 1034,
			es_US = 21514,
			es_UY = 14346,
			es_VE = 8202,
			st_ZA = 1072,
			sw_KE = 1089,
			sv_FI = 2077,
			sv_SE = 1053,
			syr_SY = 1114,
			tg_Cyrl_TJ = 1064,
			tzm_Arab_MA = 1119,
			tzm_Latn_DZ = 2143,
			ta_IN = 1097,
			tt_RU = 1092,
			te_IN = 1098,
			th_TH = 1054,
			bo_CN = 1105,
			ti_ER = 2163,
			ti_ET = 1139,
			ts_ZA = 1073,
			tr_TR = 1055,
			tk_TM = 1090,
			ug_CN = 1152,
			uk_UA = 1058,
			hsb_DE = 1070,
			ur_PK = 1056,
			uz_Cyrl_UZ = 2115,
			uz_Latn_UZ = 1091,
			ve_ZA = 1075,
			vi_VN = 1066,
			cy_GB = 1106,
			wo_SN = 1160,
			sah_RU = 1157,
			ii_CN = 1144,
			yi_Hebr = 1085,
			yo_NG = 1130,
			ja_JP = 1041,
			moh_CA = 1148,
			quz_EC = 2155,
			quz_PE = 3179,
			bo_BT = 2129,
			nl = 19,
		};
		using LocaleIDs_Type = std::underlying_type<LocaleIDs>::type;
	}
}