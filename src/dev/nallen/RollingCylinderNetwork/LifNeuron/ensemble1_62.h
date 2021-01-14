#ifndef ENSEMBLE1_62_H_
#define ENSEMBLE1_62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_62 States
enum Ensemble162States {
    ENSEMBLE1_62_INTEGRATE,
    ENSEMBLE1_62_LIMIT,
    ENSEMBLE1_62_SPIKE,
    ENSEMBLE1_62_REFRACTORY,
};

// ensemble1_62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble162States state;
} Ensemble162;

// ensemble1_62 Initialisation function
void Ensemble162Init(Ensemble162* me);

// ensemble1_62 Execution function
void Ensemble162Run(Ensemble162* me);

#endif // ENSEMBLE1_62_H_