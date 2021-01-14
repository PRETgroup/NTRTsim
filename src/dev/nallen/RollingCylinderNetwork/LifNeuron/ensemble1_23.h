#ifndef ENSEMBLE1_23_H_
#define ENSEMBLE1_23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_23 States
enum Ensemble123States {
    ENSEMBLE1_23_INTEGRATE,
    ENSEMBLE1_23_LIMIT,
    ENSEMBLE1_23_SPIKE,
    ENSEMBLE1_23_REFRACTORY,
};

// ensemble1_23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble123States state;
} Ensemble123;

// ensemble1_23 Initialisation function
void Ensemble123Init(Ensemble123* me);

// ensemble1_23 Execution function
void Ensemble123Run(Ensemble123* me);

#endif // ENSEMBLE1_23_H_