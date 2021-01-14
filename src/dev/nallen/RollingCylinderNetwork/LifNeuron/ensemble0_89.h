#ifndef ENSEMBLE0_89_H_
#define ENSEMBLE0_89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_89 States
enum Ensemble089States {
    ENSEMBLE0_89_INTEGRATE,
    ENSEMBLE0_89_LIMIT,
    ENSEMBLE0_89_SPIKE,
    ENSEMBLE0_89_REFRACTORY,
};

// ensemble0_89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble089States state;
} Ensemble089;

// ensemble0_89 Initialisation function
void Ensemble089Init(Ensemble089* me);

// ensemble0_89 Execution function
void Ensemble089Run(Ensemble089* me);

#endif // ENSEMBLE0_89_H_