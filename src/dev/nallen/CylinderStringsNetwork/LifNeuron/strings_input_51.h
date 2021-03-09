#ifndef STRINGS_INPUT_51_H_
#define STRINGS_INPUT_51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_51 States
enum StringsInput51States {
    STRINGS_INPUT_51_INTEGRATE,
    STRINGS_INPUT_51_LIMIT,
    STRINGS_INPUT_51_SPIKE,
    STRINGS_INPUT_51_REFRACTORY,
};

// strings_input_51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput51States state;
} StringsInput51;

// strings_input_51 Initialisation function
void StringsInput51Init(StringsInput51* me);

// strings_input_51 Execution function
void StringsInput51Run(StringsInput51* me);

#endif // STRINGS_INPUT_51_H_