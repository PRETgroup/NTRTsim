#ifndef ENSEMBLE2_49_H_
#define ENSEMBLE2_49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_49 States
enum Ensemble249States {
    ENSEMBLE2_49_INTEGRATE,
    ENSEMBLE2_49_LIMIT,
    ENSEMBLE2_49_SPIKE,
    ENSEMBLE2_49_REFRACTORY,
};

// ensemble2_49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble249States state;
} Ensemble249;

// ensemble2_49 Initialisation function
void Ensemble249Init(Ensemble249* me);

// ensemble2_49 Execution function
void Ensemble249Run(Ensemble249* me);

#endif // ENSEMBLE2_49_H_