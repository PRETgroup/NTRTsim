#ifndef ENSEMBLE0_39_H_
#define ENSEMBLE0_39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_39 States
enum Ensemble039States {
    ENSEMBLE0_39_INTEGRATE,
    ENSEMBLE0_39_LIMIT,
    ENSEMBLE0_39_SPIKE,
    ENSEMBLE0_39_REFRACTORY,
};

// ensemble0_39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble039States state;
} Ensemble039;

// ensemble0_39 Initialisation function
void Ensemble039Init(Ensemble039* me);

// ensemble0_39 Execution function
void Ensemble039Run(Ensemble039* me);

#endif // ENSEMBLE0_39_H_