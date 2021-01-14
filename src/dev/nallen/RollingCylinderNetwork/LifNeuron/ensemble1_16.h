#ifndef ENSEMBLE1_16_H_
#define ENSEMBLE1_16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_16 States
enum Ensemble116States {
    ENSEMBLE1_16_INTEGRATE,
    ENSEMBLE1_16_LIMIT,
    ENSEMBLE1_16_SPIKE,
    ENSEMBLE1_16_REFRACTORY,
};

// ensemble1_16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble116States state;
} Ensemble116;

// ensemble1_16 Initialisation function
void Ensemble116Init(Ensemble116* me);

// ensemble1_16 Execution function
void Ensemble116Run(Ensemble116* me);

#endif // ENSEMBLE1_16_H_