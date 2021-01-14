#ifndef ENSEMBLE1_46_H_
#define ENSEMBLE1_46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_46 States
enum Ensemble146States {
    ENSEMBLE1_46_INTEGRATE,
    ENSEMBLE1_46_LIMIT,
    ENSEMBLE1_46_SPIKE,
    ENSEMBLE1_46_REFRACTORY,
};

// ensemble1_46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble146States state;
} Ensemble146;

// ensemble1_46 Initialisation function
void Ensemble146Init(Ensemble146* me);

// ensemble1_46 Execution function
void Ensemble146Run(Ensemble146* me);

#endif // ENSEMBLE1_46_H_