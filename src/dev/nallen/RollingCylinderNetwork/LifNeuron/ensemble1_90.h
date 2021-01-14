#ifndef ENSEMBLE1_90_H_
#define ENSEMBLE1_90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_90 States
enum Ensemble190States {
    ENSEMBLE1_90_INTEGRATE,
    ENSEMBLE1_90_LIMIT,
    ENSEMBLE1_90_SPIKE,
    ENSEMBLE1_90_REFRACTORY,
};

// ensemble1_90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble190States state;
} Ensemble190;

// ensemble1_90 Initialisation function
void Ensemble190Init(Ensemble190* me);

// ensemble1_90 Execution function
void Ensemble190Run(Ensemble190* me);

#endif // ENSEMBLE1_90_H_