#ifndef ENSEMBLE2_78_H_
#define ENSEMBLE2_78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_78 States
enum Ensemble278States {
    ENSEMBLE2_78_INTEGRATE,
    ENSEMBLE2_78_LIMIT,
    ENSEMBLE2_78_SPIKE,
    ENSEMBLE2_78_REFRACTORY,
};

// ensemble2_78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble278States state;
} Ensemble278;

// ensemble2_78 Initialisation function
void Ensemble278Init(Ensemble278* me);

// ensemble2_78 Execution function
void Ensemble278Run(Ensemble278* me);

#endif // ENSEMBLE2_78_H_