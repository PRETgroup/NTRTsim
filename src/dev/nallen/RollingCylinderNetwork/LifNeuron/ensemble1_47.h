#ifndef ENSEMBLE1_47_H_
#define ENSEMBLE1_47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_47 States
enum Ensemble147States {
    ENSEMBLE1_47_INTEGRATE,
    ENSEMBLE1_47_LIMIT,
    ENSEMBLE1_47_SPIKE,
    ENSEMBLE1_47_REFRACTORY,
};

// ensemble1_47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble147States state;
} Ensemble147;

// ensemble1_47 Initialisation function
void Ensemble147Init(Ensemble147* me);

// ensemble1_47 Execution function
void Ensemble147Run(Ensemble147* me);

#endif // ENSEMBLE1_47_H_