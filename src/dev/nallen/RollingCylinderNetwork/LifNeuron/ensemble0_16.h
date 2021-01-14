#ifndef ENSEMBLE0_16_H_
#define ENSEMBLE0_16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_16 States
enum Ensemble016States {
    ENSEMBLE0_16_INTEGRATE,
    ENSEMBLE0_16_LIMIT,
    ENSEMBLE0_16_SPIKE,
    ENSEMBLE0_16_REFRACTORY,
};

// ensemble0_16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble016States state;
} Ensemble016;

// ensemble0_16 Initialisation function
void Ensemble016Init(Ensemble016* me);

// ensemble0_16 Execution function
void Ensemble016Run(Ensemble016* me);

#endif // ENSEMBLE0_16_H_