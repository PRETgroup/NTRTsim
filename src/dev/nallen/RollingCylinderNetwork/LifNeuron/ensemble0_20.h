#ifndef ENSEMBLE0_20_H_
#define ENSEMBLE0_20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_20 States
enum Ensemble020States {
    ENSEMBLE0_20_INTEGRATE,
    ENSEMBLE0_20_LIMIT,
    ENSEMBLE0_20_SPIKE,
    ENSEMBLE0_20_REFRACTORY,
};

// ensemble0_20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble020States state;
} Ensemble020;

// ensemble0_20 Initialisation function
void Ensemble020Init(Ensemble020* me);

// ensemble0_20 Execution function
void Ensemble020Run(Ensemble020* me);

#endif // ENSEMBLE0_20_H_