#ifndef ENSEMBLE0_15_H_
#define ENSEMBLE0_15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_15 States
enum Ensemble015States {
    ENSEMBLE0_15_INTEGRATE,
    ENSEMBLE0_15_LIMIT,
    ENSEMBLE0_15_SPIKE,
    ENSEMBLE0_15_REFRACTORY,
};

// ensemble0_15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble015States state;
} Ensemble015;

// ensemble0_15 Initialisation function
void Ensemble015Init(Ensemble015* me);

// ensemble0_15 Execution function
void Ensemble015Run(Ensemble015* me);

#endif // ENSEMBLE0_15_H_