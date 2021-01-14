#ifndef ENSEMBLE2_42_H_
#define ENSEMBLE2_42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_42 States
enum Ensemble242States {
    ENSEMBLE2_42_INTEGRATE,
    ENSEMBLE2_42_LIMIT,
    ENSEMBLE2_42_SPIKE,
    ENSEMBLE2_42_REFRACTORY,
};

// ensemble2_42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble242States state;
} Ensemble242;

// ensemble2_42 Initialisation function
void Ensemble242Init(Ensemble242* me);

// ensemble2_42 Execution function
void Ensemble242Run(Ensemble242* me);

#endif // ENSEMBLE2_42_H_