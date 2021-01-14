#ifndef ENSEMBLE2_72_H_
#define ENSEMBLE2_72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_72 States
enum Ensemble272States {
    ENSEMBLE2_72_INTEGRATE,
    ENSEMBLE2_72_LIMIT,
    ENSEMBLE2_72_SPIKE,
    ENSEMBLE2_72_REFRACTORY,
};

// ensemble2_72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble272States state;
} Ensemble272;

// ensemble2_72 Initialisation function
void Ensemble272Init(Ensemble272* me);

// ensemble2_72 Execution function
void Ensemble272Run(Ensemble272* me);

#endif // ENSEMBLE2_72_H_