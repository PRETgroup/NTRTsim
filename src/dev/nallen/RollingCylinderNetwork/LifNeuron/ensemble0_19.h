#ifndef ENSEMBLE0_19_H_
#define ENSEMBLE0_19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_19 States
enum Ensemble019States {
    ENSEMBLE0_19_INTEGRATE,
    ENSEMBLE0_19_LIMIT,
    ENSEMBLE0_19_SPIKE,
    ENSEMBLE0_19_REFRACTORY,
};

// ensemble0_19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble019States state;
} Ensemble019;

// ensemble0_19 Initialisation function
void Ensemble019Init(Ensemble019* me);

// ensemble0_19 Execution function
void Ensemble019Run(Ensemble019* me);

#endif // ENSEMBLE0_19_H_