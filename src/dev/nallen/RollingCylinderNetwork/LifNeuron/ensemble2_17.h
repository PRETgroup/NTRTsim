#ifndef ENSEMBLE2_17_H_
#define ENSEMBLE2_17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_17 States
enum Ensemble217States {
    ENSEMBLE2_17_INTEGRATE,
    ENSEMBLE2_17_LIMIT,
    ENSEMBLE2_17_SPIKE,
    ENSEMBLE2_17_REFRACTORY,
};

// ensemble2_17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble217States state;
} Ensemble217;

// ensemble2_17 Initialisation function
void Ensemble217Init(Ensemble217* me);

// ensemble2_17 Execution function
void Ensemble217Run(Ensemble217* me);

#endif // ENSEMBLE2_17_H_