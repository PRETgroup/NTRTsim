#ifndef ENSEMBLE0_58_H_
#define ENSEMBLE0_58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_58 States
enum Ensemble058States {
    ENSEMBLE0_58_INTEGRATE,
    ENSEMBLE0_58_LIMIT,
    ENSEMBLE0_58_SPIKE,
    ENSEMBLE0_58_REFRACTORY,
};

// ensemble0_58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble058States state;
} Ensemble058;

// ensemble0_58 Initialisation function
void Ensemble058Init(Ensemble058* me);

// ensemble0_58 Execution function
void Ensemble058Run(Ensemble058* me);

#endif // ENSEMBLE0_58_H_