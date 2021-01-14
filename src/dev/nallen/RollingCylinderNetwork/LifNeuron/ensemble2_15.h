#ifndef ENSEMBLE2_15_H_
#define ENSEMBLE2_15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_15 States
enum Ensemble215States {
    ENSEMBLE2_15_INTEGRATE,
    ENSEMBLE2_15_LIMIT,
    ENSEMBLE2_15_SPIKE,
    ENSEMBLE2_15_REFRACTORY,
};

// ensemble2_15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble215States state;
} Ensemble215;

// ensemble2_15 Initialisation function
void Ensemble215Init(Ensemble215* me);

// ensemble2_15 Execution function
void Ensemble215Run(Ensemble215* me);

#endif // ENSEMBLE2_15_H_