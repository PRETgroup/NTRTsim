#ifndef ENSEMBLE1_30_H_
#define ENSEMBLE1_30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_30 States
enum Ensemble130States {
    ENSEMBLE1_30_INTEGRATE,
    ENSEMBLE1_30_LIMIT,
    ENSEMBLE1_30_SPIKE,
    ENSEMBLE1_30_REFRACTORY,
};

// ensemble1_30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble130States state;
} Ensemble130;

// ensemble1_30 Initialisation function
void Ensemble130Init(Ensemble130* me);

// ensemble1_30 Execution function
void Ensemble130Run(Ensemble130* me);

#endif // ENSEMBLE1_30_H_