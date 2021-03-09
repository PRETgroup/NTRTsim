#ifndef STRINGS_INPUT_119_H_
#define STRINGS_INPUT_119_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_119 States
enum StringsInput119States {
    STRINGS_INPUT_119_INTEGRATE,
    STRINGS_INPUT_119_LIMIT,
    STRINGS_INPUT_119_SPIKE,
    STRINGS_INPUT_119_REFRACTORY,
};

// strings_input_119 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput119States state;
} StringsInput119;

// strings_input_119 Initialisation function
void StringsInput119Init(StringsInput119* me);

// strings_input_119 Execution function
void StringsInput119Run(StringsInput119* me);

#endif // STRINGS_INPUT_119_H_