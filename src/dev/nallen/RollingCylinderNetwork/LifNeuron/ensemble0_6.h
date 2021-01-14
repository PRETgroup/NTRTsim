#ifndef ENSEMBLE0_6_H_
#define ENSEMBLE0_6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_6 States
enum Ensemble06States {
    ENSEMBLE0_6_INTEGRATE,
    ENSEMBLE0_6_LIMIT,
    ENSEMBLE0_6_SPIKE,
    ENSEMBLE0_6_REFRACTORY,
};

// ensemble0_6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble06States state;
} Ensemble06;

// ensemble0_6 Initialisation function
void Ensemble06Init(Ensemble06* me);

// ensemble0_6 Execution function
void Ensemble06Run(Ensemble06* me);

#endif // ENSEMBLE0_6_H_