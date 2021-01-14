#ifndef ENSEMBLE2_99_H_
#define ENSEMBLE2_99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_99 States
enum Ensemble299States {
    ENSEMBLE2_99_INTEGRATE,
    ENSEMBLE2_99_LIMIT,
    ENSEMBLE2_99_SPIKE,
    ENSEMBLE2_99_REFRACTORY,
};

// ensemble2_99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble299States state;
} Ensemble299;

// ensemble2_99 Initialisation function
void Ensemble299Init(Ensemble299* me);

// ensemble2_99 Execution function
void Ensemble299Run(Ensemble299* me);

#endif // ENSEMBLE2_99_H_