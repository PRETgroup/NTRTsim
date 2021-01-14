#ifndef ENSEMBLE2_28_H_
#define ENSEMBLE2_28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_28 States
enum Ensemble228States {
    ENSEMBLE2_28_INTEGRATE,
    ENSEMBLE2_28_LIMIT,
    ENSEMBLE2_28_SPIKE,
    ENSEMBLE2_28_REFRACTORY,
};

// ensemble2_28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble228States state;
} Ensemble228;

// ensemble2_28 Initialisation function
void Ensemble228Init(Ensemble228* me);

// ensemble2_28 Execution function
void Ensemble228Run(Ensemble228* me);

#endif // ENSEMBLE2_28_H_