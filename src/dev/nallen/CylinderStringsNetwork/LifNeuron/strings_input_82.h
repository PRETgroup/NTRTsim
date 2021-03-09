#ifndef STRINGS_INPUT_82_H_
#define STRINGS_INPUT_82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef int bool;
#define false 0
#define true 1

#include "config.h"

// strings_input_82 States
enum StringsInput82States {
    STRINGS_INPUT_82_INTEGRATE,
    STRINGS_INPUT_82_LIMIT,
    STRINGS_INPUT_82_SPIKE,
    STRINGS_INPUT_82_REFRACTORY,
};

// strings_input_82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput82States state;
} StringsInput82;

// strings_input_82 Initialisation function
void StringsInput82Init(StringsInput82* me);

// strings_input_82 Execution function
void StringsInput82Run(StringsInput82* me);

#endif // STRINGS_INPUT_82_H_