#ifndef POSITION_INPUTS_296_H_
#define POSITION_INPUTS_296_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_inputs_296 States
enum PositionInputs296States {
    POSITION_INPUTS_296_INTEGRATE,
    POSITION_INPUTS_296_LIMIT,
    POSITION_INPUTS_296_SPIKE,
    POSITION_INPUTS_296_REFRACTORY,
};

// position_inputs_296 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum PositionInputs296States state;
} PositionInputs296;

// position_inputs_296 Initialisation function
void PositionInputs296Init(PositionInputs296* me);

// position_inputs_296 Execution function
void PositionInputs296Run(PositionInputs296* me);

#endif // POSITION_INPUTS_296_H_