#ifndef STRINGS_INPUT_107_H_
#define STRINGS_INPUT_107_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_107 States
enum StringsInput107States {
    STRINGS_INPUT_107_INTEGRATE,
    STRINGS_INPUT_107_LIMIT,
    STRINGS_INPUT_107_SPIKE,
    STRINGS_INPUT_107_REFRACTORY,
};

// strings_input_107 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput107States state;
} StringsInput107;

// strings_input_107 Initialisation function
void StringsInput107Init(StringsInput107* me);

// strings_input_107 Execution function
void StringsInput107Run(StringsInput107* me);

#endif // STRINGS_INPUT_107_H_