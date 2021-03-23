#ifndef STRINGS_INPUT_296_H_
#define STRINGS_INPUT_296_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// strings_input_296 States
enum StringsInput296States {
    STRINGS_INPUT_296_INTEGRATE,
    STRINGS_INPUT_296_LIMIT,
    STRINGS_INPUT_296_SPIKE,
    STRINGS_INPUT_296_REFRACTORY,
};

// strings_input_296 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum StringsInput296States state;
} StringsInput296;

// strings_input_296 Initialisation function
void StringsInput296Init(StringsInput296* me);

// strings_input_296 Execution function
void StringsInput296Run(StringsInput296* me);

#endif // STRINGS_INPUT_296_H_