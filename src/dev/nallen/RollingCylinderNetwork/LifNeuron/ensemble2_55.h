#ifndef ENSEMBLE2_55_H_
#define ENSEMBLE2_55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_55 States
enum Ensemble255States {
    ENSEMBLE2_55_INTEGRATE,
    ENSEMBLE2_55_LIMIT,
    ENSEMBLE2_55_SPIKE,
    ENSEMBLE2_55_REFRACTORY,
};

// ensemble2_55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble255States state;
} Ensemble255;

// ensemble2_55 Initialisation function
void Ensemble255Init(Ensemble255* me);

// ensemble2_55 Execution function
void Ensemble255Run(Ensemble255* me);

#endif // ENSEMBLE2_55_H_