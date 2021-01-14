#ifndef ENSEMBLE3_76_H_
#define ENSEMBLE3_76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_76 States
enum Ensemble376States {
    ENSEMBLE3_76_INTEGRATE,
    ENSEMBLE3_76_LIMIT,
    ENSEMBLE3_76_SPIKE,
    ENSEMBLE3_76_REFRACTORY,
};

// ensemble3_76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble376States state;
} Ensemble376;

// ensemble3_76 Initialisation function
void Ensemble376Init(Ensemble376* me);

// ensemble3_76 Execution function
void Ensemble376Run(Ensemble376* me);

#endif // ENSEMBLE3_76_H_