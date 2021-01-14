#ifndef ENSEMBLE0_42_H_
#define ENSEMBLE0_42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_42 States
enum Ensemble042States {
    ENSEMBLE0_42_INTEGRATE,
    ENSEMBLE0_42_LIMIT,
    ENSEMBLE0_42_SPIKE,
    ENSEMBLE0_42_REFRACTORY,
};

// ensemble0_42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble042States state;
} Ensemble042;

// ensemble0_42 Initialisation function
void Ensemble042Init(Ensemble042* me);

// ensemble0_42 Execution function
void Ensemble042Run(Ensemble042* me);

#endif // ENSEMBLE0_42_H_