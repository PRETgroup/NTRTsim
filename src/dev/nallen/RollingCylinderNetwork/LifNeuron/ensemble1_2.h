#ifndef ENSEMBLE1_2_H_
#define ENSEMBLE1_2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_2 States
enum Ensemble12States {
    ENSEMBLE1_2_INTEGRATE,
    ENSEMBLE1_2_LIMIT,
    ENSEMBLE1_2_SPIKE,
    ENSEMBLE1_2_REFRACTORY,
};

// ensemble1_2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble12States state;
} Ensemble12;

// ensemble1_2 Initialisation function
void Ensemble12Init(Ensemble12* me);

// ensemble1_2 Execution function
void Ensemble12Run(Ensemble12* me);

#endif // ENSEMBLE1_2_H_