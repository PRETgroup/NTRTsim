#ifndef ENSEMBLE0_80_H_
#define ENSEMBLE0_80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_80 States
enum Ensemble080States {
    ENSEMBLE0_80_INTEGRATE,
    ENSEMBLE0_80_LIMIT,
    ENSEMBLE0_80_SPIKE,
    ENSEMBLE0_80_REFRACTORY,
};

// ensemble0_80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble080States state;
} Ensemble080;

// ensemble0_80 Initialisation function
void Ensemble080Init(Ensemble080* me);

// ensemble0_80 Execution function
void Ensemble080Run(Ensemble080* me);

#endif // ENSEMBLE0_80_H_