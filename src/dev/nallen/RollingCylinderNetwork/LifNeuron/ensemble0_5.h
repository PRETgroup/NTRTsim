#ifndef ENSEMBLE0_5_H_
#define ENSEMBLE0_5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_5 States
enum Ensemble05States {
    ENSEMBLE0_5_INTEGRATE,
    ENSEMBLE0_5_LIMIT,
    ENSEMBLE0_5_SPIKE,
    ENSEMBLE0_5_REFRACTORY,
};

// ensemble0_5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble05States state;
} Ensemble05;

// ensemble0_5 Initialisation function
void Ensemble05Init(Ensemble05* me);

// ensemble0_5 Execution function
void Ensemble05Run(Ensemble05* me);

#endif // ENSEMBLE0_5_H_