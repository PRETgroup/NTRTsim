#ifndef ENSEMBLE1_9_H_
#define ENSEMBLE1_9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_9 States
enum Ensemble19States {
    ENSEMBLE1_9_INTEGRATE,
    ENSEMBLE1_9_LIMIT,
    ENSEMBLE1_9_SPIKE,
    ENSEMBLE1_9_REFRACTORY,
};

// ensemble1_9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble19States state;
} Ensemble19;

// ensemble1_9 Initialisation function
void Ensemble19Init(Ensemble19* me);

// ensemble1_9 Execution function
void Ensemble19Run(Ensemble19* me);

#endif // ENSEMBLE1_9_H_