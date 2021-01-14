#ifndef ENSEMBLE0_64_H_
#define ENSEMBLE0_64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_64 States
enum Ensemble064States {
    ENSEMBLE0_64_INTEGRATE,
    ENSEMBLE0_64_LIMIT,
    ENSEMBLE0_64_SPIKE,
    ENSEMBLE0_64_REFRACTORY,
};

// ensemble0_64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble064States state;
} Ensemble064;

// ensemble0_64 Initialisation function
void Ensemble064Init(Ensemble064* me);

// ensemble0_64 Execution function
void Ensemble064Run(Ensemble064* me);

#endif // ENSEMBLE0_64_H_