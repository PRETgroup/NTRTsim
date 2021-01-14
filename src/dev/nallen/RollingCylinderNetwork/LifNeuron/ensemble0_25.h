#ifndef ENSEMBLE0_25_H_
#define ENSEMBLE0_25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_25 States
enum Ensemble025States {
    ENSEMBLE0_25_INTEGRATE,
    ENSEMBLE0_25_LIMIT,
    ENSEMBLE0_25_SPIKE,
    ENSEMBLE0_25_REFRACTORY,
};

// ensemble0_25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble025States state;
} Ensemble025;

// ensemble0_25 Initialisation function
void Ensemble025Init(Ensemble025* me);

// ensemble0_25 Execution function
void Ensemble025Run(Ensemble025* me);

#endif // ENSEMBLE0_25_H_