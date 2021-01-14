#ifndef ENSEMBLE0_47_H_
#define ENSEMBLE0_47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_47 States
enum Ensemble047States {
    ENSEMBLE0_47_INTEGRATE,
    ENSEMBLE0_47_LIMIT,
    ENSEMBLE0_47_SPIKE,
    ENSEMBLE0_47_REFRACTORY,
};

// ensemble0_47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble047States state;
} Ensemble047;

// ensemble0_47 Initialisation function
void Ensemble047Init(Ensemble047* me);

// ensemble0_47 Execution function
void Ensemble047Run(Ensemble047* me);

#endif // ENSEMBLE0_47_H_