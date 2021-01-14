#ifndef ENSEMBLE2_61_H_
#define ENSEMBLE2_61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_61 States
enum Ensemble261States {
    ENSEMBLE2_61_INTEGRATE,
    ENSEMBLE2_61_LIMIT,
    ENSEMBLE2_61_SPIKE,
    ENSEMBLE2_61_REFRACTORY,
};

// ensemble2_61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble261States state;
} Ensemble261;

// ensemble2_61 Initialisation function
void Ensemble261Init(Ensemble261* me);

// ensemble2_61 Execution function
void Ensemble261Run(Ensemble261* me);

#endif // ENSEMBLE2_61_H_