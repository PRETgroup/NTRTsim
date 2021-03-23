#ifndef STRINGS_INPUT_282_H_
#define STRINGS_INPUT_282_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_282 States
enum StringsInput282States {
    STRINGS_INPUT_282_INTEGRATE,
    STRINGS_INPUT_282_LIMIT,
    STRINGS_INPUT_282_SPIKE,
    STRINGS_INPUT_282_REFRACTORY,
};

// strings_input_282 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput282States state;
} StringsInput282;

// strings_input_282 Initialisation function
void StringsInput282Init(StringsInput282* me);

// strings_input_282 Execution function
void StringsInput282Run(StringsInput282* me);

#endif // STRINGS_INPUT_282_H_