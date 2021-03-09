#ifndef STRINGS_INPUT_106_H_
#define STRINGS_INPUT_106_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_106 States
enum StringsInput106States {
    STRINGS_INPUT_106_INTEGRATE,
    STRINGS_INPUT_106_LIMIT,
    STRINGS_INPUT_106_SPIKE,
    STRINGS_INPUT_106_REFRACTORY,
};

// strings_input_106 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput106States state;
} StringsInput106;

// strings_input_106 Initialisation function
void StringsInput106Init(StringsInput106* me);

// strings_input_106 Execution function
void StringsInput106Run(StringsInput106* me);

#endif // STRINGS_INPUT_106_H_