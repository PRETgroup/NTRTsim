#ifndef ENSEMBLE0_0_H_
#define ENSEMBLE0_0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_0 States
enum Ensemble00States {
    ENSEMBLE0_0_INTEGRATE,
    ENSEMBLE0_0_LIMIT,
    ENSEMBLE0_0_SPIKE,
    ENSEMBLE0_0_REFRACTORY,
};

// ensemble0_0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble00States state;
} Ensemble00;

// ensemble0_0 Initialisation function
void Ensemble00Init(Ensemble00* me);

// ensemble0_0 Execution function
void Ensemble00Run(Ensemble00* me);

#endif // ENSEMBLE0_0_H_