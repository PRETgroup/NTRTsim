#ifndef ENSEMBLE1_76_H_
#define ENSEMBLE1_76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_76 States
enum Ensemble176States {
    ENSEMBLE1_76_INTEGRATE,
    ENSEMBLE1_76_LIMIT,
    ENSEMBLE1_76_SPIKE,
    ENSEMBLE1_76_REFRACTORY,
};

// ensemble1_76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble176States state;
} Ensemble176;

// ensemble1_76 Initialisation function
void Ensemble176Init(Ensemble176* me);

// ensemble1_76 Execution function
void Ensemble176Run(Ensemble176* me);

#endif // ENSEMBLE1_76_H_