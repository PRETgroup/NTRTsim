#ifndef ENSEMBLE2_12_H_
#define ENSEMBLE2_12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_12 States
enum Ensemble212States {
    ENSEMBLE2_12_INTEGRATE,
    ENSEMBLE2_12_LIMIT,
    ENSEMBLE2_12_SPIKE,
    ENSEMBLE2_12_REFRACTORY,
};

// ensemble2_12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble212States state;
} Ensemble212;

// ensemble2_12 Initialisation function
void Ensemble212Init(Ensemble212* me);

// ensemble2_12 Execution function
void Ensemble212Run(Ensemble212* me);

#endif // ENSEMBLE2_12_H_