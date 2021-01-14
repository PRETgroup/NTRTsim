#ifndef ENSEMBLE2_38_H_
#define ENSEMBLE2_38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_38 States
enum Ensemble238States {
    ENSEMBLE2_38_INTEGRATE,
    ENSEMBLE2_38_LIMIT,
    ENSEMBLE2_38_SPIKE,
    ENSEMBLE2_38_REFRACTORY,
};

// ensemble2_38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble238States state;
} Ensemble238;

// ensemble2_38 Initialisation function
void Ensemble238Init(Ensemble238* me);

// ensemble2_38 Execution function
void Ensemble238Run(Ensemble238* me);

#endif // ENSEMBLE2_38_H_