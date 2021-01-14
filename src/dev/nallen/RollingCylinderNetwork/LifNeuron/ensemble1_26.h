#ifndef ENSEMBLE1_26_H_
#define ENSEMBLE1_26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_26 States
enum Ensemble126States {
    ENSEMBLE1_26_INTEGRATE,
    ENSEMBLE1_26_LIMIT,
    ENSEMBLE1_26_SPIKE,
    ENSEMBLE1_26_REFRACTORY,
};

// ensemble1_26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble126States state;
} Ensemble126;

// ensemble1_26 Initialisation function
void Ensemble126Init(Ensemble126* me);

// ensemble1_26 Execution function
void Ensemble126Run(Ensemble126* me);

#endif // ENSEMBLE1_26_H_