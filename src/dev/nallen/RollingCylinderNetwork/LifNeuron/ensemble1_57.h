#ifndef ENSEMBLE1_57_H_
#define ENSEMBLE1_57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_57 States
enum Ensemble157States {
    ENSEMBLE1_57_INTEGRATE,
    ENSEMBLE1_57_LIMIT,
    ENSEMBLE1_57_SPIKE,
    ENSEMBLE1_57_REFRACTORY,
};

// ensemble1_57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble157States state;
} Ensemble157;

// ensemble1_57 Initialisation function
void Ensemble157Init(Ensemble157* me);

// ensemble1_57 Execution function
void Ensemble157Run(Ensemble157* me);

#endif // ENSEMBLE1_57_H_