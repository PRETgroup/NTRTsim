#ifndef ENSEMBLE0_18_H_
#define ENSEMBLE0_18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_18 States
enum Ensemble018States {
    ENSEMBLE0_18_INTEGRATE,
    ENSEMBLE0_18_LIMIT,
    ENSEMBLE0_18_SPIKE,
    ENSEMBLE0_18_REFRACTORY,
};

// ensemble0_18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble018States state;
} Ensemble018;

// ensemble0_18 Initialisation function
void Ensemble018Init(Ensemble018* me);

// ensemble0_18 Execution function
void Ensemble018Run(Ensemble018* me);

#endif // ENSEMBLE0_18_H_