#ifndef ENSEMBLE0_37_H_
#define ENSEMBLE0_37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_37 States
enum Ensemble037States {
    ENSEMBLE0_37_INTEGRATE,
    ENSEMBLE0_37_LIMIT,
    ENSEMBLE0_37_SPIKE,
    ENSEMBLE0_37_REFRACTORY,
};

// ensemble0_37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble037States state;
} Ensemble037;

// ensemble0_37 Initialisation function
void Ensemble037Init(Ensemble037* me);

// ensemble0_37 Execution function
void Ensemble037Run(Ensemble037* me);

#endif // ENSEMBLE0_37_H_