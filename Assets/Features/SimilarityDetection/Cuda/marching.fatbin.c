#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
#ifdef __cplusplus
extern "C" {
#endif

#pragma const_seg(__CUDAFATBINDATASECTION)
static const __declspec(allocate(__CUDAFATBINDATASECTION)) unsigned long long fatbinData[]= {0x00100001ba55ed50ull,0x0000000000000b20ull,0x0000004001010002ull,0x0000000000000808ull,
0x0000000000000000ull,0x0000003400010007ull,0x0000000000000000ull,0x0000000000000041ull,
0x0000000000000000ull,0x0000000000000000ull,0x33010102464c457full,0x0000000000000007ull,
0x0000007800be0002ull,0x0000000000000000ull,0x0000000000000760ull,0x0000000000000560ull,
0x0038004000340534ull,0x0001000800400003ull,0x7472747368732e00ull,0x747274732e006261ull,
0x746d79732e006261ull,0x746d79732e006261ull,0x78646e68735f6261ull,0x7466752e766e2e00ull,
0x2e007972746e652eull,0x006f666e692e766eull,0x61632e747865742eull,0x2e766e2e00657672ull,
0x7261632e6f666e69ull,0x732e766e2e006576ull,0x61632e6465726168ull,0x2e766e2e00657672ull,
0x746e6174736e6f63ull,0x0065767261632e30ull,0x7472747368732e00ull,0x747274732e006261ull,
0x746d79732e006261ull,0x746d79732e006261ull,0x78646e68735f6261ull,0x7466752e766e2e00ull,
0x2e007972746e652eull,0x006f666e692e766eull,0x742e006576726163ull,0x767261632e747865ull,
0x6e692e766e2e0065ull,0x65767261632e6f66ull,0x6168732e766e2e00ull,0x767261632e646572ull,
0x6f632e766e2e0065ull,0x2e30746e6174736eull,0x705f006576726163ull,0x000000006d617261ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0007000300000046ull,
0x0000000000000000ull,0x0000000000000000ull,0x0006000300000072ull,0x0000000000000000ull,
0x0000000000000000ull,0x0007101200000040ull,0x0000000000000000ull,0x0000000000000180ull,
0x0000000300082f04ull,0x0008230400000005ull,0x0000000000000003ull,0x0000000300081204ull,
0x0008110400000000ull,0x0000000000000003ull,0x0000007800043704ull,0x00002a0100003001ull,
0x0000000200080a04ull,0x0020190300200140ull,0x00000000000c1704ull,0x0021f00000180006ull,
0x00000000000c1704ull,0x0011f00000140005ull,0x00000000000c1704ull,0x0011f00000100004ull,
0x00000000000c1704ull,0x0011f000000c0003ull,0x00000000000c1704ull,0x0011f00000080002ull,
0x00000000000c1704ull,0x0011f00000040001ull,0x00000000000c1704ull,0x0011f00000000000ull,
0x00081c0400ff1b03ull,0x00000138000000b0ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x001cc400e22007f6ull,0x4c98078000870001ull,
0xf0c8000002170000ull,0xf0c8000002270002ull,0x005fd401fe20075full,0xf0c8000002370003ull,
0x4c10000005370000ull,0x4c10000005470202ull,0x001fd004fc2007f1ull,0x1c0ffffffff70000ull,
0x4c10000005570303ull,0x1c0ffffffff70202ull,0x001fb400fd8007f1ull,0x366d038000170007ull,
0x1c0ffffffff70303ull,0x4b6d240005070007ull,0x001fb400fda007edull,0x4b6d200005170207ull,
0x3663200000170207ull,0x4b6d200005270307ull,0x081fc400ffa007edull,0x3663200000170307ull,
0xe30000000000000full,0x4e00010005170302ull,0x081fc400fec207f6ull,0x4f107f8005170304ull,
0x5b30011800470303ull,0x4e00000005070300ull,0x081fc400fcc207f6ull,0x4f107f8005070302ull,
0x5b30001800270303ull,0x3829000001e70300ull,0x001fc800fe2007f6ull,0x4c18810005670302ull,
0x4c10080005770003ull,0x010bf8000007f000ull,0x001ffc00fd2007f4ull,0xeedc200000070200ull,
0x50b0000000070f00ull,0xe30000000007000full,0x001f8000fc0007ffull,0xe2400fffff07000full,
0x50b0000000070f00ull,0x50b0000000070f00ull,0x001f8000fc0007e0ull,0x50b0000000070f00ull,
0x50b0000000070f00ull,0x50b0000000070f00ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000300000001ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000040ull,0x0000000000000080ull,0x0000000000000000ull,
0x0000000000000001ull,0x0000000000000000ull,0x000000030000000bull,0x0000000000000000ull,
0x0000000000000000ull,0x00000000000000c0ull,0x000000000000008dull,0x0000000000000000ull,
0x0000000000000001ull,0x0000000000000000ull,0x0000000200000013ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000150ull,0x0000000000000060ull,0x0000000300000002ull,
0x0000000000000008ull,0x0000000000000018ull,0x7000000000000037ull,0x0000000000000000ull,
0x0000000000000000ull,0x00000000000001b0ull,0x0000000000000030ull,0x0000000000000005ull,
0x0000000000000004ull,0x0000000000000000ull,0x700000000000004cull,0x0000000000000000ull,
0x0000000000000000ull,0x00000000000001e0ull,0x00000000000000a0ull,0x0000000700000005ull,
0x0000000000000004ull,0x0000000000000000ull,0x000000010000006cull,0x0000000000000002ull,
0x0000000000000000ull,0x0000000000000280ull,0x0000000000000160ull,0x0000000700000000ull,
0x0000000000000004ull,0x0000000000000000ull,0x0000000100000040ull,0x0000000000000006ull,
0x0000000000000000ull,0x00000000000003e0ull,0x0000000000000180ull,0x0500000300000005ull,
0x0000000000000020ull,0x0000000000000000ull,0x0000000500000006ull,0x0000000000000760ull,
0x0000000000000000ull,0x0000000000000000ull,0x00000000000000a8ull,0x00000000000000a8ull,
0x0000000000000008ull,0x0000000500000001ull,0x0000000000000280ull,0x0000000000000000ull,
0x0000000000000000ull,0x00000000000002e0ull,0x00000000000002e0ull,0x0000000000000008ull,
0x0000000500000001ull,0x0000000000000760ull,0x0000000000000000ull,0x0000000000000000ull,
0x00000000000000a8ull,0x00000000000000a8ull,0x0000000000000008ull,0x0000004801010001ull,
0x0000000000000290ull,0x000000400000028bull,0x0000003400080000ull,0x0000000000000000ull,
0x0000000000002041ull,0x0000000000000000ull,0x0000000000000561ull,0x0000000000000000ull,
0x2e1ef200020a0d2aull,0x206e6f6973726576ull,0x61742e0a0d302e38ull,0x5f6d732074656772ull,
0x6464612e0a0d3235ull,0x7a69735f73736572ull,0x3500003334362065ull,0x6c6269736912f200ull,
0x7972746e652e2065ull,0x0d28657672616320ull,0x206d617261702e0aull,0x5f1100143233752eull,
0x001c2c305f3f0011ull,0x321f08001c311f07ull,0x08001c331f08001cull,0x1c351808001c341full,
0x0cf4001c34362900ull,0x0d7b0a0d290a0d36ull,0x702e206765722e0aull,0x313c702520646572ull,
0x33629700143b3e32ull,0x1339313c72252032ull,0x647225203436a200ull,0x6c22011f3b3e353cull,
0x2568007c01006164ull,0x3d00665b202c3472ull,0x24351b00243b5d30ull,0x361b000024311f00ull,
0x1b000024321f0024ull,0x000024331f002437ull,0x0024341f0024381bull,0x24351a0024391b00ull,
0x0025311b00f20200ull,0x766f6d3300253610ull,0x202c303103f20044ull,0x0d3b782e64697425ull,
0x0017732e6464610aull,0x37722a001d2c3124ull,0x2d2a001f2c13001aull,0x1a00493213004931ull,
0x001d2c3324002f79ull,0x2c3223001a387229ull,0x49341300490c001full,0x2c352400497a1a00ull,
0x23001a397229001dull,0x72004901001f2c33ull,0x1c65672e70746573ull,0x1400b32c31703400ull,
0x001c746c23001c34ull,0x24003600001c3213ull,0x372c33230249726full,0x3424004e32702d00ull,
0x240034351900b82cull,0x1300660e00392c35ull,0x372300660a003436ull,0x006635702d001b2cull,
0x34361900d52c3824ull,0x702d001d2c392300ull,0x331c01aa02006637ull,0x001d0201c7010067ull,
0x0013401001357010ull,0x4c242061726220e1ull,0x0f325f3042425f5full,0x742e61747663e403ull,
0x6c61626f6c672e6full,0x52641000ea01023bull,0x6f6c2e64616d6200ull,0x00a136317235006cull,
0x250021321d019401ull,0x0101330100272c37ull,0x69772e6c75630043ull,0x2c3364724300e564ull,
0x750201cd3414002aull,0x331a007b2c342600ull,0x308001e338100219ull,0x7633343033313238ull,
0x334000b274732500ull,0x2c5d21003e5b2032ull,0x00e40500d601002aull,0x7465720a0d3a02f0ull,
0x0a0d7d0a0d0a0d3bull,0x0000000000000a0dull
};
#pragma const_seg()

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
#pragma const_seg(".nvFatBinSegment")
__declspec(allocate(__CUDAFATBINSECTION)) __declspec(align(8)) static const __fatBinC_Wrapper_t __fatDeviceText= 
	{ 0x466243b1, 1, fatbinData, 0 };
#pragma const_seg()
#ifdef __cplusplus
}
#endif