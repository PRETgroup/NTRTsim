#ifndef ENSEMBLE2_11_H_
#define ENSEMBLE2_11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_11 States
enum Ensemble211States {
    ENSEMBLE2_11_INTEGRATE,
    ENSEMBLE2_11_LIMIT,
    ENSEMBLE2_11_SPIKE,
    ENSEMBLE2_11_REFRACTORY,
};

// ensemble2_11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble211States state;
} Ensemble211;

// ensemble2_11 Initialisation function
void Ensemble211Init(Ensemble211* me);

// ensemble2_11 Execution function
void Ensemble211Run(Ensemble211* me);

#endif // ENSEMBLE2_11_H_