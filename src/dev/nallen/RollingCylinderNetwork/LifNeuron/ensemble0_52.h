#ifndef ENSEMBLE0_52_H_
#define ENSEMBLE0_52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_52 States
enum Ensemble052States {
    ENSEMBLE0_52_INTEGRATE,
    ENSEMBLE0_52_LIMIT,
    ENSEMBLE0_52_SPIKE,
    ENSEMBLE0_52_REFRACTORY,
};

// ensemble0_52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble052States state;
} Ensemble052;

// ensemble0_52 Initialisation function
void Ensemble052Init(Ensemble052* me);

// ensemble0_52 Execution function
void Ensemble052Run(Ensemble052* me);

#endif // ENSEMBLE0_52_H_