#ifndef STRINGS_INPUT_9_H_
#define STRINGS_INPUT_9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_9 States
enum StringsInput9States {
    STRINGS_INPUT_9_INTEGRATE,
    STRINGS_INPUT_9_LIMIT,
    STRINGS_INPUT_9_SPIKE,
    STRINGS_INPUT_9_REFRACTORY,
};

// strings_input_9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput9States state;
} StringsInput9;

// strings_input_9 Initialisation function
void StringsInput9Init(StringsInput9* me);

// strings_input_9 Execution function
void StringsInput9Run(StringsInput9* me);

#endif // STRINGS_INPUT_9_H_