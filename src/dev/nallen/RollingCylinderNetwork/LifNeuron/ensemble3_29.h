#ifndef ENSEMBLE3_29_H_
#define ENSEMBLE3_29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_29 States
enum Ensemble329States {
    ENSEMBLE3_29_INTEGRATE,
    ENSEMBLE3_29_LIMIT,
    ENSEMBLE3_29_SPIKE,
    ENSEMBLE3_29_REFRACTORY,
};

// ensemble3_29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble329States state;
} Ensemble329;

// ensemble3_29 Initialisation function
void Ensemble329Init(Ensemble329* me);

// ensemble3_29 Execution function
void Ensemble329Run(Ensemble329* me);

#endif // ENSEMBLE3_29_H_