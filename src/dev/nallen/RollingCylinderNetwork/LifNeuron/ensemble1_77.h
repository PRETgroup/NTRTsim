#ifndef ENSEMBLE1_77_H_
#define ENSEMBLE1_77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_77 States
enum Ensemble177States {
    ENSEMBLE1_77_INTEGRATE,
    ENSEMBLE1_77_LIMIT,
    ENSEMBLE1_77_SPIKE,
    ENSEMBLE1_77_REFRACTORY,
};

// ensemble1_77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble177States state;
} Ensemble177;

// ensemble1_77 Initialisation function
void Ensemble177Init(Ensemble177* me);

// ensemble1_77 Execution function
void Ensemble177Run(Ensemble177* me);

#endif // ENSEMBLE1_77_H_