#ifndef ENSEMBLE2_16_H_
#define ENSEMBLE2_16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_16 States
enum Ensemble216States {
    ENSEMBLE2_16_INTEGRATE,
    ENSEMBLE2_16_LIMIT,
    ENSEMBLE2_16_SPIKE,
    ENSEMBLE2_16_REFRACTORY,
};

// ensemble2_16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble216States state;
} Ensemble216;

// ensemble2_16 Initialisation function
void Ensemble216Init(Ensemble216* me);

// ensemble2_16 Execution function
void Ensemble216Run(Ensemble216* me);

#endif // ENSEMBLE2_16_H_