/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file incorporates work covered by the following license notice:
 *
 *   Licensed to the Apache Software Foundation (ASF) under one or more
 *   contributor license agreements. See the NOTICE file distributed
 *   with this work for additional information regarding copyright
 *   ownership. The ASF licenses this file to you under the Apache
 *   License, Version 2.0 (the "License"); you may not use this file
 *   except in compliance with the License. You may obtain a copy of
 *   the License at http://www.apache.org/licenses/LICENSE-2.0 .
 */
#ifndef INCLUDED_SVTOOLS_SFXECODE_HXX
#define INCLUDED_SVTOOLS_SFXECODE_HXX

#include <tools/errcode.hxx>

#define ERRCODE_SFX_NOTATEMPLATE            (ERRCODE_AREA_SFX|ERRCODE_CLASS_FORMAT|2)
#define ERRCODE_SFX_GENERAL                 (ERRCODE_AREA_SFX|ERRCODE_CLASS_GENERAL|3)
#define ERRCODE_SFX_DOLOADFAILED            (ERRCODE_AREA_SFX|ERRCODE_CLASS_READ|4)
#define ERRCODE_SFX_ALREADYOPEN             (ERRCODE_AREA_SFX|ERRCODE_CLASS_ALREADYEXISTS|10)
#define ERRCODE_SFX_WRONGPASSWORD           (ERRCODE_AREA_SFX|ERRCODE_CLASS_READ|11)
#define ERRCODE_SFX_DOCUMENTREADONLY        (ERRCODE_AREA_SFX|ERRCODE_CLASS_WRITE|12)
#define ERRCODE_SFX_OLEGENERAL              (ERRCODE_AREA_SFX|ERRCODE_CLASS_NONE|14)
#define ERRCODE_SFX_TEMPLATENOTFOUND        (ERRCODE_AREA_SFX|ERRCODE_CLASS_NOTEXISTS|15)

#define ERRCODE_SFX_CANTCREATECONTENT       (ERRCODE_AREA_SFX|ERRCODE_CLASS_CREATE|21)
#define ERRCODE_SFX_INVALIDSYNTAX           (ERRCODE_AREA_SFX|ERRCODE_CLASS_PATH|36)
#define ERRCODE_SFX_CANTCREATEFOLDER        (ERRCODE_AREA_SFX|ERRCODE_CLASS_CREATE|37)
#define ERRCODE_SFX_CANTGETPASSWD           (ERRCODE_AREA_SFX| ERRCODE_CLASS_READ | 42)
#define ERRCODE_SFX_NOMOREDOCUMENTSALLOWED  (ERRCODE_WARNING_MASK | ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 44)
#define ERRCODE_SFX_CANTCREATEBACKUP        (ERRCODE_AREA_SFX | ERRCODE_CLASS_CREATE | 50)
#define ERRCODE_SFX_MACROS_SUPPORT_DISABLED (ERRCODE_WARNING_MASK | ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 51)
#define ERRCODE_SFX_DOCUMENT_MACRO_DISABLED (ERRCODE_WARNING_MASK | ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 52)
#define ERRCODE_SFX_SHARED_NOPASSWORDCHANGE (ERRCODE_WARNING_MASK | ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 54)
#define ERRCODE_SFX_INCOMPLETE_ENCRYPTION    (ERRCODE_WARNING_MASK | ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 55)
#define ERRCODE_SFX_DOCUMENT_MACRO_DISABLED_MAC (ERRCODE_WARNING_MASK | ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 56)
#define ERRCODE_SFX_FORMAT_ROWCOL           (ERRCODE_AREA_SFX | ERRCODE_CLASS_NONE | 57)


// Various
#define ERRCTX_ERROR                    21
#define ERRCTX_WARNING                  22

// Document
#define ERRCTX_SFX_LOADTEMPLATE         1
#define ERRCTX_SFX_SAVEDOC              2
#define ERRCTX_SFX_SAVEASDOC            3
#define ERRCTX_SFX_DOCINFO              4
#define ERRCTX_SFX_DOCTEMPLATE          5
#define ERRCTX_SFX_MOVEORCOPYCONTENTS   6

// Application
#define ERRCTX_SFX_DOCMANAGER           50
#define ERRCTX_SFX_OPENDOC              51
#define ERRCTX_SFX_NEWDOCDIRECT         52
#define ERRCTX_SFX_NEWDOC               53

// Organizer
#define ERRCTX_SFX_CREATEOBJSH          70

// BASIC
#define ERRCTX_SFX_LOADBASIC            80

// Addressbook
#define ERRCTX_SFX_SEARCHADDRESS        90

#endif // INCLUDED_SVTOOLS_SFXECODE_HXX


/* vim:set shiftwidth=4 softtabstop=4 expandtab: */