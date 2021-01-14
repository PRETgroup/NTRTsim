#ifndef ENSEMBLE0_95_H_
#define ENSEMBLE0_95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_95 States
enum Ensemble095States {
    ENSEMBLE0_95_INTEGRATE,
    ENSEMBLE0_95_LIMIT,
    ENSEMBLE0_95_SPIKE,
    ENSEMBLE0_95_REFRACTORY,
};

// ensemble0_95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble095States state;
} Ensemble095;

// ensemble0_95 Initialisation function
void Ensemble095Init(Ensemble095* me);

// ensemble0_95 Execution function
void Ensemble095Run(Ensemble095* me);

#endif // ENSEMBLE0_95_H_