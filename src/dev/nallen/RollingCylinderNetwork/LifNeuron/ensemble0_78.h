#ifndef ENSEMBLE0_78_H_
#define ENSEMBLE0_78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_78 States
enum Ensemble078States {
    ENSEMBLE0_78_INTEGRATE,
    ENSEMBLE0_78_LIMIT,
    ENSEMBLE0_78_SPIKE,
    ENSEMBLE0_78_REFRACTORY,
};

// ensemble0_78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble078States state;
} Ensemble078;

// ensemble0_78 Initialisation function
void Ensemble078Init(Ensemble078* me);

// ensemble0_78 Execution function
void Ensemble078Run(Ensemble078* me);

#endif // ENSEMBLE0_78_H_