#ifndef ENSEMBLE1_28_H_
#define ENSEMBLE1_28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_28 States
enum Ensemble128States {
    ENSEMBLE1_28_INTEGRATE,
    ENSEMBLE1_28_LIMIT,
    ENSEMBLE1_28_SPIKE,
    ENSEMBLE1_28_REFRACTORY,
};

// ensemble1_28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble128States state;
} Ensemble128;

// ensemble1_28 Initialisation function
void Ensemble128Init(Ensemble128* me);

// ensemble1_28 Execution function
void Ensemble128Run(Ensemble128* me);

#endif // ENSEMBLE1_28_H_