#ifndef ENSEMBLE3_23_H_
#define ENSEMBLE3_23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_23 States
enum Ensemble323States {
    ENSEMBLE3_23_INTEGRATE,
    ENSEMBLE3_23_LIMIT,
    ENSEMBLE3_23_SPIKE,
    ENSEMBLE3_23_REFRACTORY,
};

// ensemble3_23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble323States state;
} Ensemble323;

// ensemble3_23 Initialisation function
void Ensemble323Init(Ensemble323* me);

// ensemble3_23 Execution function
void Ensemble323Run(Ensemble323* me);

#endif // ENSEMBLE3_23_H_