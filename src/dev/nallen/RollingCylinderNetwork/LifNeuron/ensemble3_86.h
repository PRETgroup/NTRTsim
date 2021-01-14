#ifndef ENSEMBLE3_86_H_
#define ENSEMBLE3_86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_86 States
enum Ensemble386States {
    ENSEMBLE3_86_INTEGRATE,
    ENSEMBLE3_86_LIMIT,
    ENSEMBLE3_86_SPIKE,
    ENSEMBLE3_86_REFRACTORY,
};

// ensemble3_86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble386States state;
} Ensemble386;

// ensemble3_86 Initialisation function
void Ensemble386Init(Ensemble386* me);

// ensemble3_86 Execution function
void Ensemble386Run(Ensemble386* me);

#endif // ENSEMBLE3_86_H_