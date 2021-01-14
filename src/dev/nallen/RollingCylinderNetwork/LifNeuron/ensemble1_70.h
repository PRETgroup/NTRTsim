#ifndef ENSEMBLE1_70_H_
#define ENSEMBLE1_70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_70 States
enum Ensemble170States {
    ENSEMBLE1_70_INTEGRATE,
    ENSEMBLE1_70_LIMIT,
    ENSEMBLE1_70_SPIKE,
    ENSEMBLE1_70_REFRACTORY,
};

// ensemble1_70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble170States state;
} Ensemble170;

// ensemble1_70 Initialisation function
void Ensemble170Init(Ensemble170* me);

// ensemble1_70 Execution function
void Ensemble170Run(Ensemble170* me);

#endif // ENSEMBLE1_70_H_