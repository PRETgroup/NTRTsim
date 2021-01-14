#ifndef ENSEMBLE3_72_H_
#define ENSEMBLE3_72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_72 States
enum Ensemble372States {
    ENSEMBLE3_72_INTEGRATE,
    ENSEMBLE3_72_LIMIT,
    ENSEMBLE3_72_SPIKE,
    ENSEMBLE3_72_REFRACTORY,
};

// ensemble3_72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble372States state;
} Ensemble372;

// ensemble3_72 Initialisation function
void Ensemble372Init(Ensemble372* me);

// ensemble3_72 Execution function
void Ensemble372Run(Ensemble372* me);

#endif // ENSEMBLE3_72_H_