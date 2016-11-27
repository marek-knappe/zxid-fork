/* c/zx-wst-dec.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
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
#include "c/zx-wst-data.h"
#define TPF zx_
#include "zx_ext_pt.h"



int zx_DEC_ATTR_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_CombinedHash_ELEM:
    if (!x->CombinedHash)
      x->CombinedHash = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_EncodingType_ATTR:  x->EncodingType = x->gg.attr; return 1;
    case zx_ValueType_ATTR:  x->ValueType = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_Type_ATTR:  x->Type = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_Dialect_ATTR:  x->Dialect = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_RequestSecurityTokenResponse_ELEM:
    if (!x->RequestSecurityTokenResponse)
      x->RequestSecurityTokenResponse = (struct zx_wst_RequestSecurityTokenResponse_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x)
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

int zx_DEC_ELEM_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x)
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




int zx_DEC_ATTR_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wsu_Created_ELEM:
    if (!x->Created)
      x->Created = (struct zx_wsu_Created_s*)el;
    return 1;
  case zx_wsu_Expires_ELEM:
    if (!x->Expires)
      x->Expires = (struct zx_wsu_Expires_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_Primary_ELEM:
    if (!x->Primary)
      x->Primary = (struct zx_wst_Primary_s*)el;
    return 1;
  case zx_wst_Participant_ELEM:
    if (!x->Participant)
      x->Participant = (struct zx_wst_Participant_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_Allow_ATTR:  x->Allow = x->gg.attr; return 1;
    case zx_OK_ATTR:  x->OK = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_Context_ATTR:  x->Context = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_TokenType_ELEM:
    if (!x->TokenType)
      x->TokenType = el;
    return 1;
  case zx_wst_RequestType_ELEM:
    if (!x->RequestType)
      x->RequestType = el;
    return 1;
  case zx_wsp_AppliesTo_ELEM:
    if (!x->AppliesTo)
      x->AppliesTo = (struct zx_wsp_AppliesTo_s*)el;
    return 1;
  case zx_wst_Claims_ELEM:
    if (!x->Claims)
      x->Claims = (struct zx_wst_Claims_s*)el;
    return 1;
  case zx_wst_Entropy_ELEM:
    if (!x->Entropy)
      x->Entropy = (struct zx_wst_Entropy_s*)el;
    return 1;
  case zx_wst_Lifetime_ELEM:
    if (!x->Lifetime)
      x->Lifetime = (struct zx_wst_Lifetime_s*)el;
    return 1;
  case zx_wst_AllowPostdating_ELEM:
    if (!x->AllowPostdating)
      x->AllowPostdating = el;
    return 1;
  case zx_wst_Renewing_ELEM:
    if (!x->Renewing)
      x->Renewing = (struct zx_wst_Renewing_s*)el;
    return 1;
  case zx_wst_OnBehalfOf_ELEM:
    if (!x->OnBehalfOf)
      x->OnBehalfOf = (struct zx_wst_OnBehalfOf_s*)el;
    return 1;
  case zx_wst_Issuer_ELEM:
    if (!x->Issuer)
      x->Issuer = (struct zx_wst_Issuer_s*)el;
    return 1;
  case zx_wst_AuthenticationType_ELEM:
    if (!x->AuthenticationType)
      x->AuthenticationType = el;
    return 1;
  case zx_wst_KeyType_ELEM:
    if (!x->KeyType)
      x->KeyType = el;
    return 1;
  case zx_wst_KeySize_ELEM:
    if (!x->KeySize)
      x->KeySize = el;
    return 1;
  case zx_wst_SignatureAlgorithm_ELEM:
    if (!x->SignatureAlgorithm)
      x->SignatureAlgorithm = el;
    return 1;
  case zx_wst_Encryption_ELEM:
    if (!x->Encryption)
      x->Encryption = (struct zx_wst_Encryption_s*)el;
    return 1;
  case zx_wst_EncryptionAlgorithm_ELEM:
    if (!x->EncryptionAlgorithm)
      x->EncryptionAlgorithm = el;
    return 1;
  case zx_wst_CanonicalizationAlgorithm_ELEM:
    if (!x->CanonicalizationAlgorithm)
      x->CanonicalizationAlgorithm = el;
    return 1;
  case zx_wst_ProofEncryption_ELEM:
    if (!x->ProofEncryption)
      x->ProofEncryption = (struct zx_wst_ProofEncryption_s*)el;
    return 1;
  case zx_wst_UseKey_ELEM:
    if (!x->UseKey)
      x->UseKey = (struct zx_wst_UseKey_s*)el;
    return 1;
  case zx_wst_SignWith_ELEM:
    if (!x->SignWith)
      x->SignWith = el;
    return 1;
  case zx_wst_EncryptWith_ELEM:
    if (!x->EncryptWith)
      x->EncryptWith = el;
    return 1;
  case zx_wst_DelegateTo_ELEM:
    if (!x->DelegateTo)
      x->DelegateTo = (struct zx_wst_DelegateTo_s*)el;
    return 1;
  case zx_wst_Forwardable_ELEM:
    if (!x->Forwardable)
      x->Forwardable = el;
    return 1;
  case zx_wst_Delegatable_ELEM:
    if (!x->Delegatable)
      x->Delegatable = el;
    return 1;
  case zx_wsp_Policy_ELEM:
    if (!x->Policy)
      x->Policy = (struct zx_wsp_Policy_s*)el;
    return 1;
  case zx_wsp_PolicyReference_ELEM:
    if (!x->PolicyReference)
      x->PolicyReference = (struct zx_wsp_PolicyReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_RequestSecurityToken_ELEM:
    if (!x->RequestSecurityToken)
      x->RequestSecurityToken = (struct zx_wst_RequestSecurityToken_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_Context_ATTR:  x->Context = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_TokenType_ELEM:
    if (!x->TokenType)
      x->TokenType = el;
    return 1;
  case zx_wst_RequestType_ELEM:
    if (!x->RequestType)
      x->RequestType = el;
    return 1;
  case zx_wst_RequestedSecurityToken_ELEM:
    if (!x->RequestedSecurityToken)
      x->RequestedSecurityToken = (struct zx_wst_RequestedSecurityToken_s*)el;
    return 1;
  case zx_wsp_AppliesTo_ELEM:
    if (!x->AppliesTo)
      x->AppliesTo = (struct zx_wsp_AppliesTo_s*)el;
    return 1;
  case zx_wst_RequestedAttachedReference_ELEM:
    if (!x->RequestedAttachedReference)
      x->RequestedAttachedReference = (struct zx_wst_RequestedAttachedReference_s*)el;
    return 1;
  case zx_wst_RequestedUnattachedReference_ELEM:
    if (!x->RequestedUnattachedReference)
      x->RequestedUnattachedReference = (struct zx_wst_RequestedUnattachedReference_s*)el;
    return 1;
  case zx_wst_RequestedProofToken_ELEM:
    if (!x->RequestedProofToken)
      x->RequestedProofToken = (struct zx_wst_RequestedProofToken_s*)el;
    return 1;
  case zx_wst_Entropy_ELEM:
    if (!x->Entropy)
      x->Entropy = (struct zx_wst_Entropy_s*)el;
    return 1;
  case zx_wst_Lifetime_ELEM:
    if (!x->Lifetime)
      x->Lifetime = (struct zx_wst_Lifetime_s*)el;
    return 1;
  case zx_wst_Status_ELEM:
    if (!x->Status)
      x->Status = (struct zx_wst_Status_s*)el;
    return 1;
  case zx_wst_AllowPostdating_ELEM:
    if (!x->AllowPostdating)
      x->AllowPostdating = el;
    return 1;
  case zx_wst_Renewing_ELEM:
    if (!x->Renewing)
      x->Renewing = (struct zx_wst_Renewing_s*)el;
    return 1;
  case zx_wst_OnBehalfOf_ELEM:
    if (!x->OnBehalfOf)
      x->OnBehalfOf = (struct zx_wst_OnBehalfOf_s*)el;
    return 1;
  case zx_wst_Issuer_ELEM:
    if (!x->Issuer)
      x->Issuer = (struct zx_wst_Issuer_s*)el;
    return 1;
  case zx_wst_AuthenticationType_ELEM:
    if (!x->AuthenticationType)
      x->AuthenticationType = el;
    return 1;
  case zx_wst_Authenticator_ELEM:
    if (!x->Authenticator)
      x->Authenticator = (struct zx_wst_Authenticator_s*)el;
    return 1;
  case zx_wst_KeyType_ELEM:
    if (!x->KeyType)
      x->KeyType = el;
    return 1;
  case zx_wst_KeySize_ELEM:
    if (!x->KeySize)
      x->KeySize = el;
    return 1;
  case zx_wst_SignatureAlgorithm_ELEM:
    if (!x->SignatureAlgorithm)
      x->SignatureAlgorithm = el;
    return 1;
  case zx_wst_Encryption_ELEM:
    if (!x->Encryption)
      x->Encryption = (struct zx_wst_Encryption_s*)el;
    return 1;
  case zx_wst_EncryptionAlgorithm_ELEM:
    if (!x->EncryptionAlgorithm)
      x->EncryptionAlgorithm = el;
    return 1;
  case zx_wst_CanonicalizationAlgorithm_ELEM:
    if (!x->CanonicalizationAlgorithm)
      x->CanonicalizationAlgorithm = el;
    return 1;
  case zx_wst_ProofEncryption_ELEM:
    if (!x->ProofEncryption)
      x->ProofEncryption = (struct zx_wst_ProofEncryption_s*)el;
    return 1;
  case zx_wst_UseKey_ELEM:
    if (!x->UseKey)
      x->UseKey = (struct zx_wst_UseKey_s*)el;
    return 1;
  case zx_wst_SignWith_ELEM:
    if (!x->SignWith)
      x->SignWith = el;
    return 1;
  case zx_wst_EncryptWith_ELEM:
    if (!x->EncryptWith)
      x->EncryptWith = el;
    return 1;
  case zx_wst_DelegateTo_ELEM:
    if (!x->DelegateTo)
      x->DelegateTo = (struct zx_wst_DelegateTo_s*)el;
    return 1;
  case zx_wst_Forwardable_ELEM:
    if (!x->Forwardable)
      x->Forwardable = el;
    return 1;
  case zx_wst_Delegatable_ELEM:
    if (!x->Delegatable)
      x->Delegatable = el;
    return 1;
  case zx_wsp_Policy_ELEM:
    if (!x->Policy)
      x->Policy = (struct zx_wsp_Policy_s*)el;
    return 1;
  case zx_wsp_PolicyReference_ELEM:
    if (!x->PolicyReference)
      x->PolicyReference = (struct zx_wsp_PolicyReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_RequestSecurityTokenResponse_ELEM:
    if (!x->RequestSecurityTokenResponse)
      x->RequestSecurityTokenResponse = (struct zx_wst_RequestSecurityTokenResponse_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wsse_SecurityTokenReference_ELEM:
    if (!x->SecurityTokenReference)
      x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wsse_SecurityTokenReference_ELEM:
    if (!x->SecurityTokenReference)
      x->SecurityTokenReference = (struct zx_wsse_SecurityTokenReference_s*)el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_Challenge_ELEM:
    if (!x->Challenge)
      x->Challenge = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_Challenge_ELEM:
    if (!x->Challenge)
      x->Challenge = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {
  case zx_wst_Code_ELEM:
    if (!x->Code)
      x->Code = el;
    return 1;
  case zx_wst_Reason_ELEM:
    if (!x->Reason)
      x->Reason = el;
    return 1;

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x)
{
  switch (x->gg.attr->g.tok) {
    case zx_Sig_ATTR:  x->Sig = x->gg.attr; return 1;

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}




int zx_DEC_ATTR_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x)
{
  switch (x->gg.attr->g.tok) {

  default: return 0;
  }
}

int zx_DEC_ELEM_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x)
{
  struct zx_elem_s* el = x->gg.kids;
  switch (el->g.tok) {

  default: return 0;
  }
}


/* EOF -- c/zx-wst-dec.c */
