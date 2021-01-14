#ifndef ENSEMBLE3_46_H_
#define ENSEMBLE3_46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_46 States
enum Ensemble346States {
    ENSEMBLE3_46_INTEGRATE,
    ENSEMBLE3_46_LIMIT,
    ENSEMBLE3_46_SPIKE,
    ENSEMBLE3_46_REFRACTORY,
};

// ensemble3_46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble346States state;
} Ensemble346;

// ensemble3_46 Initialisation function
void Ensemble346Init(Ensemble346* me);

// ensemble3_46 Execution function
void Ensemble346Run(Ensemble346* me);

#endif // ENSEMBLE3_46_H_