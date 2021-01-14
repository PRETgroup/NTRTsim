#ifndef ENSEMBLE1_24_H_
#define ENSEMBLE1_24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_24 States
enum Ensemble124States {
    ENSEMBLE1_24_INTEGRATE,
    ENSEMBLE1_24_LIMIT,
    ENSEMBLE1_24_SPIKE,
    ENSEMBLE1_24_REFRACTORY,
};

// ensemble1_24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble124States state;
} Ensemble124;

// ensemble1_24 Initialisation function
void Ensemble124Init(Ensemble124* me);

// ensemble1_24 Execution function
void Ensemble124Run(Ensemble124* me);

#endif // ENSEMBLE1_24_H_