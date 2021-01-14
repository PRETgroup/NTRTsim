#ifndef ENSEMBLE0_9_H_
#define ENSEMBLE0_9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_9 States
enum Ensemble09States {
    ENSEMBLE0_9_INTEGRATE,
    ENSEMBLE0_9_LIMIT,
    ENSEMBLE0_9_SPIKE,
    ENSEMBLE0_9_REFRACTORY,
};

// ensemble0_9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble09States state;
} Ensemble09;

// ensemble0_9 Initialisation function
void Ensemble09Init(Ensemble09* me);

// ensemble0_9 Execution function
void Ensemble09Run(Ensemble09* me);

#endif // ENSEMBLE0_9_H_