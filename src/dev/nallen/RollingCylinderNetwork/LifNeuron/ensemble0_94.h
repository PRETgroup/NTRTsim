#ifndef ENSEMBLE0_94_H_
#define ENSEMBLE0_94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_94 States
enum Ensemble094States {
    ENSEMBLE0_94_INTEGRATE,
    ENSEMBLE0_94_LIMIT,
    ENSEMBLE0_94_SPIKE,
    ENSEMBLE0_94_REFRACTORY,
};

// ensemble0_94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble094States state;
} Ensemble094;

// ensemble0_94 Initialisation function
void Ensemble094Init(Ensemble094* me);

// ensemble0_94 Execution function
void Ensemble094Run(Ensemble094* me);

#endif // ENSEMBLE0_94_H_