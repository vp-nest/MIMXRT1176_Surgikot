/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 11.00
* Profile  : iMX_RT
* Platform : NXP.iMX_RT_VGLite.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationAlphaNumKeyboard.h"
#include "_ApplicationApplication.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationKeyboard.h"
#include "_ApplicationLogInScreen.h"
#include "_ApplicationProfileButtomBar.h"
#include "_ApplicationProfileScreen.h"
#include "_ApplicationProfileSurgeryCompletedScreen.h"
#include "_ApplicationProfileSurgeryInProgressScreen.h"
#include "_ApplicationSettings.h"
#include "_ApplicationSettingsBuzzerTest.h"
#include "_ApplicationSettingsChangePassword.h"
#include "_ApplicationSettingsDateTime.h"
#include "_ApplicationSettingsDiagnostic.h"
#include "_ApplicationSettingsDisplayTest.h"
#include "_ApplicationSettingsInputField.h"
#include "_ApplicationSettingsLEDTest.h"
#include "_ApplicationSettingsMotorTest.h"
#include "_ApplicationSettingsNewSurgicalProfile.h"
#include "_ApplicationSettingsScreen.h"
#include "_ApplicationSettingsSystemLogs.h"
#include "_ApplicationSpinButton.h"
#include "_ApplicationTextEditor.h"
#include "_ApplicationTitleBar.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreOutline.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsBoolEffect.h"
#include "_EffectsInt32Effect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "_WidgetAddProfileButton.h"
#include "_WidgetCustomButton.h"
#include "_WidgetNumPad.h"
#include "_WidgetProfileListItem.h"
#include "_WidgetSettingsDiagnosticList.h"
#include "_WidgetSettingsList.h"
#include "_WidgetStatusLabel.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Res.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x0000040A, /* ratio 55.32 % */
  0xB8002900, 0x00062452, 0x00400019, 0x0EA00250, 0x0F093600, 0xD1218002, 0x34834446,
  0x3000E800, 0x8F802263, 0xC1160607, 0x0004B121, 0x88171F93, 0x0AA0029C, 0x8E002900,
  0x60024800, 0x00278009, 0xF0047CA8, 0x3C802560, 0xA000E600, 0x800CA003, 0x00991136,
  0x0CE00378, 0xDC003480, 0xB220F4EC, 0x45A1D448, 0x1889C801, 0xA3990004, 0x842AAF4F,
  0x93801332, 0x2A994488, 0x2AF4B31C, 0x1D52A851, 0x4188FD1A, 0x34B3CD24, 0x02FC2A75,
  0xBEDFAF80, 0x0E0AFF80, 0x5949180C, 0x220D2290, 0xA3F198EC, 0xD5328249, 0xD67C9562,
  0x0AAC1E28, 0x6ADDB259, 0x1754A8D4, 0x0E8B4000, 0xE9B47A4D, 0x7F47A8D2, 0xAAF76074,
  0x1E61001D, 0xB63AFD86, 0x028FD9EC, 0xB874B209, 0xB65429D5, 0xDED621B1, 0x584CD4CA,
  0x7E854688, 0x28D3E154, 0x896C0072, 0x10AD8C2A, 0xC6B6D68E, 0x98573EA1, 0xAC98A236,
  0x4562C5BE, 0x53215593, 0xC6B746EB, 0xEA56DB7E, 0x95220CC7, 0x9B1EB6C6, 0x6DE85078,
  0xD88EFFAD, 0xCF4CA222, 0xDB27A959, 0x24881547, 0xDDE75844, 0xFD429407, 0x5B15970D,
  0x15050950, 0x0001EE53, 0xB443411F, 0x0E539B15, 0x821EB441, 0x000835E2, 0x26C5444B,
  0x79F557D5, 0x044853B5, 0x521464E9, 0x82647DD6, 0x243A1948, 0xD400471D, 0xA0445030,
  0x53219429, 0x1084461B, 0x18F05749, 0x01B01351, 0x4E429970, 0x75942809, 0x9A04590A,
  0x3001B78E, 0x610D8623, 0x44418006, 0x86A3E91A, 0xE3945D4D, 0x08F50A8E, 0x2DB19200,
  0x0093A619, 0x46400940, 0xE55451A0, 0xA8D44595, 0x15084225, 0x3F446659, 0x4294E926,
  0x27A45119, 0xA9A10A69, 0x264D4464, 0x524464F9, 0x0225547A, 0x9608B922, 0xD47D0875,
  0xE14A4113, 0x111115D4, 0x558005E5, 0x43D42A48, 0xE04D1F44, 0x594A5593, 0x564EA195,
  0xA790AA71, 0xAA3446A0, 0x706D1F42, 0xDEB84E6A, 0x009F1315, 0x86534528, 0xE9DAB536,
  0x25740099, 0x92A25593, 0xB703000A, 0x55A9C59E, 0x2B4B2530, 0xC595F14F, 0xB1655E92,
  0x3BB4AC4A, 0x00101B75, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x00000410, /* ratio 51.54 % */
  0xB8002D00, 0x0008A452, 0x3C010729, 0x00020849, 0x00490013, 0x0540014C, 0x06004522,
  0xE868009B, 0x87154004, 0x90000120, 0x10C8B030, 0x2E4F1190, 0xC88008C1, 0x33158B46,
  0x52F1ECBE, 0x41928624, 0x68B91800, 0x89C36110, 0x64FE2B06, 0xC9E0D0F9, 0xD6672D98,
  0xE4A15004, 0xD80032C4, 0x063A8000, 0x00A99D00, 0x788CBCC8, 0x001B6A15, 0x6D28DF1D,
  0xC1249228, 0x00C35789, 0x25F56390, 0xC400B594, 0xB5AA8556, 0x22A85C0E, 0x216C9409,
  0x825E8012, 0x2DFEFA2B, 0x82EFA302, 0x9AB04292, 0xA9577B89, 0x01380548, 0xB70AEE2C,
  0x25C7CD21, 0x2B5000AD, 0xCB542ED5, 0xD494117D, 0x1B800698, 0x134400C7, 0x0F16A8D4,
  0x9525036A, 0x17DD366C, 0x509DC136, 0x3D1ED4C5, 0xDB48AD9B, 0x81C27245, 0xDAB79BFB,
  0xCA09BB3C, 0xB8BA7BB6, 0xA5760072, 0x1D0E0F3A, 0x45E499C0, 0x3E18029E, 0xABD5617D,
  0xB002C3D3, 0xD525DD83, 0xBE4A0FBE, 0x71762B65, 0xC19FA969, 0x178AFECE, 0x279284C0,
  0x2B69CEED, 0xF5C36BF6, 0x1517B98C, 0xD0C90D56, 0x752505D7, 0x2F1DD504, 0x5B17644D,
  0x155695D7, 0xD5C16E67, 0x61EF001E, 0xF8045225, 0x43557755, 0x15069D06, 0xD7200084,
  0x01030A10, 0x055F4290, 0x00033494, 0x41948985, 0x75A96287, 0x5DB3745D, 0xA7589A55,
  0x88DB4881, 0x12F895D6, 0xC8A8578A, 0xD6064962, 0xAB4097D0, 0x435AE6CD, 0xD6A5C047,
  0xB435C37E, 0xCD6C5893, 0x2B7CA435, 0x0003674E, 0x57D8C02E, 0xA58A4D53, 0x4A3D6323,
  0x74561DB4, 0x6950F4BD, 0x1E06955F, 0xD59D8700, 0x69A75A96, 0x5A5B16A5, 0x9D9E9489,
  0x1F17916A, 0x58661780, 0xA125075F, 0xA5A2E181, 0xA3E8CA35, 0xE90A468E, 0x2A3A92A4,
  0x28459312, 0x9CA5295A, 0x00296A6E, 0xD7C1167F, 0x6A9000A8, 0x92A8A96A, 0xA95ED65A,
  0xABEA7AB6, 0x4105F6AE, 0xF4751149, 0x014247D6, 0x064216F0, 0x5254044D, 0x1015F57D,
  0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault2[] =
{
  0x00000410, /* ratio 53.08 % */
  0xB8003D00, 0x000E8452, 0x00CA0034, 0x0EC00100, 0xD8003080, 0x7093A800, 0x00348021,
  0xD00464E6, 0x8EC7A382, 0x0C8A3F20, 0x00001219, 0x508B0304, 0x800788A9, 0x01260541,
  0x52B9481C, 0x26834B61, 0x9984A409, 0x98896533, 0x04F2093A, 0x8A88B410, 0x4E520B98,
  0x20D068A9, 0xCE003746, 0x20E9346C, 0x0F8B9125, 0xFA8002A3, 0x0053A366, 0x8802A663,
  0x00083290, 0x60DA0032, 0x4A10CA85, 0xEF1A8D56, 0xE72AE800, 0x04AACC6C, 0xA83442AF,
  0x8B09A190, 0x55AA312B, 0x80295548, 0xAA2B5E3C, 0xAE64C865, 0x69268D56, 0xD1A8ACD0,
  0x5DB54320, 0xC005D20D, 0xC71AA2C2, 0x0D632B88, 0x45B386BB, 0x1EC113CD, 0x2D10CD34,
  0x22708D46, 0x99DC4566, 0x7AD498A1, 0x5856E400, 0xC68036B7, 0x355C0045, 0x90E09479,
  0x4AA110D5, 0x3572EBED, 0xD5688873, 0xBA2AC53E, 0x75C75EEE, 0x2AEC4A19, 0xD8C33A75,
  0x9002E110, 0x49AD19BB, 0x5A158614, 0xB9908E6E, 0x15CDD0C6, 0x5D7BB62E, 0x83AFEFA1,
  0x8A856759, 0xEC19A196, 0x13856569, 0x64113F00, 0xC90A5605, 0x0E4290C5, 0x41950429,
  0x9C94311A, 0xD0020B5D, 0xAD9B6C52, 0xA763DDB7, 0x1550C639, 0x44252C00, 0x94A4294C,
  0x052B0004, 0x4E0004D7, 0x0004F000, 0x6328C03D, 0x68CE348C, 0xDE388D63, 0x3C8E63A8,
  0x4A5488EE, 0x9755851A, 0x18CA0E42, 0x05048FC3, 0x1590C009, 0x0CE31541, 0x5E904131,
  0xB7295F73, 0x498E6311, 0x2B001905, 0x5D56E4A4, 0x10A5855D, 0xC931145A, 0xA95D5850,
  0xEA449B15, 0x47568455, 0xDE04418D, 0xD9298E92, 0x85186C55, 0x4D11D0C5, 0x6C9D6456,
  0x10447526, 0x66C27F9F, 0x899B7FD1, 0x12441169, 0x7CD75441, 0x92D8551D, 0x69BA63A2,
  0x02606C51, 0x6C461FF0, 0x6091245A, 0x24780D58, 0x60005241, 0x5E270004, 0xD574D0C5,
  0x83DF96A5, 0x28C43916, 0x47D56856, 0x950C47A1, 0x007F55DA, 0x0C80008C, 0xD927A116,
  0x091C000B, 0x69144583, 0x254690A4, 0x405314C6, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault3[] =
{
  0x0000040C, /* ratio 55.21 % */
  0xB8003F00, 0x80088452, 0x00C20034, 0x0DC00338, 0xE6003780, 0x1073A000, 0x008898C0,
  0x03900040, 0x8CC34EA0, 0xAC805A00, 0x0005E001, 0x24E1201B, 0x0CB128C4, 0x62003200,
  0x245818A6, 0x20190006, 0xC0047495, 0x184E2406, 0x60024F37, 0x0CE6D201, 0x90003A00,
  0x16F201A4, 0x391E9848, 0x1088A42A, 0x408D43A2, 0x8A652681, 0x1C4DA933, 0xA0540131,
  0x46A71369, 0x6A7B1E9D, 0x251419FC, 0x91468D51, 0x336A3802, 0x658258E6, 0x1B54EE73,
  0xB74E2814, 0xB5CAE745, 0xD92C5759, 0xFAF767A0, 0xE857E004, 0xC000C65B, 0x34C0057A,
  0x459A0666, 0xA001E000, 0x8A472212, 0x1CF0831A, 0xC3C991AD, 0x52351885, 0x0AB1A884,
  0x84002980, 0x7340C584, 0x2B340008, 0x1974321D, 0x368025FA, 0x8002AF15, 0xC4A252B2,
  0xC239A73B, 0xF6A1398C, 0x5D1C8E4E, 0xBC3D043A, 0x9EE44638, 0x407CC77D, 0x970009D3,
  0x571235C8, 0xF6001C68, 0x5C01DA8D, 0x80156E70, 0x811C8A99, 0x1E0EF46B, 0xE69678E4,
  0x4917A793, 0x8AF049B0, 0x5F2479C0, 0x845D2064, 0x5952429B, 0xE877D134, 0x54D8F449,
  0x12E4F520, 0xD46A0B79, 0x091F6F1E, 0x0C188008, 0x5842E472, 0x9AE4D012, 0x8841304A,
  0x9DE57DE1, 0x10585CA7, 0x121B04D0, 0x10313C00, 0x90004B48, 0xC5B11659, 0x52688008,
  0x4C506000, 0x9104D007, 0xA585D24A, 0x45174D00, 0x14915E85, 0x4D0064C5, 0x5317D50E,
  0xE69E4802, 0xC5F99450, 0x3D738084, 0x5852D441, 0x90641241, 0x44D26089, 0xC60C8005,
  0x494D0044, 0x9980E4C5, 0x84686268, 0x1841C07E, 0x057891D3, 0x106E1225, 0x4D277929,
  0xE7B53138, 0x10027E69, 0x29B01166, 0x009A4764, 0x0022E058, 0x8478F5AE, 0x88F4008D,
  0x004946A3, 0x95789DE0, 0x8F6938EA, 0x5B06C199, 0x94D00B4C, 0x26A75C95, 0xEC5DAA75,
  0x68D9C6FD, 0x2274512E, 0xE45D107A, 0x864B5412, 0x1A412A55, 0x82114449, 0xD61ADE0B,
  0xC710455D, 0xE20CAD51, 0xB6481D1A, 0x4A9C0441, 0xABAB0612, 0xD64D90A9, 0xDC006515,
  0x01B6D610, 0x00000001, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault4[] =
{
  0x00000390, /* ratio 62.28 % */
  0xB8002300, 0x800A4452, 0x00E80032, 0x0E4003A8, 0x40003700, 0x26F00424, 0x14240022,
  0x0839B401, 0x8240A3A0, 0x013C0054, 0x00083210, 0x00891626, 0xA0C002A8, 0x444990C9,
  0x11D27002, 0x45818100, 0x818CD4B0, 0x000CA793, 0x00D00033, 0x0D800350, 0xE0003700,
  0x00039000, 0x0060000C, 0x877001C4, 0x798543A3, 0x93480216, 0x2D800E11, 0x0800BA00,
  0x000E6003, 0x00CC0032, 0x0D000338, 0xD6003500, 0x60036000, 0x00138007, 0x03D00078,
  0x31800F00, 0x1000EC00, 0x002350F3, 0x005C0016, 0xE3B16178, 0x6A5E824D, 0xA7E22E3E,
  0x21824FE6, 0x30010000, 0x00090002, 0x36440025, 0x00054001, 0x00520014, 0x20651CA8,
  0x492D2280, 0x12B2C802, 0x5091CC40, 0xD001EC00, 0x29C98007, 0x011A5400, 0x0022E470,
  0x9C960025, 0x8003A004, 0x007C0008, 0x05A000F8, 0x0021CE80, 0x321000AC, 0xBC934013,
  0x68FC01D2, 0xCE01000C, 0x561515EF, 0x3CD1D874, 0x010C8CC8, 0x0098EDBB, 0x7C867727,
  0x0F6422F9, 0xE44E0160, 0x96656515, 0x26015C42, 0xE00A4757, 0x665712A4, 0x59174579,
  0x00647559, 0xA6C1284E, 0xE00F4752, 0x084295C4, 0x4551046D, 0x62146620, 0x70351D45,
  0x35EA465E, 0x08485164, 0x4F59280D, 0x93F4122F, 0x45053863, 0x21434123, 0x197A6278,
  0x4F112439, 0xDE84123A, 0x3459EB44, 0x0A090023, 0x168F6289, 0x8EE488D9, 0x5128AA44,
  0x8030008E, 0x4D658B13, 0x6890D124, 0x4E225421, 0x800871C0, 0x57611257, 0x29104311,
  0x380411D4, 0x81185999, 0xA2D43185, 0x59A10645, 0x4E600393, 0x66579084, 0x9BDF0995,
  0x44592535, 0xC5A5FB6E, 0xE11D46E4, 0x7B7DD049, 0x44A85A35, 0xA188BA58, 0xE9655B82,
  0x640058E0, 0x92472905, 0x4E01A002, 0x17E571B9, 0xA4497442, 0xA95CA15D, 0x70A62055,
  0x44910456, 0x012A7662, 0x8439C54E, 0x0259A690, 0x085D1646, 0x44E9CAC1, 0x5049591D,
  0xF555156E, 0xD61672E8, 0x19A0EC24, 0x46652B19, 0x91D5A96A, 0x6B36C37F, 0xD6AE4595,
  0x00406DA4, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 1280, 720 }};
static const XRect _Const0001 = {{ 0, 0 }, { 1280, 64 }};
static const XColor _Const0002 = { 0x0B, 0x12, 0x20, 0xFF };
static const XRect _Const0003 = {{ 934, 18 }, { 1160, 48 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x0002 };
static const XRect _Const0005 = {{ 1195, 3 }, { 1255, 59 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0016 };
static const XRect _Const0007 = {{ 1115, 7 }, { 1226, 57 }};
static const XRect _Const0008 = {{ 23, 5 }, { 249, 60 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x001D };
static const XRect _Const000A = {{ 0, 64 }, { 1280, 720 }};
static const XColor _Const000B = { 0x14, 0x1A, 0x2B, 0xFF };
static const XPoint _Const000C = { 1280, 64 };
static const XPoint _Const000D = { 0, 64 };
static const XColor _Const000E = { 0x55, 0x5D, 0x6D, 0xFF };
static const XRect _Const000F = {{ 386, 270 }, { 894, 754 }};
static const XRect _Const0010 = {{ 568, 82 }, { 707, 180 }};
static const XRect _Const0011 = {{ 533, 182 }, { 742, 219 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x0028 };
static const XRect _Const0013 = {{ 462, 223 }, { 816, 255 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x0037 };
static const XStringRes _Const0015 = { _StringsDefault0, 0x0055 };
static const XStringRes _Const0016 = { _StringsDefault0, 0x006D };
static const XStringRes _Const0017 = { _StringsDefault0, 0x0074 };
static const XStringRes _Const0018 = { _StringsDefault0, 0x0099 };
static const XRect _Const0019 = {{ 0, 64 }, { 1280, 615 }};
static const XPoint _Const001A = { 1280, 615 };
static const XPoint _Const001B = { 0, 615 };
static const XRect _Const001C = {{ 48, 103 }, { 264, 139 }};
static const XStringRes _Const001D = { _StringsDefault0, 0x00A7 };
static const XRect _Const001E = {{ 48, 139 }, { 300, 157 }};
static const XStringRes _Const001F = { _StringsDefault0, 0x00BB };
static const XRect _Const0020 = {{ 1048, 116 }, { 1186, 164 }};
static const XRect _Const0021 = {{ 42, 186 }, { 1210, 588 }};
static const XRect _Const0022 = {{ 118, 184 }, { 1186, 588 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x00E5 };
static const XStringRes _Const0024 = { _StringsDefault0, 0x00FE };
static const XStringRes _Const0025 = { _StringsDefault0, 0x0113 };
static const XStringRes _Const0026 = { _StringsDefault0, 0x012C };
static const XStringRes _Const0027 = { _StringsDefault0, 0x0133 };
static const XStringRes _Const0028 = { _StringsDefault0, 0x0159 };
static const XStringRes _Const0029 = { _StringsDefault0, 0x017F };
static const XStringRes _Const002A = { _StringsDefault0, 0x01A5 };
static const XRect _Const002B = {{ 0, 615 }, { 1280, 720 }};
static const XStringRes _Const002C = { _StringsDefault0, 0x01AD };
static const XStringRes _Const002D = { _StringsDefault0, 0x01BC };
static const XStringRes _Const002E = { _StringsDefault0, 0x01CF };
static const XStringRes _Const002F = { _StringsDefault0, 0x01EA };
static const XStringRes _Const0030 = { _StringsDefault0, 0x01F6 };
static const XStringRes _Const0031 = { _StringsDefault1, 0x0002 };
static const XStringRes _Const0032 = { _StringsDefault1, 0x0018 };
static const XStringRes _Const0033 = { _StringsDefault1, 0x002A };
static const XStringRes _Const0034 = { _StringsDefault1, 0x0042 };
static const XRect _Const0035 = {{ 0, 0 }, { 1280, 105 }};
static const XRect _Const0036 = {{ 88, 25 }, { 1248, 81 }};
static const XRect _Const0037 = {{ 32, 33 }, { 72, 73 }};
static const XStringRes _Const0038 = { _StringsDefault1, 0x0057 };
static const XPoint _Const0039 = { 87, 25 };
static const XPoint _Const003A = { 1248, 25 };
static const XPoint _Const003B = { 1248, 81 };
static const XPoint _Const003C = { 87, 81 };
static const XPoint _Const003D = { 32, 33 };
static const XPoint _Const003E = { 72, 33 };
static const XPoint _Const003F = { 72, 73 };
static const XPoint _Const0040 = { 32, 73 };
static const XRect _Const0041 = {{ 0, 0 }, { 316, 79 }};
static const XRect _Const0042 = {{ 2, 3 }, { 305, 75 }};
static const XColor _Const0043 = { 0x1A, 0x24, 0x42, 0xFF };
static const XRect _Const0044 = {{ 1, 3 }, { 305, 75 }};
static const XColor _Const0045 = { 0x3A, 0x5F, 0xA0, 0xFF };
static const XRect _Const0046 = {{ 2, 4 }, { 60, 73 }};
static const XColor _Const0047 = { 0x2B, 0x37, 0x60, 0xFF };
static const XRect _Const0048 = {{ 243, 4 }, { 304, 74 }};
static const XColor _Const0049 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const004A = {{ -20, 21 }, { 80, 51 }};
static const XStringRes _Const004B = { _StringsDefault1, 0x0069 };
static const XRect _Const004C = {{ 224, 22 }, { 324, 52 }};
static const XStringRes _Const004D = { _StringsDefault1, 0x006D };
static const XPoint _Const004E = { 246, 4 };
static const XPoint _Const004F = { 304, 4 };
static const XPoint _Const0050 = { 304, 74 };
static const XPoint _Const0051 = { 246, 74 };
static const XPoint _Const0052 = { 2, 9 };
static const XPoint _Const0053 = { 60, 9 };
static const XPoint _Const0054 = { 60, 71 };
static const XPoint _Const0055 = { 2, 71 };
static const XRect _Const0056 = {{ 102, 21 }, { 202, 51 }};
static const XStringRes _Const0057 = { _StringsDefault1, 0x0071 };
static const XStringRes _Const0058 = { _StringsDefault1, 0x0075 };
static const XStringRes _Const0059 = { _StringsDefault1, 0x0080 };
static const XStringRes _Const005A = { _StringsDefault1, 0x008A };
static const XStringRes _Const005B = { _StringsDefault1, 0x0094 };
static const XStringRes _Const005C = { _StringsDefault1, 0x009C };
static const XColor _Const005D = { 0x54, 0x55, 0x5E, 0xFF };
static const XStringRes _Const005E = { _StringsDefault1, 0x00A4 };
static const XStringRes _Const005F = { _StringsDefault1, 0x00AA };
static const XStringRes _Const0060 = { _StringsDefault1, 0x00B0 };
static const XStringRes _Const0061 = { _StringsDefault1, 0x00B6 };
static const XStringRes _Const0062 = { _StringsDefault1, 0x00BC };
static const XStringRes _Const0063 = { _StringsDefault1, 0x00C2 };
static const XStringRes _Const0064 = { _StringsDefault1, 0x00C8 };
static const XStringRes _Const0065 = { _StringsDefault1, 0x00CE };
static const XStringRes _Const0066 = { _StringsDefault1, 0x00D4 };
static const XStringRes _Const0067 = { _StringsDefault1, 0x00DA };
static const XStringRes _Const0068 = { _StringsDefault1, 0x00E0 };
static const XStringRes _Const0069 = { _StringsDefault1, 0x00E6 };
static const XRect _Const006A = {{ 25, 139 }, { 252, 211 }};
static const XStringRes _Const006B = { _StringsDefault1, 0x00EC };
static const XRect _Const006C = {{ 21, 199 }, { 1246, 298 }};
static const XStringRes _Const006D = { _StringsDefault1, 0x00FB };
static const XRect _Const006E = {{ 0, 66 }, { 1280, 141 }};
static const XPoint _Const006F = { 1280, 142 };
static const XPoint _Const0070 = { 0, 142 };
static const XRect _Const0071 = {{ 84, 84 }, { 458, 125 }};
static const XStringRes _Const0072 = { _StringsDefault1, 0x010E };
static const XRect _Const0073 = {{ 4, 69 }, { 91, 142 }};
static const XRect _Const0074 = {{ 25, 267 }, { 270, 339 }};
static const XStringRes _Const0075 = { _StringsDefault1, 0x0125 };
static const XRect _Const0076 = {{ 20, 336 }, { 632, 434 }};
static const XStringRes _Const0077 = { _StringsDefault1, 0x0136 };
static const XRect _Const0078 = {{ 663, 269 }, { 991, 341 }};
static const XStringRes _Const0079 = { _StringsDefault1, 0x013B };
static const XRect _Const007A = {{ 656, 335 }, { 1268, 433 }};
static const XStringRes _Const007B = { _StringsDefault1, 0x0154 };
static const XRect _Const007C = {{ 25, 412 }, { 404, 485 }};
static const XStringRes _Const007D = { _StringsDefault1, 0x0159 };
static const XRect _Const007E = {{ 24, 476 }, { 636, 574 }};
static const XStringRes _Const007F = { _StringsDefault1, 0x016F };
static const XRect _Const0080 = {{ 662, 414 }, { 990, 486 }};
static const XStringRes _Const0081 = { _StringsDefault1, 0x0175 };
static const XRect _Const0082 = {{ 656, 476 }, { 1268, 574 }};
static const XStringRes _Const0083 = { _StringsDefault1, 0x018A };
static const XPoint _Const0084 = { 5, 68 };
static const XPoint _Const0085 = { 85, 68 };
static const XPoint _Const0086 = { 85, 138 };
static const XPoint _Const0087 = { 5, 138 };
static const XRect _Const0088 = {{ 54, 608 }, { 1207, 689 }};
static const XStringRes _Const0089 = { _StringsDefault1, 0x0195 };
static const XColor _Const008A = { 0x20, 0x2B, 0x4B, 0xFF };
static const XColor _Const008B = { 0x33, 0x4F, 0x93, 0xFF };
static const XRect _Const008C = {{ 0, 0 }, { 663, 87 }};
static const XRect _Const008D = {{ 3, 6 }, { 643, 76 }};
static const XColor _Const008E = { 0x1D, 0x29, 0x48, 0xFF };
static const XColor _Const008F = { 0x3C, 0x65, 0xA7, 0xFF };
static const XRect _Const0090 = {{ 14, 17 }, { 491, 64 }};
static const XRect _Const0091 = {{ 528, 14 }, { 578, 64 }};
static const XPoint _Const0092 = { 528, 16 };
static const XPoint _Const0093 = { 578, 16 };
static const XPoint _Const0094 = { 578, 63 };
static const XPoint _Const0095 = { 528, 63 };
static const XStringRes _Const0096 = { _StringsDefault1, 0x01A4 };
static const XStringRes _Const0097 = { _StringsDefault1, 0x01C1 };
static const XStringRes _Const0098 = { _StringsDefault1, 0x01D7 };
static const XStringRes _Const0099 = { _StringsDefault1, 0x01E6 };
static const XStringRes _Const009A = { _StringsDefault1, 0x01F8 };
static const XStringRes _Const009B = { _StringsDefault2, 0x0002 };
static const XRect _Const009C = {{ 0, 0 }, { 160, 120 }};
static const XPoint _Const009D = { 0, 120 };
static const XPoint _Const009E = { 160, 120 };
static const XPoint _Const009F = { 160, 0 };
static const XPoint _Const00A0 = { 0, 0 };
static const XRect _Const00A1 = {{ 2, 2 }, { 157, 117 }};
static const XStringRes _Const00A2 = { _StringsDefault2, 0x0020 };
static const XColor _Const00A3 = { 0x00, 0x00, 0x00, 0xFF };
static const XPoint _Const00A4 = { 50, 70 };
static const XPoint _Const00A5 = { 50, 50 };
static const XStringRes _Const00A6 = { _StringsDefault2, 0x0028 };
static const XPoint _Const00A7 = { 20, 20 };
static const XPoint _Const00A8 = { -10, -10 };
static const XColor _Const00A9 = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const00AA = { _StringsDefault2, 0x002F };
static const XStringRes _Const00AB = { _StringsDefault2, 0x0033 };
static const XStringRes _Const00AC = { _StringsDefault2, 0x0037 };
static const XStringRes _Const00AD = { _StringsDefault2, 0x003B };
static const XRect _Const00AE = {{ 94, 84 }, { 468, 125 }};
static const XStringRes _Const00AF = { _StringsDefault2, 0x003F };
static const XRect _Const00B0 = {{ 66, 166 }, { 1228, 692 }};
static const XStringRes _Const00B1 = { _StringsDefault2, 0x004A };
static const XStringRes _Const00B2 = { _StringsDefault2, 0x0058 };
static const XStringRes _Const00B3 = { _StringsDefault2, 0x0069 };
static const XStringRes _Const00B4 = { _StringsDefault2, 0x0077 };
static const XStringRes _Const00B5 = { _StringsDefault2, 0x0085 };
static const XStringRes _Const00B6 = { _StringsDefault2, 0x00B9 };
static const XStringRes _Const00B7 = { _StringsDefault2, 0x00E3 };
static const XStringRes _Const00B8 = { _StringsDefault2, 0x010B };
static const XPoint _Const00B9 = { 66, 166 };
static const XPoint _Const00BA = { 1228, 166 };
static const XPoint _Const00BB = { 1228, 692 };
static const XPoint _Const00BC = { 66, 692 };
static const XStringRes _Const00BD = { _StringsDefault2, 0x0130 };
static const XStringRes _Const00BE = { _StringsDefault2, 0x0159 };
static const XStringRes _Const00BF = { _StringsDefault2, 0x0164 };
static const XStringRes _Const00C0 = { _StringsDefault2, 0x016F };
static const XRect _Const00C1 = {{ 67, 166 }, { 1229, 625 }};
static const XStringRes _Const00C2 = { _StringsDefault2, 0x017F };
static const XStringRes _Const00C3 = { _StringsDefault2, 0x01AA };
static const XStringRes _Const00C4 = { _StringsDefault2, 0x01D7 };
static const XStringRes _Const00C5 = { _StringsDefault3, 0x0002 };
static const XStringRes _Const00C6 = { _StringsDefault3, 0x0021 };
static const XStringRes _Const00C7 = { _StringsDefault3, 0x004A };
static const XStringRes _Const00C8 = { _StringsDefault3, 0x005F };
static const XStringRes _Const00C9 = { _StringsDefault3, 0x0074 };
static const XPoint _Const00CA = { 1228, 625 };
static const XPoint _Const00CB = { 65, 625 };
static const XRect _Const00CC = {{ 66, 627 }, { 1224, 723 }};
static const XStringRes _Const00CD = { _StringsDefault3, 0x0089 };
static const XRect _Const00CE = {{ 4, 150 }, { 1280, 594 }};
static const XRect _Const00CF = {{ 94, 84 }, { 614, 124 }};
static const XStringRes _Const00D0 = { _StringsDefault3, 0x00A2 };
static const XPoint _Const00D1 = { 39, 150 };
static const XPoint _Const00D2 = { 1243, 150 };
static const XPoint _Const00D3 = { 1243, 626 };
static const XPoint _Const00D4 = { 39, 626 };
static const XRect _Const00D5 = {{ 354, 195 }, { 964, 281 }};
static const XRect _Const00D6 = {{ 361, 150 }, { 971, 208 }};
static const XStringRes _Const00D7 = { _StringsDefault3, 0x00BA };
static const XRect _Const00D8 = {{ 360, 280 }, { 970, 338 }};
static const XStringRes _Const00D9 = { _StringsDefault3, 0x00CD };
static const XRect _Const00DA = {{ 354, 325 }, { 964, 411 }};
static const XRect _Const00DB = {{ 360, 414 }, { 970, 472 }};
static const XStringRes _Const00DC = { _StringsDefault3, 0x00DC };
static const XRect _Const00DD = {{ 354, 458 }, { 964, 544 }};
static const XRect _Const00DE = {{ 360, 537 }, { 970, 595 }};
static const XStringRes _Const00DF = { _StringsDefault3, 0x00F3 };
static const XRect _Const00E0 = {{ 84, 1788 }, { 1360, 2198 }};
static const XRect _Const00E1 = {{ 2, 48 }, { 1278, 736 }};
static const XStringRes _Const00E2 = { _StringsDefault3, 0x0120 };
static const XStringRes _Const00E3 = { _StringsDefault3, 0x0132 };
static const XStringRes _Const00E4 = { _StringsDefault3, 0x0142 };
static const XStringRes _Const00E5 = { _StringsDefault3, 0x0149 };
static const XStringRes _Const00E6 = { _StringsDefault3, 0x0153 };
static const XStringRes _Const00E7 = { _StringsDefault3, 0x0159 };
static const XStringRes _Const00E8 = { _StringsDefault3, 0x0162 };
static const XRect _Const00E9 = {{ 114, 146 }, { 724, 204 }};
static const XStringRes _Const00EA = { _StringsDefault3, 0x016A };
static const XRect _Const00EB = {{ 114, 204 }, { 476, 356 }};
static const XRect _Const00EC = {{ 484, 204 }, { 846, 356 }};
static const XRect _Const00ED = {{ 846, 204 }, { 1208, 356 }};
static const XRect _Const00EE = {{ 114, 298 }, { 724, 356 }};
static const XStringRes _Const00EF = { _StringsDefault3, 0x0171 };
static const XRect _Const00F0 = {{ 122, 356 }, { 484, 508 }};
static const XRect _Const00F1 = {{ 484, 356 }, { 846, 508 }};
static const XRect _Const00F2 = {{ 450, 365 }, { 516, 423 }};
static const XStringRes _Const00F3 = { _StringsDefault3, 0x0178 };
static const XRect _Const00F4 = {{ 846, 356 }, { 1208, 508 }};
static const XRect _Const00F5 = {{ 812, 364 }, { 878, 422 }};
static const XRect _Const00F6 = {{ 114, 450 }, { 724, 508 }};
static const XStringRes _Const00F7 = { _StringsDefault3, 0x017C };
static const XRect _Const00F8 = {{ 79, 475 }, { 193, 573 }};
static const XRect _Const00F9 = {{ 246, 474 }, { 360, 572 }};
static const XRect _Const00FA = {{ 165, 494 }, { 775, 552 }};
static const XStringRes _Const00FB = { _StringsDefault3, 0x018A };
static const XRect _Const00FC = {{ 334, 494 }, { 944, 552 }};
static const XStringRes _Const00FD = { _StringsDefault3, 0x0194 };
static const XStringRes _Const00FE = { _StringsDefault3, 0x019E };
static const XRect _Const00FF = {{ 499, 214 }, { 859, 298 }};
static const XStringRes _Const0100 = { _StringsDefault3, 0x01A5 };
static const XColor _Const0101 = { 0xFF, 0x6B, 0x5D, 0xFF };
static const XRect _Const0102 = {{ 462, 244 }, { 486, 268 }};
static const XRect _Const0103 = {{ 418, 227 }, { 872, 433 }};
static const XStringRes _Const0104 = { _StringsDefault3, 0x01BB };
static const XRect _Const0105 = {{ 440, 362 }, { 852, 454 }};
static const XColor _Const0106 = { 0xA7, 0xB8, 0xE6, 0xFF };
static const XRect _Const0107 = {{ 462, 442 }, { 830, 506 }};
static const XRect _Const0108 = {{ 534, 465 }, { 550, 483 }};
static const XRect _Const0109 = {{ 556, 454 }, { 775, 494 }};
static const XStringRes _Const010A = { _StringsDefault3, 0x01C6 };
static const XPoint _Const010B = { 462, 442 };
static const XPoint _Const010C = { 830, 442 };
static const XPoint _Const010D = { 830, 506 };
static const XPoint _Const010E = { 462, 506 };
static const XStringRes _Const010F = { _StringsDefault3, 0x01DB };
static const XColor _Const0110 = { 0xFB, 0xA1, 0x98, 0xFF };
static const XRect _Const0111 = {{ 441, 202 }, { 801, 286 }};
static const XStringRes _Const0112 = { _StringsDefault3, 0x01E6 };
static const XColor _Const0113 = { 0xF5, 0xF7, 0xFF, 0xFF };
static const XRect _Const0114 = {{ 404, 331 }, { 950, 538 }};
static const XStringRes _Const0115 = { _StringsDefault3, 0x01FB };
static const XRect _Const0116 = {{ 415, 262 }, { 827, 309 }};
static const XRect _Const0117 = {{ 438, 507 }, { 806, 571 }};
static const XColor _Const0118 = { 0x4A, 0x9A, 0xE8, 0xFF };
static const XRect _Const0119 = {{ 534, 519 }, { 753, 559 }};
static const XStringRes _Const011A = { _StringsDefault4, 0x0002 };
static const XRect _Const011B = {{ 416, 308 }, { 828, 400 }};
static const XStringRes _Const011C = { _StringsDefault4, 0x0013 };
static const XRect _Const011D = {{ 521, 64 }, { 721, 240 }};
static const XPoint _Const011E = { 438, 507 };
static const XPoint _Const011F = { 806, 507 };
static const XPoint _Const0120 = { 806, 571 };
static const XPoint _Const0121 = { 438, 571 };
static const XColor _Const0122 = { 0x8F, 0xBF, 0xED, 0xFF };
static const XRect _Const0123 = {{ 0, 0 }, { 470, 170 }};
static const XPoint _Const0124 = { 10, 160 };
static const XPoint _Const0125 = { 460, 160 };
static const XPoint _Const0126 = { 460, 10 };
static const XPoint _Const0127 = { 10, 10 };
static const XRect _Const0128 = {{ 160, 130 }, { 310, 160 }};
static const XColor _Const0129 = { 0xA5, 0xA3, 0xA2, 0xFF };
static const XRect _Const012A = {{ 400, 100 }, { 460, 130 }};
static const XColor _Const012B = { 0xFF, 0x00, 0x00, 0xFF };
static const XRect _Const012C = {{ 10, 100 }, { 70, 130 }};
static const XRect _Const012D = {{ 10, 70 }, { 60, 100 }};
static const XColor _Const012E = { 0x4A, 0x6F, 0xA5, 0xFF };
static const XRect _Const012F = {{ 40, 10 }, { 70, 40 }};
static const XStringRes _Const0130 = { _StringsDefault4, 0x0024 };
static const XColor _Const0131 = { 0xFA, 0xF5, 0xFF, 0xFF };
static const XRect _Const0132 = {{ 70, 10 }, { 100, 40 }};
static const XRect _Const0133 = {{ 100, 10 }, { 130, 40 }};
static const XRect _Const0134 = {{ 130, 10 }, { 160, 40 }};
static const XRect _Const0135 = {{ 160, 10 }, { 190, 40 }};
static const XRect _Const0136 = {{ 190, 10 }, { 220, 40 }};
static const XRect _Const0137 = {{ 220, 10 }, { 250, 40 }};
static const XRect _Const0138 = {{ 250, 10 }, { 280, 40 }};
static const XRect _Const0139 = {{ 280, 10 }, { 310, 40 }};
static const XRect _Const013A = {{ 310, 10 }, { 340, 40 }};
static const XRect _Const013B = {{ 340, 10 }, { 370, 40 }};
static const XRect _Const013C = {{ 50, 40 }, { 80, 70 }};
static const XRect _Const013D = {{ 80, 40 }, { 110, 70 }};
static const XRect _Const013E = {{ 110, 40 }, { 140, 70 }};
static const XRect _Const013F = {{ 140, 40 }, { 170, 70 }};
static const XRect _Const0140 = {{ 170, 40 }, { 200, 70 }};
static const XRect _Const0141 = {{ 200, 40 }, { 230, 70 }};
static const XRect _Const0142 = {{ 230, 40 }, { 260, 70 }};
static const XRect _Const0143 = {{ 260, 40 }, { 290, 70 }};
static const XRect _Const0144 = {{ 290, 40 }, { 320, 70 }};
static const XRect _Const0145 = {{ 320, 40 }, { 350, 70 }};
static const XRect _Const0146 = {{ 350, 40 }, { 380, 70 }};
static const XRect _Const0147 = {{ 380, 40 }, { 410, 70 }};
static const XRect _Const0148 = {{ 60, 70 }, { 90, 100 }};
static const XRect _Const0149 = {{ 90, 70 }, { 120, 100 }};
static const XRect _Const014A = {{ 120, 70 }, { 150, 100 }};
static const XRect _Const014B = {{ 150, 70 }, { 180, 100 }};
static const XRect _Const014C = {{ 180, 70 }, { 210, 100 }};
static const XRect _Const014D = {{ 210, 70 }, { 240, 100 }};
static const XRect _Const014E = {{ 240, 70 }, { 270, 100 }};
static const XRect _Const014F = {{ 270, 70 }, { 300, 100 }};
static const XRect _Const0150 = {{ 300, 70 }, { 330, 100 }};
static const XRect _Const0151 = {{ 330, 70 }, { 360, 100 }};
static const XRect _Const0152 = {{ 360, 70 }, { 390, 100 }};
static const XRect _Const0153 = {{ 390, 70 }, { 420, 100 }};
static const XRect _Const0154 = {{ 70, 100 }, { 100, 130 }};
static const XRect _Const0155 = {{ 100, 100 }, { 130, 130 }};
static const XRect _Const0156 = {{ 130, 100 }, { 160, 130 }};
static const XRect _Const0157 = {{ 160, 100 }, { 190, 130 }};
static const XRect _Const0158 = {{ 190, 100 }, { 220, 130 }};
static const XRect _Const0159 = {{ 220, 100 }, { 250, 130 }};
static const XRect _Const015A = {{ 250, 100 }, { 280, 130 }};
static const XRect _Const015B = {{ 280, 100 }, { 310, 130 }};
static const XRect _Const015C = {{ 310, 100 }, { 340, 130 }};
static const XRect _Const015D = {{ 340, 100 }, { 370, 130 }};
static const XRect _Const015E = {{ 370, 100 }, { 400, 130 }};
static const XRect _Const015F = {{ 75, 130 }, { 225, 160 }};
static const XRect _Const0160 = {{ 10, 40 }, { 50, 70 }};
static const XRect _Const0161 = {{ 400, 10 }, { 460, 40 }};
static const XRect _Const0162 = {{ 420, 40 }, { 460, 100 }};
static const XStringRes _Const0163 = { _StringsDefault4, 0x0028 };
static const XStringRes _Const0164 = { _StringsDefault4, 0x0059 };
static const XStringRes _Const0165 = { _StringsDefault4, 0x005D };
static const XStringRes _Const0166 = { _StringsDefault4, 0x0061 };
static const XRect _Const0167 = {{ 0, 0 }, { 1276, 698 }};
static const XRect _Const0168 = {{ 10, 264 }, { 1263, 668 }};
static const XRect _Const0169 = {{ 47, 167 }, { 1243, 689 }};
static const XStringRes _Const016A = { _StringsDefault4, 0x0093 };
static const XStringRes _Const016B = { _StringsDefault4, 0x009B };
static const XStringRes _Const016C = { _StringsDefault4, 0x00A3 };
static const XStringRes _Const016D = { _StringsDefault4, 0x00AC };
static const XStringRes _Const016E = { _StringsDefault4, 0x00B7 };
static const XStringRes _Const016F = { _StringsDefault4, 0x00C1 };
static const XPoint _Const0170 = { 46, 166 };
static const XPoint _Const0171 = { 1242, 166 };
static const XPoint _Const0172 = { 1242, 688 };
static const XPoint _Const0173 = { 46, 688 };
static const XStringRes _Const0174 = { _StringsDefault4, 0x00C7 };
static const XStringRes _Const0175 = { _StringsDefault4, 0x00D6 };
static const XRect _Const0176 = {{ 32, 166 }, { 396, 696 }};
static const XRect _Const0177 = {{ 33, 165 }, { 397, 695 }};
static const XRect _Const0178 = {{ 476, 164 }, { 1236, 264 }};
static const XRect _Const0179 = {{ 476, 310 }, { 1236, 410 }};
static const XRect _Const017A = {{ 476, 456 }, { 1236, 556 }};
static const XRect _Const017B = {{ 476, 594 }, { 1236, 694 }};
static const XRect _Const017C = {{ 476, 166 }, { 1236, 266 }};
static const XRect _Const017D = {{ 476, 596 }, { 1236, 696 }};
static const XRect _Const017E = {{ 514, 190 }, { 564, 240 }};
static const XRect _Const017F = {{ 514, 334 }, { 564, 384 }};
static const XRect _Const0180 = {{ 514, 480 }, { 564, 530 }};
static const XRect _Const0181 = {{ 514, 618 }, { 564, 668 }};
static const XStringRes _Const0182 = { _StringsDefault4, 0x00E3 };
static const XRect _Const0183 = {{ 513, 333 }, { 563, 383 }};
static const XStringRes _Const0184 = { _StringsDefault4, 0x00E7 };
static const XRect _Const0185 = {{ 513, 481 }, { 563, 531 }};
static const XStringRes _Const0186 = { _StringsDefault4, 0x00EB };
static const XRect _Const0187 = {{ 513, 621 }, { 563, 671 }};
static const XStringRes _Const0188 = { _StringsDefault4, 0x00EF };
static const XRect _Const0189 = {{ 590, 201 }, { 690, 231 }};
static const XStringRes _Const018A = { _StringsDefault4, 0x00F3 };
static const XRect _Const018B = {{ 590, 345 }, { 690, 375 }};
static const XStringRes _Const018C = { _StringsDefault4, 0x00FD };
static const XRect _Const018D = {{ 590, 490 }, { 690, 520 }};
static const XStringRes _Const018E = { _StringsDefault4, 0x0107 };
static const XRect _Const018F = {{ 589, 628 }, { 689, 658 }};
static const XStringRes _Const0190 = { _StringsDefault4, 0x0111 };
static const XRect _Const0191 = {{ 61, 190 }, { 184, 220 }};
static const XStringRes _Const0192 = { _StringsDefault4, 0x011B };
static const XRect _Const0193 = {{ 61, 237 }, { 111, 287 }};
static const XRect _Const0194 = {{ 61, 295 }, { 111, 345 }};
static const XRect _Const0195 = {{ 97, 249 }, { 234, 279 }};
static const XStringRes _Const0196 = { _StringsDefault4, 0x0127 };
static const XRect _Const0197 = {{ 93, 305 }, { 266, 335 }};
static const XStringRes _Const0198 = { _StringsDefault4, 0x0134 };
static const XRect _Const0199 = {{ 50, 426 }, { 215, 456 }};
static const XStringRes _Const019A = { _StringsDefault4, 0x0144 };
static const XRect _Const019B = {{ 56, 492 }, { 372, 571 }};
static const XRect _Const019C = {{ 1057, 192 }, { 1195, 240 }};
static const XStringRes _Const019D = { _StringsDefault4, 0x0152 };
static const XRect _Const019E = {{ 1057, 336 }, { 1195, 384 }};
static const XRect _Const019F = {{ 1057, 483 }, { 1195, 531 }};
static const XRect _Const01A0 = {{ 1057, 623 }, { 1195, 671 }};
static const XRect _Const01A1 = {{ 792, 188 }, { 970, 244 }};
static const XRect _Const01A2 = {{ 792, 330 }, { 970, 386 }};
static const XRect _Const01A3 = {{ 792, 477 }, { 970, 533 }};
static const XRect _Const01A4 = {{ 792, 621 }, { 970, 677 }};
static const XStringRes _Const01A5 = { _StringsDefault4, 0x015C };
static const XRect _Const01A6 = {{ 46, 188 }, { 1242, 308 }};
static const XRect _Const01A7 = {{ 5, 219 }, { 269, 277 }};
static const XRect _Const01A8 = {{ 1036, 223 }, { 1196, 283 }};
static const XStringRes _Const01A9 = { _StringsDefault4, 0x016A };
static const XRect _Const01AA = {{ 84, 219 }, { 386, 277 }};
static const XStringRes _Const01AB = { _StringsDefault4, 0x0179 };
static const XRect _Const01AC = {{ 46, 312 }, { 1242, 432 }};
static const XRect _Const01AD = {{ 90, 342 }, { 392, 400 }};
static const XStringRes _Const01AE = { _StringsDefault4, 0x0193 };
static const XRect _Const01AF = {{ 1037, 346 }, { 1197, 406 }};
static const XRect _Const01B0 = {{ 404, 186 }, { 874, 666 }};
static const XRect _Const01B1 = {{ 562, 218 }, { 742, 258 }};
static const XStringRes _Const01B2 = { _StringsDefault4, 0x01A5 };
static const XRect _Const01B3 = {{ 562, 306 }, { 700, 392 }};
static const XRect _Const01B4 = {{ 588, 534 }, { 768, 574 }};
static const XStringRes _Const01B5 = { _StringsDefault4, 0x01B1 };
static const XRect _Const01B6 = {{ 540, 447 }, { 720, 549 }};
static const XRect _Const01B7 = {{ 588, 392 }, { 768, 432 }};
static const XStringRes _Const01B8 = { _StringsDefault4, 0x01BD };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationLogInScreen, 
  0 )), 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_IsCurrentDialog,
  CoreRoot_IsActiveDialog,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::TitleBar' */
void ApplicationTitleBar__Init( ApplicationTitleBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationTitleBar );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTitleBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0003 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0004 ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const0005 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0006 ));
  CoreRectView__OnSetBounds( &_this->Image1, _Const0007 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0008 );
  ViewsText_OnSetAlignment( &_this->Text2, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0009 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontNormal22, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResBatteryIcon, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::TitleBar' */
void ApplicationTitleBar__ReInit( ApplicationTitleBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsText__ReInit( &_this->Text2 );
}

/* Finalizer method for the class 'Application::TitleBar' */
void ApplicationTitleBar__Done( ApplicationTitleBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsImage__Done( &_this->Image1 );
  ViewsText__Done( &_this->Text2 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::TitleBar' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTitleBar )
EW_END_OF_CLASS_VARIANTS( ApplicationTitleBar )

/* Virtual Method Table (VMT) for the class : 'Application::TitleBar' */
EW_DEFINE_CLASS( ApplicationTitleBar, CoreGroup, Rectangle, Rectangle, Rectangle, 
                 Rectangle, _.VMT, _.VMT, "Application::TitleBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTitleBar )

/* Include a file containing the font resource : 'Application::FontNormal22' */
#include "_ApplicationFontNormal22.h"

/* Table with links to derived variants of the font resource : 'Application::FontNormal22' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontNormal22 )

/* Initializer for the class 'Application::LogInScreen' */
void ApplicationLogInScreen__Init( ApplicationLogInScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationLogInScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  WidgetNumPad__Init( &_this->NumPad, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->LockIcon, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationLogInScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->NumPad, _Const000F );
  CoreRectView__OnSetBounds( &_this->LockIcon, _Const0010 );
  CoreRectView__OnSetBounds( &_this->H1, _Const0011 );
  ViewsText_OnSetAutoSize( &_this->H1, 1 );
  ViewsText_OnSetWrapText( &_this->H1, 0 );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const0012 ));
  CoreRectView__OnSetBounds( &_this->H2, _Const0013 );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetWrapText( &_this->H2, 0 );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0014 ));
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumPad ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->LockIcon ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  _this->NumPad.OnEnterKey = EwNewSlot( _this, ApplicationLogInScreen_SlotOnEnter );
  ViewsImage_OnSetBitmap( &_this->LockIcon, EwLoadResource( &ResLockIconImg, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ApplicationFontNormal28, ResourcesFont ));
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationLogInScreen_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));

  /* Call the user defined constructor */
  ApplicationLogInScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::LogInScreen' */
void ApplicationLogInScreen__ReInit( ApplicationLogInScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  WidgetNumPad__ReInit( &_this->NumPad );
  ViewsImage__ReInit( &_this->LockIcon );
  ViewsText__ReInit( &_this->H1 );
  ViewsText__ReInit( &_this->H2 );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
}

/* Finalizer method for the class 'Application::LogInScreen' */
void ApplicationLogInScreen__Done( ApplicationLogInScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  WidgetNumPad__Done( &_this->NumPad );
  ViewsImage__Done( &_this->LockIcon );
  ViewsText__Done( &_this->H1 );
  ViewsText__Done( &_this->H2 );
  CorePropertyObserver__Done( &_this->PropertyObserver );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationLogInScreen_Init( ApplicationLogInScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );

  EwTrace( "%s", EwLoadString( &_Const0015 ));
}

/* 'C' function for method : 'Application::LogInScreen.SlotOnEnter()' */
void ApplicationLogInScreen_SlotOnEnter( ApplicationLogInScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !EwCompString( _this->NumPad.Number, 0 ))
    return;

  CoreGroup_OnSetEnabled((CoreGroup)&_this->NumPad, 0 );

  if ( !EwCompString( _this->NumPad.Number, EwLoadString( &_Const0016 )))
  {
    EwTrace( "%s", EwLoadString( &_Const0017 ));
    WidgetNumPad_OnSetNumber( &_this->NumPad, 0 );

    if ( _this->Super3.Owner != 0 )
      CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
      0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }
  else
    WidgetNumPad_OnSetNumber( &_this->NumPad, 0 );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationLogInScreen_onEvent( ApplicationLogInScreen _this, XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  else
    if ( result == 2 )
      ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const0018 ));
}

/* Variants derived from the class : 'Application::LogInScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationLogInScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationLogInScreen )

/* Virtual Method Table (VMT) for the class : 'Application::LogInScreen' */
EW_DEFINE_CLASS( ApplicationLogInScreen, CoreGroup, TitleBar, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::LogInScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationLogInScreen )

/* Initializer for the class 'Application::ProfileScreen' */
void ApplicationProfileScreen__Init( ApplicationProfileScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationProfileScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->ButtomLine, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->H2, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  ApplicationProfileButtomBar__Init( &_this->ProfileButtomBar, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationProfileScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0019 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->ButtomLine, _Const001A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->ButtomLine, _Const001B );
  ViewsLine_OnSetColor( &_this->ButtomLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->H1, _Const001C );
  ViewsText_OnSetAutoSize( &_this->H1, 1 );
  ViewsText_OnSetWrapText( &_this->H1, 0 );
  ViewsText_OnSetString( &_this->H1, EwLoadString( &_Const001D ));
  CoreRectView__OnSetBounds( &_this->H2, _Const001E );
  ViewsText_OnSetAutoSize( &_this->H2, 1 );
  ViewsText_OnSetWrapText( &_this->H2, 0 );
  ViewsText_OnSetString( &_this->H2, EwLoadString( &_Const001F ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton, _Const0020 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0021 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 120 );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 5 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( WidgetProfileListItem ));
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0022 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetRetargetDelay( &_this->SlideTouchHandler, 0 );
  _this->SlideTouchHandler.RetargetCondition = CoreRetargetReasonLongPress;
  _this->ProfileH1[ 0 ] = EwShareString( EwLoadString( &_Const0023 ));
  _this->ProfileH1[ 1 ] = EwShareString( EwLoadString( &_Const0024 ));
  _this->ProfileH1[ 2 ] = EwShareString( EwLoadString( &_Const0025 ));
  _this->ProfileH1[ 3 ] = EwShareString( EwLoadString( &_Const0026 ));
  _this->ProfileH2[ 0 ] = EwShareString( EwLoadString( &_Const0027 ));
  _this->ProfileH2[ 1 ] = EwShareString( EwLoadString( &_Const0028 ));
  _this->ProfileH2[ 2 ] = EwShareString( EwLoadString( &_Const0029 ));
  _this->ProfileH2[ 3 ] = EwShareString( EwLoadString( &_Const002A ));
  CoreRectView__OnSetBounds( &_this->ProfileButtomBar, _Const002B );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtomLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->H2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ProfileButtomBar ), 0 );
  ViewsText_OnSetFont( &_this->H1, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->H2, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  _this->AddProfileButton.OnRelease = EwNewSlot( _this, ApplicationProfileScreen_onAddNewProfile );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationProfileScreen_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  _this->ProfileButtomBar.OnPressSetings = EwNewSlot( _this, ApplicationProfileScreen_Slot1 );
  _this->ProfileButtomBar.OnPressStart = EwNewSlot( _this, ApplicationProfileScreen_Slot );

  /* Call the user defined constructor */
  ApplicationProfileScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ProfileScreen' */
void ApplicationProfileScreen__ReInit( ApplicationProfileScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  ViewsLine__ReInit( &_this->ButtomLine );
  ViewsText__ReInit( &_this->H1 );
  ViewsText__ReInit( &_this->H2 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ApplicationProfileButtomBar__ReInit( &_this->ProfileButtomBar );
}

/* Finalizer method for the class 'Application::ProfileScreen' */
void ApplicationProfileScreen__Done( ApplicationProfileScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  ViewsLine__Done( &_this->ButtomLine );
  ViewsText__Done( &_this->H1 );
  ViewsText__Done( &_this->H2 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ApplicationProfileButtomBar__Done( &_this->ProfileButtomBar );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationProfileScreen_Init( ApplicationProfileScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationProfileScreen_SetupLayout( _this );
}

/* 'C' function for method : 'Application::ProfileScreen.SetupLayout()' */
void ApplicationProfileScreen_SetupLayout( ApplicationProfileScreen _this )
{
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 4 );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationProfileScreen_OnLoadItem( ApplicationProfileScreen _this, XObject 
  sender )
{
  XInt32 itemNo;
  WidgetProfileListItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, WidgetProfileListItem );

  if ( itemView == 0 )
    return;

  EwTrace( "%s%i", EwLoadString( &_Const002C ), itemNo );
  EwTrace( "%s%i", EwLoadString( &_Const002D ), _this->VerticalList.SelectedItem );
  _this->SelectedItem = _this->VerticalList.SelectedItem;
  ViewsText_OnSetString( &itemView->H1, _this->ProfileH1[ EwCheckIndex( itemNo, 
  4 )]);
  ViewsText_OnSetString( &itemView->H2, _this->ProfileH2[ EwCheckIndex( itemNo, 
  4 )]);
  WidgetProfileListItem_OnSetOnSelectRadioBT( itemView, EwNewSlot( _this, ApplicationProfileScreen_SlotSelectRadioBT ));
  itemView->ItemNo = (XInt8)itemNo;

  if ( itemView->ItemNo == _this->VerticalList.SelectedItem )
  {
    EwTrace( "%s%i", EwLoadString( &_Const002E ), itemView->ItemNo );
    ViewsImage_OnSetBitmap( &itemView->RadioImg, EwLoadResource( &ResRadioBtClicked, 
    ResourcesBitmap ));
  }
  else
    ViewsImage_OnSetBitmap( &itemView->RadioImg, EwLoadResource( &ResRadioBtNormal, 
    ResourcesBitmap ));

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::ProfileScreen.SlotSelectRadioBT()' */
void ApplicationProfileScreen_SlotSelectRadioBT( ApplicationProfileScreen _this, 
  XObject sender )
{
  WidgetProfileListItem ListItem = EwCastObject( sender, WidgetProfileListItem );

  EwTrace( "%s%*", EwLoadString( &_Const002F ), sender );
  EwTrace( "%s%*", EwLoadString( &_Const0030 ), ListItem );

  if ( ListItem == 0 )
  {
    EwTrace( "%s", EwLoadString( &_Const0031 ));
    return;
  }

  EwTrace( "%s%i", EwLoadString( &_Const0032 ), ListItem->ItemNo );
  CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, ListItem->ItemNo );
  EwTrace( "%s%i", EwLoadString( &_Const0033 ), _this->VerticalList.SelectedItem );
  CoreVerticalList_InvalidateItems( &_this->VerticalList, 0, _this->VerticalList.NoOfItems 
  - 1 );
}

/* 'C' function for method : 'Application::ProfileScreen.Slot()' */
void ApplicationProfileScreen_Slot( ApplicationProfileScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s%i", EwLoadString( &_Const0034 ), _this->SelectedItem );

  if (( _this->SelectedItem >= 0 ) && ( _this->SelectedItem < 3 ))
    EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->SelectedProfile 
    = EwShareString( _this->ProfileH1[ EwCheckIndex( _this->SelectedItem, 4 )]);

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationProfileSurgeryInProgressScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ProfileScreen.Slot1()' */
void ApplicationProfileScreen_Slot1( ApplicationProfileScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ProfileScreen.onAddNewProfile()' */
void ApplicationProfileScreen_onAddNewProfile( ApplicationProfileScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsNewSurgicalProfile, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::ProfileScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationProfileScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationProfileScreen )

/* Virtual Method Table (VMT) for the class : 'Application::ProfileScreen' */
EW_DEFINE_CLASS( ApplicationProfileScreen, CoreGroup, TitleBar, TitleBar, TitleBar, 
                 TitleBar, ProfileH1, SelectedItem, "Application::ProfileScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationProfileScreen )

/* Initializer for the class 'Application::ProfileButtomBar' */
void ApplicationProfileButtomBar__Init( ApplicationProfileButtomBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationProfileButtomBar );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->buttomBarImg, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->StartImg, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->SettingsImg, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->StartBtTouch, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SetingsBtTouch, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationProfileButtomBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0035 );
  CoreRectView__OnSetBounds( &_this->buttomBarImg, _Const0035 );
  CoreRectView__OnSetBounds( &_this->StartImg, _Const0036 );
  CoreRectView__OnSetBounds( &_this->SettingsImg, _Const0037 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0036 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0038 ));
  CoreQuadView__OnSetPoint4( &_this->StartBtTouch, _Const0039 );
  CoreQuadView__OnSetPoint3( &_this->StartBtTouch, _Const003A );
  CoreQuadView__OnSetPoint2( &_this->StartBtTouch, _Const003B );
  CoreQuadView__OnSetPoint1( &_this->StartBtTouch, _Const003C );
  CoreQuadView__OnSetPoint4( &_this->SetingsBtTouch, _Const003D );
  CoreQuadView__OnSetPoint3( &_this->SetingsBtTouch, _Const003E );
  CoreQuadView__OnSetPoint2( &_this->SetingsBtTouch, _Const003F );
  CoreQuadView__OnSetPoint1( &_this->SetingsBtTouch, _Const0040 );
  CoreGroup__Add( _this, ((CoreView)&_this->buttomBarImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StartImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SettingsImg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StartBtTouch ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SetingsBtTouch ), 0 );
  ViewsImage_OnSetBitmap( &_this->buttomBarImg, EwLoadResource( &ResButtomBG, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->StartImg, EwLoadResource( &ResButtomStartBtNormal, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->SettingsImg, EwLoadResource( &ResButtomSetingsBtNormal, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->StartBtTouch.OnRelease = EwNewSlot( _this, ApplicationProfileButtomBar_OnRelease );
  _this->StartBtTouch.OnPress = EwNewSlot( _this, ApplicationProfileButtomBar_OnPress );
  _this->SetingsBtTouch.OnRelease = EwNewSlot( _this, ApplicationProfileButtomBar_OnRelease );
  _this->SetingsBtTouch.OnPress = EwNewSlot( _this, ApplicationProfileButtomBar_OnPress );
}

/* Re-Initializer for the class 'Application::ProfileButtomBar' */
void ApplicationProfileButtomBar__ReInit( ApplicationProfileButtomBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->buttomBarImg );
  ViewsImage__ReInit( &_this->StartImg );
  ViewsImage__ReInit( &_this->SettingsImg );
  ViewsText__ReInit( &_this->Text );
  CoreSimpleTouchHandler__ReInit( &_this->StartBtTouch );
  CoreSimpleTouchHandler__ReInit( &_this->SetingsBtTouch );
}

/* Finalizer method for the class 'Application::ProfileButtomBar' */
void ApplicationProfileButtomBar__Done( ApplicationProfileButtomBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->buttomBarImg );
  ViewsImage__Done( &_this->StartImg );
  ViewsImage__Done( &_this->SettingsImg );
  ViewsText__Done( &_this->Text );
  CoreSimpleTouchHandler__Done( &_this->StartBtTouch );
  CoreSimpleTouchHandler__Done( &_this->SetingsBtTouch );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::ProfileButtomBar.OnPress()' */
void ApplicationProfileButtomBar_OnPress( ApplicationProfileButtomBar _this, XObject 
  sender )
{
  if ( sender == ((XObject)&_this->StartBtTouch ))
    ViewsImage_OnSetBitmap( &_this->StartImg, EwLoadResource( &ResButtomStartBtClicked, 
    ResourcesBitmap ));
  else
    ViewsImage_OnSetBitmap( &_this->SettingsImg, EwLoadResource( &ResButtomSetingsBtClicked, 
    ResourcesBitmap ));
}

/* 'C' function for method : 'Application::ProfileButtomBar.OnRelease()' */
void ApplicationProfileButtomBar_OnRelease( ApplicationProfileButtomBar _this, XObject 
  sender )
{
  if ( sender == ((XObject)&_this->StartBtTouch ))
  {
    ViewsImage_OnSetBitmap( &_this->StartImg, EwLoadResource( &ResButtomStartBtNormal, 
    ResourcesBitmap ));
    EwPostSignal( _this->OnPressStart, ((XObject)_this ));
  }
  else
  {
    ViewsImage_OnSetBitmap( &_this->SettingsImg, EwLoadResource( &ResButtomSetingsBtNormal, 
    ResourcesBitmap ));
    EwPostSignal( _this->OnPressSetings, ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::ProfileButtomBar' */
EW_DEFINE_CLASS_VARIANTS( ApplicationProfileButtomBar )
EW_END_OF_CLASS_VARIANTS( ApplicationProfileButtomBar )

/* Virtual Method Table (VMT) for the class : 'Application::ProfileButtomBar' */
EW_DEFINE_CLASS( ApplicationProfileButtomBar, CoreGroup, OnPressSetings, OnPressSetings, 
                 buttomBarImg, buttomBarImg, _.VMT, _.VMT, "Application::ProfileButtomBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationProfileButtomBar )

/* Initializer for the class 'Application::Settings' */
void ApplicationSettings__Init( ApplicationSettings _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettings );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettings );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Application::Settings' */
void ApplicationSettings__ReInit( ApplicationSettings _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Settings' */
void ApplicationSettings__Done( ApplicationSettings _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Settings.OnGetLoginResult()' */
XInt32 ApplicationSettings_OnGetLoginResult( ApplicationSettings _this )
{
  return _this->LoginResult;
}

/* 'C' function for method : 'Application::Settings.OnSetLoginResult()' */
void ApplicationSettings_OnSetLoginResult( ApplicationSettings _this, XInt32 value )
{
  if ( _this->LoginResult == value )
    return;

  _this->LoginResult = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationSettings_OnGetLoginResult, ApplicationSettings_OnSetLoginResult ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationSettings_UpdateLoginResult( ApplicationSettings _this, XInt32 aNewValue )
{
  if ( aNewValue != _this->LoginResult )
  {
    _this->LoginResult = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationSettings_OnGetLoginResult, 
      ApplicationSettings_OnSetLoginResult ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::Settings.UpdateLoginResult()' */
void ApplicationSettings__UpdateLoginResult( void* _this, XInt32 aNewValue )
{
  ApplicationSettings_UpdateLoginResult((ApplicationSettings)_this, aNewValue );
}

/* Variants derived from the class : 'Application::Settings' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettings )
EW_END_OF_CLASS_VARIANTS( ApplicationSettings )

/* Virtual Method Table (VMT) for the class : 'Application::Settings' */
EW_DEFINE_CLASS( ApplicationSettings, XObject, SelectedProfile, SelectedProfile, 
                 SelectedProfile, SelectedProfile, SelectedProfile, LoginResult, 
                 "Application::Settings" )
EW_END_OF_CLASS( ApplicationSettings )

/* User defined auto object: 'Application::GlobalSettings' */
EW_DEFINE_AUTOOBJECT( ApplicationGlobalSettings, ApplicationSettings )

/* Initializer for the auto object 'Application::GlobalSettings' */
void ApplicationGlobalSettings__Init( ApplicationSettings _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::GlobalSettings' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationGlobalSettings )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationGlobalSettings )

/* Initializer for the class 'Application::SpinButton' */
void ApplicationSpinButton__Init( ApplicationSpinButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSpinButton );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->rctBaseBtn, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctNegBtn, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctPosBtn, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txt1, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->stPostive, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->stNegative, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtValue, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSpinButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0041 );
  CoreRectView__OnSetBounds( &_this->rctBaseBtn, _Const0042 );
  ViewsRectangle_OnSetColor( &_this->rctBaseBtn, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0044 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0045 );
  CoreRectView__OnSetBounds( &_this->rctNegBtn, _Const0046 );
  ViewsRectangle_OnSetColor( &_this->rctNegBtn, _Const0047 );
  CoreRectView__OnSetBounds( &_this->rctPosBtn, _Const0048 );
  ViewsRectangle_OnSetColorBL( &_this->rctPosBtn, _Const0049 );
  ViewsRectangle_OnSetColor( &_this->rctPosBtn, _Const0047 );
  CoreRectView__OnSetBounds( &_this->txt, _Const004A );
  ViewsText_OnSetString( &_this->txt, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->txt1, _Const004C );
  ViewsText_OnSetString( &_this->txt1, EwLoadString( &_Const004D ));
  CoreQuadView__OnSetPoint4( &_this->stPostive, _Const004E );
  CoreQuadView__OnSetPoint3( &_this->stPostive, _Const004F );
  CoreQuadView__OnSetPoint2( &_this->stPostive, _Const0050 );
  CoreQuadView__OnSetPoint1( &_this->stPostive, _Const0051 );
  CoreQuadView__OnSetPoint4( &_this->stNegative, _Const0052 );
  CoreQuadView__OnSetPoint3( &_this->stNegative, _Const0053 );
  CoreQuadView__OnSetPoint2( &_this->stNegative, _Const0054 );
  CoreQuadView__OnSetPoint1( &_this->stNegative, _Const0055 );
  CoreRectView__OnSetBounds( &_this->txtValue, _Const0056 );
  ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0057 ));
  CoreGroup__Add( _this, ((CoreView)&_this->rctBaseBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctNegBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctPosBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txt1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->stPostive ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->stNegative ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtValue ), 0 );
  ViewsText_OnSetFont( &_this->txt, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsText_OnSetFont( &_this->txt1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  _this->stPostive.OnRelease = EwNewSlot( _this, ApplicationSpinButton_OnRelease );
  _this->stPostive.OnPress = EwNewSlot( _this, ApplicationSpinButton_OnPress );
  _this->stNegative.OnRelease = EwNewSlot( _this, ApplicationSpinButton_OnRelease );
  _this->stNegative.OnPress = EwNewSlot( _this, ApplicationSpinButton_OnPress );
  ViewsText_OnSetFont( &_this->txtValue, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSpinButton_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SpinButton' */
void ApplicationSpinButton__ReInit( ApplicationSpinButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->rctBaseBtn );
  ViewsBorder__ReInit( &_this->Border );
  ViewsRectangle__ReInit( &_this->rctNegBtn );
  ViewsRectangle__ReInit( &_this->rctPosBtn );
  ViewsText__ReInit( &_this->txt );
  ViewsText__ReInit( &_this->txt1 );
  CoreSimpleTouchHandler__ReInit( &_this->stPostive );
  CoreSimpleTouchHandler__ReInit( &_this->stNegative );
  ViewsText__ReInit( &_this->txtValue );
}

/* Finalizer method for the class 'Application::SpinButton' */
void ApplicationSpinButton__Done( ApplicationSpinButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->rctBaseBtn );
  ViewsBorder__Done( &_this->Border );
  ViewsRectangle__Done( &_this->rctNegBtn );
  ViewsRectangle__Done( &_this->rctPosBtn );
  ViewsText__Done( &_this->txt );
  ViewsText__Done( &_this->txt1 );
  CoreSimpleTouchHandler__Done( &_this->stPostive );
  CoreSimpleTouchHandler__Done( &_this->stNegative );
  ViewsText__Done( &_this->txtValue );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSpinButton_Init( ApplicationSpinButton _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  if ( _this->ValueType == 1 )
  {
    ApplicationSpinButton_OnSetValue( _this, 1 );
    ApplicationSpinButton_OnSetValueMin( _this, 1 );
    ApplicationSpinButton_OnSetValueMax( _this, 12 );
  }

  ApplicationSpinButton_UpdateValueText( _this );
}

/* 'C' function for method : 'Application::SpinButton.OnRelease()' */
void ApplicationSpinButton_OnRelease( ApplicationSpinButton _this, XObject sender )
{
  EwTrace( "%s%i", EwLoadString( &_Const0058 ), _this->Value );

  if ( sender == ((XObject)&_this->stPostive ))
  {
    if ( _this->Value < _this->ValueMax )
      ApplicationSpinButton_OnSetValue( _this, _this->Value + 1 );
    else
      ApplicationSpinButton_OnSetValue( _this, _this->ValueMin );

    ViewsRectangle_OnSetColor( &_this->rctPosBtn, _Const0047 );
  }
  else
    if ( sender == ((XObject)&_this->stNegative ))
    {
      if ( _this->Value > _this->ValueMin )
        ApplicationSpinButton_OnSetValue( _this, _this->Value - 1 );
      else
        ApplicationSpinButton_OnSetValue( _this, _this->ValueMax );

      ViewsRectangle_OnSetColor( &_this->rctNegBtn, _Const0047 );
    }

  EwTrace( "%s%i", EwLoadString( &_Const0059 ), _this->Value );
  EwTrace( "%s%i", EwLoadString( &_Const005A ), _this->Value );
  EwTrace( "%s%i", EwLoadString( &_Const005B ), _this->ValueMin );
  EwTrace( "%s%i", EwLoadString( &_Const005C ), _this->ValueMax );
  ApplicationSpinButton_UpdateValueText( _this );
}

/* 'C' function for method : 'Application::SpinButton.OnPress()' */
void ApplicationSpinButton_OnPress( ApplicationSpinButton _this, XObject sender )
{
  if ( sender == ((XObject)&_this->stNegative ))
    ViewsRectangle_OnSetColor( &_this->rctNegBtn, _Const005D );

  if ( sender == ((XObject)&_this->stPostive ))
    ViewsRectangle_OnSetColor( &_this->rctPosBtn, _Const005D );
}

/* 'C' function for method : 'Application::SpinButton.OnSetValueType()' */
void ApplicationSpinButton_OnSetValueType( ApplicationSpinButton _this, XInt32 value )
{
  if ( _this->ValueType == value )
    return;

  _this->ValueType = value;
}

/* 'C' function for method : 'Application::SpinButton.UpdateValueText()' */
void ApplicationSpinButton_UpdateValueText( ApplicationSpinButton _this )
{
  if ( _this->ValueType == 1 )
    switch ( _this->Value )
    {
      case 1 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const005E ));
      break;

      case 2 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const005F ));
      break;

      case 3 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0060 ));
      break;

      case 4 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0061 ));
      break;

      case 5 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0062 ));
      break;

      case 6 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0063 ));
      break;

      case 7 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0064 ));
      break;

      case 8 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0065 ));
      break;

      case 9 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0066 ));
      break;

      case 10 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0067 ));
      break;

      case 11 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0068 ));
      break;

      case 12 :
        ViewsText_OnSetString( &_this->txtValue, EwLoadString( &_Const0069 ));
      break;

      default : 
        ViewsText_OnSetString( &_this->txtValue, 0 );
    }
  else
    ViewsText_OnSetString( &_this->txtValue, EwNewStringInt( _this->Value, 0, 10 ));
}

/* 'C' function for method : 'Application::SpinButton.OnSetValue()' */
void ApplicationSpinButton_OnSetValue( ApplicationSpinButton _this, XInt32 value )
{
  if ( _this->Value == value )
    return;

  _this->Value = value;
  ApplicationSpinButton_UpdateValueText( _this );
}

/* 'C' function for method : 'Application::SpinButton.OnSetValueMin()' */
void ApplicationSpinButton_OnSetValueMin( ApplicationSpinButton _this, XInt32 value )
{
  if ( _this->ValueMin == value )
    return;

  _this->ValueMin = value;

  if ( _this->ValueType == 1 )
  {
    ApplicationSpinButton_OnSetValue( _this, 1 );
    ApplicationSpinButton_OnSetValueMin( _this, 1 );
    ApplicationSpinButton_OnSetValueMax( _this, 12 );
  }

  ApplicationSpinButton_UpdateValueText( _this );
}

/* 'C' function for method : 'Application::SpinButton.OnSetValueMax()' */
void ApplicationSpinButton_OnSetValueMax( ApplicationSpinButton _this, XInt32 value )
{
  if ( _this->ValueMax == value )
    return;

  _this->ValueMax = value;

  if ( _this->ValueType == 1 )
  {
    ApplicationSpinButton_OnSetValue( _this, 1 );
    ApplicationSpinButton_OnSetValueMin( _this, 1 );
    ApplicationSpinButton_OnSetValueMax( _this, 12 );
  }

  ApplicationSpinButton_UpdateValueText( _this );
}

/* Variants derived from the class : 'Application::SpinButton' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSpinButton )
EW_END_OF_CLASS_VARIANTS( ApplicationSpinButton )

/* Virtual Method Table (VMT) for the class : 'Application::SpinButton' */
EW_DEFINE_CLASS( ApplicationSpinButton, CoreGroup, rctBaseBtn, rctBaseBtn, rctBaseBtn, 
                 rctBaseBtn, ValueType, ValueType, "Application::SpinButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSpinButton )

/* Initializer for the class 'Application::SettingsNewSurgicalProfile' */
void ApplicationSettingsNewSurgicalProfile__Init( ApplicationSettingsNewSurgicalProfile _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsNewSurgicalProfile );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtProfile, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->ProfileNameInput, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtCutEnergy, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->CutEnergyInput, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtCoagulation, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->CoagulationEnergyInput, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtMaxGrasp, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->MaxGraspInput, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtMotion, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->MotionSpeedInput, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  WidgetCustomButton__Init( &_this->CustomButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsNewSurgicalProfile );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->txtProfile, _Const006A );
  ViewsText_OnSetAlignment( &_this->txtProfile, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtProfile, EwLoadString( &_Const006B ));
  CoreRectView__OnSetBounds( &_this->ProfileNameInput, _Const006C );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ProfileNameInput, 1 );
  ApplicationSettingsInputField_OnSetInputType( &_this->ProfileNameInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->ProfileNameInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->ProfileNameInput, EwLoadString( 
  &_Const006D ));
  ApplicationSettingsInputField_OnSetPassword( &_this->ProfileNameInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->ProfileNameInput, 0 );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const0071 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0072 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreRectView__OnSetBounds( &_this->txtCutEnergy, _Const0074 );
  ViewsText_OnSetAlignment( &_this->txtCutEnergy, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtCutEnergy, EwLoadString( &_Const0075 ));
  CoreRectView__OnSetBounds( &_this->CutEnergyInput, _Const0076 );
  ApplicationSettingsInputField_OnSetInputType( &_this->CutEnergyInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->CutEnergyInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->CutEnergyInput, EwLoadString( 
  &_Const0077 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->CutEnergyInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->CutEnergyInput, 0 );
  CoreRectView__OnSetBounds( &_this->txtCoagulation, _Const0078 );
  ViewsText_OnSetAlignment( &_this->txtCoagulation, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtCoagulation, EwLoadString( &_Const0079 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput, _Const007A );
  ApplicationSettingsInputField_OnSetInputType( &_this->CoagulationEnergyInput, 
  0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->CoagulationEnergyInput, 
  6 );
  ApplicationSettingsInputField_OnSetValue( &_this->CoagulationEnergyInput, EwLoadString( 
  &_Const007B ));
  ApplicationSettingsInputField_OnSetPassword( &_this->CoagulationEnergyInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->CoagulationEnergyInput, 
  0 );
  CoreRectView__OnSetBounds( &_this->txtMaxGrasp, _Const007C );
  ViewsText_OnSetAlignment( &_this->txtMaxGrasp, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtMaxGrasp, EwLoadString( &_Const007D ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput, _Const007E );
  ApplicationSettingsInputField_OnSetInputType( &_this->MaxGraspInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->MaxGraspInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->MaxGraspInput, EwLoadString( 
  &_Const007F ));
  ApplicationSettingsInputField_OnSetPassword( &_this->MaxGraspInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->MaxGraspInput, 0 );
  CoreRectView__OnSetBounds( &_this->txtMotion, _Const0080 );
  ViewsText_OnSetAlignment( &_this->txtMotion, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtMotion, EwLoadString( &_Const0081 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput, _Const0082 );
  ApplicationSettingsInputField_OnSetInputType( &_this->MotionSpeedInput, 0 );
  ApplicationSettingsInputField_OnSetMaxLength( &_this->MotionSpeedInput, 6 );
  ApplicationSettingsInputField_OnSetValue( &_this->MotionSpeedInput, EwLoadString( 
  &_Const0083 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->MotionSpeedInput, 0 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->MotionSpeedInput, 0 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0087 );
  CoreRectView__OnSetBounds( &_this->CustomButton, _Const0088 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtProfile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ProfileNameInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtCutEnergy ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CutEnergyInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtCoagulation ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CoagulationEnergyInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtMaxGrasp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MaxGraspInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtMotion ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MotionSpeedInput ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CustomButton ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsNewSurgicalProfile_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->txtProfile, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->txtCutEnergy, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtCoagulation, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtMaxGrasp, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtMotion, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationSettingsNewSurgicalProfile_onBack );

  /* Call the user defined constructor */
  ApplicationSettingsNewSurgicalProfile_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsNewSurgicalProfile' */
void ApplicationSettingsNewSurgicalProfile__ReInit( ApplicationSettingsNewSurgicalProfile _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsText__ReInit( &_this->txtProfile );
  ApplicationSettingsInputField__ReInit( &_this->ProfileNameInput );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->txtCutEnergy );
  ApplicationSettingsInputField__ReInit( &_this->CutEnergyInput );
  ViewsText__ReInit( &_this->txtCoagulation );
  ApplicationSettingsInputField__ReInit( &_this->CoagulationEnergyInput );
  ViewsText__ReInit( &_this->txtMaxGrasp );
  ApplicationSettingsInputField__ReInit( &_this->MaxGraspInput );
  ViewsText__ReInit( &_this->txtMotion );
  ApplicationSettingsInputField__ReInit( &_this->MotionSpeedInput );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  WidgetCustomButton__ReInit( &_this->CustomButton );
}

/* Finalizer method for the class 'Application::SettingsNewSurgicalProfile' */
void ApplicationSettingsNewSurgicalProfile__Done( ApplicationSettingsNewSurgicalProfile _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsText__Done( &_this->txtProfile );
  ApplicationSettingsInputField__Done( &_this->ProfileNameInput );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->txtCutEnergy );
  ApplicationSettingsInputField__Done( &_this->CutEnergyInput );
  ViewsText__Done( &_this->txtCoagulation );
  ApplicationSettingsInputField__Done( &_this->CoagulationEnergyInput );
  ViewsText__Done( &_this->txtMaxGrasp );
  ApplicationSettingsInputField__Done( &_this->MaxGraspInput );
  ViewsText__Done( &_this->txtMotion );
  ApplicationSettingsInputField__Done( &_this->MotionSpeedInput );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  WidgetCustomButton__Done( &_this->CustomButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsNewSurgicalProfile_Init( ApplicationSettingsNewSurgicalProfile _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsText_OnSetString( &_this->CustomButton.label, EwLoadString( &_Const0089 ));
  _this->theme = EwNewObject( ApplicationSettings, 0 );
  CoreRectView__OnSetBounds( &_this->ProfileNameInput.Rectangle, EwSetRectW( _this->ProfileNameInput.Rectangle.Super1.Bounds, 
  1220 ));
  CoreRectView__OnSetBounds( &_this->ProfileNameInput.Border, EwSetRectW( _this->ProfileNameInput.Border.Super1.Bounds, 
  1220 ));
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
  CoreGroup_ObtainFocus((CoreGroup)&_this->ProfileNameInput.TextEditor );
  CoreRectView__OnSetBounds( &_this->CutEnergyInput.Rectangle, EwSetRectW( _this->CutEnergyInput.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->CutEnergyInput.Border, EwSetRectW( _this->CutEnergyInput.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->CutEnergyInput.TextEditor, EwSetRectW( _this->CutEnergyInput.TextEditor.Super3.Bounds, 
  575 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput.Rectangle, EwSetRectW( 
  _this->CoagulationEnergyInput.Rectangle.Super1.Bounds, 583 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput.Border, EwSetRectW( 
  _this->CoagulationEnergyInput.Border.Super1.Bounds, 583 ));
  CoreRectView__OnSetBounds( &_this->CoagulationEnergyInput.TextEditor, EwSetRectW( 
  _this->CoagulationEnergyInput.TextEditor.Super3.Bounds, 575 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput.Rectangle, EwSetRectW( _this->MaxGraspInput.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput.Border, EwSetRectW( _this->MaxGraspInput.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MaxGraspInput.TextEditor, EwSetRectW( _this->MaxGraspInput.TextEditor.Super3.Bounds, 
  575 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput.Rectangle, EwSetRectW( _this->MotionSpeedInput.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput.Border, EwSetRectW( _this->MotionSpeedInput.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->MotionSpeedInput.TextEditor, EwSetRectW( _this->MotionSpeedInput.TextEditor.Super3.Bounds, 
  575 ));
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsNewSurgicalProfile_onEvent( ApplicationSettingsNewSurgicalProfile _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsNewSurgicalProfile.onBack()' */
void ApplicationSettingsNewSurgicalProfile_onBack( ApplicationSettingsNewSurgicalProfile _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->theme = 0;

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsNewSurgicalProfile' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsNewSurgicalProfile )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsNewSurgicalProfile )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsNewSurgicalProfile' */
EW_DEFINE_CLASS( ApplicationSettingsNewSurgicalProfile, CoreGroup, theme, TitleBar, 
                 TitleBar, TitleBar, _.VMT, _.VMT, "Application::SettingsNewSurgicalProfile" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsNewSurgicalProfile )

/* Initializer for the class 'Application::SettingsInputField' */
void ApplicationSettingsInputField__Init( ApplicationSettingsInputField _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsInputField );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ApplicationTextEditor__Init( &_this->TextEditor, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->EyeImage, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->EyeTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsInputField );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const008C );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const008D );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const008E );
  CoreRectView__OnSetBounds( &_this->Border, _Const008D );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  ViewsBorder_OnSetColor( &_this->Border, _Const008F );
  CoreRectView__OnSetBounds( &_this->TextEditor, _Const0090 );
  ApplicationTextEditor_OnSetString( &_this->TextEditor, 0 );
  ApplicationTextEditor_OnSetColor( &_this->TextEditor, _Const0049 );
  CoreRectView__OnSetBounds( &_this->EyeImage, _Const0091 );
  ViewsImage_OnSetVisible( &_this->EyeImage, 0 );
  CoreQuadView__OnSetPoint4( &_this->EyeTouchHandler, _Const0092 );
  CoreQuadView__OnSetPoint3( &_this->EyeTouchHandler, _Const0093 );
  CoreQuadView__OnSetPoint2( &_this->EyeTouchHandler, _Const0094 );
  CoreQuadView__OnSetPoint1( &_this->EyeTouchHandler, _Const0095 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->EyeTouchHandler, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextEditor ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EyeImage ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EyeTouchHandler ), 0 );
  _this->TextEditor.OnChange = EwNewSlot( _this, ApplicationSettingsInputField_OnPress );
  ApplicationTextEditor_OnSetFont( &_this->TextEditor, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ApplicationTextEditor_OnSetOnEditStart( &_this->TextEditor, EwNewSlot( _this, 
  ApplicationSettingsInputField_slotTextEditStart ));
  ViewsImage_OnSetBitmap( &_this->EyeImage, EwLoadResource( &ResEyeOpen, ResourcesBitmap ));
  _this->EyeTouchHandler.OnPress = EwNewSlot( _this, ApplicationSettingsInputField_onEyePressed );

  /* Call the user defined constructor */
  ApplicationSettingsInputField_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsInputField' */
void ApplicationSettingsInputField__ReInit( ApplicationSettingsInputField _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsBorder__ReInit( &_this->Border );
  ApplicationTextEditor__ReInit( &_this->TextEditor );
  ViewsImage__ReInit( &_this->EyeImage );
  CoreSimpleTouchHandler__ReInit( &_this->EyeTouchHandler );
}

/* Finalizer method for the class 'Application::SettingsInputField' */
void ApplicationSettingsInputField__Done( ApplicationSettingsInputField _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsBorder__Done( &_this->Border );
  ApplicationTextEditor__Done( &_this->TextEditor );
  ViewsImage__Done( &_this->EyeImage );
  CoreSimpleTouchHandler__Done( &_this->EyeTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsInputField_Init( ApplicationSettingsInputField _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwTrace( "%s%b", EwLoadString( &_Const0096 ), _this->Password );
  ApplicationTextEditor_OnSetInputType( &_this->TextEditor, _this->InputType );
  ApplicationTextEditor_OnSetMaxLength( &_this->TextEditor, _this->MaxLength );
  _this->TextEditor.Password = _this->Password;
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetInputType()' */
void ApplicationSettingsInputField_OnSetInputType( ApplicationSettingsInputField _this, 
  XInt32 value )
{
  if ( _this->InputType == value )
    return;

  _this->InputType = value;
  EwTrace( "%s", EwLoadString( &_Const0097 ));
  ApplicationTextEditor_OnSetInputType( &_this->TextEditor, value );
  EwTrace( "%s%i", EwLoadString( &_Const0098 ), _this->TextEditor.InputType );
  EwTrace( "%s%s", EwLoadString( &_Const0099 ), ApplicationTextEditor_OnGetString( 
    &_this->TextEditor ));
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetMaxLength()' */
void ApplicationSettingsInputField_OnSetMaxLength( ApplicationSettingsInputField _this, 
  XInt32 value )
{
  if ( _this->MaxLength == value )
    return;

  _this->MaxLength = value;
  ApplicationTextEditor_OnSetMaxLength( &_this->TextEditor, value );
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetValue()' */
void ApplicationSettingsInputField_OnSetValue( ApplicationSettingsInputField _this, 
  XString value )
{
  if ( !EwCompString( _this->Value, value ))
    return;

  _this->Value = EwShareString( value );
  ApplicationTextEditor_OnSetString( &_this->TextEditor, value );
}

/* 'C' function for method : 'Application::SettingsInputField.OnPress()' */
void ApplicationSettingsInputField_OnPress( ApplicationSettingsInputField _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const009A ));
  CoreGroup_ObtainFocus((CoreGroup)_this );
  CoreGroup_ObtainFocus((CoreGroup)&_this->TextEditor );
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetPassword()' */
void ApplicationSettingsInputField_OnSetPassword( ApplicationSettingsInputField _this, 
  XBool value )
{
  if ( _this->Password == value )
    return;

  _this->Password = value;
  _this->TextEditor.Password = value;
  ViewsImage_OnSetVisible( &_this->EyeImage, _this->Password );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->EyeTouchHandler, _this->Password );
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetShowPassword()' */
void ApplicationSettingsInputField_OnSetShowPassword( ApplicationSettingsInputField _this, 
  XBool value )
{
  if ( _this->ShowPassword == value )
    return;

  _this->ShowPassword = value;
  ApplicationTextEditor_OnSetShowPassword( &_this->TextEditor, value );
}

/* 'C' function for method : 'Application::SettingsInputField.onEyePressed()' */
void ApplicationSettingsInputField_onEyePressed( ApplicationSettingsInputField _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationSettingsInputField_OnSetShowPassword( _this, (XBool)!_this->ShowPassword );
  ApplicationTextEditor_OnSetShowPassword( &_this->TextEditor, _this->ShowPassword );

  if ( _this->ShowPassword )
    ViewsImage_OnSetBitmap( &_this->EyeImage, EwLoadResource( &ResEyeOpen, ResourcesBitmap ));
  else
    ViewsImage_OnSetBitmap( &_this->EyeImage, EwLoadResource( &ResEyeClosed, ResourcesBitmap ));

  EwTrace( "%s%s", EwLoadString( &_Const009B ), _this->TextEditor.RealValue );
  EwTrace( "%s%s", EwLoadString( &_Const009B ), ApplicationTextEditor_OnGetString( 
    &_this->TextEditor ));
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetOnSelected()' */
void ApplicationSettingsInputField_OnSetOnSelected( ApplicationSettingsInputField _this, 
  XSlot value )
{
  if ( !EwCompSlot( _this->OnSelected, value ))
    return;

  _this->OnSelected = value;
}

/* 'C' function for method : 'Application::SettingsInputField.OnSetOnEditStart()' */
void ApplicationSettingsInputField_OnSetOnEditStart( ApplicationSettingsInputField _this, 
  XSlot value )
{
  if ( !EwCompSlot( _this->OnEditStart, value ))
    return;

  _this->OnEditStart = value;
}

/* 'C' function for method : 'Application::SettingsInputField.slotTextEditStart()' */
void ApplicationSettingsInputField_slotTextEditStart( ApplicationSettingsInputField _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->OnEditStart.Object != 0 )
    EwSignal( _this->OnEditStart, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::SettingsInputField' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsInputField )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsInputField )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsInputField' */
EW_DEFINE_CLASS( ApplicationSettingsInputField, CoreGroup, OnSelected, OnSelected, 
                 Rectangle, Rectangle, Value, InputType, "Application::SettingsInputField" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsInputField )

/* Initializer for the class 'Application::TextEditor' */
void ApplicationTextEditor__Init( ApplicationTextEditor _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationTextEditor );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTextEditor );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const009C );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const009C );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const009D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const009E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const009F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const00A0 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Text, _Const00A1 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00A2 ));
  ViewsText_OnSetColor( &_this->Text, _Const00A3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const00A4 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const00A5 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const00A3 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  _this->String = EwShareString( EwLoadString( &_Const00A6 ));
  _this->Color = _Const00A3;
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onCursorKey );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onCursorKey );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onBackspaceKey );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onBackspaceKey );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onDeleteKey );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onDeleteKey );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onNewlineKey );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onNewlineKey );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onCharacterKey );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onCharacterKey );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationTextEditor_onDragTouch );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onHoldTouch );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationTextEditor_onReleaseTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onPressTouch );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationTextEditor_updateCaret ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  _this->Font = EwLoadResource( &ResourcesFontMedium, ResourcesFont );
}

/* Re-Initializer for the class 'Application::TextEditor' */
void ApplicationTextEditor__ReInit( ApplicationTextEditor _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsLine__ReInit( &_this->Caret );
}

/* Finalizer method for the class 'Application::TextEditor' */
void ApplicationTextEditor__Done( ApplicationTextEditor _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsLine__Done( &_this->Caret );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_.Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationTextEditor_UpdateViewState( ApplicationTextEditor _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ApplicationTextEditor_updateMagnifyingView( ApplicationTextEditor _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ApplicationTextEditor_updateScrollOffset( ApplicationTextEditor _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ApplicationTextEditor_updateCaret( ApplicationTextEditor _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateScrollOffset ), 
      ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ApplicationTextEditor_onReleaseTouch( ApplicationTextEditor _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup__Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup__OnSetBuffered( _this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ApplicationTextEditor_onDragTouch( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos );

    if (((( ofs.X < -8 ) || ( ofs.X > 8 )) || ( ofs.Y < -8 )) || ( ofs.Y > 8 ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler ), 
      _Const00A0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ApplicationTextEditor_onHoldTouch( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup__OnSetBuffered( _this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const00A7 )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const00A8 ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const00A9 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ApplicationTextEditor_onDragTouch ), ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ApplicationTextEditor_onPressTouch( ApplicationTextEditor _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  if ( _this->OnEditStart.Object != 0 )
    EwSignal( _this->OnEditStart, ((XObject)_this ));

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ApplicationTextEditor_onCursorKey( ApplicationTextEditor _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( ViewsText_RowCol2StringIndex( &_this->Text, rc ) == _this->caretIndex )
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ApplicationTextEditor_onBackspaceKey( ApplicationTextEditor _this, XObject 
  sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  if ( _this->Password )
  {
    _this->RealValue = EwShareString( EwStringRemove( _this->RealValue, _this->caretIndex 
    - 1, 1 ));
    _this->caretIndex = _this->caretIndex - 1;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
    _this->autoScroll = 1;
    EwPostSignal( _this->OnChange, ((XObject)_this ));
    return;
  }

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ApplicationTextEditor_onDeleteKey( ApplicationTextEditor _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Password )
  {
    if ( _this->caretIndex >= EwGetStringLength( _this->RealValue ))
      return;

    _this->RealValue = EwShareString( EwStringRemove( _this->RealValue, _this->caretIndex, 
    1 ));
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
    _this->autoScroll = 1;
    EwPostSignal( _this->OnChange, ((XObject)_this ));
    return;
  }

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ApplicationTextEditor_onNewlineKey( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const00AA ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ApplicationTextEditor_onCharacterKey( ApplicationTextEditor _this, XObject 
  sender )
{
  XChar ch;
  XInt32 len;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;

  if (( _this->InputType == 1 ) && (( ch < '0' ) || ( ch > '9' )))
    return;

  if (( _this->InputType == 2 ) && !(((( ch >= 'A' ) && ( ch <= 'Z' )) || (( ch 
      >= 'a' ) && ( ch <= 'z' ))) || ( ch == 0x0020 )))
    return;

  if (( _this->InputType == 3 ) && !(((( ch >= 'A' ) && ( ch <= 'Z' )) || (( ch 
      >= 'a' ) && ( ch <= 'z' ))) || (( ch >= '0' ) && ( ch <= '9' ))))
    return;

  if ( _this->Password )
    len = EwGetStringLength( _this->RealValue );
  else
  {
    len = EwGetStringLength( _this->Text.String );

    if (( len > 0 ) && ( EwGetStringChar( _this->Text.String, len - 1 ) == 0x000A ))
      len = len - 1;
  }

  if (( _this->MaxLength > 0 ) && ( len >= _this->MaxLength ))
    return;

  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const00AB ), ch );

  if ( _this->Password )
  {
    _this->RealValue = EwShareString( EwStringInsert( _this->RealValue, str, _this->caretIndex ));
    _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
  }
  else
  {
    ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
    _this->caretIndex ));
    _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  }

  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'Application::TextEditor.OnGetString()' */
XString ApplicationTextEditor_OnGetString( ApplicationTextEditor _this )
{
  XString str;
  XInt32 inx;

  if ( _this->Password )
    return _this->RealValue;

  str = _this->Text.String;
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringRemove( str, inx, 1 );
    inx = EwStringFindChar( str, '%', inx + 1 );
  }

  return EwStringLeft( str, EwGetStringLength( str ) - 1 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetString()' */
void ApplicationTextEditor_OnSetString( ApplicationTextEditor _this, XString value )
{
  XString str;
  XInt32 inx;

  if ( !EwCompString( _this->String, value ))
    return;

  _this->String = EwShareString( value );

  if ( _this->Password )
  {
    _this->RealValue = EwShareString( value );

    if ( _this->caretIndex > EwGetStringLength( _this->RealValue ))
      _this->caretIndex = EwGetStringLength( _this->RealValue );

    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
      ((XObject)_this ));
    _this->autoScroll = 1;
    ViewsText_OnSetScrollOffset( &_this->Text, _Const00A0 );
    return;
  }

  str = value;
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const00AB ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const00AB ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const00AB ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const00AB ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const00AC )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const00A0 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetColor()' */
void ApplicationTextEditor_OnSetColor( ApplicationTextEditor _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
  ViewsLine_OnSetColor( &_this->Caret, value );
}

/* 'C' function for method : 'Application::TextEditor.OnSetFont()' */
void ApplicationTextEditor_OnSetFont( ApplicationTextEditor _this, ResourcesFont 
  value )
{
  if ( _this->Font == value )
    return;

  _this->Font = value;
  ViewsText_OnSetFont( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const00A0 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetInputType()' */
void ApplicationTextEditor_OnSetInputType( ApplicationTextEditor _this, XInt32 value )
{
  if ( _this->InputType == value )
    return;

  _this->InputType = value;
}

/* 'C' function for method : 'Application::TextEditor.OnSetMaxLength()' */
void ApplicationTextEditor_OnSetMaxLength( ApplicationTextEditor _this, XInt32 value )
{
  if ( _this->MaxLength == value )
    return;

  _this->MaxLength = value;
}

/* 'C' function for method : 'Application::TextEditor.OnSetShowPassword()' */
void ApplicationTextEditor_OnSetShowPassword( ApplicationTextEditor _this, XBool 
  value )
{
  if ( _this->ShowPassword == value )
    return;

  _this->ShowPassword = value;
  EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updatePasswordDisplay ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'Application::TextEditor.updatePasswordDisplay()' */
void ApplicationTextEditor_updatePasswordDisplay( ApplicationTextEditor _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", _this->RealValue );
  EwTrace( "%b", _this->Password );
  EwTrace( "%b", _this->ShowPassword );

  if ( !_this->Password || _this->ShowPassword )
    ViewsText_OnSetString( &_this->Text, EwConcatString( _this->RealValue, EwLoadString( 
    &_Const00AC )));
  else
  {
    XString maskedText = 0;
    XInt32 i;

    for ( i = 0; i < EwGetStringLength( _this->RealValue ); i = i + 1 )
      maskedText = EwConcatString( maskedText, EwLoadString( &_Const00AD ));

    ViewsText_OnSetString( &_this->Text, EwConcatString( maskedText, EwLoadString( 
    &_Const00AC )));
  }
}

/* 'C' function for method : 'Application::TextEditor.OnSetOnEditStart()' */
void ApplicationTextEditor_OnSetOnEditStart( ApplicationTextEditor _this, XSlot 
  value )
{
  if ( !EwCompSlot( _this->OnEditStart, value ))
    return;

  _this->OnEditStart = value;
}

/* Variants derived from the class : 'Application::TextEditor' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTextEditor )
EW_END_OF_CLASS_VARIANTS( ApplicationTextEditor )

/* Virtual Method Table (VMT) for the class : 'Application::TextEditor' */
EW_DEFINE_CLASS( ApplicationTextEditor, TemplatesTextEditor, magnifyingBack, OnChange, 
                 blinkEffect, blinkEffect, String, caretIndex, "Application::TextEditor" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationTextEditor_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTextEditor )

/* Include a file containing the font resource : 'Application::FontNormal28' */
#include "_ApplicationFontNormal28.h"

/* Table with links to derived variants of the font resource : 'Application::FontNormal28' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontNormal28 )

/* Include a file containing the font resource : 'Application::FontBold32' */
#include "_ApplicationFontBold32.h"

/* Table with links to derived variants of the font resource : 'Application::FontBold32' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBold32 )

/* Include a file containing the font resource : 'Application::FontBold28' */
#include "_ApplicationFontBold28.h"

/* Table with links to derived variants of the font resource : 'Application::FontBold28' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBold28 )

/* Include a file containing the font resource : 'Application::FontBold22' */
#include "_ApplicationFontBold22.h"

/* Table with links to derived variants of the font resource : 'Application::FontBold22' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBold22 )

/* User defined inline code: 'Application::Inline' */
//#include "DeviceDriver.h"
/*

  TO DO:

  Include external header files or add type and function declarations needed
  in the implementation of Application::DeviceClass. For example:

    #include "DeviceDriver.h"

    #include "your_middleware_api.h"

    void Your_Middleware_Some_Function( int aSomeArg );

*/


/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  XObject thisObject = ((XObject)_this );

  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       de-initialization steps. For example, you invoke some 'C' function:

         YourDevice_DeInitialize();

       IMPORTANT:
       ----------

       The variable 'thisObject' represents the actually de-initialized instance of the
       Application::DeviceClass. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  XObject thisObject;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  thisObject = ((XObject)_this );
  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       initialization steps. For example, you invoke some 'C' function:

         YourDevice_Initialize();

       The variable 'thisObject' represents the actually initialized instance of the
       Application::DeviceClass. You can store this variable e.g. in the middleware
       and use it whenever the middleware needs to notify the GUI application about
       some state alternation or events. In this manner, the middleware will be able
       to invoke methods of the interface device object.

       For example, you can store 'thisObject' in some global C variable:

         // Declaration of the global C variable
         XObject theDeviceObject;

         // Store the instance in the global variable
         theDeviceObject = thisObject;

       Later use the global variable e.g. to provide the GUI application with events:

         ApplicationDeviceClass__TriggerSomeEvent( theDeviceObject );

       IMPORTANT:
       ----------

       If you store 'thisObject' for later use, don't forget to implement the opposite
       operation in the method 'Done'. Concrete, 'Done' should set the global variable
       again to the value NULL.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.OnGetDemoValue()' */
XInt32 ApplicationDeviceClass_OnGetDemoValue( ApplicationDeviceClass _this )
{
  return _this->DemoValue;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetDemoValue()' */
void ApplicationDeviceClass_OnSetDemoValue( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->DemoValue == value )
    return;

  _this->DemoValue = value;
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetDemoValue, 
    ApplicationDeviceClass_OnSetDemoValue ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->DemoValue )
  {
    _this->DemoValue = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetDemoValue, 
      ApplicationDeviceClass_OnSetDemoValue ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty()' */
void ApplicationDeviceClass__UpdateProperty( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty((ApplicationDeviceClass)_this, aNewValue );
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* User defined auto object: 'Application::Device' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::SettingsScreen' */
void ApplicationSettingsScreen__Init( ApplicationSettingsScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->sthList, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00AE );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00AF ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00B0 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 125 );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 4 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( WidgetSettingsList ));
  _this->ProfileH1[ 0 ] = EwShareString( EwLoadString( &_Const00B1 ));
  _this->ProfileH1[ 1 ] = EwShareString( EwLoadString( &_Const00B2 ));
  _this->ProfileH1[ 2 ] = EwShareString( EwLoadString( &_Const00B3 ));
  _this->ProfileH1[ 3 ] = EwShareString( EwLoadString( &_Const00B4 ));
  _this->ProfileH2[ 0 ] = EwShareString( EwLoadString( &_Const00B5 ));
  _this->ProfileH2[ 1 ] = EwShareString( EwLoadString( &_Const00B6 ));
  _this->ProfileH2[ 2 ] = EwShareString( EwLoadString( &_Const00B7 ));
  _this->ProfileH2[ 3 ] = EwShareString( EwLoadString( &_Const00B8 ));
  CoreQuadView__OnSetPoint4( &_this->sthList, _Const00B9 );
  CoreQuadView__OnSetPoint3( &_this->sthList, _Const00BA );
  CoreQuadView__OnSetPoint2( &_this->sthList, _Const00BB );
  CoreQuadView__OnSetPoint1( &_this->sthList, _Const00BC );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->sthList ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsScreen_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsScreen_onBack );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationSettingsScreen_OnLoadItem );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  _this->sthList.OnRelease = EwNewSlot( _this, ApplicationSettingsScreen_SlotOnRelease );

  /* Call the user defined constructor */
  ApplicationSettingsScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsScreen' */
void ApplicationSettingsScreen__ReInit( ApplicationSettingsScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSimpleTouchHandler__ReInit( &_this->sthList );
}

/* Finalizer method for the class 'Application::SettingsScreen' */
void ApplicationSettingsScreen__Done( ApplicationSettingsScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSimpleTouchHandler__Done( &_this->sthList );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsScreen_Init( ApplicationSettingsScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsScreen_onEvent( ApplicationSettingsScreen _this, XObject 
  sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsScreen.onBack()' */
void ApplicationSettingsScreen_onBack( ApplicationSettingsScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->theme = 0;

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationSettingsScreen_OnLoadItem( ApplicationSettingsScreen _this, XObject 
  sender )
{
  XInt32 itemNo;
  WidgetSettingsList itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, WidgetSettingsList );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( &itemView->H1, _this->ProfileH1[ EwCheckIndex( itemNo, 
  4 )]);
  ViewsText_OnSetString( &itemView->H2, _this->ProfileH2[ EwCheckIndex( itemNo, 
  4 )]);
  ViewsImage_OnSetBitmap( &itemView->SettingsImage, _this->SettingsImage[ EwCheckIndex( 
  itemNo, 4 )]);
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::SettingsScreen.SlotOnRelease()' */
void ApplicationSettingsScreen_SlotOnRelease( ApplicationSettingsScreen _this, XObject 
  sender )
{
  XInt32 itemNo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = CoreVerticalList_GetItemAtPosition( &_this->VerticalList, _this->sthList.CurrentPos );
  EwTrace( "%s%i", EwLoadString( &_Const00BD ), itemNo );

  if ( itemNo >= 0 )
    ApplicationSettingsScreen_SwitchScreen( _this, (XInt16)itemNo );
}

/* 'C' function for method : 'Application::SettingsScreen.SwitchScreen()' */
void ApplicationSettingsScreen_SwitchScreen( ApplicationSettingsScreen _this, XInt16 
  screenNo )
{
  _this->theme = 0;

  switch ( screenNo )
  {
    case 0 :
    {
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsDiagnostic, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );

      EwTrace( "%s", EwLoadString( &_Const00BE ));
    }
    break;

    case 1 :
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsChangePassword, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
    break;

    case 2 :
    {
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsDateTime, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );

      EwTrace( "%s", EwLoadString( &_Const00BF ));
    }
    break;

    case 3 :
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsSystemLogs, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );
    break;

    default :; 
  }
}

/* Variants derived from the class : 'Application::SettingsScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsScreen )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsScreen' */
EW_DEFINE_CLASS( ApplicationSettingsScreen, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, ProfileH1, _.VMT, "Application::SettingsScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsScreen )

/* Initializer for the class 'Application::SettingsSystemLogs' */
void ApplicationSettingsSystemLogs__Init( ApplicationSettingsSystemLogs _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsSystemLogs );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->sthList, &_this->_.XObject, 0 );
  WidgetCustomButton__Init( &_this->CustomButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsSystemLogs );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00AE );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00C0 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00C1 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 115 );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 4 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( WidgetSettingsList ));
  _this->ProfileH1[ 0 ] = EwShareString( EwLoadString( &_Const00C2 ));
  _this->ProfileH1[ 1 ] = EwShareString( EwLoadString( &_Const00C3 ));
  _this->ProfileH1[ 2 ] = EwShareString( EwLoadString( &_Const00C4 ));
  _this->ProfileH1[ 3 ] = EwShareString( EwLoadString( &_Const00C5 ));
  _this->ProfileH2[ 0 ] = EwShareString( EwLoadString( &_Const00C6 ));
  _this->ProfileH2[ 1 ] = EwShareString( EwLoadString( &_Const00C7 ));
  _this->ProfileH2[ 2 ] = EwShareString( EwLoadString( &_Const00C8 ));
  _this->ProfileH2[ 3 ] = EwShareString( EwLoadString( &_Const00C9 ));
  CoreQuadView__OnSetPoint4( &_this->sthList, _Const00B9 );
  CoreQuadView__OnSetPoint3( &_this->sthList, _Const00BA );
  CoreQuadView__OnSetPoint2( &_this->sthList, _Const00CA );
  CoreQuadView__OnSetPoint1( &_this->sthList, _Const00CB );
  CoreRectView__OnSetBounds( &_this->CustomButton, _Const00CC );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->sthList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CustomButton ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsSystemLogs_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsSystemLogs_onBack );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationSettingsSystemLogs_OnLoadItem );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  _this->sthList.OnRelease = EwNullSlot;

  /* Call the user defined constructor */
  ApplicationSettingsSystemLogs_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsSystemLogs' */
void ApplicationSettingsSystemLogs__ReInit( ApplicationSettingsSystemLogs _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSimpleTouchHandler__ReInit( &_this->sthList );
  WidgetCustomButton__ReInit( &_this->CustomButton );
}

/* Finalizer method for the class 'Application::SettingsSystemLogs' */
void ApplicationSettingsSystemLogs__Done( ApplicationSettingsSystemLogs _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSimpleTouchHandler__Done( &_this->sthList );
  WidgetCustomButton__Done( &_this->CustomButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsSystemLogs_Init( ApplicationSettingsSystemLogs _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsText_OnSetString( &_this->CustomButton.label, EwLoadString( &_Const00CD ));
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsSystemLogs_onEvent( ApplicationSettingsSystemLogs _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsSystemLogs.onBack()' */
void ApplicationSettingsSystemLogs_onBack( ApplicationSettingsSystemLogs _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->theme = 0;

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationSettingsSystemLogs_OnLoadItem( ApplicationSettingsSystemLogs _this, 
  XObject sender )
{
  XInt32 itemNo;
  WidgetSettingsList itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, WidgetSettingsList );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( &itemView->H1, _this->ProfileH1[ EwCheckIndex( itemNo, 
  4 )]);
  ViewsText_OnSetString( &itemView->H2, _this->ProfileH2[ EwCheckIndex( itemNo, 
  4 )]);
  ViewsImage_OnSetBitmap( &itemView->SettingsImage, _this->SettingsImage[ EwCheckIndex( 
  itemNo, 4 )]);
  WidgetSettingsList_OnSetImageVisible( itemView, 0 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* Variants derived from the class : 'Application::SettingsSystemLogs' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsSystemLogs )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsSystemLogs )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsSystemLogs' */
EW_DEFINE_CLASS( ApplicationSettingsSystemLogs, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, ProfileH1, _.VMT, "Application::SettingsSystemLogs" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsSystemLogs )

/* Initializer for the class 'Application::SettingsChangePassword' */
void ApplicationSettingsChangePassword__Init( ApplicationSettingsChangePassword _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsChangePassword );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  WidgetCustomButton__Init( &_this->CustomButton, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->CurrentPassword, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->NewPassword, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ApplicationSettingsInputField__Init( &_this->ConNewPass, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_.XObject, 0 );
  ApplicationAlphaNumKeyboard__Init( &_this->AlphaNumKeyboard1, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->moveEffect, &_this->_.XObject, 0 );
  ApplicationKeyboard__Init( &_this->Keyboard, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsChangePassword );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Outline, _Const00CE );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00D0 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const00D1 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const00D2 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const00D3 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const00D4 );
  CoreRectView__OnSetBounds( &_this->CustomButton, _Const00CC );
  CoreRectView__OnSetBounds( &_this->CurrentPassword, _Const00D5 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->CurrentPassword, 1 );
  ApplicationSettingsInputField_OnSetValue( &_this->CurrentPassword, EwLoadString( 
  &_Const0016 ));
  ApplicationSettingsInputField_OnSetPassword( &_this->CurrentPassword, 1 );
  ApplicationSettingsInputField_OnSetShowPassword( &_this->CurrentPassword, 1 );
  CoreView_OnSetLayout((CoreView)&_this->Text1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text1, _Const00D6 );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const00D7 ));
  ViewsText_OnSetEmbedded( &_this->Text1, 1 );
  CoreView_OnSetLayout((CoreView)&_this->Text2, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text2, _Const00D8 );
  ViewsText_OnSetAlignment( &_this->Text2, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const00D9 ));
  ViewsText_OnSetEmbedded( &_this->Text2, 1 );
  CoreRectView__OnSetBounds( &_this->NewPassword, _Const00DA );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->NewPassword, 1 );
  ApplicationSettingsInputField_OnSetPassword( &_this->NewPassword, 1 );
  CoreView_OnSetLayout((CoreView)&_this->Text3, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text3, _Const00DB );
  ViewsText_OnSetAlignment( &_this->Text3, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const00DC ));
  ViewsText_OnSetEmbedded( &_this->Text3, 1 );
  CoreRectView__OnSetBounds( &_this->ConNewPass, _Const00DD );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->ConNewPass, 1 );
  ApplicationSettingsInputField_OnSetPassword( &_this->ConNewPass, 1 );
  CoreView_OnSetLayout((CoreView)&_this->Text4, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text4, _Const00DE );
  ViewsText_OnSetAlignment( &_this->Text4, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const00DF ));
  ViewsText_OnSetEmbedded( &_this->Text4, 1 );
  CoreRectView__OnSetBounds( &_this->AlphaNumKeyboard1, _Const00E0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->AlphaNumKeyboard1, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->AlphaNumKeyboard1, 0 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->moveEffect, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->moveEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->moveEffect, 400 );
  CoreRectView__OnSetBounds( &_this->Keyboard, _Const00E1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Keyboard, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Keyboard, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CustomButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CurrentPassword ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NewPassword ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ConNewPass ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AlphaNumKeyboard1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Keyboard ), 0 );
  CoreOutline_OnSetSlideHandler( &_this->Outline, 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsChangePassword_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsChangePassword_onBack );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationSettingsChangePassword_slotKeyboardClose );
  CoreGroup__OnSetFocus( &_this->CurrentPassword, 0 );
  ApplicationSettingsInputField_OnSetOnSelected( &_this->CurrentPassword, EwNewSlot( 
  _this, ApplicationSettingsChangePassword_OnInputSelected ));
  ApplicationSettingsInputField_OnSetOnEditStart( &_this->CurrentPassword, EwNewSlot( 
  _this, ApplicationSettingsChangePassword_slotKeyboardOpen ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ApplicationSettingsInputField_OnSetOnEditStart( &_this->NewPassword, EwNewSlot( 
  _this, ApplicationSettingsChangePassword_slotKeyboardOpen ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ApplicationSettingsInputField_OnSetOnEditStart( &_this->ConNewPass, EwNewSlot( 
  _this, ApplicationSettingsChangePassword_slotKeyboardOpen ));
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  _this->moveEffect.Super1.OnFinished = EwNewSlot( _this, ApplicationSettingsChangePassword_SlotMoveEffectFinished );
  _this->moveEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationSettingsChangePassword_SlotMoveEffect );
  CoreGroup__OnSetFocus( &_this->Keyboard, 0 );

  /* Call the user defined constructor */
  ApplicationSettingsChangePassword_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsChangePassword' */
void ApplicationSettingsChangePassword__ReInit( ApplicationSettingsChangePassword _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  CoreOutline__ReInit( &_this->Outline );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  WidgetCustomButton__ReInit( &_this->CustomButton );
  ApplicationSettingsInputField__ReInit( &_this->CurrentPassword );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  ApplicationSettingsInputField__ReInit( &_this->NewPassword );
  ViewsText__ReInit( &_this->Text3 );
  ApplicationSettingsInputField__ReInit( &_this->ConNewPass );
  ViewsText__ReInit( &_this->Text4 );
  ApplicationAlphaNumKeyboard__ReInit( &_this->AlphaNumKeyboard1 );
  EffectsInt32Effect__ReInit( &_this->moveEffect );
  ApplicationKeyboard__ReInit( &_this->Keyboard );
}

/* Finalizer method for the class 'Application::SettingsChangePassword' */
void ApplicationSettingsChangePassword__Done( ApplicationSettingsChangePassword _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  CoreOutline__Done( &_this->Outline );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  WidgetCustomButton__Done( &_this->CustomButton );
  ApplicationSettingsInputField__Done( &_this->CurrentPassword );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  ApplicationSettingsInputField__Done( &_this->NewPassword );
  ViewsText__Done( &_this->Text3 );
  ApplicationSettingsInputField__Done( &_this->ConNewPass );
  ViewsText__Done( &_this->Text4 );
  ApplicationAlphaNumKeyboard__Done( &_this->AlphaNumKeyboard1 );
  EffectsInt32Effect__Done( &_this->moveEffect );
  ApplicationKeyboard__Done( &_this->Keyboard );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsChangePassword_Init( ApplicationSettingsChangePassword _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsText_OnSetString( &_this->CustomButton.label, EwLoadString( &_Const00CD ));
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
  CoreRectView__OnSetBounds( &_this->CurrentPassword.Rectangle, EwSetRectW( _this->CurrentPassword.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->CurrentPassword.Border, EwSetRectW( _this->CurrentPassword.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->CurrentPassword.TextEditor, EwSetRectW( _this->CurrentPassword.TextEditor.Super3.Bounds, 
  575 ));
  CoreRectView__OnSetBounds( &_this->NewPassword.Rectangle, EwSetRectW( _this->NewPassword.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->NewPassword.Border, EwSetRectW( _this->NewPassword.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->NewPassword.TextEditor, EwSetRectW( _this->NewPassword.TextEditor.Super3.Bounds, 
  575 ));
  CoreRectView__OnSetBounds( &_this->ConNewPass.Rectangle, EwSetRectW( _this->ConNewPass.Rectangle.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->ConNewPass.Border, EwSetRectW( _this->ConNewPass.Border.Super1.Bounds, 
  583 ));
  CoreRectView__OnSetBounds( &_this->ConNewPass.TextEditor, EwSetRectW( _this->ConNewPass.TextEditor.Super3.Bounds, 
  575 ));
  ViewsText_OnSetString( &_this->CustomButton.label, EwLoadString( &_Const00E2 ));
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsChangePassword_onEvent( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsChangePassword.onBack()' */
void ApplicationSettingsChangePassword_onBack( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsChangePassword.OnInputSelected()' */
void ApplicationSettingsChangePassword_OnInputSelected( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const00E3 ));
  CoreGroup_OnSetVisible((CoreGroup)&_this->AlphaNumKeyboard1, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->AlphaNumKeyboard1, 1 );
}

/* 'C' function for method : 'Application::SettingsChangePassword.SlotMoveEffectFinished()' */
void ApplicationSettingsChangePassword_SlotMoveEffectFinished( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::SettingsChangePassword.SlotMoveEffect()' */
void ApplicationSettingsChangePassword_SlotMoveEffect( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreOutline_OnSetScrollOffset( &_this->Outline, EwSetPointY( _this->Outline.ScrollOffset, 
  _this->moveEffect.Value ));
}

/* 'C' function for method : 'Application::SettingsChangePassword.slotKeyboardOpen()' */
void ApplicationSettingsChangePassword_slotKeyboardOpen( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Keyboard, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Keyboard, 1 );
  EwTrace( "%s", EwLoadString( &_Const00E4 ));
  _this->moveEffect.Value1 = _this->Outline.ScrollOffset.Y;

  if ( sender == ((XObject)&_this->CurrentPassword ))
  {
    ViewsLine_OnSetVisible( &_this->CurrentPassword.TextEditor.Caret, 1 );
    EffectsBoolEffect_OnSetEnabled( &_this->CurrentPassword.TextEditor.blinkEffect, 
    1 );
    _this->moveEffect.Value2 = 0;
    EwTrace( "%s", EwLoadString( &_Const00E5 ));
  }
  else
    if ( sender == ((XObject)&_this->NewPassword ))
    {
      ViewsLine_OnSetVisible( &_this->NewPassword.TextEditor.Caret, 1 );
      EffectsBoolEffect_OnSetEnabled( &_this->NewPassword.TextEditor.blinkEffect, 
      1 );
      _this->moveEffect.Value2 = -100;
      EwPostSignal( EwNewSlot( &_this->moveEffect, EffectsEffect_StartEffect ), 
        ((XObject)_this ));
      EwTrace( "%s", EwLoadString( &_Const00E6 ));
    }
    else
      if ( sender == ((XObject)&_this->ConNewPass ))
      {
        ViewsLine_OnSetVisible( &_this->ConNewPass.TextEditor.Caret, 1 );
        EffectsBoolEffect_OnSetEnabled( &_this->ConNewPass.TextEditor.blinkEffect, 
        1 );
        _this->moveEffect.Value2 = -250;
        EwPostSignal( EwNewSlot( &_this->moveEffect, EffectsEffect_StartEffect ), 
          ((XObject)_this ));
        EwTrace( "%s", EwLoadString( &_Const00E7 ));
      }
}

/* 'C' function for method : 'Application::SettingsChangePassword.slotKeyboardClose()' */
void ApplicationSettingsChangePassword_slotKeyboardClose( ApplicationSettingsChangePassword _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetEnabled((CoreGroup)&_this->Keyboard, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Keyboard, 0 );
  ViewsLine_OnSetVisible( &_this->CurrentPassword.TextEditor.Caret, 0 );
  EffectsBoolEffect_OnSetEnabled( &_this->CurrentPassword.TextEditor.blinkEffect, 
  0 );
  ViewsLine_OnSetVisible( &_this->NewPassword.TextEditor.Caret, 0 );
  EffectsBoolEffect_OnSetEnabled( &_this->NewPassword.TextEditor.blinkEffect, 0 );
  ViewsLine_OnSetVisible( &_this->ConNewPass.TextEditor.Caret, 0 );
  EffectsBoolEffect_OnSetEnabled( &_this->ConNewPass.TextEditor.blinkEffect, 0 );
  EwTrace( "%s", EwLoadString( &_Const00E8 ));

  if ( _this->moveEffect.Value2 < -90 )
  {
    _this->moveEffect.Value2 = 0;
    EwPostSignal( EwNewSlot( &_this->moveEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Application::SettingsChangePassword' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsChangePassword )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsChangePassword )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsChangePassword' */
EW_DEFINE_CLASS( ApplicationSettingsChangePassword, CoreGroup, theme, TitleBar, 
                 TitleBar, TitleBar, _.VMT, _.VMT, "Application::SettingsChangePassword" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsChangePassword )

/* Initializer for the class 'Application::SettingsDateTime' */
void ApplicationSettingsDateTime__Init( ApplicationSettingsDateTime _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsDateTime );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  WidgetCustomButton__Init( &_this->CustomButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtDate, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButtonDay, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButtonMonth, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButtonYear, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtTime, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButtonDay1, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButtonDay2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtTime1, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButtonDay3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtTime2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtTime3, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtTime4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->txtTime5, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsDateTime );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00B3 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->CustomButton, _Const00CC );
  CoreView_OnSetLayout((CoreView)&_this->txtDate, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtDate, _Const00E9 );
  ViewsText_OnSetAlignment( &_this->txtDate, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtDate, EwLoadString( &_Const00EA ));
  CoreRectView__OnSetBounds( &_this->SpinButtonDay, _Const00EB );
  ApplicationSpinButton_OnSetValueType( &_this->SpinButtonDay, 0 );
  ApplicationSpinButton_OnSetValue( &_this->SpinButtonDay, 12 );
  ApplicationSpinButton_OnSetValueMin( &_this->SpinButtonDay, 1 );
  ApplicationSpinButton_OnSetValueMax( &_this->SpinButtonDay, 31 );
  CoreRectView__OnSetBounds( &_this->SpinButtonMonth, _Const00EC );
  ApplicationSpinButton_OnSetValueType( &_this->SpinButtonMonth, 1 );
  ApplicationSpinButton_OnSetValue( &_this->SpinButtonMonth, 1 );
  ApplicationSpinButton_OnSetValueMin( &_this->SpinButtonMonth, 1 );
  ApplicationSpinButton_OnSetValueMax( &_this->SpinButtonMonth, 12 );
  CoreRectView__OnSetBounds( &_this->SpinButtonYear, _Const00ED );
  ApplicationSpinButton_OnSetValueType( &_this->SpinButtonYear, 0 );
  ApplicationSpinButton_OnSetValue( &_this->SpinButtonYear, 2026 );
  ApplicationSpinButton_OnSetValueMin( &_this->SpinButtonYear, 2022 );
  ApplicationSpinButton_OnSetValueMax( &_this->SpinButtonYear, 2035 );
  CoreView_OnSetLayout((CoreView)&_this->txtTime, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtTime, _Const00EE );
  ViewsText_OnSetAlignment( &_this->txtTime, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtTime, EwLoadString( &_Const00EF ));
  CoreRectView__OnSetBounds( &_this->SpinButtonDay1, _Const00F0 );
  ApplicationSpinButton_OnSetValueType( &_this->SpinButtonDay1, 0 );
  ApplicationSpinButton_OnSetValue( &_this->SpinButtonDay1, 14 );
  ApplicationSpinButton_OnSetValueMin( &_this->SpinButtonDay1, 0 );
  ApplicationSpinButton_OnSetValueMax( &_this->SpinButtonDay1, 23 );
  CoreRectView__OnSetBounds( &_this->SpinButtonDay2, _Const00F1 );
  ApplicationSpinButton_OnSetValueType( &_this->SpinButtonDay2, 0 );
  ApplicationSpinButton_OnSetValue( &_this->SpinButtonDay2, 33 );
  ApplicationSpinButton_OnSetValueMin( &_this->SpinButtonDay2, 0 );
  ApplicationSpinButton_OnSetValueMax( &_this->SpinButtonDay2, 59 );
  CoreView_OnSetLayout((CoreView)&_this->txtTime1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtTime1, _Const00F2 );
  ViewsText_OnSetAlignment( &_this->txtTime1, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtTime1, EwLoadString( &_Const00F3 ));
  CoreRectView__OnSetBounds( &_this->SpinButtonDay3, _Const00F4 );
  ApplicationSpinButton_OnSetValueType( &_this->SpinButtonDay3, 0 );
  ApplicationSpinButton_OnSetValue( &_this->SpinButtonDay3, 12 );
  ApplicationSpinButton_OnSetValueMin( &_this->SpinButtonDay3, 0 );
  ApplicationSpinButton_OnSetValueMax( &_this->SpinButtonDay3, 59 );
  CoreView_OnSetLayout((CoreView)&_this->txtTime2, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtTime2, _Const00F5 );
  ViewsText_OnSetAlignment( &_this->txtTime2, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtTime2, EwLoadString( &_Const00F3 ));
  CoreView_OnSetLayout((CoreView)&_this->txtTime3, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtTime3, _Const00F6 );
  ViewsText_OnSetAlignment( &_this->txtTime3, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtTime3, EwLoadString( &_Const00F7 ));
  CoreRectView__OnSetBounds( &_this->Image1, _Const00F8 );
  CoreRectView__OnSetBounds( &_this->Image2, _Const00F9 );
  CoreView_OnSetLayout((CoreView)&_this->txtTime4, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtTime4, _Const00FA );
  ViewsText_OnSetAlignment( &_this->txtTime4, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtTime4, EwLoadString( &_Const00FB ));
  CoreView_OnSetLayout((CoreView)&_this->txtTime5, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->txtTime5, _Const00FC );
  ViewsText_OnSetAlignment( &_this->txtTime5, ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->txtTime5, EwLoadString( &_Const00FD ));
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CustomButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtDate ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButtonDay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButtonMonth ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButtonYear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtTime ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButtonDay1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButtonDay2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtTime1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButtonDay3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtTime2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtTime3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtTime4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->txtTime5 ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsDateTime_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsDateTime_onBack );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsText_OnSetFont( &_this->txtDate, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtTime, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtTime1, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtTime2, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtTime3, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResRadioBtNormal, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Image2, EwLoadResource( &ResRadioBtClicked, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->txtTime4, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->txtTime5, EwLoadResource( &ApplicationFontNormal28, 
  ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSettingsDateTime_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsDateTime' */
void ApplicationSettingsDateTime__ReInit( ApplicationSettingsDateTime _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  WidgetCustomButton__ReInit( &_this->CustomButton );
  ViewsText__ReInit( &_this->txtDate );
  ApplicationSpinButton__ReInit( &_this->SpinButtonDay );
  ApplicationSpinButton__ReInit( &_this->SpinButtonMonth );
  ApplicationSpinButton__ReInit( &_this->SpinButtonYear );
  ViewsText__ReInit( &_this->txtTime );
  ApplicationSpinButton__ReInit( &_this->SpinButtonDay1 );
  ApplicationSpinButton__ReInit( &_this->SpinButtonDay2 );
  ViewsText__ReInit( &_this->txtTime1 );
  ApplicationSpinButton__ReInit( &_this->SpinButtonDay3 );
  ViewsText__ReInit( &_this->txtTime2 );
  ViewsText__ReInit( &_this->txtTime3 );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsImage__ReInit( &_this->Image2 );
  ViewsText__ReInit( &_this->txtTime4 );
  ViewsText__ReInit( &_this->txtTime5 );
}

/* Finalizer method for the class 'Application::SettingsDateTime' */
void ApplicationSettingsDateTime__Done( ApplicationSettingsDateTime _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  WidgetCustomButton__Done( &_this->CustomButton );
  ViewsText__Done( &_this->txtDate );
  ApplicationSpinButton__Done( &_this->SpinButtonDay );
  ApplicationSpinButton__Done( &_this->SpinButtonMonth );
  ApplicationSpinButton__Done( &_this->SpinButtonYear );
  ViewsText__Done( &_this->txtTime );
  ApplicationSpinButton__Done( &_this->SpinButtonDay1 );
  ApplicationSpinButton__Done( &_this->SpinButtonDay2 );
  ViewsText__Done( &_this->txtTime1 );
  ApplicationSpinButton__Done( &_this->SpinButtonDay3 );
  ViewsText__Done( &_this->txtTime2 );
  ViewsText__Done( &_this->txtTime3 );
  ViewsImage__Done( &_this->Image1 );
  ViewsImage__Done( &_this->Image2 );
  ViewsText__Done( &_this->txtTime4 );
  ViewsText__Done( &_this->txtTime5 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsDateTime_Init( ApplicationSettingsDateTime _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsText_OnSetString( &_this->CustomButton.label, EwLoadString( &_Const00CD ));
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
  ViewsText_OnSetString( &_this->CustomButton.label, EwLoadString( &_Const00FE ));
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsDateTime_onEvent( ApplicationSettingsDateTime _this, XObject 
  sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsDateTime.onBack()' */
void ApplicationSettingsDateTime_onBack( ApplicationSettingsDateTime _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsDateTime' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsDateTime )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsDateTime )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsDateTime' */
EW_DEFINE_CLASS( ApplicationSettingsDateTime, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::SettingsDateTime" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsDateTime )

/* Include a file containing the font resource : 'Application::FontNormal33' */
#include "_ApplicationFontNormal33.h"

/* Table with links to derived variants of the font resource : 'Application::FontNormal33' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontNormal33 )

/* Initializer for the class 'Application::ProfileSurgeryInProgressScreen' */
void ApplicationProfileSurgeryInProgressScreen__Init( ApplicationProfileSurgeryInProgressScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationProfileSurgeryInProgressScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ProfileTxt, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctComplete, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationProfileSurgeryInProgressScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00FF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0100 ));
  ViewsText_OnSetColor( &_this->Text, _Const0101 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const0102 );
  ViewsRectangle_OnSetColor( &_this->Rectangle1, _Const0101 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0103 );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0104 ));
  CoreRectView__OnSetBounds( &_this->ProfileTxt, _Const0105 );
  ViewsText_OnSetAlignment( &_this->ProfileTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ProfileTxt, 0 );
  ViewsText_OnSetColor( &_this->ProfileTxt, _Const0106 );
  CoreRectView__OnSetBounds( &_this->rctComplete, _Const0107 );
  ViewsRectangle_OnSetColor( &_this->rctComplete, _Const0101 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0108 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  ViewsBorder_OnSetColor( &_this->Border, _Const00A3 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0109 );
  ViewsText_OnSetAlignment( &_this->Text3, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const010A ));
  ViewsText_OnSetColor( &_this->Text3, _Const00A3 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const010B );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const010C );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const010D );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const010E );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ProfileTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctComplete ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationProfileSurgeryInProgressScreen_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontNormal33, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->ProfileTxt, EwLoadResource( &ApplicationFontBold22, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ApplicationFontBold22, ResourcesFont ));
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationProfileSurgeryInProgressScreen_slotTimer );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationProfileSurgeryInProgressScreen_slotRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationProfileSurgeryInProgressScreen_slotPress );

  /* Call the user defined constructor */
  ApplicationProfileSurgeryInProgressScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ProfileSurgeryInProgressScreen' */
void ApplicationProfileSurgeryInProgressScreen__ReInit( ApplicationProfileSurgeryInProgressScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsText__ReInit( &_this->Text );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->ProfileTxt );
  ViewsRectangle__ReInit( &_this->rctComplete );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->Text3 );
  CoreTimer__ReInit( &_this->Timer );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Application::ProfileSurgeryInProgressScreen' */
void ApplicationProfileSurgeryInProgressScreen__Done( ApplicationProfileSurgeryInProgressScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsText__Done( &_this->Text );
  ViewsRectangle__Done( &_this->Rectangle1 );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->ProfileTxt );
  ViewsRectangle__Done( &_this->rctComplete );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->Text3 );
  CoreTimer__Done( &_this->Timer );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationProfileSurgeryInProgressScreen_Init( ApplicationProfileSurgeryInProgressScreen _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->ElapsedSeconds = 0;
  ViewsText_OnSetString( &_this->ProfileTxt, EwConcatString( EwGetAutoObject( &ApplicationGlobalSettings, 
  ApplicationSettings )->SelectedProfile, EwLoadString( &_Const010F )));
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationProfileSurgeryInProgressScreen_onEvent( ApplicationProfileSurgeryInProgressScreen _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ProfileSurgeryInProgressScreen.slotTimer()' */
void ApplicationProfileSurgeryInProgressScreen_slotTimer( ApplicationProfileSurgeryInProgressScreen _this, 
  XObject sender )
{
  XInt32 hours;
  XInt32 minutes;
  XInt32 seconds;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->ElapsedSeconds = _this->ElapsedSeconds + 1;
  hours = _this->ElapsedSeconds / 3600;
  minutes = ( _this->ElapsedSeconds % 3600 ) / 60;
  seconds = _this->ElapsedSeconds % 60;
  ViewsText_OnSetString( &_this->Text1, EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( hours, 2, 10 ), EwLoadString( &_Const00F3 )), 
  EwNewStringInt( minutes, 2, 10 )), EwLoadString( &_Const00F3 )), EwNewStringInt( 
  seconds, 2, 10 )));
}

/* 'C' function for method : 'Application::ProfileSurgeryInProgressScreen.slotPress()' */
void ApplicationProfileSurgeryInProgressScreen_slotPress( ApplicationProfileSurgeryInProgressScreen _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->rctComplete, _Const0110 );
  CoreTimer_OnSetEnabled( &_this->Timer, 0 );
}

/* 'C' function for method : 'Application::ProfileSurgeryInProgressScreen.slotRelease()' */
void ApplicationProfileSurgeryInProgressScreen_slotRelease( ApplicationProfileSurgeryInProgressScreen _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->rctComplete, _Const0101 );
  EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->SurgerCompletedTime 
  = EwShareString( _this->Text1.String );
  EwTrace( "%s%s", EwLoadString( &_Const0099 ), _this->Text1.String );
  EwTrace( "%s%s", EwLoadString( &_Const0099 ), EwGetAutoObject( &ApplicationGlobalSettings, 
    ApplicationSettings )->SurgerCompletedTime );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationProfileSurgeryCompletedScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::ProfileSurgeryInProgressScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationProfileSurgeryInProgressScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationProfileSurgeryInProgressScreen )

/* Virtual Method Table (VMT) for the class : 'Application::ProfileSurgeryInProgressScreen' */
EW_DEFINE_CLASS( ApplicationProfileSurgeryInProgressScreen, CoreGroup, SettingsImage, 
                 TitleBar, TitleBar, TitleBar, ElapsedSeconds, ElapsedSeconds, "Application::ProfileSurgeryInProgressScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationProfileSurgeryInProgressScreen )

/* Initializer for the class 'Application::ProfileSurgeryCompletedScreen' */
void ApplicationProfileSurgeryCompletedScreen__Init( ApplicationProfileSurgeryCompletedScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationProfileSurgeryCompletedScreen );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TitleTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TimerTxt, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->SelectedModeTxt, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->SelectedModeTxt1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationProfileSurgeryCompletedScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->TitleTxt, _Const0111 );
  ViewsText_OnSetAlignment( &_this->TitleTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TitleTxt, EwLoadString( &_Const0112 ));
  ViewsText_OnSetColor( &_this->TitleTxt, _Const0113 );
  CoreRectView__OnSetBounds( &_this->TimerTxt, _Const0114 );
  ViewsText_OnSetAlignment( &_this->TimerTxt, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TimerTxt, EwLoadString( &_Const0115 ));
  CoreRectView__OnSetBounds( &_this->SelectedModeTxt, _Const0116 );
  ViewsText_OnSetAlignment( &_this->SelectedModeTxt, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->SelectedModeTxt, 0 );
  ViewsText_OnSetColor( &_this->SelectedModeTxt, _Const0106 );
  CoreRectView__OnSetBounds( &_this->rctButton, _Const0117 );
  ViewsRectangle_OnSetColor( &_this->rctButton, _Const0118 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0119 );
  ViewsText_OnSetAlignment( &_this->Text3, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const011A ));
  ViewsText_OnSetColor( &_this->Text3, _Const00A3 );
  CoreRectView__OnSetBounds( &_this->SelectedModeTxt1, _Const011B );
  ViewsText_OnSetAlignment( &_this->SelectedModeTxt1, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->SelectedModeTxt1, EwLoadString( &_Const011C ));
  ViewsText_OnSetColor( &_this->SelectedModeTxt1, _Const0106 );
  CoreRectView__OnSetBounds( &_this->Image, _Const011D );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const011E );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const011F );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0120 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0121 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimerTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SelectedModeTxt ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SelectedModeTxt1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationProfileSurgeryCompletedScreen_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsText_OnSetFont( &_this->TitleTxt, EwLoadResource( &ApplicationFontBold32, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TimerTxt, EwLoadResource( &ApplicationFontNormal33, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->SelectedModeTxt, EwLoadResource( &ApplicationFontBold22, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ApplicationFontBold22, ResourcesFont ));
  ViewsText_OnSetFont( &_this->SelectedModeTxt1, EwLoadResource( &ApplicationFontBold24, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResImgProcedureCompleted, 
  ResourcesBitmap ));
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationProfileSurgeryCompletedScreen_SlotOnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationProfileSurgeryCompletedScreen_SlotOnPress );

  /* Call the user defined constructor */
  ApplicationProfileSurgeryCompletedScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ProfileSurgeryCompletedScreen' */
void ApplicationProfileSurgeryCompletedScreen__ReInit( ApplicationProfileSurgeryCompletedScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsText__ReInit( &_this->TitleTxt );
  ViewsText__ReInit( &_this->TimerTxt );
  ViewsText__ReInit( &_this->SelectedModeTxt );
  ViewsRectangle__ReInit( &_this->rctButton );
  ViewsText__ReInit( &_this->Text3 );
  ViewsText__ReInit( &_this->SelectedModeTxt1 );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Application::ProfileSurgeryCompletedScreen' */
void ApplicationProfileSurgeryCompletedScreen__Done( ApplicationProfileSurgeryCompletedScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsText__Done( &_this->TitleTxt );
  ViewsText__Done( &_this->TimerTxt );
  ViewsText__Done( &_this->SelectedModeTxt );
  ViewsRectangle__Done( &_this->rctButton );
  ViewsText__Done( &_this->Text3 );
  ViewsText__Done( &_this->SelectedModeTxt1 );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationProfileSurgeryCompletedScreen_Init( ApplicationProfileSurgeryCompletedScreen _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsText_OnSetString( &_this->SelectedModeTxt, EwGetAutoObject( &ApplicationGlobalSettings, 
  ApplicationSettings )->SelectedProfile );
  ViewsText_OnSetString( &_this->TimerTxt, EwGetAutoObject( &ApplicationGlobalSettings, 
  ApplicationSettings )->SurgerCompletedTime );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationProfileSurgeryCompletedScreen_onEvent( ApplicationProfileSurgeryCompletedScreen _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ProfileSurgeryCompletedScreen.SlotOnRelease()' */
void ApplicationProfileSurgeryCompletedScreen_SlotOnRelease( ApplicationProfileSurgeryCompletedScreen _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->rctButton, _Const0118 );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::ProfileSurgeryCompletedScreen.SlotOnPress()' */
void ApplicationProfileSurgeryCompletedScreen_SlotOnPress( ApplicationProfileSurgeryCompletedScreen _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsRectangle_OnSetColor( &_this->rctButton, _Const0122 );
}

/* Variants derived from the class : 'Application::ProfileSurgeryCompletedScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationProfileSurgeryCompletedScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationProfileSurgeryCompletedScreen )

/* Virtual Method Table (VMT) for the class : 'Application::ProfileSurgeryCompletedScreen' */
EW_DEFINE_CLASS( ApplicationProfileSurgeryCompletedScreen, CoreGroup, SettingsImage, 
                 TitleBar, TitleBar, TitleBar, _.VMT, _.VMT, "Application::ProfileSurgeryCompletedScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationProfileSurgeryCompletedScreen )

/* Initializer for the class 'Application::AlphaNumKeyboard' */
void ApplicationAlphaNumKeyboard__Init( ApplicationAlphaNumKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesAlphaNumKeyboard__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationAlphaNumKeyboard );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->AreaKeySpace, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->ActiveKeyShiftRight, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->ActiveKeyShiftLeft, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->ActiveKeyCapsLock, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Highlight, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey01, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey02, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey03, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey04, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey05, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey06, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey07, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey08, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey09, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey10, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey11, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey12, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey13, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey14, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey15, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey16, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey17, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey18, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey19, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey20, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey21, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey22, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey23, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey24, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey25, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey26, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey27, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey28, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey29, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey30, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey31, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey32, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey33, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey34, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey35, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey36, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey37, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey38, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey39, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey40, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey41, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey42, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey43, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey44, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey45, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey46, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TextKey47, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyTab, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyCapsLock, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyShiftLeft, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyClear, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyEnter, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyShiftRight, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationAlphaNumKeyboard );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0123 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0123 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const000B );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Border, _Const0123 );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0047 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0124 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0125 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0126 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0127 );
  _this->TouchHandler.EnableMultiTouch = 1;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->AreaKeySpace, _Const0128 );
  ViewsBorder_OnSetWidth( &_this->AreaKeySpace, 2 );
  ViewsBorder_OnSetColor( &_this->AreaKeySpace, _Const0129 );
  CoreRectView__OnSetBounds( &_this->ActiveKeyShiftRight, _Const012A );
  ViewsBorder_OnSetWidth( &_this->ActiveKeyShiftRight, 3 );
  ViewsBorder_OnSetColor( &_this->ActiveKeyShiftRight, _Const012B );
  ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftRight, 0 );
  CoreRectView__OnSetBounds( &_this->ActiveKeyShiftLeft, _Const012C );
  ViewsBorder_OnSetWidth( &_this->ActiveKeyShiftLeft, 3 );
  ViewsBorder_OnSetColor( &_this->ActiveKeyShiftLeft, _Const012B );
  ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftLeft, 0 );
  CoreRectView__OnSetBounds( &_this->ActiveKeyCapsLock, _Const012D );
  ViewsBorder_OnSetWidth( &_this->ActiveKeyCapsLock, 3 );
  ViewsBorder_OnSetColor( &_this->ActiveKeyCapsLock, _Const012B );
  ViewsBorder_OnSetVisible( &_this->ActiveKeyCapsLock, 0 );
  CoreRectView__OnSetBounds( &_this->Highlight, _Const0128 );
  ViewsRectangle_OnSetColor( &_this->Highlight, _Const012E );
  ViewsRectangle_OnSetVisible( &_this->Highlight, 0 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey01, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey01, _Const012F );
  ViewsText_OnSetString( &_this->TextKey01, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey01, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey02, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey02, _Const0132 );
  ViewsText_OnSetString( &_this->TextKey02, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey02, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey03, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey03, _Const0133 );
  ViewsText_OnSetString( &_this->TextKey03, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey03, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey04, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey04, _Const0134 );
  ViewsText_OnSetString( &_this->TextKey04, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey04, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey05, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey05, _Const0135 );
  ViewsText_OnSetString( &_this->TextKey05, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey05, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey06, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey06, _Const0136 );
  ViewsText_OnSetString( &_this->TextKey06, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey06, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey07, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey07, _Const0137 );
  ViewsText_OnSetString( &_this->TextKey07, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey07, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey08, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey08, _Const0138 );
  ViewsText_OnSetString( &_this->TextKey08, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey08, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey09, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey09, _Const0139 );
  ViewsText_OnSetString( &_this->TextKey09, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey09, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey10, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey10, _Const013A );
  ViewsText_OnSetString( &_this->TextKey10, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey10, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey11, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey11, _Const013B );
  ViewsText_OnSetString( &_this->TextKey11, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey11, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey12, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey12, _Const013C );
  ViewsText_OnSetString( &_this->TextKey12, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey12, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey13, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey13, _Const013D );
  ViewsText_OnSetString( &_this->TextKey13, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey13, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey14, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey14, _Const013E );
  ViewsText_OnSetString( &_this->TextKey14, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey14, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey15, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey15, _Const013F );
  ViewsText_OnSetString( &_this->TextKey15, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey15, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey16, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey16, _Const0140 );
  ViewsText_OnSetString( &_this->TextKey16, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey16, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey17, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey17, _Const0141 );
  ViewsText_OnSetString( &_this->TextKey17, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey17, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey18, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey18, _Const0142 );
  ViewsText_OnSetString( &_this->TextKey18, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey18, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey19, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey19, _Const0143 );
  ViewsText_OnSetString( &_this->TextKey19, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey19, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey20, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey20, _Const0144 );
  ViewsText_OnSetString( &_this->TextKey20, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey20, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey21, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey21, _Const0145 );
  ViewsText_OnSetString( &_this->TextKey21, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey21, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey22, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey22, _Const0146 );
  ViewsText_OnSetString( &_this->TextKey22, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey22, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey23, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey23, _Const0147 );
  ViewsText_OnSetString( &_this->TextKey23, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey23, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey24, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey24, _Const0148 );
  ViewsText_OnSetString( &_this->TextKey24, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey24, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey25, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey25, _Const0149 );
  ViewsText_OnSetString( &_this->TextKey25, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey25, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey26, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey26, _Const014A );
  ViewsText_OnSetString( &_this->TextKey26, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey26, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey27, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey27, _Const014B );
  ViewsText_OnSetString( &_this->TextKey27, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey27, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey28, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey28, _Const014C );
  ViewsText_OnSetString( &_this->TextKey28, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey28, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey29, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey29, _Const014D );
  ViewsText_OnSetString( &_this->TextKey29, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey29, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey30, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey30, _Const014E );
  ViewsText_OnSetString( &_this->TextKey30, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey30, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey31, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey31, _Const014F );
  ViewsText_OnSetString( &_this->TextKey31, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey31, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey32, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey32, _Const0150 );
  ViewsText_OnSetString( &_this->TextKey32, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey32, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey33, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey33, _Const0151 );
  ViewsText_OnSetString( &_this->TextKey33, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey33, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey34, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey34, _Const0152 );
  ViewsText_OnSetString( &_this->TextKey34, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey34, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey35, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey35, _Const0153 );
  ViewsText_OnSetString( &_this->TextKey35, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey35, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey36, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey36, _Const0154 );
  ViewsText_OnSetString( &_this->TextKey36, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey36, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey37, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey37, _Const0155 );
  ViewsText_OnSetString( &_this->TextKey37, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey37, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey38, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey38, _Const0156 );
  ViewsText_OnSetString( &_this->TextKey38, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey38, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey39, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey39, _Const0157 );
  ViewsText_OnSetString( &_this->TextKey39, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey39, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey40, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey40, _Const0158 );
  ViewsText_OnSetString( &_this->TextKey40, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey40, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey41, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey41, _Const0159 );
  ViewsText_OnSetString( &_this->TextKey41, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey41, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey42, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey42, _Const015A );
  ViewsText_OnSetString( &_this->TextKey42, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey42, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey43, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey43, _Const015B );
  ViewsText_OnSetString( &_this->TextKey43, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey43, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey44, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey44, _Const015C );
  ViewsText_OnSetString( &_this->TextKey44, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey44, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey45, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey45, _Const015D );
  ViewsText_OnSetString( &_this->TextKey45, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey45, _Const0131 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey46, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey46, _Const015E );
  ViewsText_OnSetString( &_this->TextKey46, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey46, _Const00A3 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey47, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey47, _Const015F );
  ViewsText_OnSetString( &_this->TextKey47, EwLoadString( &_Const0130 ));
  ViewsText_OnSetColor( &_this->TextKey47, _Const00A3 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyTab, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyTab, _Const0160 );
  ViewsImage_OnSetColor( &_this->ImageKeyTab, _Const0131 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyTab, 5 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyCapsLock, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyCapsLock, _Const012D );
  ViewsImage_OnSetColor( &_this->ImageKeyCapsLock, _Const0131 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyCapsLock, 3 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyShiftLeft, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyShiftLeft, _Const012C );
  ViewsImage_OnSetColor( &_this->ImageKeyShiftLeft, _Const0131 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyShiftLeft, 2 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyClear, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyClear, _Const0161 );
  ViewsImage_OnSetColor( &_this->ImageKeyClear, _Const0131 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyClear, 4 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyEnter, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyEnter, _Const0162 );
  ViewsImage_OnSetColor( &_this->ImageKeyEnter, _Const0131 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyEnter, 6 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyShiftRight, CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyShiftRight, _Const012A );
  ViewsImage_OnSetColor( &_this->ImageKeyShiftRight, _Const0131 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyShiftRight, 2 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AreaKeySpace ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ActiveKeyShiftRight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ActiveKeyShiftLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ActiveKeyCapsLock ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Highlight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey01 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey02 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey03 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey04 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey05 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey06 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey07 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey08 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey09 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey11 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey12 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey13 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey14 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey15 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey16 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey17 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey18 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey19 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey20 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey21 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey22 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey23 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey24 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey25 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey26 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey27 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey28 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey29 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey30 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey31 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey32 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey33 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey34 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey35 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey36 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey37 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey38 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey39 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey40 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey41 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey42 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey43 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey44 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey45 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey46 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey47 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyTab ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyCapsLock ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyShiftLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyClear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyEnter ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyShiftRight ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationAlphaNumKeyboard_onFlashTimer );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, ApplicationAlphaNumKeyboard_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationAlphaNumKeyboard_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationAlphaNumKeyboard_onPressTouch );
  ViewsText_OnSetFont( &_this->TextKey01, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey02, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey03, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey04, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey05, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey06, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey07, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey08, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey09, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey10, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey11, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey12, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey13, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey14, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey15, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey16, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey17, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey18, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey19, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey20, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey21, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey22, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey23, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey24, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey25, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey26, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey27, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey28, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey29, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey30, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey31, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey32, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey33, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey34, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey35, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey36, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey37, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey38, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey39, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey40, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey41, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey42, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey43, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey44, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey45, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey46, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey47, EwLoadResource( &ApplicationFontBold28, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyTab, EwLoadResource( &ResourcesKeyIconsSmall, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyCapsLock, EwLoadResource( &ResourcesKeyIconsSmall, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyShiftLeft, EwLoadResource( &ResourcesKeyIconsSmall, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyClear, EwLoadResource( &ResourcesKeyIconsSmall, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyEnter, EwLoadResource( &ResourcesKeyIconsSmall, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyShiftRight, EwLoadResource( &ResourcesKeyIconsSmall, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationAlphaNumKeyboard_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::AlphaNumKeyboard' */
void ApplicationAlphaNumKeyboard__ReInit( ApplicationAlphaNumKeyboard _this )
{
  /* At first re-initialize the super class ... */
  TemplatesAlphaNumKeyboard__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->Border );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsBorder__ReInit( &_this->AreaKeySpace );
  ViewsBorder__ReInit( &_this->ActiveKeyShiftRight );
  ViewsBorder__ReInit( &_this->ActiveKeyShiftLeft );
  ViewsBorder__ReInit( &_this->ActiveKeyCapsLock );
  ViewsRectangle__ReInit( &_this->Highlight );
  ViewsText__ReInit( &_this->TextKey01 );
  ViewsText__ReInit( &_this->TextKey02 );
  ViewsText__ReInit( &_this->TextKey03 );
  ViewsText__ReInit( &_this->TextKey04 );
  ViewsText__ReInit( &_this->TextKey05 );
  ViewsText__ReInit( &_this->TextKey06 );
  ViewsText__ReInit( &_this->TextKey07 );
  ViewsText__ReInit( &_this->TextKey08 );
  ViewsText__ReInit( &_this->TextKey09 );
  ViewsText__ReInit( &_this->TextKey10 );
  ViewsText__ReInit( &_this->TextKey11 );
  ViewsText__ReInit( &_this->TextKey12 );
  ViewsText__ReInit( &_this->TextKey13 );
  ViewsText__ReInit( &_this->TextKey14 );
  ViewsText__ReInit( &_this->TextKey15 );
  ViewsText__ReInit( &_this->TextKey16 );
  ViewsText__ReInit( &_this->TextKey17 );
  ViewsText__ReInit( &_this->TextKey18 );
  ViewsText__ReInit( &_this->TextKey19 );
  ViewsText__ReInit( &_this->TextKey20 );
  ViewsText__ReInit( &_this->TextKey21 );
  ViewsText__ReInit( &_this->TextKey22 );
  ViewsText__ReInit( &_this->TextKey23 );
  ViewsText__ReInit( &_this->TextKey24 );
  ViewsText__ReInit( &_this->TextKey25 );
  ViewsText__ReInit( &_this->TextKey26 );
  ViewsText__ReInit( &_this->TextKey27 );
  ViewsText__ReInit( &_this->TextKey28 );
  ViewsText__ReInit( &_this->TextKey29 );
  ViewsText__ReInit( &_this->TextKey30 );
  ViewsText__ReInit( &_this->TextKey31 );
  ViewsText__ReInit( &_this->TextKey32 );
  ViewsText__ReInit( &_this->TextKey33 );
  ViewsText__ReInit( &_this->TextKey34 );
  ViewsText__ReInit( &_this->TextKey35 );
  ViewsText__ReInit( &_this->TextKey36 );
  ViewsText__ReInit( &_this->TextKey37 );
  ViewsText__ReInit( &_this->TextKey38 );
  ViewsText__ReInit( &_this->TextKey39 );
  ViewsText__ReInit( &_this->TextKey40 );
  ViewsText__ReInit( &_this->TextKey41 );
  ViewsText__ReInit( &_this->TextKey42 );
  ViewsText__ReInit( &_this->TextKey43 );
  ViewsText__ReInit( &_this->TextKey44 );
  ViewsText__ReInit( &_this->TextKey45 );
  ViewsText__ReInit( &_this->TextKey46 );
  ViewsText__ReInit( &_this->TextKey47 );
  ViewsImage__ReInit( &_this->ImageKeyTab );
  ViewsImage__ReInit( &_this->ImageKeyCapsLock );
  ViewsImage__ReInit( &_this->ImageKeyShiftLeft );
  ViewsImage__ReInit( &_this->ImageKeyClear );
  ViewsImage__ReInit( &_this->ImageKeyEnter );
  ViewsImage__ReInit( &_this->ImageKeyShiftRight );
}

/* Finalizer method for the class 'Application::AlphaNumKeyboard' */
void ApplicationAlphaNumKeyboard__Done( ApplicationAlphaNumKeyboard _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesAlphaNumKeyboard );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->Border );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsBorder__Done( &_this->AreaKeySpace );
  ViewsBorder__Done( &_this->ActiveKeyShiftRight );
  ViewsBorder__Done( &_this->ActiveKeyShiftLeft );
  ViewsBorder__Done( &_this->ActiveKeyCapsLock );
  ViewsRectangle__Done( &_this->Highlight );
  ViewsText__Done( &_this->TextKey01 );
  ViewsText__Done( &_this->TextKey02 );
  ViewsText__Done( &_this->TextKey03 );
  ViewsText__Done( &_this->TextKey04 );
  ViewsText__Done( &_this->TextKey05 );
  ViewsText__Done( &_this->TextKey06 );
  ViewsText__Done( &_this->TextKey07 );
  ViewsText__Done( &_this->TextKey08 );
  ViewsText__Done( &_this->TextKey09 );
  ViewsText__Done( &_this->TextKey10 );
  ViewsText__Done( &_this->TextKey11 );
  ViewsText__Done( &_this->TextKey12 );
  ViewsText__Done( &_this->TextKey13 );
  ViewsText__Done( &_this->TextKey14 );
  ViewsText__Done( &_this->TextKey15 );
  ViewsText__Done( &_this->TextKey16 );
  ViewsText__Done( &_this->TextKey17 );
  ViewsText__Done( &_this->TextKey18 );
  ViewsText__Done( &_this->TextKey19 );
  ViewsText__Done( &_this->TextKey20 );
  ViewsText__Done( &_this->TextKey21 );
  ViewsText__Done( &_this->TextKey22 );
  ViewsText__Done( &_this->TextKey23 );
  ViewsText__Done( &_this->TextKey24 );
  ViewsText__Done( &_this->TextKey25 );
  ViewsText__Done( &_this->TextKey26 );
  ViewsText__Done( &_this->TextKey27 );
  ViewsText__Done( &_this->TextKey28 );
  ViewsText__Done( &_this->TextKey29 );
  ViewsText__Done( &_this->TextKey30 );
  ViewsText__Done( &_this->TextKey31 );
  ViewsText__Done( &_this->TextKey32 );
  ViewsText__Done( &_this->TextKey33 );
  ViewsText__Done( &_this->TextKey34 );
  ViewsText__Done( &_this->TextKey35 );
  ViewsText__Done( &_this->TextKey36 );
  ViewsText__Done( &_this->TextKey37 );
  ViewsText__Done( &_this->TextKey38 );
  ViewsText__Done( &_this->TextKey39 );
  ViewsText__Done( &_this->TextKey40 );
  ViewsText__Done( &_this->TextKey41 );
  ViewsText__Done( &_this->TextKey42 );
  ViewsText__Done( &_this->TextKey43 );
  ViewsText__Done( &_this->TextKey44 );
  ViewsText__Done( &_this->TextKey45 );
  ViewsText__Done( &_this->TextKey46 );
  ViewsText__Done( &_this->TextKey47 );
  ViewsImage__Done( &_this->ImageKeyTab );
  ViewsImage__Done( &_this->ImageKeyCapsLock );
  ViewsImage__Done( &_this->ImageKeyShiftLeft );
  ViewsImage__Done( &_this->ImageKeyClear );
  ViewsImage__Done( &_this->ImageKeyEnter );
  ViewsImage__Done( &_this->ImageKeyShiftRight );

  /* Don't forget to deinitialize the super class ... */
  TemplatesAlphaNumKeyboard__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationAlphaNumKeyboard_Init( ApplicationAlphaNumKeyboard _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationAlphaNumKeyboard_loadLayoutFromString( _this, EwLoadString( &_Const0163 ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationAlphaNumKeyboard_UpdateViewState( ApplicationAlphaNumKeyboard _this, 
  XSet aState )
{
  CoreView isKeyView;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isKeyView = 0;
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( isPressed && EwIsPointInRect( CoreView__GetExtent( &_this->TouchHandler ), 
      _this->recentPosition ))
    isKeyView = CoreGroup__FindViewAtPosition( _this, 0, _this->recentPosition, 
    0 );

  if (( EwCastObject( isKeyView, ViewsText ) == 0 ) && ( EwCastObject( isKeyView, 
      ViewsImage ) == 0 ))
    isKeyView = 0;

  if ( isKeyView != _this->keyView )
  {
    ViewsText isTextKeyView = EwCastObject( isKeyView, ViewsText );
    ViewsText textKeyView = EwCastObject( _this->keyView, ViewsText );
    ViewsImage isImageKeyView = EwCastObject( isKeyView, ViewsImage );
    ViewsImage imageKeyView = EwCastObject( _this->keyView, ViewsImage );

    if ( isKeyView != 0 )
    {
      CoreRectView__OnSetBounds( &_this->Highlight, CoreView__GetExtent( isKeyView ));
      ViewsRectangle_OnSetVisible( &_this->Highlight, 1 );
    }
    else
      ViewsRectangle_OnSetVisible( &_this->Highlight, 0 );

    if ( isTextKeyView != 0 )
      ViewsText_OnSetColor( isTextKeyView, _Const0049 );

    if ( textKeyView != 0 )
      ViewsText_OnSetColor( textKeyView, _Const0049 );

    if ( isImageKeyView != 0 )
      ViewsImage_OnSetColor( isImageKeyView, _Const0049 );

    if ( imageKeyView != 0 )
      ViewsImage_OnSetColor( imageKeyView, _Const0049 );
  }

  _this->keyView = isKeyView;
}

/* This method loads new keyboard layout. The layout is determined by the passed 
   string parameter aLayoutString. The characters within the string correspond to 
   the keys accordingly their order.
   The order in which the characters are listed in the string corresponds to the 
   z-order of the 'text' views 'TextKey01' .. 'TextKey47'. */
void ApplicationAlphaNumKeyboard_loadLayoutFromString( ApplicationAlphaNumKeyboard _this, 
  XString aLayoutString )
{
  CoreView view = ((CoreView)&_this->TextKey01 );
  XInt32 keyNo = 0;

  while ( view != 0 )
  {
    ViewsText textKeyView = EwCastObject( view, ViewsText );

    if ( textKeyView != 0 )
    {
      XString s = EwNewStringChar( EwGetStringChar( aLayoutString, keyNo ), 1 );

      if (( !EwCompString( s, EwLoadString( &_Const00AB )) || !EwCompString( s, 
          EwLoadString( &_Const0164 ))) || !EwCompString( s, EwLoadString( &_Const0165 )))
        s = EwConcatCharString( '%', s );

      ViewsText_OnSetString( textKeyView, s );
      keyNo = keyNo + 1;
    }

    view = CoreGroup__FindNextView( _this, view, 0 );
  }
}

/* This internal slot method is called when the recently pressed key should be activated. 
   This is when the user presses on a key and then releases the finger again. */
void ApplicationAlphaNumKeyboard_activateKey( ApplicationAlphaNumKeyboard _this, 
  XObject sender )
{
  ViewsText textKeyView;
  XChar charCode;
  XEnum keyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  textKeyView = EwCastObject( _this->keyView, ViewsText );
  charCode = 0x0000;
  keyCode = CoreKeyCodeNoKey;

  if ( textKeyView != 0 )
    charCode = EwGetStringChar( textKeyView->String, 0 );
  else
    if ( _this->keyView == ((CoreView)&_this->ImageKeyTab ))
      keyCode = CoreKeyCodeTab;
    else
      if ( _this->keyView == ((CoreView)&_this->ImageKeyEnter ))
        keyCode = CoreKeyCodeEnter;
      else
        if ( _this->keyView == ((CoreView)&_this->ImageKeyClear ))
          keyCode = CoreKeyCodeBackspace;
        else
          if (( _this->keyView == ((CoreView)&_this->ImageKeyShiftLeft )) || ( _this->keyView 
              == ((CoreView)&_this->ImageKeyShiftRight )))
          {
            ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftLeft, (XBool)!ViewsBorder_OnGetVisible( 
            &_this->ActiveKeyShiftLeft ));
            ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftRight, ViewsBorder_OnGetVisible( 
            &_this->ActiveKeyShiftLeft ));
            ViewsBorder_OnSetVisible( &_this->ActiveKeyCapsLock, 0 );

            if ( ViewsBorder_OnGetVisible( &_this->ActiveKeyShiftLeft ))
              ApplicationAlphaNumKeyboard_loadLayoutFromString( _this, EwLoadString( 
              &_Const0166 ));
            else
              ApplicationAlphaNumKeyboard_loadLayoutFromString( _this, EwLoadString( 
              &_Const0163 ));
          }
          else
            if ( _this->keyView == ((CoreView)&_this->ImageKeyCapsLock ))
            {
              ViewsBorder_OnSetVisible( &_this->ActiveKeyCapsLock, (XBool)!ViewsBorder_OnGetVisible( 
              &_this->ActiveKeyCapsLock ));
              ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftLeft, 0 );
              ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftRight, 0 );

              if ( ViewsBorder_OnGetVisible( &_this->ActiveKeyCapsLock ))
                ApplicationAlphaNumKeyboard_loadLayoutFromString( _this, EwLoadString( 
                &_Const0166 ));
              else
                ApplicationAlphaNumKeyboard_loadLayoutFromString( _this, EwLoadString( 
                &_Const0163 ));
            }

  if ((( charCode != 0x0000 ) || ( keyCode != CoreKeyCodeNoKey )) && ViewsBorder_OnGetVisible( 
      &_this->ActiveKeyShiftLeft ))
  {
    ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftLeft, 0 );
    ViewsBorder_OnSetVisible( &_this->ActiveKeyShiftRight, 0 );
    ApplicationAlphaNumKeyboard_loadLayoutFromString( _this, EwLoadString( &_Const0163 ));
  }

  if ( charCode != 0x0000 )
  {
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), CoreKeyCodeNoKey, 
    charCode, 1 );
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), CoreKeyCodeNoKey, 
    charCode, 0 );
  }

  if ( keyCode != CoreKeyCodeNoKey )
  {
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, 0x0000, 
    1 );
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, 0x0000, 
    0 );
  }
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationAlphaNumKeyboard_onFlashTimer( ApplicationAlphaNumKeyboard _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwSignal( EwNewSlot( _this, ApplicationAlphaNumKeyboard_activateKey ), ((XObject)_this ));
}

/* This internal slot method is called when the user drags the finger while pressing 
   the keyboard. This updates the keyboard to highlight the key at the new touch 
   position. */
void ApplicationAlphaNumKeyboard_onDragTouch( ApplicationAlphaNumKeyboard _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->recentPosition = _this->TouchHandler.CurrentPos;
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the keyboard area. This activates the key the user has touched. */
void ApplicationAlphaNumKeyboard_onReleaseTouch( ApplicationAlphaNumKeyboard _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwSignal( EwNewSlot( _this, ApplicationAlphaNumKeyboard_activateKey ), ((XObject)_this ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the keyboard area. */
void ApplicationAlphaNumKeyboard_onPressTouch( ApplicationAlphaNumKeyboard _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwSignal( EwNewSlot( _this, ApplicationAlphaNumKeyboard_activateKey ), ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->recentPosition = _this->TouchHandler.CurrentPos;
}

/* Variants derived from the class : 'Application::AlphaNumKeyboard' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAlphaNumKeyboard )
EW_END_OF_CLASS_VARIANTS( ApplicationAlphaNumKeyboard )

/* Virtual Method Table (VMT) for the class : 'Application::AlphaNumKeyboard' */
EW_DEFINE_CLASS( ApplicationAlphaNumKeyboard, TemplatesAlphaNumKeyboard, keyView, 
                 FlashTimer, FlashTimer, FlashTimer, recentPosition, recentPosition, 
                 "Application::AlphaNumKeyboard" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationAlphaNumKeyboard_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationAlphaNumKeyboard )

/* Initializer for the class 'Application::Keyboard' */
void ApplicationKeyboard__Init( ApplicationKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationKeyboard );

  /* ... then construct all embedded objects */
  ApplicationAlphaNumKeyboard__Init( &_this->AlphaNumKeyboard1, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->moveEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationKeyboard );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0167 );
  CoreRectView__OnSetBounds( &_this->AlphaNumKeyboard1, _Const0168 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->moveEffect, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->moveEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->moveEffect, 500 );
  _this->Offset = EwGetRectH( _this->Super2.Bounds );
  CoreGroup__Add( _this, ((CoreView)&_this->AlphaNumKeyboard1 ), 0 );
  _this->moveEffect.Super1.OnFinished = EwNewSlot( _this, ApplicationKeyboard_onMoveEffectFinished );
  _this->moveEffect.Super1.OnAnimate = EwNewSlot( _this, ApplicationKeyboard_onMoveEffect );
}

/* Re-Initializer for the class 'Application::Keyboard' */
void ApplicationKeyboard__ReInit( ApplicationKeyboard _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationAlphaNumKeyboard__ReInit( &_this->AlphaNumKeyboard1 );
  EffectsInt32Effect__ReInit( &_this->moveEffect );
}

/* Finalizer method for the class 'Application::Keyboard' */
void ApplicationKeyboard__Done( ApplicationKeyboard _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationAlphaNumKeyboard__Done( &_this->AlphaNumKeyboard1 );
  EffectsInt32Effect__Done( &_this->moveEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Keyboard.onMoveEffect()' */
void ApplicationKeyboard_onMoveEffect( ApplicationKeyboard _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'Application::Keyboard.onMoveEffectFinished()' */
void ApplicationKeyboard_onMoveEffectFinished( ApplicationKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* Variants derived from the class : 'Application::Keyboard' */
EW_DEFINE_CLASS_VARIANTS( ApplicationKeyboard )
EW_END_OF_CLASS_VARIANTS( ApplicationKeyboard )

/* Virtual Method Table (VMT) for the class : 'Application::Keyboard' */
EW_DEFINE_CLASS( ApplicationKeyboard, CoreGroup, AlphaNumKeyboard1, AlphaNumKeyboard1, 
                 AlphaNumKeyboard1, AlphaNumKeyboard1, Offset, Offset, "Application::Keyboard" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationKeyboard )

/* Include a file containing the font resource : 'Application::FontBold24' */
#include "_ApplicationFontBold24.h"

/* Table with links to derived variants of the font resource : 'Application::FontBold24' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontBold24 )

/* Initializer for the class 'Application::SettingsDiagnostic' */
void ApplicationSettingsDiagnostic__Init( ApplicationSettingsDiagnostic _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsDiagnostic );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SthList, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsDiagnostic );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00B1 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const0169 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 120 );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 6 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( WidgetSettingsDiagnosticList ));
  _this->H1[ 0 ] = EwShareString( EwLoadString( &_Const016A ));
  _this->H1[ 1 ] = EwShareString( EwLoadString( &_Const016B ));
  _this->H1[ 2 ] = EwShareString( EwLoadString( &_Const016C ));
  _this->H1[ 3 ] = EwShareString( EwLoadString( &_Const016D ));
  _this->H1[ 4 ] = EwShareString( EwLoadString( &_Const016E ));
  _this->H1[ 5 ] = EwShareString( EwLoadString( &_Const016F ));
  CoreRectView__OnSetBounds( &_this->SthList, _Const0169 );
  _this->SthList.SlideHorz = 0;
  _this->SthList.RubberBandScrolling = 0;
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0170 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0171 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0172 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0173 );
  _this->SimpleTouchHandler.RetargetCondition = CoreRetargetReasonWipeDown | CoreRetargetReasonWipeUp;
  _this->listItem = -1;
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SthList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsDiagnostic_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsDiagnostic_onBack );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationSettingsDiagnostic_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SthList );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationSettingsDiagnostic_SlotOnRelease );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationSettingsDiagnostic_SlotOnTap );

  /* Call the user defined constructor */
  ApplicationSettingsDiagnostic_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsDiagnostic' */
void ApplicationSettingsDiagnostic__ReInit( ApplicationSettingsDiagnostic _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SthList );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Application::SettingsDiagnostic' */
void ApplicationSettingsDiagnostic__Done( ApplicationSettingsDiagnostic _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SthList );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsDiagnostic_Init( ApplicationSettingsDiagnostic _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsDiagnostic_onEvent( ApplicationSettingsDiagnostic _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsDiagnostic.onBack()' */
void ApplicationSettingsDiagnostic_onBack( ApplicationSettingsDiagnostic _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationSettingsDiagnostic_OnLoadItem( ApplicationSettingsDiagnostic _this, 
  XObject sender )
{
  XInt32 itemNo;
  WidgetSettingsDiagnosticList itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, WidgetSettingsDiagnosticList );

  if ( itemView == 0 )
    return;

  ViewsText_OnSetString( &itemView->H1, _this->H1[ EwCheckIndex( itemNo, 6 )]);
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, EwNewPoint( 
  EwGetRectW( _this->VerticalList.Super2.Bounds ), _this->VerticalList.ItemHeight )));
}

/* 'C' function for method : 'Application::SettingsDiagnostic.SlotOnRelease()' */
void ApplicationSettingsDiagnostic_SlotOnRelease( ApplicationSettingsDiagnostic _this, 
  XObject sender )
{
  XInt32 itemNo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup__IsCurrentDialog( _this ))
  {
    CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, -1 );
    return;
  }

  itemNo = CoreVerticalList_GetItemAtPosition( &_this->VerticalList, _this->SimpleTouchHandler.CurrentPos );

  if ((((( _this->SimpleTouchHandler.CurrentPos.X < 46 ) || ( _this->SimpleTouchHandler.CurrentPos.X 
      > 1242 )) || ( _this->SimpleTouchHandler.CurrentPos.Y < 166 )) || ( _this->SimpleTouchHandler.CurrentPos.Y 
      > 688 )) || ( itemNo != _this->listItem ))
  {
    CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, -1 );
    return;
  }

  if ( itemNo >= 0 )
  {
    ApplicationSettingsDiagnostic_SwitchScreen( _this, (XInt16)itemNo );
    EwTrace( "%s%i", EwLoadString( &_Const0174 ), itemNo );
  }
}

/* 'C' function for method : 'Application::SettingsDiagnostic.SwitchScreen()' */
void ApplicationSettingsDiagnostic_SwitchScreen( ApplicationSettingsDiagnostic _this, 
  XInt16 screenNo )
{
  _this->theme = 0;

  switch ( screenNo )
  {
    case 0 :
    {
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsMotorTest, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );

      EwTrace( "%s", EwLoadString( &_Const00BE ));
    }
    break;

    case 1 :
    break;

    case 2 :
    {
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsBuzzerTest, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );

      EwTrace( "%s", EwLoadString( &_Const00BF ));
    }
    break;

    case 3 :
    break;

    case 4 :
    {
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsDisplayTest, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );

      EwTrace( "%s", EwLoadString( &_Const00BF ));
    }
    break;

    case 5 :
    {
      if ( _this->Super3.Owner != 0 )
        CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( 
        ApplicationSettingsLEDTest, 0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 
        0 );

      EwTrace( "%s", EwLoadString( &_Const00BF ));
    }
    break;

    default :; 
  }
}

/* 'C' function for method : 'Application::SettingsDiagnostic.SlotOnTap()' */
void ApplicationSettingsDiagnostic_SlotOnTap( ApplicationSettingsDiagnostic _this, 
  XObject sender )
{
  XInt32 itemNo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->SimpleTouchHandler.AutoDeflected )
    return;

  itemNo = CoreVerticalList_GetItemAtPosition( &_this->VerticalList, _this->SimpleTouchHandler.CurrentPos );

  if ( itemNo >= 0 )
  {
    CoreVerticalList_OnSetSelectedItem( &_this->VerticalList, itemNo );
    _this->listItem = itemNo;
  }
}

/* Variants derived from the class : 'Application::SettingsDiagnostic' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsDiagnostic )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsDiagnostic )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsDiagnostic' */
EW_DEFINE_CLASS( ApplicationSettingsDiagnostic, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, H1, listItem, "Application::SettingsDiagnostic" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsDiagnostic )

/* Initializer for the class 'Application::SettingsMotorTest' */
void ApplicationSettingsMotorTest__Init( ApplicationSettingsMotorTest _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsMotorTest );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle2, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle3, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle4, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle5, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border1, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border2, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border3, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border4, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle6, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle7, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle8, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle9, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text5, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text6, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text7, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text8, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text9, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text10, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text11, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text12, &_this->_.XObject, 0 );
  ApplicationSpinButton__Init( &_this->SpinButton, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton1, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton2, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton3, &_this->_.XObject, 0 );
  WidgetStatusLabel__Init( &_this->StatusLabel, &_this->_.XObject, 0 );
  WidgetStatusLabel__Init( &_this->StatusLabel1, &_this->_.XObject, 0 );
  WidgetStatusLabel__Init( &_this->StatusLabel2, &_this->_.XObject, 0 );
  WidgetStatusLabel__Init( &_this->StatusLabel3, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsMotorTest );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0175 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const0176 );
  ViewsRectangle_OnSetColor( &_this->Rectangle1, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0177 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Rectangle2, _Const0178 );
  ViewsRectangle_OnSetColor( &_this->Rectangle2, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Rectangle3, _Const0179 );
  ViewsRectangle_OnSetColor( &_this->Rectangle3, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Rectangle4, _Const017A );
  ViewsRectangle_OnSetColor( &_this->Rectangle4, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Rectangle5, _Const017B );
  ViewsRectangle_OnSetColor( &_this->Rectangle5, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Border1, _Const017C );
  ViewsBorder_OnSetColor( &_this->Border1, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Border2, _Const0179 );
  ViewsBorder_OnSetColor( &_this->Border2, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Border3, _Const017A );
  ViewsBorder_OnSetColor( &_this->Border3, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Border4, _Const017D );
  ViewsBorder_OnSetColor( &_this->Border4, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Rectangle6, _Const017E );
  ViewsRectangle_OnSetColor( &_this->Rectangle6, _Const0047 );
  CoreRectView__OnSetBounds( &_this->Rectangle7, _Const017F );
  ViewsRectangle_OnSetColor( &_this->Rectangle7, _Const0047 );
  CoreRectView__OnSetBounds( &_this->Rectangle8, _Const0180 );
  ViewsRectangle_OnSetColor( &_this->Rectangle8, _Const0047 );
  CoreRectView__OnSetBounds( &_this->Rectangle9, _Const0181 );
  ViewsRectangle_OnSetColor( &_this->Rectangle9, _Const0047 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const017E );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0182 ));
  CoreRectView__OnSetBounds( &_this->Text2, _Const0183 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0184 ));
  CoreRectView__OnSetBounds( &_this->Text3, _Const0185 );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0186 ));
  CoreRectView__OnSetBounds( &_this->Text4, _Const0187 );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const0188 ));
  CoreRectView__OnSetBounds( &_this->Text5, _Const0189 );
  ViewsText_OnSetString( &_this->Text5, EwLoadString( &_Const018A ));
  CoreRectView__OnSetBounds( &_this->Text6, _Const018B );
  ViewsText_OnSetString( &_this->Text6, EwLoadString( &_Const018C ));
  CoreRectView__OnSetBounds( &_this->Text7, _Const018D );
  ViewsText_OnSetString( &_this->Text7, EwLoadString( &_Const018E ));
  CoreRectView__OnSetBounds( &_this->Text8, _Const018F );
  ViewsText_OnSetString( &_this->Text8, EwLoadString( &_Const0190 ));
  CoreRectView__OnSetBounds( &_this->Text9, _Const0191 );
  ViewsText_OnSetString( &_this->Text9, EwLoadString( &_Const0192 ));
  CoreRectView__OnSetBounds( &_this->Image1, _Const0193 );
  CoreRectView__OnSetBounds( &_this->Image2, _Const0194 );
  CoreRectView__OnSetBounds( &_this->Text10, _Const0195 );
  ViewsText_OnSetString( &_this->Text10, EwLoadString( &_Const0196 ));
  CoreRectView__OnSetBounds( &_this->Text11, _Const0197 );
  ViewsText_OnSetString( &_this->Text11, EwLoadString( &_Const0198 ));
  CoreRectView__OnSetBounds( &_this->Text12, _Const0199 );
  ViewsText_OnSetString( &_this->Text12, EwLoadString( &_Const019A ));
  CoreRectView__OnSetBounds( &_this->SpinButton, _Const019B );
  ApplicationSpinButton_OnSetValue( &_this->SpinButton, 50 );
  CoreRectView__OnSetBounds( &_this->AddProfileButton, _Const019C );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton, EwLoadString( 
  &_Const019D ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton1, _Const019E );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton1, EwLoadString( 
  &_Const019D ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton2, _Const019F );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton2, EwLoadString( 
  &_Const019D ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton3, _Const01A0 );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton3, EwLoadString( 
  &_Const019D ));
  CoreRectView__OnSetBounds( &_this->StatusLabel, _Const01A1 );
  WidgetStatusLabel_OnSetStatus( &_this->StatusLabel, 1 );
  CoreRectView__OnSetBounds( &_this->StatusLabel1, _Const01A2 );
  WidgetStatusLabel_OnSetStatus( &_this->StatusLabel1, 2 );
  CoreRectView__OnSetBounds( &_this->StatusLabel2, _Const01A3 );
  WidgetStatusLabel_OnSetStatus( &_this->StatusLabel2, 2 );
  CoreRectView__OnSetBounds( &_this->StatusLabel3, _Const01A4 );
  WidgetStatusLabel_OnSetStatus( &_this->StatusLabel3, 3 );
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text11 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text12 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpinButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusLabel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusLabel1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusLabel2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusLabel3 ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsMotorTest_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsMotorTest_onBack );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text5, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text6, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text7, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text8, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text9, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResPassFilledImg, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Image2, EwLoadResource( &ResPassPlainImg, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text10, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text11, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text12, EwLoadResource( &ApplicationFontBold24, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSettingsMotorTest_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsMotorTest' */
void ApplicationSettingsMotorTest__ReInit( ApplicationSettingsMotorTest _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  ViewsBorder__ReInit( &_this->Border );
  ViewsRectangle__ReInit( &_this->Rectangle2 );
  ViewsRectangle__ReInit( &_this->Rectangle3 );
  ViewsRectangle__ReInit( &_this->Rectangle4 );
  ViewsRectangle__ReInit( &_this->Rectangle5 );
  ViewsBorder__ReInit( &_this->Border1 );
  ViewsBorder__ReInit( &_this->Border2 );
  ViewsBorder__ReInit( &_this->Border3 );
  ViewsBorder__ReInit( &_this->Border4 );
  ViewsRectangle__ReInit( &_this->Rectangle6 );
  ViewsRectangle__ReInit( &_this->Rectangle7 );
  ViewsRectangle__ReInit( &_this->Rectangle8 );
  ViewsRectangle__ReInit( &_this->Rectangle9 );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text3 );
  ViewsText__ReInit( &_this->Text4 );
  ViewsText__ReInit( &_this->Text5 );
  ViewsText__ReInit( &_this->Text6 );
  ViewsText__ReInit( &_this->Text7 );
  ViewsText__ReInit( &_this->Text8 );
  ViewsText__ReInit( &_this->Text9 );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsImage__ReInit( &_this->Image2 );
  ViewsText__ReInit( &_this->Text10 );
  ViewsText__ReInit( &_this->Text11 );
  ViewsText__ReInit( &_this->Text12 );
  ApplicationSpinButton__ReInit( &_this->SpinButton );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton1 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton2 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton3 );
  WidgetStatusLabel__ReInit( &_this->StatusLabel );
  WidgetStatusLabel__ReInit( &_this->StatusLabel1 );
  WidgetStatusLabel__ReInit( &_this->StatusLabel2 );
  WidgetStatusLabel__ReInit( &_this->StatusLabel3 );
}

/* Finalizer method for the class 'Application::SettingsMotorTest' */
void ApplicationSettingsMotorTest__Done( ApplicationSettingsMotorTest _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  ViewsRectangle__Done( &_this->Rectangle1 );
  ViewsBorder__Done( &_this->Border );
  ViewsRectangle__Done( &_this->Rectangle2 );
  ViewsRectangle__Done( &_this->Rectangle3 );
  ViewsRectangle__Done( &_this->Rectangle4 );
  ViewsRectangle__Done( &_this->Rectangle5 );
  ViewsBorder__Done( &_this->Border1 );
  ViewsBorder__Done( &_this->Border2 );
  ViewsBorder__Done( &_this->Border3 );
  ViewsBorder__Done( &_this->Border4 );
  ViewsRectangle__Done( &_this->Rectangle6 );
  ViewsRectangle__Done( &_this->Rectangle7 );
  ViewsRectangle__Done( &_this->Rectangle8 );
  ViewsRectangle__Done( &_this->Rectangle9 );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text3 );
  ViewsText__Done( &_this->Text4 );
  ViewsText__Done( &_this->Text5 );
  ViewsText__Done( &_this->Text6 );
  ViewsText__Done( &_this->Text7 );
  ViewsText__Done( &_this->Text8 );
  ViewsText__Done( &_this->Text9 );
  ViewsImage__Done( &_this->Image1 );
  ViewsImage__Done( &_this->Image2 );
  ViewsText__Done( &_this->Text10 );
  ViewsText__Done( &_this->Text11 );
  ViewsText__Done( &_this->Text12 );
  ApplicationSpinButton__Done( &_this->SpinButton );
  WidgetAddProfileButton__Done( &_this->AddProfileButton );
  WidgetAddProfileButton__Done( &_this->AddProfileButton1 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton2 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton3 );
  WidgetStatusLabel__Done( &_this->StatusLabel );
  WidgetStatusLabel__Done( &_this->StatusLabel1 );
  WidgetStatusLabel__Done( &_this->StatusLabel2 );
  WidgetStatusLabel__Done( &_this->StatusLabel3 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsMotorTest_Init( ApplicationSettingsMotorTest _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsMotorTest_onEvent( ApplicationSettingsMotorTest _this, XObject 
  sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsMotorTest.onBack()' */
void ApplicationSettingsMotorTest_onBack( ApplicationSettingsMotorTest _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsDiagnostic, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsMotorTest' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsMotorTest )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsMotorTest )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsMotorTest' */
EW_DEFINE_CLASS( ApplicationSettingsMotorTest, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::SettingsMotorTest" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsMotorTest )

/* Initializer for the class 'Application::SettingsBuzzerTest' */
void ApplicationSettingsBuzzerTest__Init( ApplicationSettingsBuzzerTest _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsBuzzerTest );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsBuzzerTest );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const01A5 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const01A6 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const01A7 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const016C ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton, _Const01A8 );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton, EwLoadString( 
  &_Const019D ));
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsBuzzerTest_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsBuzzerTest_onBack );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResSettings_CurvedRect, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSettingsBuzzerTest_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsBuzzerTest' */
void ApplicationSettingsBuzzerTest__ReInit( ApplicationSettingsBuzzerTest _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsText__ReInit( &_this->Text1 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton );
}

/* Finalizer method for the class 'Application::SettingsBuzzerTest' */
void ApplicationSettingsBuzzerTest__Done( ApplicationSettingsBuzzerTest _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  ViewsImage__Done( &_this->Image1 );
  ViewsText__Done( &_this->Text1 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsBuzzerTest_Init( ApplicationSettingsBuzzerTest _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsBuzzerTest_onEvent( ApplicationSettingsBuzzerTest _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsBuzzerTest.onBack()' */
void ApplicationSettingsBuzzerTest_onBack( ApplicationSettingsBuzzerTest _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsDiagnostic, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsBuzzerTest' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsBuzzerTest )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsBuzzerTest )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsBuzzerTest' */
EW_DEFINE_CLASS( ApplicationSettingsBuzzerTest, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::SettingsBuzzerTest" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsBuzzerTest )

/* Initializer for the class 'Application::SettingsDisplayTest' */
void ApplicationSettingsDisplayTest__Init( ApplicationSettingsDisplayTest _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsDisplayTest );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  WidgetAddProfileButton__Init( &_this->AddProfileButton1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsDisplayTest );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const01A9 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const01A6 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const01AA );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const01AB ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton, _Const01A8 );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton, EwLoadString( 
  &_Const019D ));
  CoreRectView__OnSetBounds( &_this->Image2, _Const01AC );
  CoreRectView__OnSetBounds( &_this->Text2, _Const01AD );
  ViewsText_OnSetAlignment( &_this->Text2, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const01AE ));
  CoreRectView__OnSetBounds( &_this->AddProfileButton1, _Const01AF );
  WidgetAddProfileButton_OnSetValueString( &_this->AddProfileButton1, EwLoadString( 
  &_Const019D ));
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->AddProfileButton1 ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsDisplayTest_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsDisplayTest_onBack );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResSettings_CurvedRect, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image2, EwLoadResource( &ResSettings_CurvedRect, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSettingsDisplayTest_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsDisplayTest' */
void ApplicationSettingsDisplayTest__ReInit( ApplicationSettingsDisplayTest _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsText__ReInit( &_this->Text1 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton );
  ViewsImage__ReInit( &_this->Image2 );
  ViewsText__ReInit( &_this->Text2 );
  WidgetAddProfileButton__ReInit( &_this->AddProfileButton1 );
}

/* Finalizer method for the class 'Application::SettingsDisplayTest' */
void ApplicationSettingsDisplayTest__Done( ApplicationSettingsDisplayTest _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  ViewsImage__Done( &_this->Image1 );
  ViewsText__Done( &_this->Text1 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton );
  ViewsImage__Done( &_this->Image2 );
  ViewsText__Done( &_this->Text2 );
  WidgetAddProfileButton__Done( &_this->AddProfileButton1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsDisplayTest_Init( ApplicationSettingsDisplayTest _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsDisplayTest_onEvent( ApplicationSettingsDisplayTest _this, 
  XObject sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsDisplayTest.onBack()' */
void ApplicationSettingsDisplayTest_onBack( ApplicationSettingsDisplayTest _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsDiagnostic, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsDisplayTest' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsDisplayTest )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsDisplayTest )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsDisplayTest' */
EW_DEFINE_CLASS( ApplicationSettingsDisplayTest, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::SettingsDisplayTest" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsDisplayTest )

/* Initializer for the class 'Application::SettingsLEDTest' */
void ApplicationSettingsLEDTest__Init( ApplicationSettingsLEDTest _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingsLEDTest );

  /* ... then construct all embedded objects */
  ApplicationTitleBar__Init( &_this->TitleBar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine, &_this->_.XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->rctTitile, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->TopLine1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->slBack, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_.XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingsLEDTest );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TitleBar, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const000A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const000B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine, _Const000C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine, _Const000D );
  ViewsLine_OnSetColor( &_this->TopLine, _Const000E );
  CoreRectView__OnSetBounds( &_this->rctTitile, _Const006E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->TopLine1, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->TopLine1, _Const0070 );
  ViewsLine_OnSetWidth( &_this->TopLine1, 1 );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const000E );
  CoreRectView__OnSetBounds( &_this->Text, _Const00CF );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const01A5 ));
  CoreRectView__OnSetBounds( &_this->Image, _Const0073 );
  CoreQuadView__OnSetPoint4( &_this->slBack, _Const0084 );
  CoreQuadView__OnSetPoint3( &_this->slBack, _Const0085 );
  CoreQuadView__OnSetPoint2( &_this->slBack, _Const0086 );
  CoreQuadView__OnSetPoint1( &_this->slBack, _Const0087 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const01B0 );
  ViewsRectangle_OnSetColor( &_this->Rectangle1, _Const0043 );
  CoreRectView__OnSetBounds( &_this->Border, _Const01B0 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0045 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const01B1 );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const01B2 ));
  CoreRectView__OnSetBounds( &_this->Image1, _Const01B3 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const01B4 );
  ViewsText_OnSetAlignment( &_this->Text2, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const01B5 ));
  CoreRectView__OnSetBounds( &_this->Image2, _Const01B6 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const01B7 );
  ViewsText_OnSetAlignment( &_this->Text3, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const01B8 ));
  CoreGroup__Add( _this, ((CoreView)&_this->TitleBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->rctTitile ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TopLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->slBack ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text3 ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationSettingsLEDTest_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationGlobalSettings, ApplicationSettings ), ApplicationSettings_OnGetLoginResult, 
  ApplicationSettings_OnSetLoginResult ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontBold32, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResDefaultBckArrow, ResourcesBitmap ));
  _this->slBack.OnRelease = EwNewSlot( _this, ApplicationSettingsLEDTest_onBack );
  _this->SettingsImage[ 0 ] = EwLoadResource( &ResSettings_Diagnostic, ResourcesBitmap );
  _this->SettingsImage[ 1 ] = EwLoadResource( &ResSettings_Password, ResourcesBitmap );
  _this->SettingsImage[ 2 ] = EwLoadResource( &ResSettings_Date, ResourcesBitmap );
  _this->SettingsImage[ 3 ] = EwLoadResource( &ResSettings_Logs, ResourcesBitmap );
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFontBold28, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &ResSettings_Power_ON, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image2, EwLoadResource( &ResSettings_Power_off, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ApplicationFontNormal22, 
  ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSettingsLEDTest_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingsLEDTest' */
void ApplicationSettingsLEDTest__ReInit( ApplicationSettingsLEDTest _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationTitleBar__ReInit( &_this->TitleBar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsLine__ReInit( &_this->TopLine );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsRectangle__ReInit( &_this->rctTitile );
  ViewsLine__ReInit( &_this->TopLine1 );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->slBack );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->Text1 );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsImage__ReInit( &_this->Image2 );
  ViewsText__ReInit( &_this->Text3 );
}

/* Finalizer method for the class 'Application::SettingsLEDTest' */
void ApplicationSettingsLEDTest__Done( ApplicationSettingsLEDTest _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ApplicationTitleBar__Done( &_this->TitleBar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsLine__Done( &_this->TopLine );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsRectangle__Done( &_this->rctTitile );
  ViewsLine__Done( &_this->TopLine1 );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->slBack );
  ViewsRectangle__Done( &_this->Rectangle1 );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->Text1 );
  ViewsImage__Done( &_this->Image1 );
  ViewsText__Done( &_this->Text2 );
  ViewsImage__Done( &_this->Image2 );
  ViewsText__Done( &_this->Text3 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingsLEDTest_Init( ApplicationSettingsLEDTest _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->theme = EwNewObject( ApplicationSettings, 0 );
  ViewsRectangle_OnSetColor( &_this->rctTitile, _Const008A );
  ViewsLine_OnSetColor( &_this->TopLine, _Const008B );
  ViewsLine_OnSetColor( &_this->TopLine1, _Const008B );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSettingsLEDTest_onEvent( ApplicationSettingsLEDTest _this, XObject 
  sender )
{
  XInt32 result;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  result = EwGetAutoObject( &ApplicationGlobalSettings, ApplicationSettings )->LoginResult;

  if ( result == 1 )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationProfileScreen, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::SettingsLEDTest.onBack()' */
void ApplicationSettingsLEDTest_onBack( ApplicationSettingsLEDTest _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Super3.Owner != 0 )
    CoreGroup_SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettingsDiagnostic, 
    0 )), 0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::SettingsLEDTest' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingsLEDTest )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingsLEDTest )

/* Virtual Method Table (VMT) for the class : 'Application::SettingsLEDTest' */
EW_DEFINE_CLASS( ApplicationSettingsLEDTest, CoreGroup, theme, TitleBar, TitleBar, 
                 TitleBar, _.VMT, _.VMT, "Application::SettingsLEDTest" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsCurrentDialog,
  CoreGroup_IsActiveDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindViewAtPosition,
  CoreGroup_FindNextView,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettingsLEDTest )

/* Embedded Wizard */
