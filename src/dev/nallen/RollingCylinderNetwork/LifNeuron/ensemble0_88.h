#ifndef ENSEMBLE0_88_H_
#define ENSEMBLE0_88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_88 States
enum Ensemble088States {
    ENSEMBLE0_88_INTEGRATE,
    ENSEMBLE0_88_LIMIT,
    ENSEMBLE0_88_SPIKE,
    ENSEMBLE0_88_REFRACTORY,
};

// ensemble0_88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble088States state;
} Ensemble088;

// ensemble0_88 Initialisation function
void Ensemble088Init(Ensemble088* me);

// ensemble0_88 Execution function
void Ensemble088Run(Ensemble088* me);

#endif // ENSEMBLE0_88_H_