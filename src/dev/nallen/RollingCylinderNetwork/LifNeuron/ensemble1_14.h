#ifndef ENSEMBLE1_14_H_
#define ENSEMBLE1_14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_14 States
enum Ensemble114States {
    ENSEMBLE1_14_INTEGRATE,
    ENSEMBLE1_14_LIMIT,
    ENSEMBLE1_14_SPIKE,
    ENSEMBLE1_14_REFRACTORY,
};

// ensemble1_14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble114States state;
} Ensemble114;

// ensemble1_14 Initialisation function
void Ensemble114Init(Ensemble114* me);

// ensemble1_14 Execution function
void Ensemble114Run(Ensemble114* me);

#endif // ENSEMBLE1_14_H_