#ifndef ENSEMBLE0_17_H_
#define ENSEMBLE0_17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_17 States
enum Ensemble017States {
    ENSEMBLE0_17_INTEGRATE,
    ENSEMBLE0_17_LIMIT,
    ENSEMBLE0_17_SPIKE,
    ENSEMBLE0_17_REFRACTORY,
};

// ensemble0_17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble017States state;
} Ensemble017;

// ensemble0_17 Initialisation function
void Ensemble017Init(Ensemble017* me);

// ensemble0_17 Execution function
void Ensemble017Run(Ensemble017* me);

#endif // ENSEMBLE0_17_H_