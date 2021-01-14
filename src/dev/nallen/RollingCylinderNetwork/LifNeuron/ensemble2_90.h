#ifndef ENSEMBLE2_90_H_
#define ENSEMBLE2_90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_90 States
enum Ensemble290States {
    ENSEMBLE2_90_INTEGRATE,
    ENSEMBLE2_90_LIMIT,
    ENSEMBLE2_90_SPIKE,
    ENSEMBLE2_90_REFRACTORY,
};

// ensemble2_90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble290States state;
} Ensemble290;

// ensemble2_90 Initialisation function
void Ensemble290Init(Ensemble290* me);

// ensemble2_90 Execution function
void Ensemble290Run(Ensemble290* me);

#endif // ENSEMBLE2_90_H_