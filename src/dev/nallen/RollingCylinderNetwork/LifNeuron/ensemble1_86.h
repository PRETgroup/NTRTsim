#ifndef ENSEMBLE1_86_H_
#define ENSEMBLE1_86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_86 States
enum Ensemble186States {
    ENSEMBLE1_86_INTEGRATE,
    ENSEMBLE1_86_LIMIT,
    ENSEMBLE1_86_SPIKE,
    ENSEMBLE1_86_REFRACTORY,
};

// ensemble1_86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble186States state;
} Ensemble186;

// ensemble1_86 Initialisation function
void Ensemble186Init(Ensemble186* me);

// ensemble1_86 Execution function
void Ensemble186Run(Ensemble186* me);

#endif // ENSEMBLE1_86_H_