#ifndef ENSEMBLE2_2_H_
#define ENSEMBLE2_2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_2 States
enum Ensemble22States {
    ENSEMBLE2_2_INTEGRATE,
    ENSEMBLE2_2_LIMIT,
    ENSEMBLE2_2_SPIKE,
    ENSEMBLE2_2_REFRACTORY,
};

// ensemble2_2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble22States state;
} Ensemble22;

// ensemble2_2 Initialisation function
void Ensemble22Init(Ensemble22* me);

// ensemble2_2 Execution function
void Ensemble22Run(Ensemble22* me);

#endif // ENSEMBLE2_2_H_