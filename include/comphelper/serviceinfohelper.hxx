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

#ifndef INCLUDED_COMPHELPER_SERVICEINFOHELPER_HXX
#define INCLUDED_COMPHELPER_SERVICEINFOHELPER_HXX

#include <sal/config.h>

#include <initializer_list>

#include <com/sun/star/lang/XServiceInfo.hpp>
#include <comphelper/comphelperdllapi.h>

namespace comphelper {

/** this class provides a basic helper for classes supporting the XServiceInfo Interface.
 *
 *  you can override the <code>getSupprotedServiceNames</code> to implement a XServiceInfo.
 *  you can use the static helper methods to combine your services with that of parent
 *  or aggregated classes.
 */
class COMPHELPER_DLLPUBLIC ServiceInfoHelper : public css::lang::XServiceInfo
{
public:
    // XServiceInfo
    virtual OUString SAL_CALL getImplementationName() override;
    virtual css::uno::Sequence< OUString > SAL_CALL getSupportedServiceNames() override;

    // helper
    static void addToSequence( css::uno::Sequence< OUString >& rSeq, std::initializer_list<OUString> services ) throw();

protected:
    ~ServiceInfoHelper() {}
};

}

#endif

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */