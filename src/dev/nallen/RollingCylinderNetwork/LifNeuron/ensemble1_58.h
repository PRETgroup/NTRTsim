#ifndef ENSEMBLE1_58_H_
#define ENSEMBLE1_58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_58 States
enum Ensemble158States {
    ENSEMBLE1_58_INTEGRATE,
    ENSEMBLE1_58_LIMIT,
    ENSEMBLE1_58_SPIKE,
    ENSEMBLE1_58_REFRACTORY,
};

// ensemble1_58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble158States state;
} Ensemble158;

// ensemble1_58 Initialisation function
void Ensemble158Init(Ensemble158* me);

// ensemble1_58 Execution function
void Ensemble158Run(Ensemble158* me);

#endif // ENSEMBLE1_58_H_