#ifndef STRINGS_INPUT_173_H_
#define STRINGS_INPUT_173_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_173 States
enum StringsInput173States {
    STRINGS_INPUT_173_INTEGRATE,
    STRINGS_INPUT_173_LIMIT,
    STRINGS_INPUT_173_SPIKE,
    STRINGS_INPUT_173_REFRACTORY,
};

// strings_input_173 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput173States state;
} StringsInput173;

// strings_input_173 Initialisation function
void StringsInput173Init(StringsInput173* me);

// strings_input_173 Execution function
void StringsInput173Run(StringsInput173* me);

#endif // STRINGS_INPUT_173_H_