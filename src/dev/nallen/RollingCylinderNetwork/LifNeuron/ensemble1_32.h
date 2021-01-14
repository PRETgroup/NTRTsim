#ifndef ENSEMBLE1_32_H_
#define ENSEMBLE1_32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_32 States
enum Ensemble132States {
    ENSEMBLE1_32_INTEGRATE,
    ENSEMBLE1_32_LIMIT,
    ENSEMBLE1_32_SPIKE,
    ENSEMBLE1_32_REFRACTORY,
};

// ensemble1_32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble132States state;
} Ensemble132;

// ensemble1_32 Initialisation function
void Ensemble132Init(Ensemble132* me);

// ensemble1_32 Execution function
void Ensemble132Run(Ensemble132* me);

#endif // ENSEMBLE1_32_H_