#ifndef ENSEMBLE2_0_H_
#define ENSEMBLE2_0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_0 States
enum Ensemble20States {
    ENSEMBLE2_0_INTEGRATE,
    ENSEMBLE2_0_LIMIT,
    ENSEMBLE2_0_SPIKE,
    ENSEMBLE2_0_REFRACTORY,
};

// ensemble2_0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble20States state;
} Ensemble20;

// ensemble2_0 Initialisation function
void Ensemble20Init(Ensemble20* me);

// ensemble2_0 Execution function
void Ensemble20Run(Ensemble20* me);

#endif // ENSEMBLE2_0_H_