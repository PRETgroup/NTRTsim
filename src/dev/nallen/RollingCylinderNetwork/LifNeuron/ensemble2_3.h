#ifndef ENSEMBLE2_3_H_
#define ENSEMBLE2_3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_3 States
enum Ensemble23States {
    ENSEMBLE2_3_INTEGRATE,
    ENSEMBLE2_3_LIMIT,
    ENSEMBLE2_3_SPIKE,
    ENSEMBLE2_3_REFRACTORY,
};

// ensemble2_3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble23States state;
} Ensemble23;

// ensemble2_3 Initialisation function
void Ensemble23Init(Ensemble23* me);

// ensemble2_3 Execution function
void Ensemble23Run(Ensemble23* me);

#endif // ENSEMBLE2_3_H_