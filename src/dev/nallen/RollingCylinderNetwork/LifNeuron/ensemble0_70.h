#ifndef ENSEMBLE0_70_H_
#define ENSEMBLE0_70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_70 States
enum Ensemble070States {
    ENSEMBLE0_70_INTEGRATE,
    ENSEMBLE0_70_LIMIT,
    ENSEMBLE0_70_SPIKE,
    ENSEMBLE0_70_REFRACTORY,
};

// ensemble0_70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble070States state;
} Ensemble070;

// ensemble0_70 Initialisation function
void Ensemble070Init(Ensemble070* me);

// ensemble0_70 Execution function
void Ensemble070Run(Ensemble070* me);

#endif // ENSEMBLE0_70_H_