#ifndef ENSEMBLE3_57_H_
#define ENSEMBLE3_57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_57 States
enum Ensemble357States {
    ENSEMBLE3_57_INTEGRATE,
    ENSEMBLE3_57_LIMIT,
    ENSEMBLE3_57_SPIKE,
    ENSEMBLE3_57_REFRACTORY,
};

// ensemble3_57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble357States state;
} Ensemble357;

// ensemble3_57 Initialisation function
void Ensemble357Init(Ensemble357* me);

// ensemble3_57 Execution function
void Ensemble357Run(Ensemble357* me);

#endif // ENSEMBLE3_57_H_