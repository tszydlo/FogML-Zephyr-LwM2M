# Copyright 2020-2022 AVSystem <avsystem@avsystem.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(anjay_zephyr_demo)
set(root_dir ${ANJAY_ZEPHYR_CLIENT_DIR})

set(app_common_sources
    src/main.c
    src/utils.c
    src/utils.h
    src/led.c
    src/led.h    
    src/objects/objects.h
    src/objects/device.c
    src/objects/pattern_detector.c)

set(fogml_sources
    src/fogml_sdk/anomaly_rt/fogml_lof.c
    src/fogml_sdk/anomaly_rt/fogml_reservoir.c
    src/fogml_sdk/ports/fogml_ports_zephyr.c
    src/fogml_sdk/dsp/fogml_dsp.c
)

file(GLOB fogml_generated CONFIGURE_DEPENDS
     "src/fogml_generated/*.h"
     "src/fogml_generated/*.c"
)

target_sources(app PRIVATE
                ${app_common_sources}
                ${fogml_sources}
                ${fogml_generated}
                )
