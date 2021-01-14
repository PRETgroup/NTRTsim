#ifndef ENSEMBLE3_4_H_
#define ENSEMBLE3_4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_4 States
enum Ensemble34States {
    ENSEMBLE3_4_INTEGRATE,
    ENSEMBLE3_4_LIMIT,
    ENSEMBLE3_4_SPIKE,
    ENSEMBLE3_4_REFRACTORY,
};

// ensemble3_4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble34States state;
} Ensemble34;

// ensemble3_4 Initialisation function
void Ensemble34Init(Ensemble34* me);

// ensemble3_4 Execution function
void Ensemble34Run(Ensemble34* me);

#endif // ENSEMBLE3_4_H_