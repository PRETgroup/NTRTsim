#ifndef ENSEMBLE1_94_H_
#define ENSEMBLE1_94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_94 States
enum Ensemble194States {
    ENSEMBLE1_94_INTEGRATE,
    ENSEMBLE1_94_LIMIT,
    ENSEMBLE1_94_SPIKE,
    ENSEMBLE1_94_REFRACTORY,
};

// ensemble1_94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble194States state;
} Ensemble194;

// ensemble1_94 Initialisation function
void Ensemble194Init(Ensemble194* me);

// ensemble1_94 Execution function
void Ensemble194Run(Ensemble194* me);

#endif // ENSEMBLE1_94_H_