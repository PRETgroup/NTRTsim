#ifndef ENSEMBLE1_6_H_
#define ENSEMBLE1_6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_6 States
enum Ensemble16States {
    ENSEMBLE1_6_INTEGRATE,
    ENSEMBLE1_6_LIMIT,
    ENSEMBLE1_6_SPIKE,
    ENSEMBLE1_6_REFRACTORY,
};

// ensemble1_6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble16States state;
} Ensemble16;

// ensemble1_6 Initialisation function
void Ensemble16Init(Ensemble16* me);

// ensemble1_6 Execution function
void Ensemble16Run(Ensemble16* me);

#endif // ENSEMBLE1_6_H_