#ifndef ENSEMBLE3_88_H_
#define ENSEMBLE3_88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_88 States
enum Ensemble388States {
    ENSEMBLE3_88_INTEGRATE,
    ENSEMBLE3_88_LIMIT,
    ENSEMBLE3_88_SPIKE,
    ENSEMBLE3_88_REFRACTORY,
};

// ensemble3_88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble388States state;
} Ensemble388;

// ensemble3_88 Initialisation function
void Ensemble388Init(Ensemble388* me);

// ensemble3_88 Execution function
void Ensemble388Run(Ensemble388* me);

#endif // ENSEMBLE3_88_H_