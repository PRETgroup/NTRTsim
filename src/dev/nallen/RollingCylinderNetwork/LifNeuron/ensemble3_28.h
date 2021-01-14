#ifndef ENSEMBLE3_28_H_
#define ENSEMBLE3_28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_28 States
enum Ensemble328States {
    ENSEMBLE3_28_INTEGRATE,
    ENSEMBLE3_28_LIMIT,
    ENSEMBLE3_28_SPIKE,
    ENSEMBLE3_28_REFRACTORY,
};

// ensemble3_28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble328States state;
} Ensemble328;

// ensemble3_28 Initialisation function
void Ensemble328Init(Ensemble328* me);

// ensemble3_28 Execution function
void Ensemble328Run(Ensemble328* me);

#endif // ENSEMBLE3_28_H_