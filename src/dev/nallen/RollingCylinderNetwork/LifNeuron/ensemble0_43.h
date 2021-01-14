#ifndef ENSEMBLE0_43_H_
#define ENSEMBLE0_43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_43 States
enum Ensemble043States {
    ENSEMBLE0_43_INTEGRATE,
    ENSEMBLE0_43_LIMIT,
    ENSEMBLE0_43_SPIKE,
    ENSEMBLE0_43_REFRACTORY,
};

// ensemble0_43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble043States state;
} Ensemble043;

// ensemble0_43 Initialisation function
void Ensemble043Init(Ensemble043* me);

// ensemble0_43 Execution function
void Ensemble043Run(Ensemble043* me);

#endif // ENSEMBLE0_43_H_