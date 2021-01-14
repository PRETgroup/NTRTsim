#ifndef ENSEMBLE0_54_H_
#define ENSEMBLE0_54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_54 States
enum Ensemble054States {
    ENSEMBLE0_54_INTEGRATE,
    ENSEMBLE0_54_LIMIT,
    ENSEMBLE0_54_SPIKE,
    ENSEMBLE0_54_REFRACTORY,
};

// ensemble0_54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble054States state;
} Ensemble054;

// ensemble0_54 Initialisation function
void Ensemble054Init(Ensemble054* me);

// ensemble0_54 Execution function
void Ensemble054Run(Ensemble054* me);

#endif // ENSEMBLE0_54_H_