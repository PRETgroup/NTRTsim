#ifndef ENSEMBLE3_33_H_
#define ENSEMBLE3_33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_33 States
enum Ensemble333States {
    ENSEMBLE3_33_INTEGRATE,
    ENSEMBLE3_33_LIMIT,
    ENSEMBLE3_33_SPIKE,
    ENSEMBLE3_33_REFRACTORY,
};

// ensemble3_33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble333States state;
} Ensemble333;

// ensemble3_33 Initialisation function
void Ensemble333Init(Ensemble333* me);

// ensemble3_33 Execution function
void Ensemble333Run(Ensemble333* me);

#endif // ENSEMBLE3_33_H_