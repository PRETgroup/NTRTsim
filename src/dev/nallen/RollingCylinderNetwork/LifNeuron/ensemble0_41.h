#ifndef ENSEMBLE0_41_H_
#define ENSEMBLE0_41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_41 States
enum Ensemble041States {
    ENSEMBLE0_41_INTEGRATE,
    ENSEMBLE0_41_LIMIT,
    ENSEMBLE0_41_SPIKE,
    ENSEMBLE0_41_REFRACTORY,
};

// ensemble0_41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble041States state;
} Ensemble041;

// ensemble0_41 Initialisation function
void Ensemble041Init(Ensemble041* me);

// ensemble0_41 Execution function
void Ensemble041Run(Ensemble041* me);

#endif // ENSEMBLE0_41_H_