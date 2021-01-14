#ifndef ENSEMBLE2_95_H_
#define ENSEMBLE2_95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_95 States
enum Ensemble295States {
    ENSEMBLE2_95_INTEGRATE,
    ENSEMBLE2_95_LIMIT,
    ENSEMBLE2_95_SPIKE,
    ENSEMBLE2_95_REFRACTORY,
};

// ensemble2_95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble295States state;
} Ensemble295;

// ensemble2_95 Initialisation function
void Ensemble295Init(Ensemble295* me);

// ensemble2_95 Execution function
void Ensemble295Run(Ensemble295* me);

#endif // ENSEMBLE2_95_H_