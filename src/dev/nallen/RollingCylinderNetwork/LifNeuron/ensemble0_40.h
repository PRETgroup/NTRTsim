#ifndef ENSEMBLE0_40_H_
#define ENSEMBLE0_40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_40 States
enum Ensemble040States {
    ENSEMBLE0_40_INTEGRATE,
    ENSEMBLE0_40_LIMIT,
    ENSEMBLE0_40_SPIKE,
    ENSEMBLE0_40_REFRACTORY,
};

// ensemble0_40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble040States state;
} Ensemble040;

// ensemble0_40 Initialisation function
void Ensemble040Init(Ensemble040* me);

// ensemble0_40 Execution function
void Ensemble040Run(Ensemble040* me);

#endif // ENSEMBLE0_40_H_