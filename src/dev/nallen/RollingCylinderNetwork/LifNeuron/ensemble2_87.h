#ifndef ENSEMBLE2_87_H_
#define ENSEMBLE2_87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_87 States
enum Ensemble287States {
    ENSEMBLE2_87_INTEGRATE,
    ENSEMBLE2_87_LIMIT,
    ENSEMBLE2_87_SPIKE,
    ENSEMBLE2_87_REFRACTORY,
};

// ensemble2_87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble287States state;
} Ensemble287;

// ensemble2_87 Initialisation function
void Ensemble287Init(Ensemble287* me);

// ensemble2_87 Execution function
void Ensemble287Run(Ensemble287* me);

#endif // ENSEMBLE2_87_H_