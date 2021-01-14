#ifndef ENSEMBLE0_56_H_
#define ENSEMBLE0_56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_56 States
enum Ensemble056States {
    ENSEMBLE0_56_INTEGRATE,
    ENSEMBLE0_56_LIMIT,
    ENSEMBLE0_56_SPIKE,
    ENSEMBLE0_56_REFRACTORY,
};

// ensemble0_56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble056States state;
} Ensemble056;

// ensemble0_56 Initialisation function
void Ensemble056Init(Ensemble056* me);

// ensemble0_56 Execution function
void Ensemble056Run(Ensemble056* me);

#endif // ENSEMBLE0_56_H_