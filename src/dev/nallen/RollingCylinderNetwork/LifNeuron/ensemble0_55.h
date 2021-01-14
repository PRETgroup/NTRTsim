#ifndef ENSEMBLE0_55_H_
#define ENSEMBLE0_55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_55 States
enum Ensemble055States {
    ENSEMBLE0_55_INTEGRATE,
    ENSEMBLE0_55_LIMIT,
    ENSEMBLE0_55_SPIKE,
    ENSEMBLE0_55_REFRACTORY,
};

// ensemble0_55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble055States state;
} Ensemble055;

// ensemble0_55 Initialisation function
void Ensemble055Init(Ensemble055* me);

// ensemble0_55 Execution function
void Ensemble055Run(Ensemble055* me);

#endif // ENSEMBLE0_55_H_