#ifndef ENSEMBLE0_85_H_
#define ENSEMBLE0_85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_85 States
enum Ensemble085States {
    ENSEMBLE0_85_INTEGRATE,
    ENSEMBLE0_85_LIMIT,
    ENSEMBLE0_85_SPIKE,
    ENSEMBLE0_85_REFRACTORY,
};

// ensemble0_85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble085States state;
} Ensemble085;

// ensemble0_85 Initialisation function
void Ensemble085Init(Ensemble085* me);

// ensemble0_85 Execution function
void Ensemble085Run(Ensemble085* me);

#endif // ENSEMBLE0_85_H_