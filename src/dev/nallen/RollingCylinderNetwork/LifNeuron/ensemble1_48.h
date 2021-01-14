#ifndef ENSEMBLE1_48_H_
#define ENSEMBLE1_48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_48 States
enum Ensemble148States {
    ENSEMBLE1_48_INTEGRATE,
    ENSEMBLE1_48_LIMIT,
    ENSEMBLE1_48_SPIKE,
    ENSEMBLE1_48_REFRACTORY,
};

// ensemble1_48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble148States state;
} Ensemble148;

// ensemble1_48 Initialisation function
void Ensemble148Init(Ensemble148* me);

// ensemble1_48 Execution function
void Ensemble148Run(Ensemble148* me);

#endif // ENSEMBLE1_48_H_