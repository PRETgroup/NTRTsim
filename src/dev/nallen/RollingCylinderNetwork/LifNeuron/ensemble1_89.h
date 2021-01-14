#ifndef ENSEMBLE1_89_H_
#define ENSEMBLE1_89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_89 States
enum Ensemble189States {
    ENSEMBLE1_89_INTEGRATE,
    ENSEMBLE1_89_LIMIT,
    ENSEMBLE1_89_SPIKE,
    ENSEMBLE1_89_REFRACTORY,
};

// ensemble1_89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble189States state;
} Ensemble189;

// ensemble1_89 Initialisation function
void Ensemble189Init(Ensemble189* me);

// ensemble1_89 Execution function
void Ensemble189Run(Ensemble189* me);

#endif // ENSEMBLE1_89_H_