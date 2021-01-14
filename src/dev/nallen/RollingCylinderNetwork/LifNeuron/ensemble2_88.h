#ifndef ENSEMBLE2_88_H_
#define ENSEMBLE2_88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_88 States
enum Ensemble288States {
    ENSEMBLE2_88_INTEGRATE,
    ENSEMBLE2_88_LIMIT,
    ENSEMBLE2_88_SPIKE,
    ENSEMBLE2_88_REFRACTORY,
};

// ensemble2_88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble288States state;
} Ensemble288;

// ensemble2_88 Initialisation function
void Ensemble288Init(Ensemble288* me);

// ensemble2_88 Execution function
void Ensemble288Run(Ensemble288* me);

#endif // ENSEMBLE2_88_H_