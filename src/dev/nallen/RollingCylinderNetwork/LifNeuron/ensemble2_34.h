#ifndef ENSEMBLE2_34_H_
#define ENSEMBLE2_34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_34 States
enum Ensemble234States {
    ENSEMBLE2_34_INTEGRATE,
    ENSEMBLE2_34_LIMIT,
    ENSEMBLE2_34_SPIKE,
    ENSEMBLE2_34_REFRACTORY,
};

// ensemble2_34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble234States state;
} Ensemble234;

// ensemble2_34 Initialisation function
void Ensemble234Init(Ensemble234* me);

// ensemble2_34 Execution function
void Ensemble234Run(Ensemble234* me);

#endif // ENSEMBLE2_34_H_