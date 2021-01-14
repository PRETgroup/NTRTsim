#ifndef ENSEMBLE2_20_H_
#define ENSEMBLE2_20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_20 States
enum Ensemble220States {
    ENSEMBLE2_20_INTEGRATE,
    ENSEMBLE2_20_LIMIT,
    ENSEMBLE2_20_SPIKE,
    ENSEMBLE2_20_REFRACTORY,
};

// ensemble2_20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble220States state;
} Ensemble220;

// ensemble2_20 Initialisation function
void Ensemble220Init(Ensemble220* me);

// ensemble2_20 Execution function
void Ensemble220Run(Ensemble220* me);

#endif // ENSEMBLE2_20_H_