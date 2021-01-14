#ifndef ENSEMBLE0_11_H_
#define ENSEMBLE0_11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_11 States
enum Ensemble011States {
    ENSEMBLE0_11_INTEGRATE,
    ENSEMBLE0_11_LIMIT,
    ENSEMBLE0_11_SPIKE,
    ENSEMBLE0_11_REFRACTORY,
};

// ensemble0_11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble011States state;
} Ensemble011;

// ensemble0_11 Initialisation function
void Ensemble011Init(Ensemble011* me);

// ensemble0_11 Execution function
void Ensemble011Run(Ensemble011* me);

#endif // ENSEMBLE0_11_H_