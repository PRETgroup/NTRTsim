#ifndef ENSEMBLE1_74_H_
#define ENSEMBLE1_74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_74 States
enum Ensemble174States {
    ENSEMBLE1_74_INTEGRATE,
    ENSEMBLE1_74_LIMIT,
    ENSEMBLE1_74_SPIKE,
    ENSEMBLE1_74_REFRACTORY,
};

// ensemble1_74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble174States state;
} Ensemble174;

// ensemble1_74 Initialisation function
void Ensemble174Init(Ensemble174* me);

// ensemble1_74 Execution function
void Ensemble174Run(Ensemble174* me);

#endif // ENSEMBLE1_74_H_