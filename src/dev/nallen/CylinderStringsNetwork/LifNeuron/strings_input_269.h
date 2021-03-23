#ifndef STRINGS_INPUT_269_H_
#define STRINGS_INPUT_269_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_269 States
enum StringsInput269States {
    STRINGS_INPUT_269_INTEGRATE,
    STRINGS_INPUT_269_LIMIT,
    STRINGS_INPUT_269_SPIKE,
    STRINGS_INPUT_269_REFRACTORY,
};

// strings_input_269 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput269States state;
} StringsInput269;

// strings_input_269 Initialisation function
void StringsInput269Init(StringsInput269* me);

// strings_input_269 Execution function
void StringsInput269Run(StringsInput269* me);

#endif // STRINGS_INPUT_269_H_