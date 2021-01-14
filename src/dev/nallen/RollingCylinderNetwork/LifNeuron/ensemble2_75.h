#ifndef ENSEMBLE2_75_H_
#define ENSEMBLE2_75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_75 States
enum Ensemble275States {
    ENSEMBLE2_75_INTEGRATE,
    ENSEMBLE2_75_LIMIT,
    ENSEMBLE2_75_SPIKE,
    ENSEMBLE2_75_REFRACTORY,
};

// ensemble2_75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble275States state;
} Ensemble275;

// ensemble2_75 Initialisation function
void Ensemble275Init(Ensemble275* me);

// ensemble2_75 Execution function
void Ensemble275Run(Ensemble275* me);

#endif // ENSEMBLE2_75_H_