#ifndef ENSEMBLE2_56_H_
#define ENSEMBLE2_56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_56 States
enum Ensemble256States {
    ENSEMBLE2_56_INTEGRATE,
    ENSEMBLE2_56_LIMIT,
    ENSEMBLE2_56_SPIKE,
    ENSEMBLE2_56_REFRACTORY,
};

// ensemble2_56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble256States state;
} Ensemble256;

// ensemble2_56 Initialisation function
void Ensemble256Init(Ensemble256* me);

// ensemble2_56 Execution function
void Ensemble256Run(Ensemble256* me);

#endif // ENSEMBLE2_56_H_