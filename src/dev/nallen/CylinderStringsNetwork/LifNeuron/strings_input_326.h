#ifndef STRINGS_INPUT_326_H_
#define STRINGS_INPUT_326_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_326 States
enum StringsInput326States {
    STRINGS_INPUT_326_INTEGRATE,
    STRINGS_INPUT_326_LIMIT,
    STRINGS_INPUT_326_SPIKE,
    STRINGS_INPUT_326_REFRACTORY,
};

// strings_input_326 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput326States state;
} StringsInput326;

// strings_input_326 Initialisation function
void StringsInput326Init(StringsInput326* me);

// strings_input_326 Execution function
void StringsInput326Run(StringsInput326* me);

#endif // STRINGS_INPUT_326_H_