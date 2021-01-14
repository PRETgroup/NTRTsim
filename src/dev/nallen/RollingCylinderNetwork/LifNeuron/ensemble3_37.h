#ifndef ENSEMBLE3_37_H_
#define ENSEMBLE3_37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_37 States
enum Ensemble337States {
    ENSEMBLE3_37_INTEGRATE,
    ENSEMBLE3_37_LIMIT,
    ENSEMBLE3_37_SPIKE,
    ENSEMBLE3_37_REFRACTORY,
};

// ensemble3_37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble337States state;
} Ensemble337;

// ensemble3_37 Initialisation function
void Ensemble337Init(Ensemble337* me);

// ensemble3_37 Execution function
void Ensemble337Run(Ensemble337* me);

#endif // ENSEMBLE3_37_H_