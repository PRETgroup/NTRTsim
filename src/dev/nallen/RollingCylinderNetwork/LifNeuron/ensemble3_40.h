#ifndef ENSEMBLE3_40_H_
#define ENSEMBLE3_40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_40 States
enum Ensemble340States {
    ENSEMBLE3_40_INTEGRATE,
    ENSEMBLE3_40_LIMIT,
    ENSEMBLE3_40_SPIKE,
    ENSEMBLE3_40_REFRACTORY,
};

// ensemble3_40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble340States state;
} Ensemble340;

// ensemble3_40 Initialisation function
void Ensemble340Init(Ensemble340* me);

// ensemble3_40 Execution function
void Ensemble340Run(Ensemble340* me);

#endif // ENSEMBLE3_40_H_