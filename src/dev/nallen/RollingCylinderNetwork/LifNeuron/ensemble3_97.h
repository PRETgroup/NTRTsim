#ifndef ENSEMBLE3_97_H_
#define ENSEMBLE3_97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_97 States
enum Ensemble397States {
    ENSEMBLE3_97_INTEGRATE,
    ENSEMBLE3_97_LIMIT,
    ENSEMBLE3_97_SPIKE,
    ENSEMBLE3_97_REFRACTORY,
};

// ensemble3_97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble397States state;
} Ensemble397;

// ensemble3_97 Initialisation function
void Ensemble397Init(Ensemble397* me);

// ensemble3_97 Execution function
void Ensemble397Run(Ensemble397* me);

#endif // ENSEMBLE3_97_H_