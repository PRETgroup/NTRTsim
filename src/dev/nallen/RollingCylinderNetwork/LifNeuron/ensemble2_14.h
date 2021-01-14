#ifndef ENSEMBLE2_14_H_
#define ENSEMBLE2_14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_14 States
enum Ensemble214States {
    ENSEMBLE2_14_INTEGRATE,
    ENSEMBLE2_14_LIMIT,
    ENSEMBLE2_14_SPIKE,
    ENSEMBLE2_14_REFRACTORY,
};

// ensemble2_14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble214States state;
} Ensemble214;

// ensemble2_14 Initialisation function
void Ensemble214Init(Ensemble214* me);

// ensemble2_14 Execution function
void Ensemble214Run(Ensemble214* me);

#endif // ENSEMBLE2_14_H_