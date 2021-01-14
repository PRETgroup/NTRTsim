#ifndef ENSEMBLE1_37_H_
#define ENSEMBLE1_37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_37 States
enum Ensemble137States {
    ENSEMBLE1_37_INTEGRATE,
    ENSEMBLE1_37_LIMIT,
    ENSEMBLE1_37_SPIKE,
    ENSEMBLE1_37_REFRACTORY,
};

// ensemble1_37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble137States state;
} Ensemble137;

// ensemble1_37 Initialisation function
void Ensemble137Init(Ensemble137* me);

// ensemble1_37 Execution function
void Ensemble137Run(Ensemble137* me);

#endif // ENSEMBLE1_37_H_