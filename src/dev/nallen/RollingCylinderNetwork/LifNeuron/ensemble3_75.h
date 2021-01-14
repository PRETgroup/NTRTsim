#ifndef ENSEMBLE3_75_H_
#define ENSEMBLE3_75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_75 States
enum Ensemble375States {
    ENSEMBLE3_75_INTEGRATE,
    ENSEMBLE3_75_LIMIT,
    ENSEMBLE3_75_SPIKE,
    ENSEMBLE3_75_REFRACTORY,
};

// ensemble3_75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble375States state;
} Ensemble375;

// ensemble3_75 Initialisation function
void Ensemble375Init(Ensemble375* me);

// ensemble3_75 Execution function
void Ensemble375Run(Ensemble375* me);

#endif // ENSEMBLE3_75_H_