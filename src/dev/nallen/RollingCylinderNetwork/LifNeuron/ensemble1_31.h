#ifndef ENSEMBLE1_31_H_
#define ENSEMBLE1_31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_31 States
enum Ensemble131States {
    ENSEMBLE1_31_INTEGRATE,
    ENSEMBLE1_31_LIMIT,
    ENSEMBLE1_31_SPIKE,
    ENSEMBLE1_31_REFRACTORY,
};

// ensemble1_31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble131States state;
} Ensemble131;

// ensemble1_31 Initialisation function
void Ensemble131Init(Ensemble131* me);

// ensemble1_31 Execution function
void Ensemble131Run(Ensemble131* me);

#endif // ENSEMBLE1_31_H_