#ifndef ENSEMBLE0_13_H_
#define ENSEMBLE0_13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_13 States
enum Ensemble013States {
    ENSEMBLE0_13_INTEGRATE,
    ENSEMBLE0_13_LIMIT,
    ENSEMBLE0_13_SPIKE,
    ENSEMBLE0_13_REFRACTORY,
};

// ensemble0_13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble013States state;
} Ensemble013;

// ensemble0_13 Initialisation function
void Ensemble013Init(Ensemble013* me);

// ensemble0_13 Execution function
void Ensemble013Run(Ensemble013* me);

#endif // ENSEMBLE0_13_H_