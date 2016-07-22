/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader", bootloader);

	if (strstr(bootloader, "J120AZ")) {
		/* j1xltetu */
		property_set("ro.product.model", "SM-J120AZ");
		property_set("ro.product.name", "j1xltetu");
	} else if (strstr(bootloader, "J120A")) {
		/* j1xlteatt */
		property_set("ro.product.model", "SM-J120A");
		property_set("ro.product.name", "j1xlteatt");
	} else if (strstr(bootloader, "J120P")) {
		/* j1xltespr */
		property_set("ro.product.model", "SM-J120P");
		property_set("ro.product.name", "j1xltespr");
	} else if (strstr(bootloader, "J120T")) {
		/* j1xltetmo */
		property_set("ro.product.model", "SM-J120T");
		property_set("ro.product.name", "j1xltetmo");
	} else if (strstr(bootloader, "J120M")) {
		/* j1xlteub */
		property_set("ro.product.model", "SM-J120M");
		property_set("ro.product.name", "j1xlteub");
	} else if (strstr(bootloader, "J120G")) {
		/* j1xltedx */
		property_set("ro.product.model", "SM-J120G");
		property_set("ro.product.name", "j1xltedx");
	} else if (strstr(bootloader, "J120ZN")) {
		/* j1xltedv */
		property_set("ro.product.model", "SM-J120ZN");
		property_set("ro.product.name", "j1xltedv");
	} else if (strstr(bootloader, "J120FZH")) {
		/* j1xltezh */
		property_set("ro.product.model", "SM-J120F");
		property_set("ro.product.name", "j1xltezh");
	} else if (strstr(bootloader, "J120FN")) {
		/* j1xltexx */
		property_set("ro.product.model", "SM-J120FN");
		property_set("ro.product.name", "j1xltexx");
	} else if (strstr(bootloader, "J120F")) {
		/* j1xltexx */
		property_set("ro.product.model", "SM-J120F");
		property_set("ro.product.name", "j1xltexx");
	} else {
		/* all other variants become j1xltecan */
		property_set("ro.product.model", "SM-J120W");
		property_set("ro.product.name", "j1xltecan");
	}
	property_set("ro.product.device", "j1xlte");
}
