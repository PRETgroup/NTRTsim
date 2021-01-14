#ifndef ENSEMBLE3_0_H_
#define ENSEMBLE3_0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_0 States
enum Ensemble30States {
    ENSEMBLE3_0_INTEGRATE,
    ENSEMBLE3_0_LIMIT,
    ENSEMBLE3_0_SPIKE,
    ENSEMBLE3_0_REFRACTORY,
};

// ensemble3_0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble30States state;
} Ensemble30;

// ensemble3_0 Initialisation function
void Ensemble30Init(Ensemble30* me);

// ensemble3_0 Execution function
void Ensemble30Run(Ensemble30* me);

#endif // ENSEMBLE3_0_H_