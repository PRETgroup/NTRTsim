#ifndef STRINGS_INPUT_167_H_
#define STRINGS_INPUT_167_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_167 States
enum StringsInput167States {
    STRINGS_INPUT_167_INTEGRATE,
    STRINGS_INPUT_167_LIMIT,
    STRINGS_INPUT_167_SPIKE,
    STRINGS_INPUT_167_REFRACTORY,
};

// strings_input_167 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput167States state;
} StringsInput167;

// strings_input_167 Initialisation function
void StringsInput167Init(StringsInput167* me);

// strings_input_167 Execution function
void StringsInput167Run(StringsInput167* me);

#endif // STRINGS_INPUT_167_H_