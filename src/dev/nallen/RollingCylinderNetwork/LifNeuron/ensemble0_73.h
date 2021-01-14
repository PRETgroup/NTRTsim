#ifndef ENSEMBLE0_73_H_
#define ENSEMBLE0_73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_73 States
enum Ensemble073States {
    ENSEMBLE0_73_INTEGRATE,
    ENSEMBLE0_73_LIMIT,
    ENSEMBLE0_73_SPIKE,
    ENSEMBLE0_73_REFRACTORY,
};

// ensemble0_73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble073States state;
} Ensemble073;

// ensemble0_73 Initialisation function
void Ensemble073Init(Ensemble073* me);

// ensemble0_73 Execution function
void Ensemble073Run(Ensemble073* me);

#endif // ENSEMBLE0_73_H_