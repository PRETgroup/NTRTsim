#ifndef ENSEMBLE0_30_H_
#define ENSEMBLE0_30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_30 States
enum Ensemble030States {
    ENSEMBLE0_30_INTEGRATE,
    ENSEMBLE0_30_LIMIT,
    ENSEMBLE0_30_SPIKE,
    ENSEMBLE0_30_REFRACTORY,
};

// ensemble0_30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble030States state;
} Ensemble030;

// ensemble0_30 Initialisation function
void Ensemble030Init(Ensemble030* me);

// ensemble0_30 Execution function
void Ensemble030Run(Ensemble030* me);

#endif // ENSEMBLE0_30_H_