#ifndef ENSEMBLE1_44_H_
#define ENSEMBLE1_44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_44 States
enum Ensemble144States {
    ENSEMBLE1_44_INTEGRATE,
    ENSEMBLE1_44_LIMIT,
    ENSEMBLE1_44_SPIKE,
    ENSEMBLE1_44_REFRACTORY,
};

// ensemble1_44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble144States state;
} Ensemble144;

// ensemble1_44 Initialisation function
void Ensemble144Init(Ensemble144* me);

// ensemble1_44 Execution function
void Ensemble144Run(Ensemble144* me);

#endif // ENSEMBLE1_44_H_