#ifndef ENSEMBLE2_24_H_
#define ENSEMBLE2_24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_24 States
enum Ensemble224States {
    ENSEMBLE2_24_INTEGRATE,
    ENSEMBLE2_24_LIMIT,
    ENSEMBLE2_24_SPIKE,
    ENSEMBLE2_24_REFRACTORY,
};

// ensemble2_24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble224States state;
} Ensemble224;

// ensemble2_24 Initialisation function
void Ensemble224Init(Ensemble224* me);

// ensemble2_24 Execution function
void Ensemble224Run(Ensemble224* me);

#endif // ENSEMBLE2_24_H_