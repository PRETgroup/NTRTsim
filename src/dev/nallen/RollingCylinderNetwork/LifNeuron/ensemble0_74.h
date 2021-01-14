#ifndef ENSEMBLE0_74_H_
#define ENSEMBLE0_74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_74 States
enum Ensemble074States {
    ENSEMBLE0_74_INTEGRATE,
    ENSEMBLE0_74_LIMIT,
    ENSEMBLE0_74_SPIKE,
    ENSEMBLE0_74_REFRACTORY,
};

// ensemble0_74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble074States state;
} Ensemble074;

// ensemble0_74 Initialisation function
void Ensemble074Init(Ensemble074* me);

// ensemble0_74 Execution function
void Ensemble074Run(Ensemble074* me);

#endif // ENSEMBLE0_74_H_