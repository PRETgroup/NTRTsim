#ifndef ENSEMBLE1_4_H_
#define ENSEMBLE1_4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_4 States
enum Ensemble14States {
    ENSEMBLE1_4_INTEGRATE,
    ENSEMBLE1_4_LIMIT,
    ENSEMBLE1_4_SPIKE,
    ENSEMBLE1_4_REFRACTORY,
};

// ensemble1_4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble14States state;
} Ensemble14;

// ensemble1_4 Initialisation function
void Ensemble14Init(Ensemble14* me);

// ensemble1_4 Execution function
void Ensemble14Run(Ensemble14* me);

#endif // ENSEMBLE1_4_H_