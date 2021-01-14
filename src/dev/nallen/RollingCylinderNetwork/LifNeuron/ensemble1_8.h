#ifndef ENSEMBLE1_8_H_
#define ENSEMBLE1_8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_8 States
enum Ensemble18States {
    ENSEMBLE1_8_INTEGRATE,
    ENSEMBLE1_8_LIMIT,
    ENSEMBLE1_8_SPIKE,
    ENSEMBLE1_8_REFRACTORY,
};

// ensemble1_8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble18States state;
} Ensemble18;

// ensemble1_8 Initialisation function
void Ensemble18Init(Ensemble18* me);

// ensemble1_8 Execution function
void Ensemble18Run(Ensemble18* me);

#endif // ENSEMBLE1_8_H_