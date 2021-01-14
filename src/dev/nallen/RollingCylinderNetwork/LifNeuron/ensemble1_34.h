#ifndef ENSEMBLE1_34_H_
#define ENSEMBLE1_34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_34 States
enum Ensemble134States {
    ENSEMBLE1_34_INTEGRATE,
    ENSEMBLE1_34_LIMIT,
    ENSEMBLE1_34_SPIKE,
    ENSEMBLE1_34_REFRACTORY,
};

// ensemble1_34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble134States state;
} Ensemble134;

// ensemble1_34 Initialisation function
void Ensemble134Init(Ensemble134* me);

// ensemble1_34 Execution function
void Ensemble134Run(Ensemble134* me);

#endif // ENSEMBLE1_34_H_