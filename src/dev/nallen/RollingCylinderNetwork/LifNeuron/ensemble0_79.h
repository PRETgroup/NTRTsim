#ifndef ENSEMBLE0_79_H_
#define ENSEMBLE0_79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_79 States
enum Ensemble079States {
    ENSEMBLE0_79_INTEGRATE,
    ENSEMBLE0_79_LIMIT,
    ENSEMBLE0_79_SPIKE,
    ENSEMBLE0_79_REFRACTORY,
};

// ensemble0_79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble079States state;
} Ensemble079;

// ensemble0_79 Initialisation function
void Ensemble079Init(Ensemble079* me);

// ensemble0_79 Execution function
void Ensemble079Run(Ensemble079* me);

#endif // ENSEMBLE0_79_H_