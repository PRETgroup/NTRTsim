#ifndef ENSEMBLE1_98_H_
#define ENSEMBLE1_98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_98 States
enum Ensemble198States {
    ENSEMBLE1_98_INTEGRATE,
    ENSEMBLE1_98_LIMIT,
    ENSEMBLE1_98_SPIKE,
    ENSEMBLE1_98_REFRACTORY,
};

// ensemble1_98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble198States state;
} Ensemble198;

// ensemble1_98 Initialisation function
void Ensemble198Init(Ensemble198* me);

// ensemble1_98 Execution function
void Ensemble198Run(Ensemble198* me);

#endif // ENSEMBLE1_98_H_