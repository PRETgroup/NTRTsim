#ifndef ENSEMBLE0_10_H_
#define ENSEMBLE0_10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_10 States
enum Ensemble010States {
    ENSEMBLE0_10_INTEGRATE,
    ENSEMBLE0_10_LIMIT,
    ENSEMBLE0_10_SPIKE,
    ENSEMBLE0_10_REFRACTORY,
};

// ensemble0_10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble010States state;
} Ensemble010;

// ensemble0_10 Initialisation function
void Ensemble010Init(Ensemble010* me);

// ensemble0_10 Execution function
void Ensemble010Run(Ensemble010* me);

#endif // ENSEMBLE0_10_H_