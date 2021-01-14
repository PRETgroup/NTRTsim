#ifndef ENSEMBLE0_77_H_
#define ENSEMBLE0_77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_77 States
enum Ensemble077States {
    ENSEMBLE0_77_INTEGRATE,
    ENSEMBLE0_77_LIMIT,
    ENSEMBLE0_77_SPIKE,
    ENSEMBLE0_77_REFRACTORY,
};

// ensemble0_77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble077States state;
} Ensemble077;

// ensemble0_77 Initialisation function
void Ensemble077Init(Ensemble077* me);

// ensemble0_77 Execution function
void Ensemble077Run(Ensemble077* me);

#endif // ENSEMBLE0_77_H_