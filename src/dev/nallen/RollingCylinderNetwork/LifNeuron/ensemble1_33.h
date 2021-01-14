#ifndef ENSEMBLE1_33_H_
#define ENSEMBLE1_33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_33 States
enum Ensemble133States {
    ENSEMBLE1_33_INTEGRATE,
    ENSEMBLE1_33_LIMIT,
    ENSEMBLE1_33_SPIKE,
    ENSEMBLE1_33_REFRACTORY,
};

// ensemble1_33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble133States state;
} Ensemble133;

// ensemble1_33 Initialisation function
void Ensemble133Init(Ensemble133* me);

// ensemble1_33 Execution function
void Ensemble133Run(Ensemble133* me);

#endif // ENSEMBLE1_33_H_