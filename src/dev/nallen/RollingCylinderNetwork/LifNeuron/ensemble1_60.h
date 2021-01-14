#ifndef ENSEMBLE1_60_H_
#define ENSEMBLE1_60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_60 States
enum Ensemble160States {
    ENSEMBLE1_60_INTEGRATE,
    ENSEMBLE1_60_LIMIT,
    ENSEMBLE1_60_SPIKE,
    ENSEMBLE1_60_REFRACTORY,
};

// ensemble1_60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble160States state;
} Ensemble160;

// ensemble1_60 Initialisation function
void Ensemble160Init(Ensemble160* me);

// ensemble1_60 Execution function
void Ensemble160Run(Ensemble160* me);

#endif // ENSEMBLE1_60_H_