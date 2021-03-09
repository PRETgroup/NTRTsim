#ifndef STRINGS_INPUT_116_H_
#define STRINGS_INPUT_116_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_116 States
enum StringsInput116States {
    STRINGS_INPUT_116_INTEGRATE,
    STRINGS_INPUT_116_LIMIT,
    STRINGS_INPUT_116_SPIKE,
    STRINGS_INPUT_116_REFRACTORY,
};

// strings_input_116 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput116States state;
} StringsInput116;

// strings_input_116 Initialisation function
void StringsInput116Init(StringsInput116* me);

// strings_input_116 Execution function
void StringsInput116Run(StringsInput116* me);

#endif // STRINGS_INPUT_116_H_