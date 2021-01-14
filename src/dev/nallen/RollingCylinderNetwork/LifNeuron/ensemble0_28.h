#ifndef ENSEMBLE0_28_H_
#define ENSEMBLE0_28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_28 States
enum Ensemble028States {
    ENSEMBLE0_28_INTEGRATE,
    ENSEMBLE0_28_LIMIT,
    ENSEMBLE0_28_SPIKE,
    ENSEMBLE0_28_REFRACTORY,
};

// ensemble0_28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble028States state;
} Ensemble028;

// ensemble0_28 Initialisation function
void Ensemble028Init(Ensemble028* me);

// ensemble0_28 Execution function
void Ensemble028Run(Ensemble028* me);

#endif // ENSEMBLE0_28_H_