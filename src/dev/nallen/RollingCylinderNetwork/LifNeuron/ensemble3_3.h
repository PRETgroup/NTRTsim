#ifndef ENSEMBLE3_3_H_
#define ENSEMBLE3_3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_3 States
enum Ensemble33States {
    ENSEMBLE3_3_INTEGRATE,
    ENSEMBLE3_3_LIMIT,
    ENSEMBLE3_3_SPIKE,
    ENSEMBLE3_3_REFRACTORY,
};

// ensemble3_3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble33States state;
} Ensemble33;

// ensemble3_3 Initialisation function
void Ensemble33Init(Ensemble33* me);

// ensemble3_3 Execution function
void Ensemble33Run(Ensemble33* me);

#endif // ENSEMBLE3_3_H_