#ifndef ENSEMBLE3_24_H_
#define ENSEMBLE3_24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_24 States
enum Ensemble324States {
    ENSEMBLE3_24_INTEGRATE,
    ENSEMBLE3_24_LIMIT,
    ENSEMBLE3_24_SPIKE,
    ENSEMBLE3_24_REFRACTORY,
};

// ensemble3_24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble324States state;
} Ensemble324;

// ensemble3_24 Initialisation function
void Ensemble324Init(Ensemble324* me);

// ensemble3_24 Execution function
void Ensemble324Run(Ensemble324* me);

#endif // ENSEMBLE3_24_H_