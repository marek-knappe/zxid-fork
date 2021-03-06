/* c/zx-idp-dec.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** dec-templ.c  -  XML decoder template, used in code generation
 ** Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: dec-templ.c,v 1.30 2008-10-04 23:42:14 sampo Exp $
 **
 ** 28.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 12.8.2006, added special scanning of xmlns to avoid backtracking elem recognition --Sampo
 ** 23.9.2006, added collection of WO information --Sampo
 ** 21.6.2007, improved handling of undeclared namespace prefixes --Sampo
 ** 27.10.2010, CSE refactoring, re-engineered namespace handling --Sampo
 ** 21.11.2010, re-engineered to extract most code to zx_DEC_elem, leaving just switches --Sampo
 **
 ** N.B: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-idp-data.h"
#define TPF zx_
#include "zx_ext_pt.h"



int zx_DEC_ATTR_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_created_ATTR:  x->created = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_AssertionItem(struct zx_ctx* c, struct zx_idp_AssertionItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_idp_MEDInfo_ELEM:
    if (!x->MEDInfo)
      x->MEDInfo = (struct zx_idp_MEDInfo_s*)el;
    return 1;
  case zx_sa_Assertion_ELEM:
    if (!x->Assertion)
      x->Assertion = (struct zx_sa_Assertion_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_AuthnContextRestriction(struct zx_ctx* c, struct zx_idp_AuthnContextRestriction_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa_AuthnContext_ELEM:
    if (!x->AuthnContext)
      x->AuthnContext = (struct zx_sa_AuthnContext_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_CreatedStatus(struct zx_ctx* c, struct zx_idp_CreatedStatus_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_idp_CreatedStatusItem_ELEM:
    if (!x->CreatedStatusItem)
      x->CreatedStatusItem = (struct zx_idp_CreatedStatusItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_firstUsed_ATTR:  x->firstUsed = x->gg.attr; return 1;
    case zx_ref_ATTR:  x->ref = x->gg.attr; return 1;
    case zx_used_ATTR:  x->used = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_CreatedStatusItem(struct zx_ctx* c, struct zx_idp_CreatedStatusItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_CreatedStatusResponse(struct zx_ctx* c, struct zx_idp_CreatedStatusResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_purpose_ATTR:  x->purpose = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_GetAssertion(struct zx_ctx* c, struct zx_idp_GetAssertion_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sp_AuthnRequest_ELEM:
    if (!x->AuthnRequest)
      x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_GetAssertionResponse(struct zx_ctx* c, struct zx_idp_GetAssertionResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_idp_GetAssertionResponseItem_ELEM:
    if (!x->GetAssertionResponseItem)
      x->GetAssertionResponseItem = (struct zx_idp_GetAssertionResponseItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_ref_ATTR:  x->ref = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_GetAssertionResponseItem(struct zx_ctx* c, struct zx_idp_GetAssertionResponseItem_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_idp_AssertionItem_ELEM:
    if (!x->AssertionItem)
      x->AssertionItem = (struct zx_idp_AssertionItem_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_all_ATTR:  x->all = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_GetProviderInfo(struct zx_ctx* c, struct zx_idp_GetProviderInfo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_idp_ProviderID_ELEM:
    if (!x->ProviderID)
      x->ProviderID = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_GetProviderInfoResponse(struct zx_ctx* c, struct zx_idp_GetProviderInfoResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_lu_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_lu_Status_s*)el;
    return 1;
  case zx_idp_ProviderInfo_ELEM:
    if (!x->ProviderInfo)
      x->ProviderInfo = (struct zx_idp_ProviderInfo_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_MEDInfo(struct zx_ctx* c, struct zx_idp_MEDInfo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa_NameID_ELEM:
    if (!x->NameID)
      x->NameID = (struct zx_sa_NameID_s*)el;
    return 1;
  case zx_sa_AttributeStatement_ELEM:
    if (!x->AttributeStatement)
      x->AttributeStatement = (struct zx_sa_AttributeStatement_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_name_ATTR:  x->name = x->gg.attr; return 1;
    case zx_providerID_ATTR:  x->providerID = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_ProviderInfo(struct zx_ctx* c, struct zx_idp_ProviderInfo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_idp_SubjectRestriction(struct zx_ctx* c, struct zx_idp_SubjectRestriction_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sa_Subject_ELEM:
    if (!x->Subject)
      x->Subject = (struct zx_sa_Subject_s*)el;
    return 1;

  default: return 0;
  }
}


/* EOF -- c/zx-idp-dec.c */
