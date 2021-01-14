#ifndef ENSEMBLE2_41_H_
#define ENSEMBLE2_41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_41 States
enum Ensemble241States {
    ENSEMBLE2_41_INTEGRATE,
    ENSEMBLE2_41_LIMIT,
    ENSEMBLE2_41_SPIKE,
    ENSEMBLE2_41_REFRACTORY,
};

// ensemble2_41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble241States state;
} Ensemble241;

// ensemble2_41 Initialisation function
void Ensemble241Init(Ensemble241* me);

// ensemble2_41 Execution function
void Ensemble241Run(Ensemble241* me);

#endif // ENSEMBLE2_41_H_