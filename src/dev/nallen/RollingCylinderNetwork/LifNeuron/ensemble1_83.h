#ifndef ENSEMBLE1_83_H_
#define ENSEMBLE1_83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_83 States
enum Ensemble183States {
    ENSEMBLE1_83_INTEGRATE,
    ENSEMBLE1_83_LIMIT,
    ENSEMBLE1_83_SPIKE,
    ENSEMBLE1_83_REFRACTORY,
};

// ensemble1_83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble183States state;
} Ensemble183;

// ensemble1_83 Initialisation function
void Ensemble183Init(Ensemble183* me);

// ensemble1_83 Execution function
void Ensemble183Run(Ensemble183* me);

#endif // ENSEMBLE1_83_H_