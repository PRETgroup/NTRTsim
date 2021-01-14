#ifndef ENSEMBLE0_72_H_
#define ENSEMBLE0_72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_72 States
enum Ensemble072States {
    ENSEMBLE0_72_INTEGRATE,
    ENSEMBLE0_72_LIMIT,
    ENSEMBLE0_72_SPIKE,
    ENSEMBLE0_72_REFRACTORY,
};

// ensemble0_72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble072States state;
} Ensemble072;

// ensemble0_72 Initialisation function
void Ensemble072Init(Ensemble072* me);

// ensemble0_72 Execution function
void Ensemble072Run(Ensemble072* me);

#endif // ENSEMBLE0_72_H_