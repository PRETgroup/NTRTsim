#ifndef ENSEMBLE2_32_H_
#define ENSEMBLE2_32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_32 States
enum Ensemble232States {
    ENSEMBLE2_32_INTEGRATE,
    ENSEMBLE2_32_LIMIT,
    ENSEMBLE2_32_SPIKE,
    ENSEMBLE2_32_REFRACTORY,
};

// ensemble2_32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble232States state;
} Ensemble232;

// ensemble2_32 Initialisation function
void Ensemble232Init(Ensemble232* me);

// ensemble2_32 Execution function
void Ensemble232Run(Ensemble232* me);

#endif // ENSEMBLE2_32_H_