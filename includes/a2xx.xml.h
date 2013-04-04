#ifndef A2XX_XML
#define A2XX_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- /home/robclark/src/freedreno/envytools/rnndb/a2xx.xml                (  28212 bytes, from 2013-04-04 17:52:48)
- /home/robclark/src/freedreno/envytools/rnndb/freedreno_copyright.xml (   1453 bytes, from 2013-03-31 16:51:27)
- /home/robclark/src/freedreno/envytools/rnndb/adreno_common.xml       (   2797 bytes, from 2013-04-04 17:52:36)
- /home/robclark/src/freedreno/envytools/rnndb/adreno_pm4.xml          (   7494 bytes, from 2013-04-04 17:47:17)

Copyright (C) 2013 by the following authors:
- Rob Clark <robdclark@gmail.com> (robclark)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


enum a2xx_rb_dither_mode {
	DISABLE = 0,
	ALWAYS = 1,
	IF_ALPHA_OFF = 2,
};

enum a2xx_rb_dither_type {
	PIXEL = 0,
	SUBPIXEL = 1,
};

enum a2xx_colorformatx {
	COLORX_4_4_4_4 = 0,
	COLORX_1_5_5_5 = 1,
	COLORX_5_6_5 = 2,
	COLORX_8 = 3,
	COLORX_8_8 = 4,
	COLORX_8_8_8_8 = 5,
	COLORX_S8_8_8_8 = 6,
	COLORX_16_FLOAT = 7,
	COLORX_16_16_FLOAT = 8,
	COLORX_16_16_16_16_FLOAT = 9,
	COLORX_32_FLOAT = 10,
	COLORX_32_32_FLOAT = 11,
	COLORX_32_32_32_32_FLOAT = 12,
	COLORX_2_3_3 = 13,
	COLORX_8_8_8 = 14,
};

enum a2xx_sq_surfaceformat {
	FMT_1_REVERSE = 0,
	FMT_1 = 1,
	FMT_8 = 2,
	FMT_1_5_5_5 = 3,
	FMT_5_6_5 = 4,
	FMT_6_5_5 = 5,
	FMT_8_8_8_8 = 6,
	FMT_2_10_10_10 = 7,
	FMT_8_A = 8,
	FMT_8_B = 9,
	FMT_8_8 = 10,
	FMT_Cr_Y1_Cb_Y0 = 11,
	FMT_Y1_Cr_Y0_Cb = 12,
	FMT_5_5_5_1 = 13,
	FMT_8_8_8_8_A = 14,
	FMT_4_4_4_4 = 15,
	FMT_10_11_11 = 16,
	FMT_11_11_10 = 17,
	FMT_DXT1 = 18,
	FMT_DXT2_3 = 19,
	FMT_DXT4_5 = 20,
	FMT_24_8 = 22,
	FMT_24_8_FLOAT = 23,
	FMT_16 = 24,
	FMT_16_16 = 25,
	FMT_16_16_16_16 = 26,
	FMT_16_EXPAND = 27,
	FMT_16_16_EXPAND = 28,
	FMT_16_16_16_16_EXPAND = 29,
	FMT_16_FLOAT = 30,
	FMT_16_16_FLOAT = 31,
	FMT_16_16_16_16_FLOAT = 32,
	FMT_32 = 33,
	FMT_32_32 = 34,
	FMT_32_32_32_32 = 35,
	FMT_32_FLOAT = 36,
	FMT_32_32_FLOAT = 37,
	FMT_32_32_32_32_FLOAT = 38,
	FMT_32_AS_8 = 39,
	FMT_32_AS_8_8 = 40,
	FMT_16_MPEG = 41,
	FMT_16_16_MPEG = 42,
	FMT_8_INTERLACED = 43,
	FMT_32_AS_8_INTERLACED = 44,
	FMT_32_AS_8_8_INTERLACED = 45,
	FMT_16_INTERLACED = 46,
	FMT_16_MPEG_INTERLACED = 47,
	FMT_16_16_MPEG_INTERLACED = 48,
	FMT_DXN = 49,
	FMT_8_8_8_8_AS_16_16_16_16 = 50,
	FMT_DXT1_AS_16_16_16_16 = 51,
	FMT_DXT2_3_AS_16_16_16_16 = 52,
	FMT_DXT4_5_AS_16_16_16_16 = 53,
	FMT_2_10_10_10_AS_16_16_16_16 = 54,
	FMT_10_11_11_AS_16_16_16_16 = 55,
	FMT_11_11_10_AS_16_16_16_16 = 56,
	FMT_32_32_32_FLOAT = 57,
	FMT_DXT3A = 58,
	FMT_DXT5A = 59,
	FMT_CTX1 = 60,
	FMT_DXT3A_AS_1_1_1_1 = 61,
	FMT_INVALID = 62,
};

enum a2xx_rb_depth_format {
	DEPTHX_16 = 0,
	DEPTHX_24_8 = 1,
};

enum a2xx_sq_ps_vtx_mode {
	POSITION_1_VECTOR = 0,
	POSITION_2_VECTORS_UNUSED = 1,
	POSITION_2_VECTORS_SPRITE = 2,
	POSITION_2_VECTORS_EDGE = 3,
	POSITION_2_VECTORS_KILL = 4,
	POSITION_2_VECTORS_SPRITE_KILL = 5,
	POSITION_2_VECTORS_EDGE_KILL = 6,
	MULTIPASS = 7,
};

enum a2xx_sq_sample_cntl {
	CENTROIDS_ONLY = 0,
	CENTERS_ONLY = 1,
	CENTROIDS_AND_CENTERS = 2,
};

enum a2xx_dx_clip_space {
	DXCLIP_OPENGL = 0,
	DXCLIP_DIRECTX = 1,
};

enum a2xx_pa_su_sc_polymode {
	DISABLED = 0,
	DUALMODE = 1,
};

enum a2xx_rb_edram_mode {
	EDRAM_NOP = 0,
	COLOR_DEPTH = 4,
	DEPTH_ONLY = 5,
	EDRAM_COPY = 6,
};

enum a2xx_pa_sc_pattern_bit_order {
	LITTLE = 0,
	BIG = 1,
};

enum a2xx_pa_sc_auto_reset_cntl {
	NEVER = 0,
	EACH_PRIMITIVE = 1,
	EACH_PACKET = 2,
};

enum a2xx_pa_pixcenter {
	D3D = 0,
	OGL = 1,
};

enum a2xx_pa_roundmode {
	TRUNCATE = 0,
	ROUND = 1,
	ROUNDTOEVEN = 2,
	ROUNDTOODD = 3,
};

enum a2xx_pa_quantmode {
	ONE_SIXTEENTH = 0,
	ONE_EIGTH = 1,
	ONE_QUARTER = 2,
	ONE_HALF = 3,
	ONE = 4,
};

enum a2xx_rb_copy_sample_select {
	SAMPLE_0 = 0,
	SAMPLE_1 = 1,
	SAMPLE_2 = 2,
	SAMPLE_3 = 3,
	SAMPLE_01 = 4,
	SAMPLE_23 = 5,
	SAMPLE_0123 = 6,
};

#define REG_A2XX_RBBM_PATCH_RELEASE				0x00000001

#define REG_A2XX_RBBM_CNTL					0x0000003b

#define REG_A2XX_RBBM_SOFT_RESET				0x0000003c

#define REG_A2XX_CP_PFP_UCODE_ADDR				0x000000c0

#define REG_A2XX_CP_PFP_UCODE_DATA				0x000000c1

#define REG_A2XX_CP_RB_BASE					0x000001c0

#define REG_A2XX_CP_RB_CNTL					0x000001c1

#define REG_A2XX_CP_RB_RPTR_ADDR				0x000001c3

#define REG_A2XX_CP_RB_RPTR					0x000001c4

#define REG_A2XX_CP_RB_WPTR					0x000001c5

#define REG_A2XX_CP_RB_WPTR_DELAY				0x000001c6

#define REG_A2XX_CP_RB_RPTR_WR					0x000001c7

#define REG_A2XX_CP_RB_WPTR_BASE				0x000001c8

#define REG_A2XX_CP_QUEUE_THRESHOLDS				0x000001d5

#define REG_A2XX_SCRATCH_UMSK					0x000001dc

#define REG_A2XX_SCRATCH_ADDR					0x000001dd

#define REG_A2XX_CP_STATE_DEBUG_INDEX				0x000001ec

#define REG_A2XX_CP_STATE_DEBUG_DATA				0x000001ed

#define REG_A2XX_CP_INT_CNTL					0x000001f2

#define REG_A2XX_CP_INT_STATUS					0x000001f3

#define REG_A2XX_CP_INT_ACK					0x000001f4

#define REG_A2XX_CP_ME_CNTL					0x000001f6

#define REG_A2XX_CP_ME_STATUS					0x000001f7

#define REG_A2XX_CP_ME_RAM_WADDR				0x000001f8

#define REG_A2XX_CP_ME_RAM_RADDR				0x000001f9

#define REG_A2XX_CP_ME_RAM_DATA					0x000001fa

#define REG_A2XX_CP_DEBUG					0x000001fc

#define REG_A2XX_CP_CSQ_RB_STAT					0x000001fd

#define REG_A2XX_CP_CSQ_IB1_STAT				0x000001fe

#define REG_A2XX_CP_CSQ_IB2_STAT				0x000001ff

#define REG_A2XX_RBBM_PERFCOUNTER1_SELECT			0x00000395

#define REG_A2XX_RBBM_PERFCOUNTER1_LO				0x00000397

#define REG_A2XX_RBBM_PERFCOUNTER1_HI				0x00000398

#define REG_A2XX_RBBM_DEBUG					0x0000039b

#define REG_A2XX_RBBM_PM_OVERRIDE1				0x0000039c

#define REG_A2XX_RBBM_PM_OVERRIDE2				0x0000039d

#define REG_A2XX_RBBM_DEBUG_OUT					0x000003a0

#define REG_A2XX_RBBM_DEBUG_CNTL				0x000003a1

#define REG_A2XX_RBBM_READ_ERROR				0x000003b3

#define REG_A2XX_RBBM_INT_CNTL					0x000003b4

#define REG_A2XX_RBBM_INT_STATUS				0x000003b5

#define REG_A2XX_RBBM_INT_ACK					0x000003b6

#define REG_A2XX_MASTER_INT_SIGNAL				0x000003b7

#define REG_A2XX_RBBM_PERIPHID1					0x000003f9

#define REG_A2XX_RBBM_PERIPHID2					0x000003fa

#define REG_A2XX_CP_PERFMON_CNTL				0x00000444

#define REG_A2XX_CP_PERFCOUNTER_SELECT				0x00000445

#define REG_A2XX_CP_PERFCOUNTER_LO				0x00000446

#define REG_A2XX_CP_PERFCOUNTER_HI				0x00000447

#define REG_A2XX_CP_ST_BASE					0x0000044d

#define REG_A2XX_CP_ST_BUFSZ					0x0000044e

#define REG_A2XX_CP_IB1_BASE					0x00000458

#define REG_A2XX_CP_IB1_BUFSZ					0x00000459

#define REG_A2XX_CP_IB2_BASE					0x0000045a

#define REG_A2XX_CP_IB2_BUFSZ					0x0000045b

#define REG_A2XX_CP_STAT					0x0000047f

#define REG_A2XX_SCRATCH_REG0					0x00000578

#define REG_A2XX_SCRATCH_REG2					0x0000057a

#define REG_A2XX_RBBM_STATUS					0x000005d0

#define REG_A2XX_A220_VSC_BIN_SIZE				0x00000c01
static inline uint32_t A2XX_A220_VSC_BIN_SIZE_WIDTH(uint32_t val)
{
	return ((val >> 5) << 0) & 0x1f;
}
static inline uint32_t A2XX_A220_VSC_BIN_SIZE_HEIGHT(uint32_t val)
{
	return ((val >> 5) << 5) & 0x3e0;
}

#define REG_A2XX_VSC_PIPE(i0)				       (0x00000c06 + 0x3*(i0))

#define REG_A2XX_VSC_PIPE_CONFIG(i0)			       (0x00000c06 + 0x3*(i0))

#define REG_A2XX_VSC_PIPE_DATA_ADDRESS(i0)		       (0x00000c07 + 0x3*(i0))

#define REG_A2XX_VSC_PIPE_DATA_LENGTH(i0)		       (0x00000c08 + 0x3*(i0))

#define REG_A2XX_PC_DEBUG_CNTL					0x00000c38

#define REG_A2XX_PC_DEBUG_DATA					0x00000c39

#define REG_A2XX_PA_SC_VIZ_QUERY_STATUS				0x00000c44

#define REG_A2XX_GRAS_DEBUG_CNTL				0x00000c80

#define REG_A2XX_PA_SU_DEBUG_CNTL				0x00000c80

#define REG_A2XX_GRAS_DEBUG_DATA				0x00000c81

#define REG_A2XX_PA_SU_DEBUG_DATA				0x00000c81

#define REG_A2XX_PA_SU_FACE_DATA				0x00000c86

#define REG_A2XX_SQ_GPR_MANAGEMENT				0x00000d00

#define REG_A2XX_SQ_FLOW_CONTROL				0x00000d01

#define REG_A2XX_SQ_INST_STORE_MANAGMENT			0x00000d02

#define REG_A2XX_SQ_DEBUG_MISC					0x00000d05

#define REG_A2XX_SQ_INT_CNTL					0x00000d34

#define REG_A2XX_SQ_INT_STATUS					0x00000d35

#define REG_A2XX_SQ_INT_ACK					0x00000d36

#define REG_A2XX_SQ_DEBUG_INPUT_FSM				0x00000dae

#define REG_A2XX_SQ_DEBUG_CONST_MGR_FSM				0x00000daf

#define REG_A2XX_SQ_DEBUG_TP_FSM				0x00000db0

#define REG_A2XX_SQ_DEBUG_FSM_ALU_0				0x00000db1

#define REG_A2XX_SQ_DEBUG_FSM_ALU_1				0x00000db2

#define REG_A2XX_SQ_DEBUG_EXP_ALLOC				0x00000db3

#define REG_A2XX_SQ_DEBUG_PTR_BUFF				0x00000db4

#define REG_A2XX_SQ_DEBUG_GPR_VTX				0x00000db5

#define REG_A2XX_SQ_DEBUG_GPR_PIX				0x00000db6

#define REG_A2XX_SQ_DEBUG_TB_STATUS_SEL				0x00000db7

#define REG_A2XX_SQ_DEBUG_VTX_TB_0				0x00000db8

#define REG_A2XX_SQ_DEBUG_VTX_TB_1				0x00000db9

#define REG_A2XX_SQ_DEBUG_VTX_TB_STATUS_REG			0x00000dba

#define REG_A2XX_SQ_DEBUG_VTX_TB_STATE_MEM			0x00000dbb

#define REG_A2XX_SQ_DEBUG_PIX_TB_0				0x00000dbc

#define REG_A2XX_SQ_DEBUG_PIX_TB_STATUS_REG_0			0x00000dbd

#define REG_A2XX_SQ_DEBUG_PIX_TB_STATUS_REG_1			0x00000dbe

#define REG_A2XX_SQ_DEBUG_PIX_TB_STATUS_REG_2			0x00000dbf

#define REG_A2XX_SQ_DEBUG_PIX_TB_STATUS_REG_3			0x00000dc0

#define REG_A2XX_SQ_DEBUG_PIX_TB_STATE_MEM			0x00000dc1

#define REG_A2XX_TC_CNTL_STATUS					0x00000e00

#define REG_A2XX_TP0_CHICKEN					0x00000e1e

#define REG_A2XX_RB_BC_CONTROL					0x00000f01
#define A2XX_RB_BC_CONTROL_ACCUM_LINEAR_MODE_ENABLE		0x00000001
static inline uint32_t A2XX_RB_BC_CONTROL_ACCUM_TIMEOUT_SELECT(uint32_t val)
{
	return ((val) << 1) & 0x6;
}
#define A2XX_RB_BC_CONTROL_DISABLE_EDRAM_CAM			0x00000008
#define A2XX_RB_BC_CONTROL_DISABLE_EZ_FAST_CONTEXT_SWITCH	0x00000010
#define A2XX_RB_BC_CONTROL_DISABLE_EZ_NULL_ZCMD_DROP		0x00000020
#define A2XX_RB_BC_CONTROL_DISABLE_LZ_NULL_ZCMD_DROP		0x00000040
#define A2XX_RB_BC_CONTROL_ENABLE_AZ_THROTTLE			0x00000080
static inline uint32_t A2XX_RB_BC_CONTROL_AZ_THROTTLE_COUNT(uint32_t val)
{
	return ((val) << 8) & 0x1f00;
}
#define A2XX_RB_BC_CONTROL_ENABLE_CRC_UPDATE			0x00004000
#define A2XX_RB_BC_CONTROL_CRC_MODE				0x00008000
#define A2XX_RB_BC_CONTROL_DISABLE_SAMPLE_COUNTERS		0x00010000
#define A2XX_RB_BC_CONTROL_DISABLE_ACCUM			0x00020000
static inline uint32_t A2XX_RB_BC_CONTROL_ACCUM_ALLOC_MASK(uint32_t val)
{
	return ((val) << 18) & 0x3c0000;
}
#define A2XX_RB_BC_CONTROL_LINEAR_PERFORMANCE_ENABLE		0x00400000
static inline uint32_t A2XX_RB_BC_CONTROL_ACCUM_DATA_FIFO_LIMIT(uint32_t val)
{
	return ((val) << 23) & 0x7800000;
}
static inline uint32_t A2XX_RB_BC_CONTROL_MEM_EXPORT_TIMEOUT_SELECT(uint32_t val)
{
	return ((val) << 27) & 0x18000000;
}
#define A2XX_RB_BC_CONTROL_MEM_EXPORT_LINEAR_MODE_ENABLE	0x20000000
#define A2XX_RB_BC_CONTROL_CRC_SYSTEM				0x40000000
#define A2XX_RB_BC_CONTROL_RESERVED6				0x80000000

#define REG_A2XX_RB_EDRAM_INFO					0x00000f02

#define REG_A2XX_RB_DEBUG_CNTL					0x00000f26

#define REG_A2XX_RB_DEBUG_DATA					0x00000f27

#define REG_A2XX_RB_SURFACE_INFO				0x00002000

#define REG_A2XX_RB_COLOR_INFO					0x00002001
static inline uint32_t A2XX_RB_COLOR_INFO_FORMAT(enum a2xx_colorformatx val)
{
	return ((val) << 0) & 0xf;
}
static inline uint32_t A2XX_RB_COLOR_INFO_ROUND_MODE(uint32_t val)
{
	return ((val) << 4) & 0x30;
}
#define A2XX_RB_COLOR_INFO_LINEAR				0x00000040
static inline uint32_t A2XX_RB_COLOR_INFO_ENDIAN(uint32_t val)
{
	return ((val) << 7) & 0x180;
}
static inline uint32_t A2XX_RB_COLOR_INFO_SWAP(uint32_t val)
{
	return ((val) << 9) & 0x600;
}
static inline uint32_t A2XX_RB_COLOR_INFO_BASE(uint32_t val)
{
	return ((val >> 10) << 12) & 0xfffff000;
}

#define REG_A2XX_RB_DEPTH_INFO					0x00002002
static inline uint32_t A2XX_RB_DEPTH_INFO_DEPTH_FORMAT(enum a2xx_rb_depth_format val)
{
	return ((val) << 0) & 0x1;
}
static inline uint32_t A2XX_RB_DEPTH_INFO_BASE(uint32_t val)
{
	return ((val >> 10) << 12) & 0xfffff000;
}

#define REG_A2XX_A225_RB_COLOR_INFO3				0x00002005

#define REG_A2XX_COHER_DEST_BASE_0				0x00002006

#define REG_A2XX_PA_SC_SCREEN_SCISSOR_TL			0x0000200e
#define A2XX_PA_SC_SCREEN_SCISSOR_TL_WINDOW_OFFSET_DISABLE	0x80000000
static inline uint32_t A2XX_PA_SC_SCREEN_SCISSOR_TL_X(uint32_t val)
{
	return ((val) << 0) & 0x7fff;
}
static inline uint32_t A2XX_PA_SC_SCREEN_SCISSOR_TL_Y(uint32_t val)
{
	return ((val) << 16) & 0x7fff0000;
}

#define REG_A2XX_PA_SC_SCREEN_SCISSOR_BR			0x0000200f
#define A2XX_PA_SC_SCREEN_SCISSOR_BR_WINDOW_OFFSET_DISABLE	0x80000000
static inline uint32_t A2XX_PA_SC_SCREEN_SCISSOR_BR_X(uint32_t val)
{
	return ((val) << 0) & 0x7fff;
}
static inline uint32_t A2XX_PA_SC_SCREEN_SCISSOR_BR_Y(uint32_t val)
{
	return ((val) << 16) & 0x7fff0000;
}

#define REG_A2XX_PA_SC_WINDOW_OFFSET				0x00002080
static inline uint32_t A2XX_PA_SC_WINDOW_OFFSET_X(uint32_t val)
{
	return ((val) << 0) & 0x7fff;
}
static inline uint32_t A2XX_PA_SC_WINDOW_OFFSET_Y(uint32_t val)
{
	return ((val) << 16) & 0x7fff0000;
}
#define A2XX_PA_SC_WINDOW_OFFSET_DISABLE			0x80000000

#define REG_A2XX_PA_SC_WINDOW_SCISSOR_TL			0x00002081
#define A2XX_PA_SC_WINDOW_SCISSOR_TL_WINDOW_OFFSET_DISABLE	0x80000000
static inline uint32_t A2XX_PA_SC_WINDOW_SCISSOR_TL_X(uint32_t val)
{
	return ((val) << 0) & 0x7fff;
}
static inline uint32_t A2XX_PA_SC_WINDOW_SCISSOR_TL_Y(uint32_t val)
{
	return ((val) << 16) & 0x7fff0000;
}

#define REG_A2XX_PA_SC_WINDOW_SCISSOR_BR			0x00002082
#define A2XX_PA_SC_WINDOW_SCISSOR_BR_WINDOW_OFFSET_DISABLE	0x80000000
static inline uint32_t A2XX_PA_SC_WINDOW_SCISSOR_BR_X(uint32_t val)
{
	return ((val) << 0) & 0x7fff;
}
static inline uint32_t A2XX_PA_SC_WINDOW_SCISSOR_BR_Y(uint32_t val)
{
	return ((val) << 16) & 0x7fff0000;
}

#define REG_A2XX_VGT_MAX_VTX_INDX				0x00002100

#define REG_A2XX_VGT_MIN_VTX_INDX				0x00002101

#define REG_A2XX_VGT_INDX_OFFSET				0x00002102

#define REG_A2XX_A225_PC_MULTI_PRIM_IB_RESET_INDX		0x00002103

#define REG_A2XX_RB_COLOR_MASK					0x00002104
#define A2XX_RB_COLOR_MASK_WRITE_RED				0x00000001
#define A2XX_RB_COLOR_MASK_WRITE_GREEN				0x00000002
#define A2XX_RB_COLOR_MASK_WRITE_BLUE				0x00000004
#define A2XX_RB_COLOR_MASK_WRITE_ALPHA				0x00000008

#define REG_A2XX_RB_BLEND_RED					0x00002105

#define REG_A2XX_RB_BLEND_GREEN					0x00002106

#define REG_A2XX_RB_BLEND_BLUE					0x00002107

#define REG_A2XX_RB_BLEND_ALPHA					0x00002108

#define REG_A2XX_RB_FOG_COLOR					0x00002109

#define REG_A2XX_RB_STENCILREFMASK_BF				0x0000210c
static inline uint32_t A2XX_RB_STENCILREFMASK_BF_STENCILREF(uint32_t val)
{
	return ((val) << 0) & 0xff;
}
static inline uint32_t A2XX_RB_STENCILREFMASK_BF_STENCILMASK(uint32_t val)
{
	return ((val) << 8) & 0xff00;
}
static inline uint32_t A2XX_RB_STENCILREFMASK_BF_STENCILWRITEMASK(uint32_t val)
{
	return ((val) << 16) & 0xff0000;
}

#define REG_A2XX_RB_STENCILREFMASK				0x0000210d
static inline uint32_t A2XX_RB_STENCILREFMASK_STENCILREF(uint32_t val)
{
	return ((val) << 0) & 0xff;
}
static inline uint32_t A2XX_RB_STENCILREFMASK_STENCILMASK(uint32_t val)
{
	return ((val) << 8) & 0xff00;
}
static inline uint32_t A2XX_RB_STENCILREFMASK_STENCILWRITEMASK(uint32_t val)
{
	return ((val) << 16) & 0xff0000;
}

#define REG_A2XX_RB_ALPHA_REF					0x0000210e

#define REG_A2XX_PA_CL_VPORT_XSCALE				0x0000210f
static inline uint32_t A2XX_PA_CL_VPORT_XSCALE(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_VPORT_XOFFSET				0x00002110
static inline uint32_t A2XX_PA_CL_VPORT_XOFFSET(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_VPORT_YSCALE				0x00002111
static inline uint32_t A2XX_PA_CL_VPORT_YSCALE(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_VPORT_YOFFSET				0x00002112
static inline uint32_t A2XX_PA_CL_VPORT_YOFFSET(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_VPORT_ZSCALE				0x00002113
static inline uint32_t A2XX_PA_CL_VPORT_ZSCALE(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_VPORT_ZOFFSET				0x00002114
static inline uint32_t A2XX_PA_CL_VPORT_ZOFFSET(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_SQ_PROGRAM_CNTL				0x00002180
static inline uint32_t A2XX_SQ_PROGRAM_CNTL_VS_REGS(uint32_t val)
{
	return ((val) << 0) & 0xff;
}
static inline uint32_t A2XX_SQ_PROGRAM_CNTL_PS_REGS(uint32_t val)
{
	return ((val) << 8) & 0xff00;
}
#define A2XX_SQ_PROGRAM_CNTL_VS_RESOURCE			0x00010000
#define A2XX_SQ_PROGRAM_CNTL_PS_RESOURCE			0x00020000
#define A2XX_SQ_PROGRAM_CNTL_PARAM_GEN				0x00040000
#define A2XX_SQ_PROGRAM_CNTL_GEN_INDEX_PIX			0x00080000
static inline uint32_t A2XX_SQ_PROGRAM_CNTL_VS_EXPORT_COUNT(uint32_t val)
{
	return ((val) << 20) & 0xf00000;
}
static inline uint32_t A2XX_SQ_PROGRAM_CNTL_VS_EXPORT_MODE(enum a2xx_sq_ps_vtx_mode val)
{
	return ((val) << 24) & 0x7000000;
}
static inline uint32_t A2XX_SQ_PROGRAM_CNTL_PS_EXPORT_MODE(uint32_t val)
{
	return ((val) << 27) & 0x78000000;
}
#define A2XX_SQ_PROGRAM_CNTL_GEN_INDEX_VTX			0x80000000

#define REG_A2XX_SQ_CONTEXT_MISC				0x00002181
#define A2XX_SQ_CONTEXT_MISC_INST_PRED_OPTIMIZE			0x00000001
#define A2XX_SQ_CONTEXT_MISC_SC_OUTPUT_SCREEN_XY		0x00000002
static inline uint32_t A2XX_SQ_CONTEXT_MISC_SC_SAMPLE_CNTL(enum a2xx_sq_sample_cntl val)
{
	return ((val) << 2) & 0xc;
}
static inline uint32_t A2XX_SQ_CONTEXT_MISC_PARAM_GEN_POS(uint32_t val)
{
	return ((val) << 8) & 0xff00;
}
#define A2XX_SQ_CONTEXT_MISC_PERFCOUNTER_REF			0x00010000
#define A2XX_SQ_CONTEXT_MISC_YEILD_OPTIMIZE			0x00020000
#define A2XX_SQ_CONTEXT_MISC_TX_CACHE_SEL			0x00040000

#define REG_A2XX_SQ_INTERPOLATOR_CNTL				0x00002182

#define REG_A2XX_SQ_WRAPPING_0					0x00002183

#define REG_A2XX_SQ_WRAPPING_1					0x00002184

#define REG_A2XX_SQ_PS_PROGRAM					0x000021f6

#define REG_A2XX_SQ_VS_PROGRAM					0x000021f7

#define REG_A2XX_RB_DEPTHCONTROL				0x00002200
#define A2XX_RB_DEPTHCONTROL_STENCIL_ENABLE			0x00000001
#define A2XX_RB_DEPTHCONTROL_Z_ENABLE				0x00000002
#define A2XX_RB_DEPTHCONTROL_Z_WRITE_ENABLE			0x00000004
#define A2XX_RB_DEPTHCONTROL_EARLY_Z_ENABLE			0x00000008
static inline uint32_t A2XX_RB_DEPTHCONTROL_ZFUNC(enum adreno_compare_func val)
{
	return ((val) << 4) & 0x70;
}
#define A2XX_RB_DEPTHCONTROL_BACKFACE_ENABLE			0x00000080
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILFUNC(enum adreno_compare_func val)
{
	return ((val) << 8) & 0x700;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILFAIL(enum adreno_stencil_op val)
{
	return ((val) << 11) & 0x3800;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILZPASS(enum adreno_stencil_op val)
{
	return ((val) << 14) & 0x1c000;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILZFAIL(enum adreno_stencil_op val)
{
	return ((val) << 17) & 0xe0000;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILFUNC_BF(enum adreno_compare_func val)
{
	return ((val) << 20) & 0x700000;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILFAIL_BF(enum adreno_stencil_op val)
{
	return ((val) << 23) & 0x3800000;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILZPASS_BF(enum adreno_stencil_op val)
{
	return ((val) << 26) & 0x1c000000;
}
static inline uint32_t A2XX_RB_DEPTHCONTROL_STENCILZFAIL_BF(enum adreno_stencil_op val)
{
	return ((val) << 29) & 0xe0000000;
}

#define REG_A2XX_RB_BLEND_CONTROL				0x00002201
static inline uint32_t A2XX_RB_BLEND_CONTROL_COLOR_SRCBLEND(enum adreno_rb_blend_factor val)
{
	return ((val) << 0) & 0x1f;
}
static inline uint32_t A2XX_RB_BLEND_CONTROL_COLOR_COMB_FCN(enum adreno_rb_blend_opcode val)
{
	return ((val) << 5) & 0xe0;
}
static inline uint32_t A2XX_RB_BLEND_CONTROL_COLOR_DESTBLEND(enum adreno_rb_blend_factor val)
{
	return ((val) << 8) & 0x1f00;
}
static inline uint32_t A2XX_RB_BLEND_CONTROL_ALPHA_SRCBLEND(enum adreno_rb_blend_factor val)
{
	return ((val) << 16) & 0x1f0000;
}
static inline uint32_t A2XX_RB_BLEND_CONTROL_ALPHA_COMB_FCN(enum adreno_rb_blend_opcode val)
{
	return ((val) << 21) & 0xe00000;
}
static inline uint32_t A2XX_RB_BLEND_CONTROL_ALPHA_DESTBLEND(enum adreno_rb_blend_factor val)
{
	return ((val) << 24) & 0x1f000000;
}
#define A2XX_RB_BLEND_CONTROL_BLEND_FORCE_ENABLE		0x20000000
#define A2XX_RB_BLEND_CONTROL_BLEND_FORCE			0x40000000

#define REG_A2XX_RB_COLORCONTROL				0x00002202
static inline uint32_t A2XX_RB_COLORCONTROL_ALPHA_FUNC(enum adreno_compare_func val)
{
	return ((val) << 0) & 0x7;
}
#define A2XX_RB_COLORCONTROL_ALPHA_TEST_ENABLE			0x00000008
#define A2XX_RB_COLORCONTROL_ALPHA_TO_MASK_ENABLE		0x00000010
#define A2XX_RB_COLORCONTROL_BLEND_DISABLE			0x00000020
#define A2XX_RB_COLORCONTROL_VOB_ENABLE				0x00000040
#define A2XX_RB_COLORCONTROL_VS_EXPORTS_FOG			0x00000080
static inline uint32_t A2XX_RB_COLORCONTROL_ROP_CODE(uint32_t val)
{
	return ((val) << 8) & 0xf00;
}
static inline uint32_t A2XX_RB_COLORCONTROL_DITHER_MODE(enum a2xx_rb_dither_mode val)
{
	return ((val) << 12) & 0x3000;
}
static inline uint32_t A2XX_RB_COLORCONTROL_DITHER_TYPE(enum a2xx_rb_dither_type val)
{
	return ((val) << 14) & 0xc000;
}
#define A2XX_RB_COLORCONTROL_PIXEL_FOG				0x00010000
static inline uint32_t A2XX_RB_COLORCONTROL_ALPHA_TO_MASK_OFFSET0(uint32_t val)
{
	return ((val) << 24) & 0x3000000;
}
static inline uint32_t A2XX_RB_COLORCONTROL_ALPHA_TO_MASK_OFFSET1(uint32_t val)
{
	return ((val) << 26) & 0xc000000;
}
static inline uint32_t A2XX_RB_COLORCONTROL_ALPHA_TO_MASK_OFFSET2(uint32_t val)
{
	return ((val) << 28) & 0x30000000;
}
static inline uint32_t A2XX_RB_COLORCONTROL_ALPHA_TO_MASK_OFFSET3(uint32_t val)
{
	return ((val) << 30) & 0xc0000000;
}

#define REG_A2XX_VGT_CURRENT_BIN_ID_MAX				0x00002203
static inline uint32_t A2XX_VGT_CURRENT_BIN_ID_MAX_COLUMN(uint32_t val)
{
	return ((val) << 0) & 0x7;
}
static inline uint32_t A2XX_VGT_CURRENT_BIN_ID_MAX_ROW(uint32_t val)
{
	return ((val) << 3) & 0x38;
}
static inline uint32_t A2XX_VGT_CURRENT_BIN_ID_MAX_GUARD_BAND_MASK(uint32_t val)
{
	return ((val) << 6) & 0x1c0;
}

#define REG_A2XX_PA_CL_CLIP_CNTL				0x00002204
#define A2XX_PA_CL_CLIP_CNTL_CLIP_DISABLE			0x00010000
#define A2XX_PA_CL_CLIP_CNTL_BOUNDARY_EDGE_FLAG_ENA		0x00040000
static inline uint32_t A2XX_PA_CL_CLIP_CNTL_DX_CLIP_SPACE_DEF(enum a2xx_dx_clip_space val)
{
	return ((val) << 19) & 0x80000;
}
#define A2XX_PA_CL_CLIP_CNTL_DIS_CLIP_ERR_DETECT		0x00100000
#define A2XX_PA_CL_CLIP_CNTL_VTX_KILL_OR			0x00200000
#define A2XX_PA_CL_CLIP_CNTL_XY_NAN_RETAIN			0x00400000
#define A2XX_PA_CL_CLIP_CNTL_Z_NAN_RETAIN			0x00800000
#define A2XX_PA_CL_CLIP_CNTL_W_NAN_RETAIN			0x01000000

#define REG_A2XX_PA_SU_SC_MODE_CNTL				0x00002205
#define A2XX_PA_SU_SC_MODE_CNTL_CULL_FRONT			0x00000001
#define A2XX_PA_SU_SC_MODE_CNTL_CULL_BACK			0x00000002
#define A2XX_PA_SU_SC_MODE_CNTL_FACE				0x00000004
static inline uint32_t A2XX_PA_SU_SC_MODE_CNTL_POLYMODE(enum a2xx_pa_su_sc_polymode val)
{
	return ((val) << 3) & 0x18;
}
static inline uint32_t A2XX_PA_SU_SC_MODE_CNTL_FRONT_PTYPE(enum adreno_pa_su_sc_draw val)
{
	return ((val) << 5) & 0xe0;
}
static inline uint32_t A2XX_PA_SU_SC_MODE_CNTL_BACK_PTYPE(enum adreno_pa_su_sc_draw val)
{
	return ((val) << 8) & 0x700;
}
#define A2XX_PA_SU_SC_MODE_CNTL_POLY_OFFSET_FRONT_ENABLE	0x00000800
#define A2XX_PA_SU_SC_MODE_CNTL_POLY_OFFSET_BACK_ENABLE		0x00001000
#define A2XX_PA_SU_SC_MODE_CNTL_POLY_OFFSET_PARA_ENABLE		0x00002000
#define A2XX_PA_SU_SC_MODE_CNTL_MSAA_ENABLE			0x00008000
#define A2XX_PA_SU_SC_MODE_CNTL_VTX_WINDOW_OFFSET_ENABLE	0x00010000
#define A2XX_PA_SU_SC_MODE_CNTL_LINE_STIPPLE_ENABLE		0x00040000
#define A2XX_PA_SU_SC_MODE_CNTL_PROVOKING_VTX_LAST		0x00080000
#define A2XX_PA_SU_SC_MODE_CNTL_PERSP_CORR_DIS			0x00100000
#define A2XX_PA_SU_SC_MODE_CNTL_MULTI_PRIM_IB_ENA		0x00200000
#define A2XX_PA_SU_SC_MODE_CNTL_QUAD_ORDER_ENABLE		0x00800000
#define A2XX_PA_SU_SC_MODE_CNTL_WAIT_RB_IDLE_ALL_TRI		0x02000000
#define A2XX_PA_SU_SC_MODE_CNTL_WAIT_RB_IDLE_FIRST_TRI_NEW_STATE	0x04000000
#define A2XX_PA_SU_SC_MODE_CNTL_CLAMPED_FACENESS		0x10000000
#define A2XX_PA_SU_SC_MODE_CNTL_ZERO_AREA_FACENESS		0x20000000
#define A2XX_PA_SU_SC_MODE_CNTL_FACE_KILL_ENABLE		0x40000000
#define A2XX_PA_SU_SC_MODE_CNTL_FACE_WRITE_ENABLE		0x80000000

#define REG_A2XX_PA_CL_VTE_CNTL					0x00002206
#define A2XX_PA_CL_VTE_CNTL_VPORT_X_SCALE_ENA			0x00000001
#define A2XX_PA_CL_VTE_CNTL_VPORT_X_OFFSET_ENA			0x00000002
#define A2XX_PA_CL_VTE_CNTL_VPORT_Y_SCALE_ENA			0x00000004
#define A2XX_PA_CL_VTE_CNTL_VPORT_Y_OFFSET_ENA			0x00000008
#define A2XX_PA_CL_VTE_CNTL_VPORT_Z_SCALE_ENA			0x00000010
#define A2XX_PA_CL_VTE_CNTL_VPORT_Z_OFFSET_ENA			0x00000020
#define A2XX_PA_CL_VTE_CNTL_VTX_XY_FMT				0x00000100
#define A2XX_PA_CL_VTE_CNTL_VTX_Z_FMT				0x00000200
#define A2XX_PA_CL_VTE_CNTL_VTX_W0_FMT				0x00000400
#define A2XX_PA_CL_VTE_CNTL_PERFCOUNTER_REF			0x00000800

#define REG_A2XX_VGT_CURRENT_BIN_ID_MIN				0x00002207
static inline uint32_t A2XX_VGT_CURRENT_BIN_ID_MIN_COLUMN(uint32_t val)
{
	return ((val) << 0) & 0x7;
}
static inline uint32_t A2XX_VGT_CURRENT_BIN_ID_MIN_ROW(uint32_t val)
{
	return ((val) << 3) & 0x38;
}
static inline uint32_t A2XX_VGT_CURRENT_BIN_ID_MIN_GUARD_BAND_MASK(uint32_t val)
{
	return ((val) << 6) & 0x1c0;
}

#define REG_A2XX_RB_MODECONTROL					0x00002208
static inline uint32_t A2XX_RB_MODECONTROL_EDRAM_MODE(enum a2xx_rb_edram_mode val)
{
	return ((val) << 0) & 0x7;
}

#define REG_A2XX_A220_RB_LRZ_VSC_CONTROL			0x00002209

#define REG_A2XX_RB_SAMPLE_POS					0x0000220a

#define REG_A2XX_CLEAR_COLOR					0x0000220b
static inline uint32_t A2XX_CLEAR_COLOR_RED(uint32_t val)
{
	return ((val) << 0) & 0xff;
}
static inline uint32_t A2XX_CLEAR_COLOR_GREEN(uint32_t val)
{
	return ((val) << 8) & 0xff00;
}
static inline uint32_t A2XX_CLEAR_COLOR_BLUE(uint32_t val)
{
	return ((val) << 16) & 0xff0000;
}
static inline uint32_t A2XX_CLEAR_COLOR_ALPHA(uint32_t val)
{
	return ((val) << 24) & 0xff000000;
}

#define REG_A2XX_A220_GRAS_CONTROL				0x00002210

#define REG_A2XX_PA_SU_POINT_SIZE				0x00002280
static inline uint32_t A2XX_PA_SU_POINT_SIZE_HEIGHT(float val)
{
	return ((((uint32_t)(val * 8.0))) << 0) & 0xffff;
}
static inline uint32_t A2XX_PA_SU_POINT_SIZE_WIDTH(float val)
{
	return ((((uint32_t)(val * 8.0))) << 16) & 0xffff0000;
}

#define REG_A2XX_PA_SU_POINT_MINMAX				0x00002281
static inline uint32_t A2XX_PA_SU_POINT_MINMAX_MIN(float val)
{
	return ((((uint32_t)(val * 8.0))) << 0) & 0xffff;
}
static inline uint32_t A2XX_PA_SU_POINT_MINMAX_MAX(float val)
{
	return ((((uint32_t)(val * 8.0))) << 16) & 0xffff0000;
}

#define REG_A2XX_PA_SU_LINE_CNTL				0x00002282
static inline uint32_t A2XX_PA_SU_LINE_CNTL_WIDTH(float val)
{
	return ((((uint32_t)(val * 8.0))) << 0) & 0xffff;
}

#define REG_A2XX_PA_SC_LINE_STIPPLE				0x00002283
static inline uint32_t A2XX_PA_SC_LINE_STIPPLE_LINE_PATTERN(uint32_t val)
{
	return ((val) << 0) & 0xffff;
}
static inline uint32_t A2XX_PA_SC_LINE_STIPPLE_REPEAT_COUNT(uint32_t val)
{
	return ((val) << 16) & 0xff0000;
}
static inline uint32_t A2XX_PA_SC_LINE_STIPPLE_PATTERN_BIT_ORDER(enum a2xx_pa_sc_pattern_bit_order val)
{
	return ((val) << 28) & 0x10000000;
}
static inline uint32_t A2XX_PA_SC_LINE_STIPPLE_AUTO_RESET_CNTL(enum a2xx_pa_sc_auto_reset_cntl val)
{
	return ((val) << 29) & 0x60000000;
}

#define REG_A2XX_PA_SC_VIZ_QUERY				0x00002293

#define REG_A2XX_VGT_ENHANCE					0x00002294

#define REG_A2XX_PA_SC_LINE_CNTL				0x00002300
static inline uint32_t A2XX_PA_SC_LINE_CNTL_BRES_CNTL(uint32_t val)
{
	return ((val) << 0) & 0xffff;
}
#define A2XX_PA_SC_LINE_CNTL_USE_BRES_CNTL			0x00000100
#define A2XX_PA_SC_LINE_CNTL_EXPAND_LINE_WIDTH			0x00000200
#define A2XX_PA_SC_LINE_CNTL_LAST_PIXEL				0x00000400

#define REG_A2XX_PA_SC_AA_CONFIG				0x00002301

#define REG_A2XX_PA_SU_VTX_CNTL					0x00002302
static inline uint32_t A2XX_PA_SU_VTX_CNTL_PIX_CENTER(enum a2xx_pa_pixcenter val)
{
	return ((val) << 0) & 0x1;
}
static inline uint32_t A2XX_PA_SU_VTX_CNTL_ROUND_MODE(enum a2xx_pa_roundmode val)
{
	return ((val) << 1) & 0x6;
}
static inline uint32_t A2XX_PA_SU_VTX_CNTL_QUANT_MODE(enum a2xx_pa_quantmode val)
{
	return ((val) << 7) & 0x380;
}

#define REG_A2XX_PA_CL_GB_VERT_CLIP_ADJ				0x00002303
static inline uint32_t A2XX_PA_CL_GB_VERT_CLIP_ADJ(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_GB_VERT_DISC_ADJ				0x00002304
static inline uint32_t A2XX_PA_CL_GB_VERT_DISC_ADJ(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_GB_HORZ_CLIP_ADJ				0x00002305
static inline uint32_t A2XX_PA_CL_GB_HORZ_CLIP_ADJ(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_PA_CL_GB_HORZ_DISC_ADJ				0x00002306
static inline uint32_t A2XX_PA_CL_GB_HORZ_DISC_ADJ(float val)
{
	return ((fui(val)) << 0) & 0xffffffff;
}

#define REG_A2XX_SQ_VS_CONST					0x00002307
static inline uint32_t A2XX_SQ_VS_CONST_BASE(uint32_t val)
{
	return ((val) << 0) & 0x1ff;
}
static inline uint32_t A2XX_SQ_VS_CONST_SIZE(uint32_t val)
{
	return ((val) << 12) & 0x1ff000;
}

#define REG_A2XX_SQ_PS_CONST					0x00002308
static inline uint32_t A2XX_SQ_PS_CONST_BASE(uint32_t val)
{
	return ((val) << 0) & 0x1ff;
}
static inline uint32_t A2XX_SQ_PS_CONST_SIZE(uint32_t val)
{
	return ((val) << 12) & 0x1ff000;
}

#define REG_A2XX_SQ_DEBUG_MISC_0				0x00002309

#define REG_A2XX_SQ_DEBUG_MISC_1				0x0000230a

#define REG_A2XX_PA_SC_AA_MASK					0x00002312

#define REG_A2XX_VGT_VERTEX_REUSE_BLOCK_CNTL			0x00002316

#define REG_A2XX_VGT_OUT_DEALLOC_CNTL				0x00002317

#define REG_A2XX_RB_COPY_CONTROL				0x00002318
static inline uint32_t A2XX_RB_COPY_CONTROL_COPY_SAMPLE_SELECT(enum a2xx_rb_copy_sample_select val)
{
	return ((val) << 0) & 0x7;
}
#define A2XX_RB_COPY_CONTROL_DEPTH_CLEAR_ENABLE			0x00000008
static inline uint32_t A2XX_RB_COPY_CONTROL_CLEAR_MASK(uint32_t val)
{
	return ((val) << 4) & 0xf0;
}

#define REG_A2XX_RB_COPY_DEST_BASE				0x00002319

#define REG_A2XX_RB_COPY_DEST_PITCH				0x0000231a
static inline uint32_t A2XX_RB_COPY_DEST_PITCH(uint32_t val)
{
	return ((val >> 5) << 0) & 0xffffffff;
}

#define REG_A2XX_RB_COPY_DEST_INFO				0x0000231b
static inline uint32_t A2XX_RB_COPY_DEST_INFO_DEST_ENDIAN(enum adreno_rb_surface_endian val)
{
	return ((val) << 0) & 0x7;
}
#define A2XX_RB_COPY_DEST_INFO_LINEAR				0x00000008
static inline uint32_t A2XX_RB_COPY_DEST_INFO_FORMAT(enum a2xx_colorformatx val)
{
	return ((val) << 4) & 0xf0;
}
static inline uint32_t A2XX_RB_COPY_DEST_INFO_SWAP(uint32_t val)
{
	return ((val) << 8) & 0x300;
}
static inline uint32_t A2XX_RB_COPY_DEST_INFO_DITHER_MODE(enum a2xx_rb_dither_mode val)
{
	return ((val) << 10) & 0xc00;
}
static inline uint32_t A2XX_RB_COPY_DEST_INFO_DITHER_TYPE(enum a2xx_rb_dither_type val)
{
	return ((val) << 12) & 0x3000;
}
#define A2XX_RB_COPY_DEST_INFO_WRITE_RED			0x00004000
#define A2XX_RB_COPY_DEST_INFO_WRITE_GREEN			0x00008000
#define A2XX_RB_COPY_DEST_INFO_WRITE_BLUE			0x00010000
#define A2XX_RB_COPY_DEST_INFO_WRITE_ALPHA			0x00020000

#define REG_A2XX_RB_COPY_DEST_OFFSET				0x0000231c
#define A2XX_RB_COPY_DEST_OFFSET_WINDOW_OFFSET_DISABLE		0x80000000
static inline uint32_t A2XX_RB_COPY_DEST_OFFSET_X(uint32_t val)
{
	return ((val) << 0) & 0x7fff;
}
static inline uint32_t A2XX_RB_COPY_DEST_OFFSET_Y(uint32_t val)
{
	return ((val) << 16) & 0x7fff0000;
}

#define REG_A2XX_RB_DEPTH_CLEAR					0x0000231d

#define REG_A2XX_RB_SAMPLE_COUNT_CTL				0x00002324

#define REG_A2XX_RB_COLOR_DEST_MASK				0x00002326

#define REG_A2XX_A225_GRAS_UCP0X				0x00002340

#define REG_A2XX_A225_GRAS_UCP5W				0x00002357

#define REG_A2XX_A225_GRAS_UCP_ENABLED				0x00002360

#define REG_A2XX_PA_SU_POLY_OFFSET_FRONT_SCALE			0x00002380

#define REG_A2XX_PA_SU_POLY_OFFSET_BACK_OFFSET			0x00002383

#define REG_A2XX_SQ_CONSTANT_0					0x00004000

#define REG_A2XX_SQ_FETCH_0					0x00004800

#define REG_A2XX_SQ_CF_BOOLEANS					0x00004900

#define REG_A2XX_SQ_CF_LOOP					0x00004908

#define REG_A2XX_COHER_SIZE_PM4					0x00000a29

#define REG_A2XX_COHER_BASE_PM4					0x00000a2a

#define REG_A2XX_COHER_STATUS_PM4				0x00000a2b


#endif /* A2XX_XML */
