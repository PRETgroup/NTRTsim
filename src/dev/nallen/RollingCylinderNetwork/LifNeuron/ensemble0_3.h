#ifndef ENSEMBLE0_3_H_
#define ENSEMBLE0_3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_3 States
enum Ensemble03States {
    ENSEMBLE0_3_INTEGRATE,
    ENSEMBLE0_3_LIMIT,
    ENSEMBLE0_3_SPIKE,
    ENSEMBLE0_3_REFRACTORY,
};

// ensemble0_3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble03States state;
} Ensemble03;

// ensemble0_3 Initialisation function
void Ensemble03Init(Ensemble03* me);

// ensemble0_3 Execution function
void Ensemble03Run(Ensemble03* me);

#endif // ENSEMBLE0_3_H_