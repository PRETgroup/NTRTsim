#ifndef ENSEMBLE0_49_H_
#define ENSEMBLE0_49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_49 States
enum Ensemble049States {
    ENSEMBLE0_49_INTEGRATE,
    ENSEMBLE0_49_LIMIT,
    ENSEMBLE0_49_SPIKE,
    ENSEMBLE0_49_REFRACTORY,
};

// ensemble0_49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble049States state;
} Ensemble049;

// ensemble0_49 Initialisation function
void Ensemble049Init(Ensemble049* me);

// ensemble0_49 Execution function
void Ensemble049Run(Ensemble049* me);

#endif // ENSEMBLE0_49_H_