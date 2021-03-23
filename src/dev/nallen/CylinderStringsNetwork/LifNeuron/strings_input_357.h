#ifndef STRINGS_INPUT_357_H_
#define STRINGS_INPUT_357_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_357 States
enum StringsInput357States {
    STRINGS_INPUT_357_INTEGRATE,
    STRINGS_INPUT_357_LIMIT,
    STRINGS_INPUT_357_SPIKE,
    STRINGS_INPUT_357_REFRACTORY,
};

// strings_input_357 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput357States state;
} StringsInput357;

// strings_input_357 Initialisation function
void StringsInput357Init(StringsInput357* me);

// strings_input_357 Execution function
void StringsInput357Run(StringsInput357* me);

#endif // STRINGS_INPUT_357_H_