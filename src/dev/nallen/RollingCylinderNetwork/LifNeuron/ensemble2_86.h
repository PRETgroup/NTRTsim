#ifndef ENSEMBLE2_86_H_
#define ENSEMBLE2_86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_86 States
enum Ensemble286States {
    ENSEMBLE2_86_INTEGRATE,
    ENSEMBLE2_86_LIMIT,
    ENSEMBLE2_86_SPIKE,
    ENSEMBLE2_86_REFRACTORY,
};

// ensemble2_86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble286States state;
} Ensemble286;

// ensemble2_86 Initialisation function
void Ensemble286Init(Ensemble286* me);

// ensemble2_86 Execution function
void Ensemble286Run(Ensemble286* me);

#endif // ENSEMBLE2_86_H_