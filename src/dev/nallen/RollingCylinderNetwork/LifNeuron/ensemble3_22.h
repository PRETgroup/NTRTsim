#ifndef ENSEMBLE3_22_H_
#define ENSEMBLE3_22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_22 States
enum Ensemble322States {
    ENSEMBLE3_22_INTEGRATE,
    ENSEMBLE3_22_LIMIT,
    ENSEMBLE3_22_SPIKE,
    ENSEMBLE3_22_REFRACTORY,
};

// ensemble3_22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble322States state;
} Ensemble322;

// ensemble3_22 Initialisation function
void Ensemble322Init(Ensemble322* me);

// ensemble3_22 Execution function
void Ensemble322Run(Ensemble322* me);

#endif // ENSEMBLE3_22_H_