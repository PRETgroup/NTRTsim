#ifndef ENSEMBLE0_35_H_
#define ENSEMBLE0_35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_35 States
enum Ensemble035States {
    ENSEMBLE0_35_INTEGRATE,
    ENSEMBLE0_35_LIMIT,
    ENSEMBLE0_35_SPIKE,
    ENSEMBLE0_35_REFRACTORY,
};

// ensemble0_35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble035States state;
} Ensemble035;

// ensemble0_35 Initialisation function
void Ensemble035Init(Ensemble035* me);

// ensemble0_35 Execution function
void Ensemble035Run(Ensemble035* me);

#endif // ENSEMBLE0_35_H_