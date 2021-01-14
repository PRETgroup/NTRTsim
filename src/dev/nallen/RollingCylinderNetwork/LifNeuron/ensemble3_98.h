#ifndef ENSEMBLE3_98_H_
#define ENSEMBLE3_98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_98 States
enum Ensemble398States {
    ENSEMBLE3_98_INTEGRATE,
    ENSEMBLE3_98_LIMIT,
    ENSEMBLE3_98_SPIKE,
    ENSEMBLE3_98_REFRACTORY,
};

// ensemble3_98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble398States state;
} Ensemble398;

// ensemble3_98 Initialisation function
void Ensemble398Init(Ensemble398* me);

// ensemble3_98 Execution function
void Ensemble398Run(Ensemble398* me);

#endif // ENSEMBLE3_98_H_