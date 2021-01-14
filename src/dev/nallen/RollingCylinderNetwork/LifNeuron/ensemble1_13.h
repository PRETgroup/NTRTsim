#ifndef ENSEMBLE1_13_H_
#define ENSEMBLE1_13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_13 States
enum Ensemble113States {
    ENSEMBLE1_13_INTEGRATE,
    ENSEMBLE1_13_LIMIT,
    ENSEMBLE1_13_SPIKE,
    ENSEMBLE1_13_REFRACTORY,
};

// ensemble1_13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble113States state;
} Ensemble113;

// ensemble1_13 Initialisation function
void Ensemble113Init(Ensemble113* me);

// ensemble1_13 Execution function
void Ensemble113Run(Ensemble113* me);

#endif // ENSEMBLE1_13_H_