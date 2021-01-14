#ifndef ENSEMBLE0_57_H_
#define ENSEMBLE0_57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_57 States
enum Ensemble057States {
    ENSEMBLE0_57_INTEGRATE,
    ENSEMBLE0_57_LIMIT,
    ENSEMBLE0_57_SPIKE,
    ENSEMBLE0_57_REFRACTORY,
};

// ensemble0_57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble057States state;
} Ensemble057;

// ensemble0_57 Initialisation function
void Ensemble057Init(Ensemble057* me);

// ensemble0_57 Execution function
void Ensemble057Run(Ensemble057* me);

#endif // ENSEMBLE0_57_H_