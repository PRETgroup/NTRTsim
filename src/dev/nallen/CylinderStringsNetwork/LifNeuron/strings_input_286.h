#ifndef STRINGS_INPUT_286_H_
#define STRINGS_INPUT_286_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_286 States
enum StringsInput286States {
    STRINGS_INPUT_286_INTEGRATE,
    STRINGS_INPUT_286_LIMIT,
    STRINGS_INPUT_286_SPIKE,
    STRINGS_INPUT_286_REFRACTORY,
};

// strings_input_286 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput286States state;
} StringsInput286;

// strings_input_286 Initialisation function
void StringsInput286Init(StringsInput286* me);

// strings_input_286 Execution function
void StringsInput286Run(StringsInput286* me);

#endif // STRINGS_INPUT_286_H_