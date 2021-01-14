#ifndef ENSEMBLE0_84_H_
#define ENSEMBLE0_84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_84 States
enum Ensemble084States {
    ENSEMBLE0_84_INTEGRATE,
    ENSEMBLE0_84_LIMIT,
    ENSEMBLE0_84_SPIKE,
    ENSEMBLE0_84_REFRACTORY,
};

// ensemble0_84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble084States state;
} Ensemble084;

// ensemble0_84 Initialisation function
void Ensemble084Init(Ensemble084* me);

// ensemble0_84 Execution function
void Ensemble084Run(Ensemble084* me);

#endif // ENSEMBLE0_84_H_