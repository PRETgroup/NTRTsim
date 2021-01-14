#ifndef ENSEMBLE0_68_H_
#define ENSEMBLE0_68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_68 States
enum Ensemble068States {
    ENSEMBLE0_68_INTEGRATE,
    ENSEMBLE0_68_LIMIT,
    ENSEMBLE0_68_SPIKE,
    ENSEMBLE0_68_REFRACTORY,
};

// ensemble0_68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble068States state;
} Ensemble068;

// ensemble0_68 Initialisation function
void Ensemble068Init(Ensemble068* me);

// ensemble0_68 Execution function
void Ensemble068Run(Ensemble068* me);

#endif // ENSEMBLE0_68_H_