#ifndef ENSEMBLE1_39_H_
#define ENSEMBLE1_39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_39 States
enum Ensemble139States {
    ENSEMBLE1_39_INTEGRATE,
    ENSEMBLE1_39_LIMIT,
    ENSEMBLE1_39_SPIKE,
    ENSEMBLE1_39_REFRACTORY,
};

// ensemble1_39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble139States state;
} Ensemble139;

// ensemble1_39 Initialisation function
void Ensemble139Init(Ensemble139* me);

// ensemble1_39 Execution function
void Ensemble139Run(Ensemble139* me);

#endif // ENSEMBLE1_39_H_