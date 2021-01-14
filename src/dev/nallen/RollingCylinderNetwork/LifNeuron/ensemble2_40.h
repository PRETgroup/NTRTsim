#ifndef ENSEMBLE2_40_H_
#define ENSEMBLE2_40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_40 States
enum Ensemble240States {
    ENSEMBLE2_40_INTEGRATE,
    ENSEMBLE2_40_LIMIT,
    ENSEMBLE2_40_SPIKE,
    ENSEMBLE2_40_REFRACTORY,
};

// ensemble2_40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble240States state;
} Ensemble240;

// ensemble2_40 Initialisation function
void Ensemble240Init(Ensemble240* me);

// ensemble2_40 Execution function
void Ensemble240Run(Ensemble240* me);

#endif // ENSEMBLE2_40_H_