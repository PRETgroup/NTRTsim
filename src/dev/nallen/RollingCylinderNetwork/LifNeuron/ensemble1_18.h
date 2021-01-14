#ifndef ENSEMBLE1_18_H_
#define ENSEMBLE1_18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_18 States
enum Ensemble118States {
    ENSEMBLE1_18_INTEGRATE,
    ENSEMBLE1_18_LIMIT,
    ENSEMBLE1_18_SPIKE,
    ENSEMBLE1_18_REFRACTORY,
};

// ensemble1_18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble118States state;
} Ensemble118;

// ensemble1_18 Initialisation function
void Ensemble118Init(Ensemble118* me);

// ensemble1_18 Execution function
void Ensemble118Run(Ensemble118* me);

#endif // ENSEMBLE1_18_H_