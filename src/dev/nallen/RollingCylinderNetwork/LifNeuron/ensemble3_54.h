#ifndef ENSEMBLE3_54_H_
#define ENSEMBLE3_54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_54 States
enum Ensemble354States {
    ENSEMBLE3_54_INTEGRATE,
    ENSEMBLE3_54_LIMIT,
    ENSEMBLE3_54_SPIKE,
    ENSEMBLE3_54_REFRACTORY,
};

// ensemble3_54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble354States state;
} Ensemble354;

// ensemble3_54 Initialisation function
void Ensemble354Init(Ensemble354* me);

// ensemble3_54 Execution function
void Ensemble354Run(Ensemble354* me);

#endif // ENSEMBLE3_54_H_