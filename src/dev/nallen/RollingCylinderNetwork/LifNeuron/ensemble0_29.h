#ifndef ENSEMBLE0_29_H_
#define ENSEMBLE0_29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_29 States
enum Ensemble029States {
    ENSEMBLE0_29_INTEGRATE,
    ENSEMBLE0_29_LIMIT,
    ENSEMBLE0_29_SPIKE,
    ENSEMBLE0_29_REFRACTORY,
};

// ensemble0_29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble029States state;
} Ensemble029;

// ensemble0_29 Initialisation function
void Ensemble029Init(Ensemble029* me);

// ensemble0_29 Execution function
void Ensemble029Run(Ensemble029* me);

#endif // ENSEMBLE0_29_H_