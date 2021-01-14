#ifndef ENSEMBLE0_38_H_
#define ENSEMBLE0_38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_38 States
enum Ensemble038States {
    ENSEMBLE0_38_INTEGRATE,
    ENSEMBLE0_38_LIMIT,
    ENSEMBLE0_38_SPIKE,
    ENSEMBLE0_38_REFRACTORY,
};

// ensemble0_38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble038States state;
} Ensemble038;

// ensemble0_38 Initialisation function
void Ensemble038Init(Ensemble038* me);

// ensemble0_38 Execution function
void Ensemble038Run(Ensemble038* me);

#endif // ENSEMBLE0_38_H_