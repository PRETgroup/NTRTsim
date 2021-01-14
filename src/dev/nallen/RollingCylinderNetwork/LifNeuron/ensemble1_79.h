#ifndef ENSEMBLE1_79_H_
#define ENSEMBLE1_79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_79 States
enum Ensemble179States {
    ENSEMBLE1_79_INTEGRATE,
    ENSEMBLE1_79_LIMIT,
    ENSEMBLE1_79_SPIKE,
    ENSEMBLE1_79_REFRACTORY,
};

// ensemble1_79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble179States state;
} Ensemble179;

// ensemble1_79 Initialisation function
void Ensemble179Init(Ensemble179* me);

// ensemble1_79 Execution function
void Ensemble179Run(Ensemble179* me);

#endif // ENSEMBLE1_79_H_