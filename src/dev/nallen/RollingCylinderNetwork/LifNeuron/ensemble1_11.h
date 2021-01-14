#ifndef ENSEMBLE1_11_H_
#define ENSEMBLE1_11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_11 States
enum Ensemble111States {
    ENSEMBLE1_11_INTEGRATE,
    ENSEMBLE1_11_LIMIT,
    ENSEMBLE1_11_SPIKE,
    ENSEMBLE1_11_REFRACTORY,
};

// ensemble1_11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble111States state;
} Ensemble111;

// ensemble1_11 Initialisation function
void Ensemble111Init(Ensemble111* me);

// ensemble1_11 Execution function
void Ensemble111Run(Ensemble111* me);

#endif // ENSEMBLE1_11_H_