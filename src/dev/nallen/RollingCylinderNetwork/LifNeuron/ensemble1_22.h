#ifndef ENSEMBLE1_22_H_
#define ENSEMBLE1_22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_22 States
enum Ensemble122States {
    ENSEMBLE1_22_INTEGRATE,
    ENSEMBLE1_22_LIMIT,
    ENSEMBLE1_22_SPIKE,
    ENSEMBLE1_22_REFRACTORY,
};

// ensemble1_22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble122States state;
} Ensemble122;

// ensemble1_22 Initialisation function
void Ensemble122Init(Ensemble122* me);

// ensemble1_22 Execution function
void Ensemble122Run(Ensemble122* me);

#endif // ENSEMBLE1_22_H_