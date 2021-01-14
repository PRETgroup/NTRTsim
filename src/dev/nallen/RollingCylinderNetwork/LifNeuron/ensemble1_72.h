#ifndef ENSEMBLE1_72_H_
#define ENSEMBLE1_72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_72 States
enum Ensemble172States {
    ENSEMBLE1_72_INTEGRATE,
    ENSEMBLE1_72_LIMIT,
    ENSEMBLE1_72_SPIKE,
    ENSEMBLE1_72_REFRACTORY,
};

// ensemble1_72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble172States state;
} Ensemble172;

// ensemble1_72 Initialisation function
void Ensemble172Init(Ensemble172* me);

// ensemble1_72 Execution function
void Ensemble172Run(Ensemble172* me);

#endif // ENSEMBLE1_72_H_