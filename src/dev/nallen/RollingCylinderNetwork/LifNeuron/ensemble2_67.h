#ifndef ENSEMBLE2_67_H_
#define ENSEMBLE2_67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_67 States
enum Ensemble267States {
    ENSEMBLE2_67_INTEGRATE,
    ENSEMBLE2_67_LIMIT,
    ENSEMBLE2_67_SPIKE,
    ENSEMBLE2_67_REFRACTORY,
};

// ensemble2_67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble267States state;
} Ensemble267;

// ensemble2_67 Initialisation function
void Ensemble267Init(Ensemble267* me);

// ensemble2_67 Execution function
void Ensemble267Run(Ensemble267* me);

#endif // ENSEMBLE2_67_H_