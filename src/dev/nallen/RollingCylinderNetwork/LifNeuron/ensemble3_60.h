#ifndef ENSEMBLE3_60_H_
#define ENSEMBLE3_60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_60 States
enum Ensemble360States {
    ENSEMBLE3_60_INTEGRATE,
    ENSEMBLE3_60_LIMIT,
    ENSEMBLE3_60_SPIKE,
    ENSEMBLE3_60_REFRACTORY,
};

// ensemble3_60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble360States state;
} Ensemble360;

// ensemble3_60 Initialisation function
void Ensemble360Init(Ensemble360* me);

// ensemble3_60 Execution function
void Ensemble360Run(Ensemble360* me);

#endif // ENSEMBLE3_60_H_