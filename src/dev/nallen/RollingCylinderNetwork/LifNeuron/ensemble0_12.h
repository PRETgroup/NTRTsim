#ifndef ENSEMBLE0_12_H_
#define ENSEMBLE0_12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_12 States
enum Ensemble012States {
    ENSEMBLE0_12_INTEGRATE,
    ENSEMBLE0_12_LIMIT,
    ENSEMBLE0_12_SPIKE,
    ENSEMBLE0_12_REFRACTORY,
};

// ensemble0_12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble012States state;
} Ensemble012;

// ensemble0_12 Initialisation function
void Ensemble012Init(Ensemble012* me);

// ensemble0_12 Execution function
void Ensemble012Run(Ensemble012* me);

#endif // ENSEMBLE0_12_H_