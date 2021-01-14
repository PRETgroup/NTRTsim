#ifndef ENSEMBLE2_22_H_
#define ENSEMBLE2_22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_22 States
enum Ensemble222States {
    ENSEMBLE2_22_INTEGRATE,
    ENSEMBLE2_22_LIMIT,
    ENSEMBLE2_22_SPIKE,
    ENSEMBLE2_22_REFRACTORY,
};

// ensemble2_22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble222States state;
} Ensemble222;

// ensemble2_22 Initialisation function
void Ensemble222Init(Ensemble222* me);

// ensemble2_22 Execution function
void Ensemble222Run(Ensemble222* me);

#endif // ENSEMBLE2_22_H_