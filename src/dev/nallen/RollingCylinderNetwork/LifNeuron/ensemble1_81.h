#ifndef ENSEMBLE1_81_H_
#define ENSEMBLE1_81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_81 States
enum Ensemble181States {
    ENSEMBLE1_81_INTEGRATE,
    ENSEMBLE1_81_LIMIT,
    ENSEMBLE1_81_SPIKE,
    ENSEMBLE1_81_REFRACTORY,
};

// ensemble1_81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble181States state;
} Ensemble181;

// ensemble1_81 Initialisation function
void Ensemble181Init(Ensemble181* me);

// ensemble1_81 Execution function
void Ensemble181Run(Ensemble181* me);

#endif // ENSEMBLE1_81_H_