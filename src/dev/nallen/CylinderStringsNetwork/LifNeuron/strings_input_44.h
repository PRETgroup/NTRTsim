#ifndef STRINGS_INPUT_44_H_
#define STRINGS_INPUT_44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_44 States
enum StringsInput44States {
    STRINGS_INPUT_44_INTEGRATE,
    STRINGS_INPUT_44_LIMIT,
    STRINGS_INPUT_44_SPIKE,
    STRINGS_INPUT_44_REFRACTORY,
};

// strings_input_44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput44States state;
} StringsInput44;

// strings_input_44 Initialisation function
void StringsInput44Init(StringsInput44* me);

// strings_input_44 Execution function
void StringsInput44Run(StringsInput44* me);

#endif // STRINGS_INPUT_44_H_