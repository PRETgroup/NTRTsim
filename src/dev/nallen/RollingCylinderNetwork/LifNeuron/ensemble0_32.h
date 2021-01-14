#ifndef ENSEMBLE0_32_H_
#define ENSEMBLE0_32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_32 States
enum Ensemble032States {
    ENSEMBLE0_32_INTEGRATE,
    ENSEMBLE0_32_LIMIT,
    ENSEMBLE0_32_SPIKE,
    ENSEMBLE0_32_REFRACTORY,
};

// ensemble0_32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble032States state;
} Ensemble032;

// ensemble0_32 Initialisation function
void Ensemble032Init(Ensemble032* me);

// ensemble0_32 Execution function
void Ensemble032Run(Ensemble032* me);

#endif // ENSEMBLE0_32_H_