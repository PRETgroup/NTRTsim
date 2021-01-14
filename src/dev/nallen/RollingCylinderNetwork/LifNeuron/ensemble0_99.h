#ifndef ENSEMBLE0_99_H_
#define ENSEMBLE0_99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_99 States
enum Ensemble099States {
    ENSEMBLE0_99_INTEGRATE,
    ENSEMBLE0_99_LIMIT,
    ENSEMBLE0_99_SPIKE,
    ENSEMBLE0_99_REFRACTORY,
};

// ensemble0_99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble099States state;
} Ensemble099;

// ensemble0_99 Initialisation function
void Ensemble099Init(Ensemble099* me);

// ensemble0_99 Execution function
void Ensemble099Run(Ensemble099* me);

#endif // ENSEMBLE0_99_H_