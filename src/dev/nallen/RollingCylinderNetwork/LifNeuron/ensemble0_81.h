#ifndef ENSEMBLE0_81_H_
#define ENSEMBLE0_81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_81 States
enum Ensemble081States {
    ENSEMBLE0_81_INTEGRATE,
    ENSEMBLE0_81_LIMIT,
    ENSEMBLE0_81_SPIKE,
    ENSEMBLE0_81_REFRACTORY,
};

// ensemble0_81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble081States state;
} Ensemble081;

// ensemble0_81 Initialisation function
void Ensemble081Init(Ensemble081* me);

// ensemble0_81 Execution function
void Ensemble081Run(Ensemble081* me);

#endif // ENSEMBLE0_81_H_