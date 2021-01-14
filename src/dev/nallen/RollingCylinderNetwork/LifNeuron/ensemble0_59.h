#ifndef ENSEMBLE0_59_H_
#define ENSEMBLE0_59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_59 States
enum Ensemble059States {
    ENSEMBLE0_59_INTEGRATE,
    ENSEMBLE0_59_LIMIT,
    ENSEMBLE0_59_SPIKE,
    ENSEMBLE0_59_REFRACTORY,
};

// ensemble0_59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble059States state;
} Ensemble059;

// ensemble0_59 Initialisation function
void Ensemble059Init(Ensemble059* me);

// ensemble0_59 Execution function
void Ensemble059Run(Ensemble059* me);

#endif // ENSEMBLE0_59_H_