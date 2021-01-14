#ifndef ENSEMBLE1_20_H_
#define ENSEMBLE1_20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_20 States
enum Ensemble120States {
    ENSEMBLE1_20_INTEGRATE,
    ENSEMBLE1_20_LIMIT,
    ENSEMBLE1_20_SPIKE,
    ENSEMBLE1_20_REFRACTORY,
};

// ensemble1_20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble120States state;
} Ensemble120;

// ensemble1_20 Initialisation function
void Ensemble120Init(Ensemble120* me);

// ensemble1_20 Execution function
void Ensemble120Run(Ensemble120* me);

#endif // ENSEMBLE1_20_H_