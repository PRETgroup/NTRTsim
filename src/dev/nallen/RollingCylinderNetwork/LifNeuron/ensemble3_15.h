#ifndef ENSEMBLE3_15_H_
#define ENSEMBLE3_15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_15 States
enum Ensemble315States {
    ENSEMBLE3_15_INTEGRATE,
    ENSEMBLE3_15_LIMIT,
    ENSEMBLE3_15_SPIKE,
    ENSEMBLE3_15_REFRACTORY,
};

// ensemble3_15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble315States state;
} Ensemble315;

// ensemble3_15 Initialisation function
void Ensemble315Init(Ensemble315* me);

// ensemble3_15 Execution function
void Ensemble315Run(Ensemble315* me);

#endif // ENSEMBLE3_15_H_