#ifndef ENSEMBLE1_21_H_
#define ENSEMBLE1_21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_21 States
enum Ensemble121States {
    ENSEMBLE1_21_INTEGRATE,
    ENSEMBLE1_21_LIMIT,
    ENSEMBLE1_21_SPIKE,
    ENSEMBLE1_21_REFRACTORY,
};

// ensemble1_21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble121States state;
} Ensemble121;

// ensemble1_21 Initialisation function
void Ensemble121Init(Ensemble121* me);

// ensemble1_21 Execution function
void Ensemble121Run(Ensemble121* me);

#endif // ENSEMBLE1_21_H_