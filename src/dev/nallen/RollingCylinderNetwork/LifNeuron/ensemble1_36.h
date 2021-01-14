#ifndef ENSEMBLE1_36_H_
#define ENSEMBLE1_36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_36 States
enum Ensemble136States {
    ENSEMBLE1_36_INTEGRATE,
    ENSEMBLE1_36_LIMIT,
    ENSEMBLE1_36_SPIKE,
    ENSEMBLE1_36_REFRACTORY,
};

// ensemble1_36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble136States state;
} Ensemble136;

// ensemble1_36 Initialisation function
void Ensemble136Init(Ensemble136* me);

// ensemble1_36 Execution function
void Ensemble136Run(Ensemble136* me);

#endif // ENSEMBLE1_36_H_