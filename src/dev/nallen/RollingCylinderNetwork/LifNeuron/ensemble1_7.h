#ifndef ENSEMBLE1_7_H_
#define ENSEMBLE1_7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_7 States
enum Ensemble17States {
    ENSEMBLE1_7_INTEGRATE,
    ENSEMBLE1_7_LIMIT,
    ENSEMBLE1_7_SPIKE,
    ENSEMBLE1_7_REFRACTORY,
};

// ensemble1_7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble17States state;
} Ensemble17;

// ensemble1_7 Initialisation function
void Ensemble17Init(Ensemble17* me);

// ensemble1_7 Execution function
void Ensemble17Run(Ensemble17* me);

#endif // ENSEMBLE1_7_H_