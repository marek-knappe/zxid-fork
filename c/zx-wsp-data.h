/* c/zx-wsp-data.h - WARNING: This header was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006,2010 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_wsp_data_h
#define _c_zx_wsp_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- wsp_All -------------------------- */
/* refby( zx_wsp_ExactlyOne_s zx_wsp_All_s zx_wsp_Policy_s ) */
#ifndef zx_wsp_All_EXT
#define zx_wsp_All_EXT
#endif
struct zx_wsp_All_s {
  ZX_ELEM_EXT
  zx_wsp_All_EXT
  struct zx_wsp_Policy_s* Policy;	/* {1,1} nada */
  struct zx_wsp_All_s* All;	/* {0,1} nada */
  struct zx_wsp_ExactlyOne_s* ExactlyOne;	/* {0,1} nada */
  struct zx_wsp_PolicyReference_s* PolicyReference;	/* {0,1} nada */
};

#define zx_NEW_wsp_All(c, father) (struct zx_wsp_All_s*)zx_new_elem((c),(father),zx_wsp_All_ELEM)
int zx_DEC_ATTR_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x);
int zx_DEC_ELEM_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x);

#ifdef ZX_ENA_AUX
struct zx_wsp_All_s* zx_DEEP_CLONE_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, int dup_strs);
void zx_DUP_STRS_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x);
int zx_WALK_SO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_wsp_Policy_s* zx_wsp_All_GET_Policy(struct zx_wsp_All_s* x, int n);
struct zx_wsp_All_s* zx_wsp_All_GET_All(struct zx_wsp_All_s* x, int n);
struct zx_wsp_ExactlyOne_s* zx_wsp_All_GET_ExactlyOne(struct zx_wsp_All_s* x, int n);
struct zx_wsp_PolicyReference_s* zx_wsp_All_GET_PolicyReference(struct zx_wsp_All_s* x, int n);

int zx_wsp_All_NUM_Policy(struct zx_wsp_All_s* x);
int zx_wsp_All_NUM_All(struct zx_wsp_All_s* x);
int zx_wsp_All_NUM_ExactlyOne(struct zx_wsp_All_s* x);
int zx_wsp_All_NUM_PolicyReference(struct zx_wsp_All_s* x);

struct zx_wsp_Policy_s* zx_wsp_All_POP_Policy(struct zx_wsp_All_s* x);
struct zx_wsp_All_s* zx_wsp_All_POP_All(struct zx_wsp_All_s* x);
struct zx_wsp_ExactlyOne_s* zx_wsp_All_POP_ExactlyOne(struct zx_wsp_All_s* x);
struct zx_wsp_PolicyReference_s* zx_wsp_All_POP_PolicyReference(struct zx_wsp_All_s* x);

void zx_wsp_All_PUSH_Policy(struct zx_wsp_All_s* x, struct zx_wsp_Policy_s* y);
void zx_wsp_All_PUSH_All(struct zx_wsp_All_s* x, struct zx_wsp_All_s* y);
void zx_wsp_All_PUSH_ExactlyOne(struct zx_wsp_All_s* x, struct zx_wsp_ExactlyOne_s* y);
void zx_wsp_All_PUSH_PolicyReference(struct zx_wsp_All_s* x, struct zx_wsp_PolicyReference_s* y);


void zx_wsp_All_PUT_Policy(struct zx_wsp_All_s* x, int n, struct zx_wsp_Policy_s* y);
void zx_wsp_All_PUT_All(struct zx_wsp_All_s* x, int n, struct zx_wsp_All_s* y);
void zx_wsp_All_PUT_ExactlyOne(struct zx_wsp_All_s* x, int n, struct zx_wsp_ExactlyOne_s* y);
void zx_wsp_All_PUT_PolicyReference(struct zx_wsp_All_s* x, int n, struct zx_wsp_PolicyReference_s* y);

void zx_wsp_All_ADD_Policy(struct zx_wsp_All_s* x, int n, struct zx_wsp_Policy_s* z);
void zx_wsp_All_ADD_All(struct zx_wsp_All_s* x, int n, struct zx_wsp_All_s* z);
void zx_wsp_All_ADD_ExactlyOne(struct zx_wsp_All_s* x, int n, struct zx_wsp_ExactlyOne_s* z);
void zx_wsp_All_ADD_PolicyReference(struct zx_wsp_All_s* x, int n, struct zx_wsp_PolicyReference_s* z);

void zx_wsp_All_DEL_Policy(struct zx_wsp_All_s* x, int n);
void zx_wsp_All_DEL_All(struct zx_wsp_All_s* x, int n);
void zx_wsp_All_DEL_ExactlyOne(struct zx_wsp_All_s* x, int n);
void zx_wsp_All_DEL_PolicyReference(struct zx_wsp_All_s* x, int n);

void zx_wsp_All_REV_Policy(struct zx_wsp_All_s* x);
void zx_wsp_All_REV_All(struct zx_wsp_All_s* x);
void zx_wsp_All_REV_ExactlyOne(struct zx_wsp_All_s* x);
void zx_wsp_All_REV_PolicyReference(struct zx_wsp_All_s* x);

#endif
/* -------------------------- wsp_AppliesTo -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wsp_PolicyAttachment_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wsp_AppliesTo_EXT
#define zx_wsp_AppliesTo_EXT
#endif
struct zx_wsp_AppliesTo_s {
  ZX_ELEM_EXT
  zx_wsp_AppliesTo_EXT
};

#define zx_NEW_wsp_AppliesTo(c, father) (struct zx_wsp_AppliesTo_s*)zx_new_elem((c),(father),zx_wsp_AppliesTo_ELEM)
int zx_DEC_ATTR_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x);
int zx_DEC_ELEM_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x);

#ifdef ZX_ENA_AUX
struct zx_wsp_AppliesTo_s* zx_DEEP_CLONE_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, int dup_strs);
void zx_DUP_STRS_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x);
int zx_WALK_SO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wsp_ExactlyOne -------------------------- */
/* refby( zx_wsp_ExactlyOne_s zx_wsp_All_s zx_wsp_Policy_s ) */
#ifndef zx_wsp_ExactlyOne_EXT
#define zx_wsp_ExactlyOne_EXT
#endif
struct zx_wsp_ExactlyOne_s {
  ZX_ELEM_EXT
  zx_wsp_ExactlyOne_EXT
  struct zx_wsp_Policy_s* Policy;	/* {1,1} nada */
  struct zx_wsp_All_s* All;	/* {0,1} nada */
  struct zx_wsp_ExactlyOne_s* ExactlyOne;	/* {0,1} nada */
  struct zx_wsp_PolicyReference_s* PolicyReference;	/* {0,1} nada */
};

#define zx_NEW_wsp_ExactlyOne(c, father) (struct zx_wsp_ExactlyOne_s*)zx_new_elem((c),(father),zx_wsp_ExactlyOne_ELEM)
int zx_DEC_ATTR_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x);
int zx_DEC_ELEM_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x);

#ifdef ZX_ENA_AUX
struct zx_wsp_ExactlyOne_s* zx_DEEP_CLONE_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, int dup_strs);
void zx_DUP_STRS_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x);
int zx_WALK_SO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_wsp_Policy_s* zx_wsp_ExactlyOne_GET_Policy(struct zx_wsp_ExactlyOne_s* x, int n);
struct zx_wsp_All_s* zx_wsp_ExactlyOne_GET_All(struct zx_wsp_ExactlyOne_s* x, int n);
struct zx_wsp_ExactlyOne_s* zx_wsp_ExactlyOne_GET_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n);
struct zx_wsp_PolicyReference_s* zx_wsp_ExactlyOne_GET_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n);

int zx_wsp_ExactlyOne_NUM_Policy(struct zx_wsp_ExactlyOne_s* x);
int zx_wsp_ExactlyOne_NUM_All(struct zx_wsp_ExactlyOne_s* x);
int zx_wsp_ExactlyOne_NUM_ExactlyOne(struct zx_wsp_ExactlyOne_s* x);
int zx_wsp_ExactlyOne_NUM_PolicyReference(struct zx_wsp_ExactlyOne_s* x);

struct zx_wsp_Policy_s* zx_wsp_ExactlyOne_POP_Policy(struct zx_wsp_ExactlyOne_s* x);
struct zx_wsp_All_s* zx_wsp_ExactlyOne_POP_All(struct zx_wsp_ExactlyOne_s* x);
struct zx_wsp_ExactlyOne_s* zx_wsp_ExactlyOne_POP_ExactlyOne(struct zx_wsp_ExactlyOne_s* x);
struct zx_wsp_PolicyReference_s* zx_wsp_ExactlyOne_POP_PolicyReference(struct zx_wsp_ExactlyOne_s* x);

void zx_wsp_ExactlyOne_PUSH_Policy(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_Policy_s* y);
void zx_wsp_ExactlyOne_PUSH_All(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_All_s* y);
void zx_wsp_ExactlyOne_PUSH_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_ExactlyOne_s* y);
void zx_wsp_ExactlyOne_PUSH_PolicyReference(struct zx_wsp_ExactlyOne_s* x, struct zx_wsp_PolicyReference_s* y);


void zx_wsp_ExactlyOne_PUT_Policy(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_Policy_s* y);
void zx_wsp_ExactlyOne_PUT_All(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_All_s* y);
void zx_wsp_ExactlyOne_PUT_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_ExactlyOne_s* y);
void zx_wsp_ExactlyOne_PUT_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_PolicyReference_s* y);

void zx_wsp_ExactlyOne_ADD_Policy(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_Policy_s* z);
void zx_wsp_ExactlyOne_ADD_All(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_All_s* z);
void zx_wsp_ExactlyOne_ADD_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_ExactlyOne_s* z);
void zx_wsp_ExactlyOne_ADD_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n, struct zx_wsp_PolicyReference_s* z);

void zx_wsp_ExactlyOne_DEL_Policy(struct zx_wsp_ExactlyOne_s* x, int n);
void zx_wsp_ExactlyOne_DEL_All(struct zx_wsp_ExactlyOne_s* x, int n);
void zx_wsp_ExactlyOne_DEL_ExactlyOne(struct zx_wsp_ExactlyOne_s* x, int n);
void zx_wsp_ExactlyOne_DEL_PolicyReference(struct zx_wsp_ExactlyOne_s* x, int n);

void zx_wsp_ExactlyOne_REV_Policy(struct zx_wsp_ExactlyOne_s* x);
void zx_wsp_ExactlyOne_REV_All(struct zx_wsp_ExactlyOne_s* x);
void zx_wsp_ExactlyOne_REV_ExactlyOne(struct zx_wsp_ExactlyOne_s* x);
void zx_wsp_ExactlyOne_REV_PolicyReference(struct zx_wsp_ExactlyOne_s* x);

#endif
/* -------------------------- wsp_Policy -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wsp_ExactlyOne_s zx_wsp_PolicyAttachment_s zx_wsp_All_s zx_wst_RequestSecurityTokenResponse_s zx_wsp_Policy_s ) */
#ifndef zx_wsp_Policy_EXT
#define zx_wsp_Policy_EXT
#endif
struct zx_wsp_Policy_s {
  ZX_ELEM_EXT
  zx_wsp_Policy_EXT
  struct zx_wsp_Policy_s* Policy;	/* {1,1} nada */
  struct zx_wsp_All_s* All;	/* {0,1} nada */
  struct zx_wsp_ExactlyOne_s* ExactlyOne;	/* {0,1} nada */
  struct zx_wsp_PolicyReference_s* PolicyReference;	/* {0,1} nada */
  struct zx_attr_s* Name;	/* {0,1} attribute xs:anyURI */
  struct zx_attr_s* Id;	/* {0,1} attribute xs:ID */
};

#define zx_NEW_wsp_Policy(c, father) (struct zx_wsp_Policy_s*)zx_new_elem((c),(father),zx_wsp_Policy_ELEM)
int zx_DEC_ATTR_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x);
int zx_DEC_ELEM_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x);

#ifdef ZX_ENA_AUX
struct zx_wsp_Policy_s* zx_DEEP_CLONE_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, int dup_strs);
void zx_DUP_STRS_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x);
int zx_WALK_SO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_wsp_Policy_GET_Name(struct zx_wsp_Policy_s* x);
struct zx_attr_s* zx_wsp_Policy_GET_Id(struct zx_wsp_Policy_s* x);

struct zx_wsp_Policy_s* zx_wsp_Policy_GET_Policy(struct zx_wsp_Policy_s* x, int n);
struct zx_wsp_All_s* zx_wsp_Policy_GET_All(struct zx_wsp_Policy_s* x, int n);
struct zx_wsp_ExactlyOne_s* zx_wsp_Policy_GET_ExactlyOne(struct zx_wsp_Policy_s* x, int n);
struct zx_wsp_PolicyReference_s* zx_wsp_Policy_GET_PolicyReference(struct zx_wsp_Policy_s* x, int n);

int zx_wsp_Policy_NUM_Policy(struct zx_wsp_Policy_s* x);
int zx_wsp_Policy_NUM_All(struct zx_wsp_Policy_s* x);
int zx_wsp_Policy_NUM_ExactlyOne(struct zx_wsp_Policy_s* x);
int zx_wsp_Policy_NUM_PolicyReference(struct zx_wsp_Policy_s* x);

struct zx_wsp_Policy_s* zx_wsp_Policy_POP_Policy(struct zx_wsp_Policy_s* x);
struct zx_wsp_All_s* zx_wsp_Policy_POP_All(struct zx_wsp_Policy_s* x);
struct zx_wsp_ExactlyOne_s* zx_wsp_Policy_POP_ExactlyOne(struct zx_wsp_Policy_s* x);
struct zx_wsp_PolicyReference_s* zx_wsp_Policy_POP_PolicyReference(struct zx_wsp_Policy_s* x);

void zx_wsp_Policy_PUSH_Policy(struct zx_wsp_Policy_s* x, struct zx_wsp_Policy_s* y);
void zx_wsp_Policy_PUSH_All(struct zx_wsp_Policy_s* x, struct zx_wsp_All_s* y);
void zx_wsp_Policy_PUSH_ExactlyOne(struct zx_wsp_Policy_s* x, struct zx_wsp_ExactlyOne_s* y);
void zx_wsp_Policy_PUSH_PolicyReference(struct zx_wsp_Policy_s* x, struct zx_wsp_PolicyReference_s* y);

void zx_wsp_Policy_PUT_Name(struct zx_wsp_Policy_s* x, struct zx_attr_s* y);
void zx_wsp_Policy_PUT_Id(struct zx_wsp_Policy_s* x, struct zx_attr_s* y);

void zx_wsp_Policy_PUT_Policy(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_Policy_s* y);
void zx_wsp_Policy_PUT_All(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_All_s* y);
void zx_wsp_Policy_PUT_ExactlyOne(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_ExactlyOne_s* y);
void zx_wsp_Policy_PUT_PolicyReference(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_PolicyReference_s* y);

void zx_wsp_Policy_ADD_Policy(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_Policy_s* z);
void zx_wsp_Policy_ADD_All(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_All_s* z);
void zx_wsp_Policy_ADD_ExactlyOne(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_ExactlyOne_s* z);
void zx_wsp_Policy_ADD_PolicyReference(struct zx_wsp_Policy_s* x, int n, struct zx_wsp_PolicyReference_s* z);

void zx_wsp_Policy_DEL_Policy(struct zx_wsp_Policy_s* x, int n);
void zx_wsp_Policy_DEL_All(struct zx_wsp_Policy_s* x, int n);
void zx_wsp_Policy_DEL_ExactlyOne(struct zx_wsp_Policy_s* x, int n);
void zx_wsp_Policy_DEL_PolicyReference(struct zx_wsp_Policy_s* x, int n);

void zx_wsp_Policy_REV_Policy(struct zx_wsp_Policy_s* x);
void zx_wsp_Policy_REV_All(struct zx_wsp_Policy_s* x);
void zx_wsp_Policy_REV_ExactlyOne(struct zx_wsp_Policy_s* x);
void zx_wsp_Policy_REV_PolicyReference(struct zx_wsp_Policy_s* x);

#endif
/* -------------------------- wsp_PolicyAttachment -------------------------- */
/* refby( ) */
#ifndef zx_wsp_PolicyAttachment_EXT
#define zx_wsp_PolicyAttachment_EXT
#endif
struct zx_wsp_PolicyAttachment_s {
  ZX_ELEM_EXT
  zx_wsp_PolicyAttachment_EXT
  struct zx_wsp_AppliesTo_s* AppliesTo;	/* {1,1} nada */
  struct zx_wsp_Policy_s* Policy;	/* {0,1} nada */
  struct zx_wsp_PolicyReference_s* PolicyReference;	/* {0,1} nada */
};

#define zx_NEW_wsp_PolicyAttachment(c, father) (struct zx_wsp_PolicyAttachment_s*)zx_new_elem((c),(father),zx_wsp_PolicyAttachment_ELEM)
int zx_DEC_ATTR_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x);
int zx_DEC_ELEM_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x);

#ifdef ZX_ENA_AUX
struct zx_wsp_PolicyAttachment_s* zx_DEEP_CLONE_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, int dup_strs);
void zx_DUP_STRS_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x);
int zx_WALK_SO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_wsp_AppliesTo_s* zx_wsp_PolicyAttachment_GET_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n);
struct zx_wsp_Policy_s* zx_wsp_PolicyAttachment_GET_Policy(struct zx_wsp_PolicyAttachment_s* x, int n);
struct zx_wsp_PolicyReference_s* zx_wsp_PolicyAttachment_GET_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n);

int zx_wsp_PolicyAttachment_NUM_AppliesTo(struct zx_wsp_PolicyAttachment_s* x);
int zx_wsp_PolicyAttachment_NUM_Policy(struct zx_wsp_PolicyAttachment_s* x);
int zx_wsp_PolicyAttachment_NUM_PolicyReference(struct zx_wsp_PolicyAttachment_s* x);

struct zx_wsp_AppliesTo_s* zx_wsp_PolicyAttachment_POP_AppliesTo(struct zx_wsp_PolicyAttachment_s* x);
struct zx_wsp_Policy_s* zx_wsp_PolicyAttachment_POP_Policy(struct zx_wsp_PolicyAttachment_s* x);
struct zx_wsp_PolicyReference_s* zx_wsp_PolicyAttachment_POP_PolicyReference(struct zx_wsp_PolicyAttachment_s* x);

void zx_wsp_PolicyAttachment_PUSH_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, struct zx_wsp_AppliesTo_s* y);
void zx_wsp_PolicyAttachment_PUSH_Policy(struct zx_wsp_PolicyAttachment_s* x, struct zx_wsp_Policy_s* y);
void zx_wsp_PolicyAttachment_PUSH_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, struct zx_wsp_PolicyReference_s* y);


void zx_wsp_PolicyAttachment_PUT_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_AppliesTo_s* y);
void zx_wsp_PolicyAttachment_PUT_Policy(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_Policy_s* y);
void zx_wsp_PolicyAttachment_PUT_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_PolicyReference_s* y);

void zx_wsp_PolicyAttachment_ADD_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_AppliesTo_s* z);
void zx_wsp_PolicyAttachment_ADD_Policy(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_Policy_s* z);
void zx_wsp_PolicyAttachment_ADD_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n, struct zx_wsp_PolicyReference_s* z);

void zx_wsp_PolicyAttachment_DEL_AppliesTo(struct zx_wsp_PolicyAttachment_s* x, int n);
void zx_wsp_PolicyAttachment_DEL_Policy(struct zx_wsp_PolicyAttachment_s* x, int n);
void zx_wsp_PolicyAttachment_DEL_PolicyReference(struct zx_wsp_PolicyAttachment_s* x, int n);

void zx_wsp_PolicyAttachment_REV_AppliesTo(struct zx_wsp_PolicyAttachment_s* x);
void zx_wsp_PolicyAttachment_REV_Policy(struct zx_wsp_PolicyAttachment_s* x);
void zx_wsp_PolicyAttachment_REV_PolicyReference(struct zx_wsp_PolicyAttachment_s* x);

#endif
/* -------------------------- wsp_PolicyReference -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wsp_ExactlyOne_s zx_wsp_PolicyAttachment_s zx_wsp_All_s zx_wst_RequestSecurityTokenResponse_s zx_wsp_Policy_s ) */
#ifndef zx_wsp_PolicyReference_EXT
#define zx_wsp_PolicyReference_EXT
#endif
struct zx_wsp_PolicyReference_s {
  ZX_ELEM_EXT
  zx_wsp_PolicyReference_EXT
  struct zx_attr_s* Digest;	/* {0,1} attribute xs:base64Binary */
  struct zx_attr_s* DigestAlgorithm;	/* {0,1} attribute xs:anyURI */
  struct zx_attr_s* URI;	/* {1,1} attribute xs:anyURI */
};

#define zx_NEW_wsp_PolicyReference(c, father) (struct zx_wsp_PolicyReference_s*)zx_new_elem((c),(father),zx_wsp_PolicyReference_ELEM)
int zx_DEC_ATTR_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x);
int zx_DEC_ELEM_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x);

#ifdef ZX_ENA_AUX
struct zx_wsp_PolicyReference_s* zx_DEEP_CLONE_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, int dup_strs);
void zx_DUP_STRS_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x);
int zx_WALK_SO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_wsp_PolicyReference_GET_Digest(struct zx_wsp_PolicyReference_s* x);
struct zx_attr_s* zx_wsp_PolicyReference_GET_DigestAlgorithm(struct zx_wsp_PolicyReference_s* x);
struct zx_attr_s* zx_wsp_PolicyReference_GET_URI(struct zx_wsp_PolicyReference_s* x);





void zx_wsp_PolicyReference_PUT_Digest(struct zx_wsp_PolicyReference_s* x, struct zx_attr_s* y);
void zx_wsp_PolicyReference_PUT_DigestAlgorithm(struct zx_wsp_PolicyReference_s* x, struct zx_attr_s* y);
void zx_wsp_PolicyReference_PUT_URI(struct zx_wsp_PolicyReference_s* x, struct zx_attr_s* y);





#endif

#endif
