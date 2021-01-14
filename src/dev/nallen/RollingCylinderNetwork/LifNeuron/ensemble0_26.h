#ifndef ENSEMBLE0_26_H_
#define ENSEMBLE0_26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_26 States
enum Ensemble026States {
    ENSEMBLE0_26_INTEGRATE,
    ENSEMBLE0_26_LIMIT,
    ENSEMBLE0_26_SPIKE,
    ENSEMBLE0_26_REFRACTORY,
};

// ensemble0_26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble026States state;
} Ensemble026;

// ensemble0_26 Initialisation function
void Ensemble026Init(Ensemble026* me);

// ensemble0_26 Execution function
void Ensemble026Run(Ensemble026* me);

#endif // ENSEMBLE0_26_H_