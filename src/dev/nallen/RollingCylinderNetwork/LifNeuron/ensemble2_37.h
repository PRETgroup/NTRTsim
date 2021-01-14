#ifndef ENSEMBLE2_37_H_
#define ENSEMBLE2_37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_37 States
enum Ensemble237States {
    ENSEMBLE2_37_INTEGRATE,
    ENSEMBLE2_37_LIMIT,
    ENSEMBLE2_37_SPIKE,
    ENSEMBLE2_37_REFRACTORY,
};

// ensemble2_37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble237States state;
} Ensemble237;

// ensemble2_37 Initialisation function
void Ensemble237Init(Ensemble237* me);

// ensemble2_37 Execution function
void Ensemble237Run(Ensemble237* me);

#endif // ENSEMBLE2_37_H_