#ifndef ENSEMBLE0_51_H_
#define ENSEMBLE0_51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_51 States
enum Ensemble051States {
    ENSEMBLE0_51_INTEGRATE,
    ENSEMBLE0_51_LIMIT,
    ENSEMBLE0_51_SPIKE,
    ENSEMBLE0_51_REFRACTORY,
};

// ensemble0_51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble051States state;
} Ensemble051;

// ensemble0_51 Initialisation function
void Ensemble051Init(Ensemble051* me);

// ensemble0_51 Execution function
void Ensemble051Run(Ensemble051* me);

#endif // ENSEMBLE0_51_H_