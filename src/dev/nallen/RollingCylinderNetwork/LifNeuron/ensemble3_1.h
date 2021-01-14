#ifndef ENSEMBLE3_1_H_
#define ENSEMBLE3_1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_1 States
enum Ensemble31States {
    ENSEMBLE3_1_INTEGRATE,
    ENSEMBLE3_1_LIMIT,
    ENSEMBLE3_1_SPIKE,
    ENSEMBLE3_1_REFRACTORY,
};

// ensemble3_1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble31States state;
} Ensemble31;

// ensemble3_1 Initialisation function
void Ensemble31Init(Ensemble31* me);

// ensemble3_1 Execution function
void Ensemble31Run(Ensemble31* me);

#endif // ENSEMBLE3_1_H_