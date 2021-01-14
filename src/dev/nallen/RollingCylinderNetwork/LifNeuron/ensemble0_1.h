#ifndef ENSEMBLE0_1_H_
#define ENSEMBLE0_1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_1 States
enum Ensemble01States {
    ENSEMBLE0_1_INTEGRATE,
    ENSEMBLE0_1_LIMIT,
    ENSEMBLE0_1_SPIKE,
    ENSEMBLE0_1_REFRACTORY,
};

// ensemble0_1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble01States state;
} Ensemble01;

// ensemble0_1 Initialisation function
void Ensemble01Init(Ensemble01* me);

// ensemble0_1 Execution function
void Ensemble01Run(Ensemble01* me);

#endif // ENSEMBLE0_1_H_