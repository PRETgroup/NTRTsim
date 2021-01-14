#ifndef ENSEMBLE2_46_H_
#define ENSEMBLE2_46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_46 States
enum Ensemble246States {
    ENSEMBLE2_46_INTEGRATE,
    ENSEMBLE2_46_LIMIT,
    ENSEMBLE2_46_SPIKE,
    ENSEMBLE2_46_REFRACTORY,
};

// ensemble2_46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble246States state;
} Ensemble246;

// ensemble2_46 Initialisation function
void Ensemble246Init(Ensemble246* me);

// ensemble2_46 Execution function
void Ensemble246Run(Ensemble246* me);

#endif // ENSEMBLE2_46_H_