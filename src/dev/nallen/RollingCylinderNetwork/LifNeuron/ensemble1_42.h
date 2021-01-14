#ifndef ENSEMBLE1_42_H_
#define ENSEMBLE1_42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_42 States
enum Ensemble142States {
    ENSEMBLE1_42_INTEGRATE,
    ENSEMBLE1_42_LIMIT,
    ENSEMBLE1_42_SPIKE,
    ENSEMBLE1_42_REFRACTORY,
};

// ensemble1_42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble142States state;
} Ensemble142;

// ensemble1_42 Initialisation function
void Ensemble142Init(Ensemble142* me);

// ensemble1_42 Execution function
void Ensemble142Run(Ensemble142* me);

#endif // ENSEMBLE1_42_H_