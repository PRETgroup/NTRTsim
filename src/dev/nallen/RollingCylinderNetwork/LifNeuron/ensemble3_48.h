#ifndef ENSEMBLE3_48_H_
#define ENSEMBLE3_48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_48 States
enum Ensemble348States {
    ENSEMBLE3_48_INTEGRATE,
    ENSEMBLE3_48_LIMIT,
    ENSEMBLE3_48_SPIKE,
    ENSEMBLE3_48_REFRACTORY,
};

// ensemble3_48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble348States state;
} Ensemble348;

// ensemble3_48 Initialisation function
void Ensemble348Init(Ensemble348* me);

// ensemble3_48 Execution function
void Ensemble348Run(Ensemble348* me);

#endif // ENSEMBLE3_48_H_