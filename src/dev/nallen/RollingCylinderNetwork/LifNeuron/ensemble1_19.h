#ifndef ENSEMBLE1_19_H_
#define ENSEMBLE1_19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_19 States
enum Ensemble119States {
    ENSEMBLE1_19_INTEGRATE,
    ENSEMBLE1_19_LIMIT,
    ENSEMBLE1_19_SPIKE,
    ENSEMBLE1_19_REFRACTORY,
};

// ensemble1_19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble119States state;
} Ensemble119;

// ensemble1_19 Initialisation function
void Ensemble119Init(Ensemble119* me);

// ensemble1_19 Execution function
void Ensemble119Run(Ensemble119* me);

#endif // ENSEMBLE1_19_H_