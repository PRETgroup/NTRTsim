#ifndef ENSEMBLE2_45_H_
#define ENSEMBLE2_45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_45 States
enum Ensemble245States {
    ENSEMBLE2_45_INTEGRATE,
    ENSEMBLE2_45_LIMIT,
    ENSEMBLE2_45_SPIKE,
    ENSEMBLE2_45_REFRACTORY,
};

// ensemble2_45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble245States state;
} Ensemble245;

// ensemble2_45 Initialisation function
void Ensemble245Init(Ensemble245* me);

// ensemble2_45 Execution function
void Ensemble245Run(Ensemble245* me);

#endif // ENSEMBLE2_45_H_