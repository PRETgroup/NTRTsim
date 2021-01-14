#ifndef ENSEMBLE1_15_H_
#define ENSEMBLE1_15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_15 States
enum Ensemble115States {
    ENSEMBLE1_15_INTEGRATE,
    ENSEMBLE1_15_LIMIT,
    ENSEMBLE1_15_SPIKE,
    ENSEMBLE1_15_REFRACTORY,
};

// ensemble1_15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble115States state;
} Ensemble115;

// ensemble1_15 Initialisation function
void Ensemble115Init(Ensemble115* me);

// ensemble1_15 Execution function
void Ensemble115Run(Ensemble115* me);

#endif // ENSEMBLE1_15_H_