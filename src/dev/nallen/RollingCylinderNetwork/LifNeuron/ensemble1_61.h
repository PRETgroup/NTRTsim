#ifndef ENSEMBLE1_61_H_
#define ENSEMBLE1_61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_61 States
enum Ensemble161States {
    ENSEMBLE1_61_INTEGRATE,
    ENSEMBLE1_61_LIMIT,
    ENSEMBLE1_61_SPIKE,
    ENSEMBLE1_61_REFRACTORY,
};

// ensemble1_61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble161States state;
} Ensemble161;

// ensemble1_61 Initialisation function
void Ensemble161Init(Ensemble161* me);

// ensemble1_61 Execution function
void Ensemble161Run(Ensemble161* me);

#endif // ENSEMBLE1_61_H_