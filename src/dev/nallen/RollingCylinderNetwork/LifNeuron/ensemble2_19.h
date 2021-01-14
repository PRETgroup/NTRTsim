#ifndef ENSEMBLE2_19_H_
#define ENSEMBLE2_19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_19 States
enum Ensemble219States {
    ENSEMBLE2_19_INTEGRATE,
    ENSEMBLE2_19_LIMIT,
    ENSEMBLE2_19_SPIKE,
    ENSEMBLE2_19_REFRACTORY,
};

// ensemble2_19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble219States state;
} Ensemble219;

// ensemble2_19 Initialisation function
void Ensemble219Init(Ensemble219* me);

// ensemble2_19 Execution function
void Ensemble219Run(Ensemble219* me);

#endif // ENSEMBLE2_19_H_