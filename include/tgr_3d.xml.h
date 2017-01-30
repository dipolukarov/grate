#ifndef TGR_3D_XML
#define TGR_3D_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/envytools/envytools/
git clone https://github.com/envytools/envytools.git

The rules-ng-ng source files this header was generated from are:
- /envytools/rnndb/tgr_3d.xml          (  11967 bytes, from 2017-01-30 23:18:22)
- /envytools/rnndb/grate_copyright.xml (   1556 bytes, from 2017-01-23 10:01:40)

Copyright (C) 2012-2017 by the following authors:
- Erik Faye-Lund <kusmabite@gmail.com> (kusma)
- Dmitry Osipenko <digetx@gmail.com> (digetx)

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


#define INDEX_MODE_NONE						0x00000000
#define INDEX_MODE_UINT8					0x00000001
#define INDEX_MODE_UINT16					0x00000002
#define PRIMITIVE_TYPE_POINTS					0x00000000
#define PRIMITIVE_TYPE_LINES					0x00000001
#define PRIMITIVE_TYPE_LINE_LOOP				0x00000002
#define PRIMITIVE_TYPE_LINE_STRIP				0x00000003
#define PRIMITIVE_TYPE_TRIANGLES				0x00000004
#define PRIMITIVE_TYPE_TRIANGLE_STRIP				0x00000005
#define PRIMITIVE_TYPE_TRIANGLE_FAN				0x00000006
#define PROVOKING_VERTEX_FIRST					0x00000000
#define PROVOKING_VERTEX_LAST					0x00000001
#define ATTRIB_TYPE_UBYTE					0x00000000
#define ATTRIB_TYPE_UBYTE_NORM					0x00000001
#define ATTRIB_TYPE_SBYTE					0x00000002
#define ATTRIB_TYPE_SBYTE_NORM					0x00000003
#define ATTRIB_TYPE_USHORT					0x00000004
#define ATTRIB_TYPE_USHORT_NORM					0x00000005
#define ATTRIB_TYPE_SSHORT					0x00000006
#define ATTRIB_TYPE_SSHORT_NORM					0x00000007
#define ATTRIB_TYPE_UINT					0x00000008
#define ATTRIB_TYPE_UINT_NORM					0x00000009
#define ATTRIB_TYPE_SINT					0x0000000a
#define ATTRIB_TYPE_SINT_NORM					0x0000000b
#define ATTRIB_TYPE_FIXED16					0x0000000c
#define ATTRIB_TYPE_FLOAT32					0x0000000d
#define ATTRIB_TYPE_FLOAT16					0x0000000e
#define PIXEL_FORMAT_A8						0x00000001
#define PIXEL_FORMAT_L8						0x00000002
#define PIXEL_FORMAT_S8						0x00000003
#define PIXEL_FORMAT_LA88					0x00000004
#define PIXEL_FORMAT_RGB565					0x00000006
#define PIXEL_FORMAT_RGBA5551					0x00000009
#define PIXEL_FORMAT_RGBA4444					0x0000000a
#define PIXEL_FORMAT_D16_LINEAR					0x0000000b
#define PIXEL_FORMAT_D16_NONLINEAR				0x0000000c
#define PIXEL_FORMAT_RGBA8888					0x0000000d
#define PIXEL_FORMAT_RGBA_FP32					0x00000012
#define DEPTH_FUNC_NEVER					0x00000000
#define DEPTH_FUNC_LESS						0x00000001
#define DEPTH_FUNC_EQUAL					0x00000002
#define DEPTH_FUNC_LEQUAL					0x00000003
#define DEPTH_FUNC_GREATER					0x00000004
#define DEPTH_FUNC_NOTEQUAL					0x00000005
#define DEPTH_FUNC_GEQUAL					0x00000006
#define DEPTH_FUNC_ALWAYS					0x00000007
#define SYNCPT_CONDITIONAL_IMMEDIATE				0x00000000
#define SYNCPT_CONDITIONAL_OP_DONE				0x00000001
#define SYNCPT_CONDITIONAL_RD_DONE				0x00000002
#define SYNCPT_CONDITIONAL_WR_SAFE				0x00000003
#define TGR3D_INCR_SYNCPT					0x00000000
#define TGR3D_INCR_SYNCPT_SYNCPT_INDEX__MASK			0x000000ff
#define TGR3D_INCR_SYNCPT_SYNCPT_INDEX__SHIFT			0
#define TGR3D_INCR_SYNCPT_CONDITION__MASK			0x00000700
#define TGR3D_INCR_SYNCPT_CONDITION__SHIFT			8

#define TGR3D_WAIT_SYNCPT					0x00000008

#define TGR3D_WAIT_SYNCPT_BASE					0x00000009
#define TGR3D_WAIT_SYNCPT_BASE_OFFSET__MASK			0x0000ffff
#define TGR3D_WAIT_SYNCPT_BASE_OFFSET__SHIFT			0
#define TGR3D_WAIT_SYNCPT_BASE_BASE_IDX__MASK			0x00ff0000
#define TGR3D_WAIT_SYNCPT_BASE_BASE_IDX__SHIFT			16
#define TGR3D_WAIT_SYNCPT_BASE_IDX__MASK			0xff000000
#define TGR3D_WAIT_SYNCPT_BASE_IDX__SHIFT			24

#define TGR3D_LOAD_SYNCPT_BASE					0x0000000b

#define TGR3D_INCR_SYNCPT_BASE					0x0000000c
#define TGR3D_INCR_SYNCPT_BASE_OFFSET__MASK			0x00ffffff
#define TGR3D_INCR_SYNCPT_BASE_OFFSET__SHIFT			0
#define TGR3D_INCR_SYNCPT_BASE_BASE_IDX__MASK			0xff000000
#define TGR3D_INCR_SYNCPT_BASE_BASE_IDX__SHIFT			24

#define TGR3D_INDOFF2						0x0000002c

#define TGR3D_INDOFF						0x0000002d

#define TGR3D_ATTRIB_PTR(i0)				       (0x00000100 + 0x2*(i0))
#define TGR3D_ATTRIB_PTR__ESIZE					0x00000002
#define TGR3D_ATTRIB_PTR__LEN					0x00000010

#define TGR3D_ATTRIB_MODE(i0)				       (0x00000101 + 0x2*(i0))
#define TGR3D_ATTRIB_MODE__ESIZE				0x00000002
#define TGR3D_ATTRIB_MODE__LEN					0x00000010
#define TGR3D_ATTRIB_MODE_TYPE__MASK				0x0000000f
#define TGR3D_ATTRIB_MODE_TYPE__SHIFT				0
#define TGR3D_ATTRIB_MODE_SIZE__MASK				0x000000f0
#define TGR3D_ATTRIB_MODE_SIZE__SHIFT				4
#define TGR3D_ATTRIB_MODE_STRIDE__MASK				0xffffff00
#define TGR3D_ATTRIB_MODE_STRIDE__SHIFT				8

#define TGR3D_VP_ATTRIB_IN_OUT_SELECT				0x00000120
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT0			0x00000001
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT1			0x00000002
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT2			0x00000004
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT3			0x00000008
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT4			0x00000010
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT5			0x00000020
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT6			0x00000040
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT7			0x00000080
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT8			0x00000100
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT9			0x00000200
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT10			0x00000400
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT11			0x00000800
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT12			0x00001000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT13			0x00002000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT14			0x00004000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_OUT15			0x00008000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN0			0x00010000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN1			0x00020000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN2			0x00040000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN3			0x00080000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN4			0x00100000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN5			0x00200000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN6			0x00400000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN7			0x00800000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN8			0x01000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN9			0x02000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN10			0x04000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN11			0x08000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN12			0x04000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN13			0x20000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN14			0x40000000
#define TGR3D_VP_ATTRIB_IN_OUT_SELECT_IN15			0x80000000

#define TGR3D_INDEX_PTR						0x00000121

#define TGR3D_DRAW_PARAMS					0x00000122
#define TGR3D_DRAW_PARAMS_INDEX_MODE__MASK			0x30000000
#define TGR3D_DRAW_PARAMS_INDEX_MODE__SHIFT			28
#define TGR3D_DRAW_PARAMS_PROVOKING_VERTEX__MASK		0x08000000
#define TGR3D_DRAW_PARAMS_PROVOKING_VERTEX__SHIFT		27
#define TGR3D_DRAW_PARAMS_PRIMITIVE_TYPE__MASK			0x07000000
#define TGR3D_DRAW_PARAMS_PRIMITIVE_TYPE__SHIFT			24
#define TGR3D_DRAW_PARAMS_FIRST__MASK				0x00ffffff
#define TGR3D_DRAW_PARAMS_FIRST__SHIFT				0

#define TGR3D_DRAW_PRIMITIVES					0x00000123
#define TGR3D_DRAW_PRIMITIVES_INDEX_COUNT__MASK			0xfff00000
#define TGR3D_DRAW_PRIMITIVES_INDEX_COUNT__SHIFT		20
#define TGR3D_DRAW_PRIMITIVES_OFFSET__MASK			0x000fffff
#define TGR3D_DRAW_PRIMITIVES_OFFSET__SHIFT			0

#define TGR3D_VP_UPLOAD_INST_ID					0x00000205

#define TGR3D_VP_UPLOAD_INST					0x00000206

#define TGR3D_VP_UPLOAD_CONST_ID				0x00000207

#define TGR3D_VP_UPLOAD_CONST					0x00000208

#define TGR3D_LINKER_INSTRUCTION(i0)			       (0x00000300 + 0x2*(i0))
#define TGR3D_LINKER_INSTRUCTION__ESIZE				0x00000002
#define TGR3D_LINKER_INSTRUCTION__LEN				0x00000020

#define TGR3D_CULL_FACE_LINKER_SETUP				0x00000343
#define TGR3D_CULL_FACE_LINKER_SETUP_LINKER_INST_COUNT__MASK	0x000003e0
#define TGR3D_CULL_FACE_LINKER_SETUP_LINKER_INST_COUNT__SHIFT	5
#define TGR3D_CULL_FACE_LINKER_SETUP_FRONT_CW			0x00008000
#define TGR3D_CULL_FACE_LINKER_SETUP_CULL_CCW			0x00010000
#define TGR3D_CULL_FACE_LINKER_SETUP_CULL_CW			0x00020000
#define TGR3D_CULL_FACE_LINKER_SETUP_UNK_18_31__MASK		0xfffc0000
#define TGR3D_CULL_FACE_LINKER_SETUP_UNK_18_31__SHIFT		18

#define TGR3D_POLYGON_OFFSET_UNITS				0x00000344

#define TGR3D_POLYFON_OFFSET_FACTOR				0x00000345

#define TGR3D_POINT_PARAMS					0x00000346

#define TGR3D_POINT_SIZE					0x00000347

#define TGR3D_POINT_COORD_RANGE_MAX_S				0x00000348

#define TGR3D_POINT_COORD_RANGE_MAX_T				0x00000349

#define TGR3D_POINT_COORD_RANGE_MIN_S				0x0000034a

#define TGR3D_POINT_COORD_RANGE_MIN_T				0x0000034b

#define TGR3D_LINE_PARAMS					0x0000034c

#define TGR3D_HALF_LINE_WIDTH					0x0000034d

#define TGR3D_SCISSOR_HORIZ					0x00000350
#define TGR3D_SCISSOR_HORIZ_MIN__MASK				0xffff0000
#define TGR3D_SCISSOR_HORIZ_MIN__SHIFT				16
#define TGR3D_SCISSOR_HORIZ_MAX__MASK				0x0000ffff
#define TGR3D_SCISSOR_HORIZ_MAX__SHIFT				0

#define TGR3D_SCISSOR_VERT					0x00000351
#define TGR3D_SCISSOR_VERT_MIN__MASK				0xffff0000
#define TGR3D_SCISSOR_VERT_MIN__SHIFT				16
#define TGR3D_SCISSOR_VERT_MAX__MASK				0x0000ffff
#define TGR3D_SCISSOR_VERT_MAX__SHIFT				0

#define TGR3D_VIEWPORT_X_BIAS					0x00000352

#define TGR3D_VIEWPORT_Y_BIAS					0x00000353

#define TGR3D_VIEWPORT_Z_BIAS					0x00000354

#define TGR3D_VIEWPORT_X_SCALE					0x00000355

#define TGR3D_VIEWPORT_Y_SCALE					0x00000356

#define TGR3D_VIEWPORT_Z_SCALE					0x00000357

#define TGR3D_GUARDBAND_WIDTH					0x00000358

#define TGR3D_GUARDBAND_HEIGHT					0x00000359

#define TGR3D_GUARDBAND_DEPTH					0x0000035a

#define TGR3D_STENCIL_PARAMS					0x00000402
#define TGR3D_STENCIL_PARAMS_STENCIL_TEST			0x00000020

#define TGR3D_DEPTH_TEST					0x00000403
#define TGR3D_DEPTH_TEST_FUNC__MASK				0x000000f0
#define TGR3D_DEPTH_TEST_FUNC__SHIFT				4

#define TGR3D_DEPTH_RANGE_NEAR					0x00000404

#define TGR3D_DEPTH_RANGE_FAR					0x00000405

#define TGR3D_FP_PSEQ_UPLOAD_INST_BUFFER_FLUSH			0x00000500

#define TGR3D_FP_PSEQ_ENGINE_INST				0x00000520

#define TGR3D_FP_PSEQ_UPLOAD_INST_ID				0x00000540

#define TGR3D_FP_PSEQ_UPLOAD_INST				0x00000541

#define TGR3D_FP_PSEQ_DW_CFG					0x00000546
#define TGR3D_FP_PSEQ_DW_CFG_PSEQ_TO_DW_EXEC_NB__MASK		0xffffffc0
#define TGR3D_FP_PSEQ_DW_CFG_PSEQ_TO_DW_EXEC_NB__SHIFT		6

#define TGR3D_FP_UPLOAD_MFU_SCHED				0x00000601
#define TGR3D_FP_UPLOAD_MFU_SCHED_OFFSET__MASK			0x000000fc
#define TGR3D_FP_UPLOAD_MFU_SCHED_OFFSET__SHIFT			2
#define TGR3D_FP_UPLOAD_MFU_SCHED_COUNT__MASK			0x00000003
#define TGR3D_FP_UPLOAD_MFU_SCHED_COUNT__SHIFT			0

#define TGR3D_FP_UPLOAD_MFU_INST_ID				0x00000603

#define TGR3D_FP_UPLOAD_MFU_INST				0x00000604

#define TGR3D_FP_UPLOAD_TEX_INST_ID				0x00000700

#define TGR3D_FP_UPLOAD_TEX_INST				0x00000701

#define TGR3D_TEXTURE_POINTER(i0)			       (0x00000710 + 0x1*(i0))
#define TGR3D_TEXTURE_POINTER__ESIZE				0x00000001
#define TGR3D_TEXTURE_POINTER__LEN				0x00000010

#define TGR3D_TEXTURE_DESC1(i0)				       (0x00000720 + 0x2*(i0))
#define TGR3D_TEXTURE_DESC1__ESIZE				0x00000002
#define TGR3D_TEXTURE_DESC1__LEN				0x00000010
#define TGR3D_TEXTURE_DESC1_MIPFILTER				0x00800000
#define TGR3D_TEXTURE_DESC1_MAGFILTER				0x10000000
#define TGR3D_TEXTURE_DESC1_MINFILTER				0x20000000
#define TGR3D_TEXTURE_DESC1_FORMAT__MASK			0x00001f00
#define TGR3D_TEXTURE_DESC1_FORMAT__SHIFT			8
#define TGR3D_TEXTURE_DESC1_WRAP__MASK				0x0000000f
#define TGR3D_TEXTURE_DESC1_WRAP__SHIFT				0

#define TGR3D_TEXTURE_DESC2(i0)				       (0x00000721 + 0x2*(i0))
#define TGR3D_TEXTURE_DESC2__ESIZE				0x00000002
#define TGR3D_TEXTURE_DESC2__LEN				0x00000010
#define TGR3D_TEXTURE_DESC2_WIDTH__MASK				0xfff00000
#define TGR3D_TEXTURE_DESC2_WIDTH__SHIFT			20
#define TGR3D_TEXTURE_DESC2_HEIGHT__MASK			0x000fff00
#define TGR3D_TEXTURE_DESC2_HEIGHT__SHIFT			8
#define TGR3D_TEXTURE_DESC2_WIDTH_LOG2__MASK			0xf0000000
#define TGR3D_TEXTURE_DESC2_WIDTH_LOG2__SHIFT			28
#define TGR3D_TEXTURE_DESC2_HEIGHT_LOG2__MASK			0x0f000000
#define TGR3D_TEXTURE_DESC2_HEIGHT_LOG2__SHIFT			24
#define TGR3D_TEXTURE_DESC2_MAX_LOD__MASK			0x0000f000
#define TGR3D_TEXTURE_DESC2_MAX_LOD__SHIFT			12

#define TGR3D_FP_UPLOAD_ALU_SCHED				0x00000801
#define TGR3D_FP_UPLOAD_ALU_SCHED_OFFSET__MASK			0x000000fc
#define TGR3D_FP_UPLOAD_ALU_SCHED_OFFSET__SHIFT			2
#define TGR3D_FP_UPLOAD_ALU_SCHED_COUNT__MASK			0x00000003
#define TGR3D_FP_UPLOAD_ALU_SCHED_COUNT__SHIFT			0

#define TGR3D_FP_UPLOAD_ALU_INST_ID				0x00000803

#define TGR3D_FP_UPLOAD_ALU_INST				0x00000804

#define TGR3D_FP_UPLOAD_ALU_INST_COMPLEMENT			0x00000806

#define TGR3D_FP_CONST(i0)				       (0x00000820 + 0x1*(i0))
#define TGR3D_FP_CONST__ESIZE					0x00000001
#define TGR3D_FP_CONST__LEN					0x00000020

#define TGR3D_FP_UPLOAD_DW_INST_ID				0x00000900

#define TGR3D_FP_UPLOAD_DW_INST					0x00000901

#define TGR3D_RT_ENABLE						0x00000903
#define TGR3D_RT_ENABLE_0					0x00000001
#define TGR3D_RT_ENABLE_1					0x00000002
#define TGR3D_RT_ENABLE_2					0x00000004
#define TGR3D_RT_ENABLE_3					0x00000008
#define TGR3D_RT_ENABLE_4					0x00000010
#define TGR3D_RT_ENABLE_5					0x00000020
#define TGR3D_RT_ENABLE_6					0x00000040
#define TGR3D_RT_ENABLE_7					0x00000080
#define TGR3D_RT_ENABLE_8					0x00000100
#define TGR3D_RT_ENABLE_9					0x00000200
#define TGR3D_RT_ENABLE_10					0x00000400
#define TGR3D_RT_ENABLE_11					0x00000800
#define TGR3D_RT_ENABLE_12					0x00001000
#define TGR3D_RT_ENABLE_13					0x00002000
#define TGR3D_RT_ENABLE_14					0x00004000
#define TGR3D_RT_ENABLE_15					0x00008000

#define TGR3D_RT_PTR(i0)				       (0x00000e00 + 0x1*(i0))
#define TGR3D_RT_PTR__ESIZE					0x00000001
#define TGR3D_RT_PTR__LEN					0x00000010

#define TGR3D_RT_PARAMS(i0)				       (0x00000e10 + 0x1*(i0))
#define TGR3D_RT_PARAMS__ESIZE					0x00000001
#define TGR3D_RT_PARAMS__LEN					0x00000010
#define TGR3D_RT_PARAMS_DITHER_ENABLE				0x00000001
#define TGR3D_RT_PARAMS_FORMAT__MASK				0x0000007c
#define TGR3D_RT_PARAMS_FORMAT__SHIFT				2
#define TGR3D_RT_PARAMS_PITCH__MASK				0x01ffff00
#define TGR3D_RT_PARAMS_PITCH__SHIFT				8
#define TGR3D_RT_PARAMS_TILED					0x04000000

#define TGR3D_ALU_BUFFER_SIZE					0x00000e20
#define TGR3D_ALU_BUFFER_SIZE_SIZE__MASK			0x00000003
#define TGR3D_ALU_BUFFER_SIZE_SIZE__SHIFT			0
#define TGR3D_ALU_BUFFER_SIZE_SIZEx4__MASK			0xff000000
#define TGR3D_ALU_BUFFER_SIZE_SIZEx4__SHIFT			24

#define TGR3D_TRAM_SETUP					0x00000e21
#define TGR3D_TRAM_SETUP_DIV64__MASK				0x0000007f
#define TGR3D_TRAM_SETUP_DIV64__SHIFT				0
#define TGR3D_TRAM_SETUP_USED_TRAM_ROWS_NB__MASK		0x00007f00
#define TGR3D_TRAM_SETUP_USED_TRAM_ROWS_NB__SHIFT		8

#define TGR3D_FP_UPLOAD_INST_ID_COMMON				0x00000e22

#define TGR3D_DITHER						0x00000e26


#endif /* TGR_3D_XML */
