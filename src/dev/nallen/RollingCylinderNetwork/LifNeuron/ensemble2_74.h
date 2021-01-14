#ifndef ENSEMBLE2_74_H_
#define ENSEMBLE2_74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_74 States
enum Ensemble274States {
    ENSEMBLE2_74_INTEGRATE,
    ENSEMBLE2_74_LIMIT,
    ENSEMBLE2_74_SPIKE,
    ENSEMBLE2_74_REFRACTORY,
};

// ensemble2_74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble274States state;
} Ensemble274;

// ensemble2_74 Initialisation function
void Ensemble274Init(Ensemble274* me);

// ensemble2_74 Execution function
void Ensemble274Run(Ensemble274* me);

#endif // ENSEMBLE2_74_H_