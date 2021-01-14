#ifndef ENSEMBLE3_17_H_
#define ENSEMBLE3_17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_17 States
enum Ensemble317States {
    ENSEMBLE3_17_INTEGRATE,
    ENSEMBLE3_17_LIMIT,
    ENSEMBLE3_17_SPIKE,
    ENSEMBLE3_17_REFRACTORY,
};

// ensemble3_17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble317States state;
} Ensemble317;

// ensemble3_17 Initialisation function
void Ensemble317Init(Ensemble317* me);

// ensemble3_17 Execution function
void Ensemble317Run(Ensemble317* me);

#endif // ENSEMBLE3_17_H_