#ifndef ENSEMBLE1_65_H_
#define ENSEMBLE1_65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_65 States
enum Ensemble165States {
    ENSEMBLE1_65_INTEGRATE,
    ENSEMBLE1_65_LIMIT,
    ENSEMBLE1_65_SPIKE,
    ENSEMBLE1_65_REFRACTORY,
};

// ensemble1_65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble165States state;
} Ensemble165;

// ensemble1_65 Initialisation function
void Ensemble165Init(Ensemble165* me);

// ensemble1_65 Execution function
void Ensemble165Run(Ensemble165* me);

#endif // ENSEMBLE1_65_H_