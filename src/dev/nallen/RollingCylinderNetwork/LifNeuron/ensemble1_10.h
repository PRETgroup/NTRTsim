#ifndef ENSEMBLE1_10_H_
#define ENSEMBLE1_10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_10 States
enum Ensemble110States {
    ENSEMBLE1_10_INTEGRATE,
    ENSEMBLE1_10_LIMIT,
    ENSEMBLE1_10_SPIKE,
    ENSEMBLE1_10_REFRACTORY,
};

// ensemble1_10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble110States state;
} Ensemble110;

// ensemble1_10 Initialisation function
void Ensemble110Init(Ensemble110* me);

// ensemble1_10 Execution function
void Ensemble110Run(Ensemble110* me);

#endif // ENSEMBLE1_10_H_