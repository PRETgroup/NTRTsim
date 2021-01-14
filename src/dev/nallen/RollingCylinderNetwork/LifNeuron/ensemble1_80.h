#ifndef ENSEMBLE1_80_H_
#define ENSEMBLE1_80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_80 States
enum Ensemble180States {
    ENSEMBLE1_80_INTEGRATE,
    ENSEMBLE1_80_LIMIT,
    ENSEMBLE1_80_SPIKE,
    ENSEMBLE1_80_REFRACTORY,
};

// ensemble1_80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble180States state;
} Ensemble180;

// ensemble1_80 Initialisation function
void Ensemble180Init(Ensemble180* me);

// ensemble1_80 Execution function
void Ensemble180Run(Ensemble180* me);

#endif // ENSEMBLE1_80_H_