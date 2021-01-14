#ifndef ENSEMBLE2_94_H_
#define ENSEMBLE2_94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_94 States
enum Ensemble294States {
    ENSEMBLE2_94_INTEGRATE,
    ENSEMBLE2_94_LIMIT,
    ENSEMBLE2_94_SPIKE,
    ENSEMBLE2_94_REFRACTORY,
};

// ensemble2_94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble294States state;
} Ensemble294;

// ensemble2_94 Initialisation function
void Ensemble294Init(Ensemble294* me);

// ensemble2_94 Execution function
void Ensemble294Run(Ensemble294* me);

#endif // ENSEMBLE2_94_H_