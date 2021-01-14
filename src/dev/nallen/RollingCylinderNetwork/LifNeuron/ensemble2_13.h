#ifndef ENSEMBLE2_13_H_
#define ENSEMBLE2_13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_13 States
enum Ensemble213States {
    ENSEMBLE2_13_INTEGRATE,
    ENSEMBLE2_13_LIMIT,
    ENSEMBLE2_13_SPIKE,
    ENSEMBLE2_13_REFRACTORY,
};

// ensemble2_13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble213States state;
} Ensemble213;

// ensemble2_13 Initialisation function
void Ensemble213Init(Ensemble213* me);

// ensemble2_13 Execution function
void Ensemble213Run(Ensemble213* me);

#endif // ENSEMBLE2_13_H_