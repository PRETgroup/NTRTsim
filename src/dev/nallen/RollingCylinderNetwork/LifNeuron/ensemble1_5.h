#ifndef ENSEMBLE1_5_H_
#define ENSEMBLE1_5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_5 States
enum Ensemble15States {
    ENSEMBLE1_5_INTEGRATE,
    ENSEMBLE1_5_LIMIT,
    ENSEMBLE1_5_SPIKE,
    ENSEMBLE1_5_REFRACTORY,
};

// ensemble1_5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble15States state;
} Ensemble15;

// ensemble1_5 Initialisation function
void Ensemble15Init(Ensemble15* me);

// ensemble1_5 Execution function
void Ensemble15Run(Ensemble15* me);

#endif // ENSEMBLE1_5_H_