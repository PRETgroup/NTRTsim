#ifndef ENSEMBLE3_41_H_
#define ENSEMBLE3_41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_41 States
enum Ensemble341States {
    ENSEMBLE3_41_INTEGRATE,
    ENSEMBLE3_41_LIMIT,
    ENSEMBLE3_41_SPIKE,
    ENSEMBLE3_41_REFRACTORY,
};

// ensemble3_41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble341States state;
} Ensemble341;

// ensemble3_41 Initialisation function
void Ensemble341Init(Ensemble341* me);

// ensemble3_41 Execution function
void Ensemble341Run(Ensemble341* me);

#endif // ENSEMBLE3_41_H_