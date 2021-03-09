#ifndef STRINGS_INPUT_97_H_
#define STRINGS_INPUT_97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_97 States
enum StringsInput97States {
    STRINGS_INPUT_97_INTEGRATE,
    STRINGS_INPUT_97_LIMIT,
    STRINGS_INPUT_97_SPIKE,
    STRINGS_INPUT_97_REFRACTORY,
};

// strings_input_97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput97States state;
} StringsInput97;

// strings_input_97 Initialisation function
void StringsInput97Init(StringsInput97* me);

// strings_input_97 Execution function
void StringsInput97Run(StringsInput97* me);

#endif // STRINGS_INPUT_97_H_