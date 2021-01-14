#ifndef ENSEMBLE1_1_H_
#define ENSEMBLE1_1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_1 States
enum Ensemble11States {
    ENSEMBLE1_1_INTEGRATE,
    ENSEMBLE1_1_LIMIT,
    ENSEMBLE1_1_SPIKE,
    ENSEMBLE1_1_REFRACTORY,
};

// ensemble1_1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble11States state;
} Ensemble11;

// ensemble1_1 Initialisation function
void Ensemble11Init(Ensemble11* me);

// ensemble1_1 Execution function
void Ensemble11Run(Ensemble11* me);

#endif // ENSEMBLE1_1_H_