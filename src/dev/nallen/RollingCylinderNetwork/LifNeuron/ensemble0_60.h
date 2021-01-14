#ifndef ENSEMBLE0_60_H_
#define ENSEMBLE0_60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_60 States
enum Ensemble060States {
    ENSEMBLE0_60_INTEGRATE,
    ENSEMBLE0_60_LIMIT,
    ENSEMBLE0_60_SPIKE,
    ENSEMBLE0_60_REFRACTORY,
};

// ensemble0_60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble060States state;
} Ensemble060;

// ensemble0_60 Initialisation function
void Ensemble060Init(Ensemble060* me);

// ensemble0_60 Execution function
void Ensemble060Run(Ensemble060* me);

#endif // ENSEMBLE0_60_H_