#ifndef STRINGS_INPUT_390_H_
#define STRINGS_INPUT_390_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_390 States
enum StringsInput390States {
    STRINGS_INPUT_390_INTEGRATE,
    STRINGS_INPUT_390_LIMIT,
    STRINGS_INPUT_390_SPIKE,
    STRINGS_INPUT_390_REFRACTORY,
};

// strings_input_390 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput390States state;
} StringsInput390;

// strings_input_390 Initialisation function
void StringsInput390Init(StringsInput390* me);

// strings_input_390 Execution function
void StringsInput390Run(StringsInput390* me);

#endif // STRINGS_INPUT_390_H_