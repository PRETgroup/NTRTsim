#ifndef ENSEMBLE0_71_H_
#define ENSEMBLE0_71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_71 States
enum Ensemble071States {
    ENSEMBLE0_71_INTEGRATE,
    ENSEMBLE0_71_LIMIT,
    ENSEMBLE0_71_SPIKE,
    ENSEMBLE0_71_REFRACTORY,
};

// ensemble0_71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble071States state;
} Ensemble071;

// ensemble0_71 Initialisation function
void Ensemble071Init(Ensemble071* me);

// ensemble0_71 Execution function
void Ensemble071Run(Ensemble071* me);

#endif // ENSEMBLE0_71_H_