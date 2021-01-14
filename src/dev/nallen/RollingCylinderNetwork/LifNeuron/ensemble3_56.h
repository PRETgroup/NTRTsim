#ifndef ENSEMBLE3_56_H_
#define ENSEMBLE3_56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_56 States
enum Ensemble356States {
    ENSEMBLE3_56_INTEGRATE,
    ENSEMBLE3_56_LIMIT,
    ENSEMBLE3_56_SPIKE,
    ENSEMBLE3_56_REFRACTORY,
};

// ensemble3_56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble356States state;
} Ensemble356;

// ensemble3_56 Initialisation function
void Ensemble356Init(Ensemble356* me);

// ensemble3_56 Execution function
void Ensemble356Run(Ensemble356* me);

#endif // ENSEMBLE3_56_H_