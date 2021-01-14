#ifndef ENSEMBLE2_23_H_
#define ENSEMBLE2_23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_23 States
enum Ensemble223States {
    ENSEMBLE2_23_INTEGRATE,
    ENSEMBLE2_23_LIMIT,
    ENSEMBLE2_23_SPIKE,
    ENSEMBLE2_23_REFRACTORY,
};

// ensemble2_23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble223States state;
} Ensemble223;

// ensemble2_23 Initialisation function
void Ensemble223Init(Ensemble223* me);

// ensemble2_23 Execution function
void Ensemble223Run(Ensemble223* me);

#endif // ENSEMBLE2_23_H_