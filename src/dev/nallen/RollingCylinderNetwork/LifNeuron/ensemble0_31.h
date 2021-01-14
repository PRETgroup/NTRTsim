#ifndef ENSEMBLE0_31_H_
#define ENSEMBLE0_31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_31 States
enum Ensemble031States {
    ENSEMBLE0_31_INTEGRATE,
    ENSEMBLE0_31_LIMIT,
    ENSEMBLE0_31_SPIKE,
    ENSEMBLE0_31_REFRACTORY,
};

// ensemble0_31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble031States state;
} Ensemble031;

// ensemble0_31 Initialisation function
void Ensemble031Init(Ensemble031* me);

// ensemble0_31 Execution function
void Ensemble031Run(Ensemble031* me);

#endif // ENSEMBLE0_31_H_