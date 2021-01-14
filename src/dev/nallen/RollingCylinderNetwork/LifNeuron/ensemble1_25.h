#ifndef ENSEMBLE1_25_H_
#define ENSEMBLE1_25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_25 States
enum Ensemble125States {
    ENSEMBLE1_25_INTEGRATE,
    ENSEMBLE1_25_LIMIT,
    ENSEMBLE1_25_SPIKE,
    ENSEMBLE1_25_REFRACTORY,
};

// ensemble1_25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble125States state;
} Ensemble125;

// ensemble1_25 Initialisation function
void Ensemble125Init(Ensemble125* me);

// ensemble1_25 Execution function
void Ensemble125Run(Ensemble125* me);

#endif // ENSEMBLE1_25_H_