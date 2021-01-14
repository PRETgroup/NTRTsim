#ifndef ENSEMBLE1_54_H_
#define ENSEMBLE1_54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_54 States
enum Ensemble154States {
    ENSEMBLE1_54_INTEGRATE,
    ENSEMBLE1_54_LIMIT,
    ENSEMBLE1_54_SPIKE,
    ENSEMBLE1_54_REFRACTORY,
};

// ensemble1_54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble154States state;
} Ensemble154;

// ensemble1_54 Initialisation function
void Ensemble154Init(Ensemble154* me);

// ensemble1_54 Execution function
void Ensemble154Run(Ensemble154* me);

#endif // ENSEMBLE1_54_H_