#ifndef ENSEMBLE2_83_H_
#define ENSEMBLE2_83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_83 States
enum Ensemble283States {
    ENSEMBLE2_83_INTEGRATE,
    ENSEMBLE2_83_LIMIT,
    ENSEMBLE2_83_SPIKE,
    ENSEMBLE2_83_REFRACTORY,
};

// ensemble2_83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble283States state;
} Ensemble283;

// ensemble2_83 Initialisation function
void Ensemble283Init(Ensemble283* me);

// ensemble2_83 Execution function
void Ensemble283Run(Ensemble283* me);

#endif // ENSEMBLE2_83_H_