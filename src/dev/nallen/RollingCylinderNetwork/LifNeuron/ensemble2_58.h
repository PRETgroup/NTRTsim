#ifndef ENSEMBLE2_58_H_
#define ENSEMBLE2_58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_58 States
enum Ensemble258States {
    ENSEMBLE2_58_INTEGRATE,
    ENSEMBLE2_58_LIMIT,
    ENSEMBLE2_58_SPIKE,
    ENSEMBLE2_58_REFRACTORY,
};

// ensemble2_58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble258States state;
} Ensemble258;

// ensemble2_58 Initialisation function
void Ensemble258Init(Ensemble258* me);

// ensemble2_58 Execution function
void Ensemble258Run(Ensemble258* me);

#endif // ENSEMBLE2_58_H_