#ifndef STRINGS_INPUT_62_H_
#define STRINGS_INPUT_62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_62 States
enum StringsInput62States {
    STRINGS_INPUT_62_INTEGRATE,
    STRINGS_INPUT_62_LIMIT,
    STRINGS_INPUT_62_SPIKE,
    STRINGS_INPUT_62_REFRACTORY,
};

// strings_input_62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput62States state;
} StringsInput62;

// strings_input_62 Initialisation function
void StringsInput62Init(StringsInput62* me);

// strings_input_62 Execution function
void StringsInput62Run(StringsInput62* me);

#endif // STRINGS_INPUT_62_H_