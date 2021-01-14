#ifndef ENSEMBLE0_90_H_
#define ENSEMBLE0_90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_90 States
enum Ensemble090States {
    ENSEMBLE0_90_INTEGRATE,
    ENSEMBLE0_90_LIMIT,
    ENSEMBLE0_90_SPIKE,
    ENSEMBLE0_90_REFRACTORY,
};

// ensemble0_90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble090States state;
} Ensemble090;

// ensemble0_90 Initialisation function
void Ensemble090Init(Ensemble090* me);

// ensemble0_90 Execution function
void Ensemble090Run(Ensemble090* me);

#endif // ENSEMBLE0_90_H_