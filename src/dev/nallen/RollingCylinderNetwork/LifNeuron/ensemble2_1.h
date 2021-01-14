#ifndef ENSEMBLE2_1_H_
#define ENSEMBLE2_1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_1 States
enum Ensemble21States {
    ENSEMBLE2_1_INTEGRATE,
    ENSEMBLE2_1_LIMIT,
    ENSEMBLE2_1_SPIKE,
    ENSEMBLE2_1_REFRACTORY,
};

// ensemble2_1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble21States state;
} Ensemble21;

// ensemble2_1 Initialisation function
void Ensemble21Init(Ensemble21* me);

// ensemble2_1 Execution function
void Ensemble21Run(Ensemble21* me);

#endif // ENSEMBLE2_1_H_