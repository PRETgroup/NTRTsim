#ifndef STRINGS_INPUT_111_H_
#define STRINGS_INPUT_111_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_111 States
enum StringsInput111States {
    STRINGS_INPUT_111_INTEGRATE,
    STRINGS_INPUT_111_LIMIT,
    STRINGS_INPUT_111_SPIKE,
    STRINGS_INPUT_111_REFRACTORY,
};

// strings_input_111 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput111States state;
} StringsInput111;

// strings_input_111 Initialisation function
void StringsInput111Init(StringsInput111* me);

// strings_input_111 Execution function
void StringsInput111Run(StringsInput111* me);

#endif // STRINGS_INPUT_111_H_