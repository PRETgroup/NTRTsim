#ifndef ENSEMBLE0_98_H_
#define ENSEMBLE0_98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_98 States
enum Ensemble098States {
    ENSEMBLE0_98_INTEGRATE,
    ENSEMBLE0_98_LIMIT,
    ENSEMBLE0_98_SPIKE,
    ENSEMBLE0_98_REFRACTORY,
};

// ensemble0_98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble098States state;
} Ensemble098;

// ensemble0_98 Initialisation function
void Ensemble098Init(Ensemble098* me);

// ensemble0_98 Execution function
void Ensemble098Run(Ensemble098* me);

#endif // ENSEMBLE0_98_H_