#ifndef STRINGS_INPUT_378_H_
#define STRINGS_INPUT_378_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_378 States
enum StringsInput378States {
    STRINGS_INPUT_378_INTEGRATE,
    STRINGS_INPUT_378_LIMIT,
    STRINGS_INPUT_378_SPIKE,
    STRINGS_INPUT_378_REFRACTORY,
};

// strings_input_378 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput378States state;
} StringsInput378;

// strings_input_378 Initialisation function
void StringsInput378Init(StringsInput378* me);

// strings_input_378 Execution function
void StringsInput378Run(StringsInput378* me);

#endif // STRINGS_INPUT_378_H_