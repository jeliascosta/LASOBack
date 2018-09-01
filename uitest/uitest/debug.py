# -*- tab-width: 4; indent-tabs-mode: nil; py-indent-offset: 4 -*-
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.
#

import uitest.config

import time

def sleep(seconds):
    if uitest.config.use_sleep:
        time.sleep(seconds)

# vim: set shiftwidth=4 softtabstop=4 expandtab: