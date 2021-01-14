#ifndef ENSEMBLE2_35_H_
#define ENSEMBLE2_35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_35 States
enum Ensemble235States {
    ENSEMBLE2_35_INTEGRATE,
    ENSEMBLE2_35_LIMIT,
    ENSEMBLE2_35_SPIKE,
    ENSEMBLE2_35_REFRACTORY,
};

// ensemble2_35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble235States state;
} Ensemble235;

// ensemble2_35 Initialisation function
void Ensemble235Init(Ensemble235* me);

// ensemble2_35 Execution function
void Ensemble235Run(Ensemble235* me);

#endif // ENSEMBLE2_35_H_