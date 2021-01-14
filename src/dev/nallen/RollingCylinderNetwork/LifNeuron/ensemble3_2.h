#ifndef ENSEMBLE3_2_H_
#define ENSEMBLE3_2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_2 States
enum Ensemble32States {
    ENSEMBLE3_2_INTEGRATE,
    ENSEMBLE3_2_LIMIT,
    ENSEMBLE3_2_SPIKE,
    ENSEMBLE3_2_REFRACTORY,
};

// ensemble3_2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble32States state;
} Ensemble32;

// ensemble3_2 Initialisation function
void Ensemble32Init(Ensemble32* me);

// ensemble3_2 Execution function
void Ensemble32Run(Ensemble32* me);

#endif // ENSEMBLE3_2_H_