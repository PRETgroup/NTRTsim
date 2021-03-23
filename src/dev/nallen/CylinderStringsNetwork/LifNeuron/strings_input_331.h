#ifndef STRINGS_INPUT_331_H_
#define STRINGS_INPUT_331_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_331 States
enum StringsInput331States {
    STRINGS_INPUT_331_INTEGRATE,
    STRINGS_INPUT_331_LIMIT,
    STRINGS_INPUT_331_SPIKE,
    STRINGS_INPUT_331_REFRACTORY,
};

// strings_input_331 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput331States state;
} StringsInput331;

// strings_input_331 Initialisation function
void StringsInput331Init(StringsInput331* me);

// strings_input_331 Execution function
void StringsInput331Run(StringsInput331* me);

#endif // STRINGS_INPUT_331_H_