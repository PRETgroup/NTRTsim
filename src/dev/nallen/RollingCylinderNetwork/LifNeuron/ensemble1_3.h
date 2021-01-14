#ifndef ENSEMBLE1_3_H_
#define ENSEMBLE1_3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_3 States
enum Ensemble13States {
    ENSEMBLE1_3_INTEGRATE,
    ENSEMBLE1_3_LIMIT,
    ENSEMBLE1_3_SPIKE,
    ENSEMBLE1_3_REFRACTORY,
};

// ensemble1_3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble13States state;
} Ensemble13;

// ensemble1_3 Initialisation function
void Ensemble13Init(Ensemble13* me);

// ensemble1_3 Execution function
void Ensemble13Run(Ensemble13* me);

#endif // ENSEMBLE1_3_H_