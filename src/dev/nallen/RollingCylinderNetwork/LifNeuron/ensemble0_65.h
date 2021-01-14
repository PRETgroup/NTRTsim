#ifndef ENSEMBLE0_65_H_
#define ENSEMBLE0_65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_65 States
enum Ensemble065States {
    ENSEMBLE0_65_INTEGRATE,
    ENSEMBLE0_65_LIMIT,
    ENSEMBLE0_65_SPIKE,
    ENSEMBLE0_65_REFRACTORY,
};

// ensemble0_65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble065States state;
} Ensemble065;

// ensemble0_65 Initialisation function
void Ensemble065Init(Ensemble065* me);

// ensemble0_65 Execution function
void Ensemble065Run(Ensemble065* me);

#endif // ENSEMBLE0_65_H_