#ifndef ENSEMBLE0_83_H_
#define ENSEMBLE0_83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_83 States
enum Ensemble083States {
    ENSEMBLE0_83_INTEGRATE,
    ENSEMBLE0_83_LIMIT,
    ENSEMBLE0_83_SPIKE,
    ENSEMBLE0_83_REFRACTORY,
};

// ensemble0_83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble083States state;
} Ensemble083;

// ensemble0_83 Initialisation function
void Ensemble083Init(Ensemble083* me);

// ensemble0_83 Execution function
void Ensemble083Run(Ensemble083* me);

#endif // ENSEMBLE0_83_H_