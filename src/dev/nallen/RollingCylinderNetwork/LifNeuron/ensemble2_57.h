#ifndef ENSEMBLE2_57_H_
#define ENSEMBLE2_57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_57 States
enum Ensemble257States {
    ENSEMBLE2_57_INTEGRATE,
    ENSEMBLE2_57_LIMIT,
    ENSEMBLE2_57_SPIKE,
    ENSEMBLE2_57_REFRACTORY,
};

// ensemble2_57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble257States state;
} Ensemble257;

// ensemble2_57 Initialisation function
void Ensemble257Init(Ensemble257* me);

// ensemble2_57 Execution function
void Ensemble257Run(Ensemble257* me);

#endif // ENSEMBLE2_57_H_