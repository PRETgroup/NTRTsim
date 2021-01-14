#ifndef ENSEMBLE2_5_H_
#define ENSEMBLE2_5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_5 States
enum Ensemble25States {
    ENSEMBLE2_5_INTEGRATE,
    ENSEMBLE2_5_LIMIT,
    ENSEMBLE2_5_SPIKE,
    ENSEMBLE2_5_REFRACTORY,
};

// ensemble2_5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble25States state;
} Ensemble25;

// ensemble2_5 Initialisation function
void Ensemble25Init(Ensemble25* me);

// ensemble2_5 Execution function
void Ensemble25Run(Ensemble25* me);

#endif // ENSEMBLE2_5_H_