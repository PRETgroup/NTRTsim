#ifndef ENSEMBLE3_55_H_
#define ENSEMBLE3_55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_55 States
enum Ensemble355States {
    ENSEMBLE3_55_INTEGRATE,
    ENSEMBLE3_55_LIMIT,
    ENSEMBLE3_55_SPIKE,
    ENSEMBLE3_55_REFRACTORY,
};

// ensemble3_55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble355States state;
} Ensemble355;

// ensemble3_55 Initialisation function
void Ensemble355Init(Ensemble355* me);

// ensemble3_55 Execution function
void Ensemble355Run(Ensemble355* me);

#endif // ENSEMBLE3_55_H_