#ifndef STRINGS_INPUT_137_H_
#define STRINGS_INPUT_137_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_137 States
enum StringsInput137States {
    STRINGS_INPUT_137_INTEGRATE,
    STRINGS_INPUT_137_LIMIT,
    STRINGS_INPUT_137_SPIKE,
    STRINGS_INPUT_137_REFRACTORY,
};

// strings_input_137 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput137States state;
} StringsInput137;

// strings_input_137 Initialisation function
void StringsInput137Init(StringsInput137* me);

// strings_input_137 Execution function
void StringsInput137Run(StringsInput137* me);

#endif // STRINGS_INPUT_137_H_