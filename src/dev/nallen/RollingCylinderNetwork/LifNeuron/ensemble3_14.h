#ifndef ENSEMBLE3_14_H_
#define ENSEMBLE3_14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_14 States
enum Ensemble314States {
    ENSEMBLE3_14_INTEGRATE,
    ENSEMBLE3_14_LIMIT,
    ENSEMBLE3_14_SPIKE,
    ENSEMBLE3_14_REFRACTORY,
};

// ensemble3_14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble314States state;
} Ensemble314;

// ensemble3_14 Initialisation function
void Ensemble314Init(Ensemble314* me);

// ensemble3_14 Execution function
void Ensemble314Run(Ensemble314* me);

#endif // ENSEMBLE3_14_H_