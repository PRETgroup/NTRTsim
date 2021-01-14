#ifndef ENSEMBLE0_46_H_
#define ENSEMBLE0_46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_46 States
enum Ensemble046States {
    ENSEMBLE0_46_INTEGRATE,
    ENSEMBLE0_46_LIMIT,
    ENSEMBLE0_46_SPIKE,
    ENSEMBLE0_46_REFRACTORY,
};

// ensemble0_46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble046States state;
} Ensemble046;

// ensemble0_46 Initialisation function
void Ensemble046Init(Ensemble046* me);

// ensemble0_46 Execution function
void Ensemble046Run(Ensemble046* me);

#endif // ENSEMBLE0_46_H_