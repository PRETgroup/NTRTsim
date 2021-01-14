#ifndef ENSEMBLE1_88_H_
#define ENSEMBLE1_88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_88 States
enum Ensemble188States {
    ENSEMBLE1_88_INTEGRATE,
    ENSEMBLE1_88_LIMIT,
    ENSEMBLE1_88_SPIKE,
    ENSEMBLE1_88_REFRACTORY,
};

// ensemble1_88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble188States state;
} Ensemble188;

// ensemble1_88 Initialisation function
void Ensemble188Init(Ensemble188* me);

// ensemble1_88 Execution function
void Ensemble188Run(Ensemble188* me);

#endif // ENSEMBLE1_88_H_