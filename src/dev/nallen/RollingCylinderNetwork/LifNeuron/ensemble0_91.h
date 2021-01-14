#ifndef ENSEMBLE0_91_H_
#define ENSEMBLE0_91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_91 States
enum Ensemble091States {
    ENSEMBLE0_91_INTEGRATE,
    ENSEMBLE0_91_LIMIT,
    ENSEMBLE0_91_SPIKE,
    ENSEMBLE0_91_REFRACTORY,
};

// ensemble0_91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble091States state;
} Ensemble091;

// ensemble0_91 Initialisation function
void Ensemble091Init(Ensemble091* me);

// ensemble0_91 Execution function
void Ensemble091Run(Ensemble091* me);

#endif // ENSEMBLE0_91_H_