#ifndef ENSEMBLE0_14_H_
#define ENSEMBLE0_14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_14 States
enum Ensemble014States {
    ENSEMBLE0_14_INTEGRATE,
    ENSEMBLE0_14_LIMIT,
    ENSEMBLE0_14_SPIKE,
    ENSEMBLE0_14_REFRACTORY,
};

// ensemble0_14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble014States state;
} Ensemble014;

// ensemble0_14 Initialisation function
void Ensemble014Init(Ensemble014* me);

// ensemble0_14 Execution function
void Ensemble014Run(Ensemble014* me);

#endif // ENSEMBLE0_14_H_