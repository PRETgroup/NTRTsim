#ifndef ENSEMBLE0_75_H_
#define ENSEMBLE0_75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_75 States
enum Ensemble075States {
    ENSEMBLE0_75_INTEGRATE,
    ENSEMBLE0_75_LIMIT,
    ENSEMBLE0_75_SPIKE,
    ENSEMBLE0_75_REFRACTORY,
};

// ensemble0_75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble075States state;
} Ensemble075;

// ensemble0_75 Initialisation function
void Ensemble075Init(Ensemble075* me);

// ensemble0_75 Execution function
void Ensemble075Run(Ensemble075* me);

#endif // ENSEMBLE0_75_H_