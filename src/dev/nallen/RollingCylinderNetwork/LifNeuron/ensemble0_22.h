#ifndef ENSEMBLE0_22_H_
#define ENSEMBLE0_22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_22 States
enum Ensemble022States {
    ENSEMBLE0_22_INTEGRATE,
    ENSEMBLE0_22_LIMIT,
    ENSEMBLE0_22_SPIKE,
    ENSEMBLE0_22_REFRACTORY,
};

// ensemble0_22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble022States state;
} Ensemble022;

// ensemble0_22 Initialisation function
void Ensemble022Init(Ensemble022* me);

// ensemble0_22 Execution function
void Ensemble022Run(Ensemble022* me);

#endif // ENSEMBLE0_22_H_