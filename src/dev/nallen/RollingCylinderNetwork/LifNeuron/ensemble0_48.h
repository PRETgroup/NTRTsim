#ifndef ENSEMBLE0_48_H_
#define ENSEMBLE0_48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_48 States
enum Ensemble048States {
    ENSEMBLE0_48_INTEGRATE,
    ENSEMBLE0_48_LIMIT,
    ENSEMBLE0_48_SPIKE,
    ENSEMBLE0_48_REFRACTORY,
};

// ensemble0_48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble048States state;
} Ensemble048;

// ensemble0_48 Initialisation function
void Ensemble048Init(Ensemble048* me);

// ensemble0_48 Execution function
void Ensemble048Run(Ensemble048* me);

#endif // ENSEMBLE0_48_H_