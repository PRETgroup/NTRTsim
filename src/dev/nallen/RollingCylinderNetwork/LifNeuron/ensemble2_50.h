#ifndef ENSEMBLE2_50_H_
#define ENSEMBLE2_50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_50 States
enum Ensemble250States {
    ENSEMBLE2_50_INTEGRATE,
    ENSEMBLE2_50_LIMIT,
    ENSEMBLE2_50_SPIKE,
    ENSEMBLE2_50_REFRACTORY,
};

// ensemble2_50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble250States state;
} Ensemble250;

// ensemble2_50 Initialisation function
void Ensemble250Init(Ensemble250* me);

// ensemble2_50 Execution function
void Ensemble250Run(Ensemble250* me);

#endif // ENSEMBLE2_50_H_