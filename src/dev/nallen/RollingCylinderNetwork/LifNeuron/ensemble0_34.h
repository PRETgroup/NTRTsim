#ifndef ENSEMBLE0_34_H_
#define ENSEMBLE0_34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_34 States
enum Ensemble034States {
    ENSEMBLE0_34_INTEGRATE,
    ENSEMBLE0_34_LIMIT,
    ENSEMBLE0_34_SPIKE,
    ENSEMBLE0_34_REFRACTORY,
};

// ensemble0_34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble034States state;
} Ensemble034;

// ensemble0_34 Initialisation function
void Ensemble034Init(Ensemble034* me);

// ensemble0_34 Execution function
void Ensemble034Run(Ensemble034* me);

#endif // ENSEMBLE0_34_H_