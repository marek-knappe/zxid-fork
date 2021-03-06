/* c/zx-as-data.h - WARNING: This header was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006,2010 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_as_data_h
#define _c_zx_as_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- as_Extensions -------------------------- */
/* refby( zx_as_SASLRequest_s ) */
#ifndef zx_as_Extensions_EXT
#define zx_as_Extensions_EXT
#endif
struct zx_as_Extensions_s {
  ZX_ELEM_EXT
  zx_as_Extensions_EXT
};

#define zx_NEW_as_Extensions(c, father) (struct zx_as_Extensions_s*)zx_new_elem((c),(father),zx_as_Extensions_ELEM)
int zx_DEC_ATTR_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x);
int zx_DEC_ELEM_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x);

#ifdef ZX_ENA_AUX
struct zx_as_Extensions_s* zx_DEEP_CLONE_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, int dup_strs);
void zx_DUP_STRS_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x);
int zx_WALK_SO_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- as_Parameter -------------------------- */
/* refby( zx_as_Transform_s ) */
#ifndef zx_as_Parameter_EXT
#define zx_as_Parameter_EXT
#endif
struct zx_as_Parameter_s {
  ZX_ELEM_EXT
  zx_as_Parameter_EXT
  struct zx_attr_s* name;	/* {1,1} attribute xs:ID */
};

#define zx_NEW_as_Parameter(c, father) (struct zx_as_Parameter_s*)zx_new_elem((c),(father),zx_as_Parameter_ELEM)
int zx_DEC_ATTR_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x);
int zx_DEC_ELEM_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x);

#ifdef ZX_ENA_AUX
struct zx_as_Parameter_s* zx_DEEP_CLONE_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, int dup_strs);
void zx_DUP_STRS_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x);
int zx_WALK_SO_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_as_Parameter_GET_name(struct zx_as_Parameter_s* x);





void zx_as_Parameter_PUT_name(struct zx_as_Parameter_s* x, struct zx_attr_s* y);





#endif
/* -------------------------- as_PasswordTransforms -------------------------- */
/* refby( zx_as_SASLResponse_s ) */
#ifndef zx_as_PasswordTransforms_EXT
#define zx_as_PasswordTransforms_EXT
#endif
struct zx_as_PasswordTransforms_s {
  ZX_ELEM_EXT
  zx_as_PasswordTransforms_EXT
  struct zx_as_Transform_s* Transform;	/* {1,-1}  */
};

#define zx_NEW_as_PasswordTransforms(c, father) (struct zx_as_PasswordTransforms_s*)zx_new_elem((c),(father),zx_as_PasswordTransforms_ELEM)
int zx_DEC_ATTR_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x);
int zx_DEC_ELEM_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x);

#ifdef ZX_ENA_AUX
struct zx_as_PasswordTransforms_s* zx_DEEP_CLONE_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, int dup_strs);
void zx_DUP_STRS_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x);
int zx_WALK_SO_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_as_Transform_s* zx_as_PasswordTransforms_GET_Transform(struct zx_as_PasswordTransforms_s* x, int n);

int zx_as_PasswordTransforms_NUM_Transform(struct zx_as_PasswordTransforms_s* x);

struct zx_as_Transform_s* zx_as_PasswordTransforms_POP_Transform(struct zx_as_PasswordTransforms_s* x);

void zx_as_PasswordTransforms_PUSH_Transform(struct zx_as_PasswordTransforms_s* x, struct zx_as_Transform_s* y);


void zx_as_PasswordTransforms_PUT_Transform(struct zx_as_PasswordTransforms_s* x, int n, struct zx_as_Transform_s* y);

void zx_as_PasswordTransforms_ADD_Transform(struct zx_as_PasswordTransforms_s* x, int n, struct zx_as_Transform_s* z);

void zx_as_PasswordTransforms_DEL_Transform(struct zx_as_PasswordTransforms_s* x, int n);

void zx_as_PasswordTransforms_REV_Transform(struct zx_as_PasswordTransforms_s* x);

#endif
/* -------------------------- as_SASLRequest -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_as_SASLRequest_EXT
#define zx_as_SASLRequest_EXT
#endif
struct zx_as_SASLRequest_s {
  ZX_ELEM_EXT
  zx_as_SASLRequest_EXT
  struct zx_elem_s* Data;	/* {0,1} xs:base64Binary */
  struct zx_sp_RequestedAuthnContext_s* RequestedAuthnContext;	/* {0,1} nada */
  struct zx_as_Extensions_s* Extensions;	/* {0,1}  */
  struct zx_attr_s* advisoryAuthnID;	/* {0,1} attribute xs:string */
  struct zx_attr_s* authzID;	/* {0,1} attribute xs:string */
  struct zx_attr_s* mechanism;	/* {1,1} attribute principalchosen */
};

#define zx_NEW_as_SASLRequest(c, father) (struct zx_as_SASLRequest_s*)zx_new_elem((c),(father),zx_as_SASLRequest_ELEM)
int zx_DEC_ATTR_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x);
int zx_DEC_ELEM_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x);

#ifdef ZX_ENA_AUX
struct zx_as_SASLRequest_s* zx_DEEP_CLONE_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, int dup_strs);
void zx_DUP_STRS_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x);
int zx_WALK_SO_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_as_SASLRequest_GET_advisoryAuthnID(struct zx_as_SASLRequest_s* x);
struct zx_attr_s* zx_as_SASLRequest_GET_authzID(struct zx_as_SASLRequest_s* x);
struct zx_attr_s* zx_as_SASLRequest_GET_mechanism(struct zx_as_SASLRequest_s* x);

struct zx_elem_s* zx_as_SASLRequest_GET_Data(struct zx_as_SASLRequest_s* x, int n);
struct zx_sp_RequestedAuthnContext_s* zx_as_SASLRequest_GET_RequestedAuthnContext(struct zx_as_SASLRequest_s* x, int n);
struct zx_as_Extensions_s* zx_as_SASLRequest_GET_Extensions(struct zx_as_SASLRequest_s* x, int n);

int zx_as_SASLRequest_NUM_Data(struct zx_as_SASLRequest_s* x);
int zx_as_SASLRequest_NUM_RequestedAuthnContext(struct zx_as_SASLRequest_s* x);
int zx_as_SASLRequest_NUM_Extensions(struct zx_as_SASLRequest_s* x);

struct zx_elem_s* zx_as_SASLRequest_POP_Data(struct zx_as_SASLRequest_s* x);
struct zx_sp_RequestedAuthnContext_s* zx_as_SASLRequest_POP_RequestedAuthnContext(struct zx_as_SASLRequest_s* x);
struct zx_as_Extensions_s* zx_as_SASLRequest_POP_Extensions(struct zx_as_SASLRequest_s* x);

void zx_as_SASLRequest_PUSH_Data(struct zx_as_SASLRequest_s* x, struct zx_elem_s* y);
void zx_as_SASLRequest_PUSH_RequestedAuthnContext(struct zx_as_SASLRequest_s* x, struct zx_sp_RequestedAuthnContext_s* y);
void zx_as_SASLRequest_PUSH_Extensions(struct zx_as_SASLRequest_s* x, struct zx_as_Extensions_s* y);

void zx_as_SASLRequest_PUT_advisoryAuthnID(struct zx_as_SASLRequest_s* x, struct zx_attr_s* y);
void zx_as_SASLRequest_PUT_authzID(struct zx_as_SASLRequest_s* x, struct zx_attr_s* y);
void zx_as_SASLRequest_PUT_mechanism(struct zx_as_SASLRequest_s* x, struct zx_attr_s* y);

void zx_as_SASLRequest_PUT_Data(struct zx_as_SASLRequest_s* x, int n, struct zx_elem_s* y);
void zx_as_SASLRequest_PUT_RequestedAuthnContext(struct zx_as_SASLRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* y);
void zx_as_SASLRequest_PUT_Extensions(struct zx_as_SASLRequest_s* x, int n, struct zx_as_Extensions_s* y);

void zx_as_SASLRequest_ADD_Data(struct zx_as_SASLRequest_s* x, int n, struct zx_elem_s* z);
void zx_as_SASLRequest_ADD_RequestedAuthnContext(struct zx_as_SASLRequest_s* x, int n, struct zx_sp_RequestedAuthnContext_s* z);
void zx_as_SASLRequest_ADD_Extensions(struct zx_as_SASLRequest_s* x, int n, struct zx_as_Extensions_s* z);

void zx_as_SASLRequest_DEL_Data(struct zx_as_SASLRequest_s* x,int n);
void zx_as_SASLRequest_DEL_RequestedAuthnContext(struct zx_as_SASLRequest_s* x, int n);
void zx_as_SASLRequest_DEL_Extensions(struct zx_as_SASLRequest_s* x, int n);

void zx_as_SASLRequest_REV_Data(struct zx_as_SASLRequest_s* x);
void zx_as_SASLRequest_REV_RequestedAuthnContext(struct zx_as_SASLRequest_s* x);
void zx_as_SASLRequest_REV_Extensions(struct zx_as_SASLRequest_s* x);

#endif
/* -------------------------- as_SASLResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_as_SASLResponse_EXT
#define zx_as_SASLResponse_EXT
#endif
struct zx_as_SASLResponse_s {
  ZX_ELEM_EXT
  zx_as_SASLResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_as_PasswordTransforms_s* PasswordTransforms;	/* {0,1}  */
  struct zx_elem_s* Data;	/* {0,1} xs:base64Binary */
  struct zx_a_EndpointReference_s* EndpointReference;	/* {0,-1} nada */
  struct zx_attr_s* serverMechanism;	/* {0,1} attribute xs:string */
};

#define zx_NEW_as_SASLResponse(c, father) (struct zx_as_SASLResponse_s*)zx_new_elem((c),(father),zx_as_SASLResponse_ELEM)
int zx_DEC_ATTR_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x);
int zx_DEC_ELEM_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x);

#ifdef ZX_ENA_AUX
struct zx_as_SASLResponse_s* zx_DEEP_CLONE_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, int dup_strs);
void zx_DUP_STRS_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x);
int zx_WALK_SO_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_as_SASLResponse_GET_serverMechanism(struct zx_as_SASLResponse_s* x);

struct zx_lu_Status_s* zx_as_SASLResponse_GET_Status(struct zx_as_SASLResponse_s* x, int n);
struct zx_as_PasswordTransforms_s* zx_as_SASLResponse_GET_PasswordTransforms(struct zx_as_SASLResponse_s* x, int n);
struct zx_elem_s* zx_as_SASLResponse_GET_Data(struct zx_as_SASLResponse_s* x, int n);
struct zx_a_EndpointReference_s* zx_as_SASLResponse_GET_EndpointReference(struct zx_as_SASLResponse_s* x, int n);

int zx_as_SASLResponse_NUM_Status(struct zx_as_SASLResponse_s* x);
int zx_as_SASLResponse_NUM_PasswordTransforms(struct zx_as_SASLResponse_s* x);
int zx_as_SASLResponse_NUM_Data(struct zx_as_SASLResponse_s* x);
int zx_as_SASLResponse_NUM_EndpointReference(struct zx_as_SASLResponse_s* x);

struct zx_lu_Status_s* zx_as_SASLResponse_POP_Status(struct zx_as_SASLResponse_s* x);
struct zx_as_PasswordTransforms_s* zx_as_SASLResponse_POP_PasswordTransforms(struct zx_as_SASLResponse_s* x);
struct zx_elem_s* zx_as_SASLResponse_POP_Data(struct zx_as_SASLResponse_s* x);
struct zx_a_EndpointReference_s* zx_as_SASLResponse_POP_EndpointReference(struct zx_as_SASLResponse_s* x);

void zx_as_SASLResponse_PUSH_Status(struct zx_as_SASLResponse_s* x, struct zx_lu_Status_s* y);
void zx_as_SASLResponse_PUSH_PasswordTransforms(struct zx_as_SASLResponse_s* x, struct zx_as_PasswordTransforms_s* y);
void zx_as_SASLResponse_PUSH_Data(struct zx_as_SASLResponse_s* x, struct zx_elem_s* y);
void zx_as_SASLResponse_PUSH_EndpointReference(struct zx_as_SASLResponse_s* x, struct zx_a_EndpointReference_s* y);

void zx_as_SASLResponse_PUT_serverMechanism(struct zx_as_SASLResponse_s* x, struct zx_attr_s* y);

void zx_as_SASLResponse_PUT_Status(struct zx_as_SASLResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_as_SASLResponse_PUT_PasswordTransforms(struct zx_as_SASLResponse_s* x, int n, struct zx_as_PasswordTransforms_s* y);
void zx_as_SASLResponse_PUT_Data(struct zx_as_SASLResponse_s* x, int n, struct zx_elem_s* y);
void zx_as_SASLResponse_PUT_EndpointReference(struct zx_as_SASLResponse_s* x, int n, struct zx_a_EndpointReference_s* y);

void zx_as_SASLResponse_ADD_Status(struct zx_as_SASLResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_as_SASLResponse_ADD_PasswordTransforms(struct zx_as_SASLResponse_s* x, int n, struct zx_as_PasswordTransforms_s* z);
void zx_as_SASLResponse_ADD_Data(struct zx_as_SASLResponse_s* x, int n, struct zx_elem_s* z);
void zx_as_SASLResponse_ADD_EndpointReference(struct zx_as_SASLResponse_s* x, int n, struct zx_a_EndpointReference_s* z);

void zx_as_SASLResponse_DEL_Status(struct zx_as_SASLResponse_s* x, int n);
void zx_as_SASLResponse_DEL_PasswordTransforms(struct zx_as_SASLResponse_s* x, int n);
void zx_as_SASLResponse_DEL_Data(struct zx_as_SASLResponse_s* x,int n);
void zx_as_SASLResponse_DEL_EndpointReference(struct zx_as_SASLResponse_s* x, int n);

void zx_as_SASLResponse_REV_Status(struct zx_as_SASLResponse_s* x);
void zx_as_SASLResponse_REV_PasswordTransforms(struct zx_as_SASLResponse_s* x);
void zx_as_SASLResponse_REV_Data(struct zx_as_SASLResponse_s* x);
void zx_as_SASLResponse_REV_EndpointReference(struct zx_as_SASLResponse_s* x);

#endif
/* -------------------------- as_Transform -------------------------- */
/* refby( zx_as_PasswordTransforms_s ) */
#ifndef zx_as_Transform_EXT
#define zx_as_Transform_EXT
#endif
struct zx_as_Transform_s {
  ZX_ELEM_EXT
  zx_as_Transform_EXT
  struct zx_as_Parameter_s* Parameter;	/* {0,-1}  */
  struct zx_attr_s* name;	/* {1,1} attribute xs:ID */
};

#define zx_NEW_as_Transform(c, father) (struct zx_as_Transform_s*)zx_new_elem((c),(father),zx_as_Transform_ELEM)
int zx_DEC_ATTR_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x);
int zx_DEC_ELEM_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x);

#ifdef ZX_ENA_AUX
struct zx_as_Transform_s* zx_DEEP_CLONE_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, int dup_strs);
void zx_DUP_STRS_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x);
int zx_WALK_SO_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_as_Transform_GET_name(struct zx_as_Transform_s* x);

struct zx_as_Parameter_s* zx_as_Transform_GET_Parameter(struct zx_as_Transform_s* x, int n);

int zx_as_Transform_NUM_Parameter(struct zx_as_Transform_s* x);

struct zx_as_Parameter_s* zx_as_Transform_POP_Parameter(struct zx_as_Transform_s* x);

void zx_as_Transform_PUSH_Parameter(struct zx_as_Transform_s* x, struct zx_as_Parameter_s* y);

void zx_as_Transform_PUT_name(struct zx_as_Transform_s* x, struct zx_attr_s* y);

void zx_as_Transform_PUT_Parameter(struct zx_as_Transform_s* x, int n, struct zx_as_Parameter_s* y);

void zx_as_Transform_ADD_Parameter(struct zx_as_Transform_s* x, int n, struct zx_as_Parameter_s* z);

void zx_as_Transform_DEL_Parameter(struct zx_as_Transform_s* x, int n);

void zx_as_Transform_REV_Parameter(struct zx_as_Transform_s* x);

#endif

#endif
