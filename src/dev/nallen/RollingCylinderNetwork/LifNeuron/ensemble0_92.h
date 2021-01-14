#ifndef ENSEMBLE0_92_H_
#define ENSEMBLE0_92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_92 States
enum Ensemble092States {
    ENSEMBLE0_92_INTEGRATE,
    ENSEMBLE0_92_LIMIT,
    ENSEMBLE0_92_SPIKE,
    ENSEMBLE0_92_REFRACTORY,
};

// ensemble0_92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble092States state;
} Ensemble092;

// ensemble0_92 Initialisation function
void Ensemble092Init(Ensemble092* me);

// ensemble0_92 Execution function
void Ensemble092Run(Ensemble092* me);

#endif // ENSEMBLE0_92_H_