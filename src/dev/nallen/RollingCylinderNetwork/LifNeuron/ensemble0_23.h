#ifndef ENSEMBLE0_23_H_
#define ENSEMBLE0_23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_23 States
enum Ensemble023States {
    ENSEMBLE0_23_INTEGRATE,
    ENSEMBLE0_23_LIMIT,
    ENSEMBLE0_23_SPIKE,
    ENSEMBLE0_23_REFRACTORY,
};

// ensemble0_23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble023States state;
} Ensemble023;

// ensemble0_23 Initialisation function
void Ensemble023Init(Ensemble023* me);

// ensemble0_23 Execution function
void Ensemble023Run(Ensemble023* me);

#endif // ENSEMBLE0_23_H_