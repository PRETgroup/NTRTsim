#ifndef ENSEMBLE3_42_H_
#define ENSEMBLE3_42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_42 States
enum Ensemble342States {
    ENSEMBLE3_42_INTEGRATE,
    ENSEMBLE3_42_LIMIT,
    ENSEMBLE3_42_SPIKE,
    ENSEMBLE3_42_REFRACTORY,
};

// ensemble3_42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble342States state;
} Ensemble342;

// ensemble3_42 Initialisation function
void Ensemble342Init(Ensemble342* me);

// ensemble3_42 Execution function
void Ensemble342Run(Ensemble342* me);

#endif // ENSEMBLE3_42_H_