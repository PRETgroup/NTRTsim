#ifndef ENSEMBLE1_85_H_
#define ENSEMBLE1_85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_85 States
enum Ensemble185States {
    ENSEMBLE1_85_INTEGRATE,
    ENSEMBLE1_85_LIMIT,
    ENSEMBLE1_85_SPIKE,
    ENSEMBLE1_85_REFRACTORY,
};

// ensemble1_85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble185States state;
} Ensemble185;

// ensemble1_85 Initialisation function
void Ensemble185Init(Ensemble185* me);

// ensemble1_85 Execution function
void Ensemble185Run(Ensemble185* me);

#endif // ENSEMBLE1_85_H_