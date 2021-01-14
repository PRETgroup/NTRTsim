#ifndef ENSEMBLE1_75_H_
#define ENSEMBLE1_75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_75 States
enum Ensemble175States {
    ENSEMBLE1_75_INTEGRATE,
    ENSEMBLE1_75_LIMIT,
    ENSEMBLE1_75_SPIKE,
    ENSEMBLE1_75_REFRACTORY,
};

// ensemble1_75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble175States state;
} Ensemble175;

// ensemble1_75 Initialisation function
void Ensemble175Init(Ensemble175* me);

// ensemble1_75 Execution function
void Ensemble175Run(Ensemble175* me);

#endif // ENSEMBLE1_75_H_