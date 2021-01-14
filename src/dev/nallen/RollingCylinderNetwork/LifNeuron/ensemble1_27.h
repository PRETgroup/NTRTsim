#ifndef ENSEMBLE1_27_H_
#define ENSEMBLE1_27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_27 States
enum Ensemble127States {
    ENSEMBLE1_27_INTEGRATE,
    ENSEMBLE1_27_LIMIT,
    ENSEMBLE1_27_SPIKE,
    ENSEMBLE1_27_REFRACTORY,
};

// ensemble1_27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble127States state;
} Ensemble127;

// ensemble1_27 Initialisation function
void Ensemble127Init(Ensemble127* me);

// ensemble1_27 Execution function
void Ensemble127Run(Ensemble127* me);

#endif // ENSEMBLE1_27_H_