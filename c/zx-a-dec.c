/* c/zx-a-dec.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
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
#include "c/zx-a-data.h"
#define TPF zx_
#include "zx_ext_pt.h"



int zx_DEC_ATTR_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_Action(struct zx_ctx* c, struct zx_a_Action_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_Address(struct zx_ctx* c, struct zx_a_Address_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_notOnOrAfter_ATTR:  x->notOnOrAfter = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_EndpointReference(struct zx_ctx* c, struct zx_a_EndpointReference_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Address_ELEM:
    if (!x->Address)
      x->Address = (struct zx_a_Address_s*)el;
    return 1;
  case zx_a_ReferenceParameters_ELEM:
    if (!x->ReferenceParameters)
      x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)el;
    return 1;
  case zx_a_Metadata_ELEM:
    if (!x->Metadata)
      x->Metadata = (struct zx_a_Metadata_s*)el;
    return 1;
  case zx_tas3_AltAddress_ELEM:
    if (!x->AltAddress)
      x->AltAddress = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_notOnOrAfter_ATTR:  x->notOnOrAfter = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_FaultTo(struct zx_ctx* c, struct zx_a_FaultTo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Address_ELEM:
    if (!x->Address)
      x->Address = (struct zx_a_Address_s*)el;
    return 1;
  case zx_a_ReferenceParameters_ELEM:
    if (!x->ReferenceParameters)
      x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)el;
    return 1;
  case zx_a_Metadata_ELEM:
    if (!x->Metadata)
      x->Metadata = (struct zx_a_Metadata_s*)el;
    return 1;
  case zx_tas3_AltAddress_ELEM:
    if (!x->AltAddress)
      x->AltAddress = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_From(struct zx_ctx* c, struct zx_a_From_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_notOnOrAfter_ATTR:  x->notOnOrAfter = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_From(struct zx_ctx* c, struct zx_a_From_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Address_ELEM:
    if (!x->Address)
      x->Address = (struct zx_a_Address_s*)el;
    return 1;
  case zx_a_ReferenceParameters_ELEM:
    if (!x->ReferenceParameters)
      x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)el;
    return 1;
  case zx_a_Metadata_ELEM:
    if (!x->Metadata)
      x->Metadata = (struct zx_a_Metadata_s*)el;
    return 1;
  case zx_tas3_AltAddress_ELEM:
    if (!x->AltAddress)
      x->AltAddress = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_MessageID(struct zx_ctx* c, struct zx_a_MessageID_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_rankKey_ATTR:  x->rankKey = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_Metadata(struct zx_ctx* c, struct zx_a_Metadata_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_sbf_Framework_ELEM:
    if (!x->Framework)
      x->Framework = (struct zx_sbf_Framework_s*)el;
    return 1;
  case zx_di_Abstract_ELEM:
    if (!x->Abstract)
      x->Abstract = el;
    return 1;
  case zx_di_ProviderID_ELEM:
    if (!x->ProviderID)
      x->ProviderID = el;
    return 1;
  case zx_di_ServiceType_ELEM:
    if (!x->ServiceType)
      x->ServiceType = el;
    return 1;
  case zx_di_SecurityContext_ELEM:
    if (!x->SecurityContext)
      x->SecurityContext = (struct zx_di_SecurityContext_s*)el;
    return 1;
  case zx_tas3_Trust_ELEM:
    if (!x->Trust)
      x->Trust = (struct zx_tas3_Trust_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_ProblemAction(struct zx_ctx* c, struct zx_a_ProblemAction_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Action_ELEM:
    if (!x->Action)
      x->Action = (struct zx_a_Action_s*)el;
    return 1;
  case zx_a_SoapAction_ELEM:
    if (!x->SoapAction)
      x->SoapAction = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_ProblemHeader(struct zx_ctx* c, struct zx_a_ProblemHeader_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_ProblemHeaderQName(struct zx_ctx* c, struct zx_a_ProblemHeaderQName_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_ProblemURI(struct zx_ctx* c, struct zx_a_ProblemURI_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_ReferenceParameters(struct zx_ctx* c, struct zx_a_ReferenceParameters_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_b_TargetIdentity_ELEM:
    if (!x->TargetIdentity)
      x->TargetIdentity = (struct zx_b_TargetIdentity_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_RelationshipType_ATTR:  x->RelationshipType = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_RelatesTo(struct zx_ctx* c, struct zx_a_RelatesTo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_notOnOrAfter_ATTR:  x->notOnOrAfter = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_ReplyTo(struct zx_ctx* c, struct zx_a_ReplyTo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_a_Address_ELEM:
    if (!x->Address)
      x->Address = (struct zx_a_Address_s*)el;
    return 1;
  case zx_a_ReferenceParameters_ELEM:
    if (!x->ReferenceParameters)
      x->ReferenceParameters = (struct zx_a_ReferenceParameters_s*)el;
    return 1;
  case zx_a_Metadata_ELEM:
    if (!x->Metadata)
      x->Metadata = (struct zx_a_Metadata_s*)el;
    return 1;
  case zx_tas3_AltAddress_ELEM:
    if (!x->AltAddress)
      x->AltAddress = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_RetryAfter(struct zx_ctx* c, struct zx_a_RetryAfter_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_a_To(struct zx_ctx* c, struct zx_a_To_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_ID_ATTR:  x->ID = x->gg.attr; return 1;
    case zx_id_ATTR:  x->id = x->gg.attr; return 1;
    case zx_Id_ATTR|zx_wsu_NS:  x->Id = x->gg.attr; return 1;
    case zx_actor_ATTR|zx_e_NS:  x->actor = x->gg.attr; return 1;
    case zx_mustUnderstand_ATTR|zx_e_NS:  x->mustUnderstand = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_a_To(struct zx_ctx* c, struct zx_a_To_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}


/* EOF -- c/zx-a-dec.c */
