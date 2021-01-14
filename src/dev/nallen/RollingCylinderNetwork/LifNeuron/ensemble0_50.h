#ifndef ENSEMBLE0_50_H_
#define ENSEMBLE0_50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_50 States
enum Ensemble050States {
    ENSEMBLE0_50_INTEGRATE,
    ENSEMBLE0_50_LIMIT,
    ENSEMBLE0_50_SPIKE,
    ENSEMBLE0_50_REFRACTORY,
};

// ensemble0_50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble050States state;
} Ensemble050;

// ensemble0_50 Initialisation function
void Ensemble050Init(Ensemble050* me);

// ensemble0_50 Execution function
void Ensemble050Run(Ensemble050* me);

#endif // ENSEMBLE0_50_H_