#ifndef ENSEMBLE1_50_H_
#define ENSEMBLE1_50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_50 States
enum Ensemble150States {
    ENSEMBLE1_50_INTEGRATE,
    ENSEMBLE1_50_LIMIT,
    ENSEMBLE1_50_SPIKE,
    ENSEMBLE1_50_REFRACTORY,
};

// ensemble1_50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble150States state;
} Ensemble150;

// ensemble1_50 Initialisation function
void Ensemble150Init(Ensemble150* me);

// ensemble1_50 Execution function
void Ensemble150Run(Ensemble150* me);

#endif // ENSEMBLE1_50_H_