#ifndef ENSEMBLE2_36_H_
#define ENSEMBLE2_36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_36 States
enum Ensemble236States {
    ENSEMBLE2_36_INTEGRATE,
    ENSEMBLE2_36_LIMIT,
    ENSEMBLE2_36_SPIKE,
    ENSEMBLE2_36_REFRACTORY,
};

// ensemble2_36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble236States state;
} Ensemble236;

// ensemble2_36 Initialisation function
void Ensemble236Init(Ensemble236* me);

// ensemble2_36 Execution function
void Ensemble236Run(Ensemble236* me);

#endif // ENSEMBLE2_36_H_