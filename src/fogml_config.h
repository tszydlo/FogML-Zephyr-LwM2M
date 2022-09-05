/*
   Copyright 2021 FogML

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef FOGML_CONFIG_H
#define FOGML_CONFIG_H

#include "fogml_sdk/fogml.h"

#define FOGML_VERBOSE

// DATA ACQUISITION
// accelerometer data X, Y, Z
#define ACC_TIME_TICKS  20
#define ACC_AXIS  3
#define FOGML_HZ 10


// DIGITAL SIGNAL PROCESSING
// number of features - depends on the DSP blocks
#define FOGML_VECTOR_SIZE ((TINYML_DSP_BASE_LEN + TINYML_DSP_ENERGY_LEN + TINYML_DSP_CROSSINGS_LEN) * ACC_AXIS)

//BLOCK 1 - BASE
tinyml_block_base_config_t block1_config;
tinyml_dsp_block_t block1 = {
    .type = TINYML_DSP_BASE,
    .config = &block1_config

};

//BLOCK 2 - ENERGY
tinyml_block_energy_config_t block2_config;
tinyml_dsp_block_t block2 = {
    .type = TINYML_DSP_ENERGY,
    .config = &block2_config
};

//BLOCK 3 - CROSSINGS
tinyml_block_crossings_config_t block3_config = {
    .threshold = 0.00001
};
tinyml_dsp_block_t block3 = {
    .type = TINYML_DSP_CROSSINGS,
    .config = &block3_config
};

//DSP config
tinyml_dsp_block_t *blocks_tab[] = {&block1, &block2, &block3};

tinyml_dsp_config_t my_dsp_config = {
    .time_ticks = ACC_TIME_TICKS,
    .axis_n = 3,
    .blocks_num = 3,
    .blocks = blocks_tab
};

//CLASSIFICATION
const char* FOGML_LABELS[] = {"IDLE", "CIRCLE", "SNAKE", "UP DOWN"};
const int FOGML_LABELS_COUNT = 4;

int fogml_classification(float *time_series_data) {
    float *vector = (float*)malloc(sizeof(float) * FOGML_VECTOR_SIZE);
    tinyml_dsp(time_series_data, vector, &my_dsp_config);
    int cl;

    cl = classifier(vector);

#ifdef FOGML_VERBOSE
    fogml_printf("Detected  class = ");
    fogml_printf_int(cl);
    fogml_printf("\n");
#endif

    free(vector);

    return cl;
} 

#endif