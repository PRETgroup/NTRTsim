#ifndef ENSEMBLE1_95_H_
#define ENSEMBLE1_95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_95 States
enum Ensemble195States {
    ENSEMBLE1_95_INTEGRATE,
    ENSEMBLE1_95_LIMIT,
    ENSEMBLE1_95_SPIKE,
    ENSEMBLE1_95_REFRACTORY,
};

// ensemble1_95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble195States state;
} Ensemble195;

// ensemble1_95 Initialisation function
void Ensemble195Init(Ensemble195* me);

// ensemble1_95 Execution function
void Ensemble195Run(Ensemble195* me);

#endif // ENSEMBLE1_95_H_