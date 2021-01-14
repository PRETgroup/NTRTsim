#ifndef ENSEMBLE0_36_H_
#define ENSEMBLE0_36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_36 States
enum Ensemble036States {
    ENSEMBLE0_36_INTEGRATE,
    ENSEMBLE0_36_LIMIT,
    ENSEMBLE0_36_SPIKE,
    ENSEMBLE0_36_REFRACTORY,
};

// ensemble0_36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble036States state;
} Ensemble036;

// ensemble0_36 Initialisation function
void Ensemble036Init(Ensemble036* me);

// ensemble0_36 Execution function
void Ensemble036Run(Ensemble036* me);

#endif // ENSEMBLE0_36_H_