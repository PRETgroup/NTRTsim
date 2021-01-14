#ifndef ENSEMBLE1_56_H_
#define ENSEMBLE1_56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_56 States
enum Ensemble156States {
    ENSEMBLE1_56_INTEGRATE,
    ENSEMBLE1_56_LIMIT,
    ENSEMBLE1_56_SPIKE,
    ENSEMBLE1_56_REFRACTORY,
};

// ensemble1_56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble156States state;
} Ensemble156;

// ensemble1_56 Initialisation function
void Ensemble156Init(Ensemble156* me);

// ensemble1_56 Execution function
void Ensemble156Run(Ensemble156* me);

#endif // ENSEMBLE1_56_H_