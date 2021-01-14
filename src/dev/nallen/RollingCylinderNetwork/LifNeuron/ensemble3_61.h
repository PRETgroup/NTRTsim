#ifndef ENSEMBLE3_61_H_
#define ENSEMBLE3_61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_61 States
enum Ensemble361States {
    ENSEMBLE3_61_INTEGRATE,
    ENSEMBLE3_61_LIMIT,
    ENSEMBLE3_61_SPIKE,
    ENSEMBLE3_61_REFRACTORY,
};

// ensemble3_61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble361States state;
} Ensemble361;

// ensemble3_61 Initialisation function
void Ensemble361Init(Ensemble361* me);

// ensemble3_61 Execution function
void Ensemble361Run(Ensemble361* me);

#endif // ENSEMBLE3_61_H_