#ifndef ENSEMBLE0_93_H_
#define ENSEMBLE0_93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_93 States
enum Ensemble093States {
    ENSEMBLE0_93_INTEGRATE,
    ENSEMBLE0_93_LIMIT,
    ENSEMBLE0_93_SPIKE,
    ENSEMBLE0_93_REFRACTORY,
};

// ensemble0_93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble093States state;
} Ensemble093;

// ensemble0_93 Initialisation function
void Ensemble093Init(Ensemble093* me);

// ensemble0_93 Execution function
void Ensemble093Run(Ensemble093* me);

#endif // ENSEMBLE0_93_H_