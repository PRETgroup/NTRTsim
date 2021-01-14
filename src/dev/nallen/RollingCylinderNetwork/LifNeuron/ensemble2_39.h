#ifndef ENSEMBLE2_39_H_
#define ENSEMBLE2_39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_39 States
enum Ensemble239States {
    ENSEMBLE2_39_INTEGRATE,
    ENSEMBLE2_39_LIMIT,
    ENSEMBLE2_39_SPIKE,
    ENSEMBLE2_39_REFRACTORY,
};

// ensemble2_39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble239States state;
} Ensemble239;

// ensemble2_39 Initialisation function
void Ensemble239Init(Ensemble239* me);

// ensemble2_39 Execution function
void Ensemble239Run(Ensemble239* me);

#endif // ENSEMBLE2_39_H_