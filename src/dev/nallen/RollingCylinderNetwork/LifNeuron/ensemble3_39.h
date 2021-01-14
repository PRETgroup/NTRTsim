#ifndef ENSEMBLE3_39_H_
#define ENSEMBLE3_39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_39 States
enum Ensemble339States {
    ENSEMBLE3_39_INTEGRATE,
    ENSEMBLE3_39_LIMIT,
    ENSEMBLE3_39_SPIKE,
    ENSEMBLE3_39_REFRACTORY,
};

// ensemble3_39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble339States state;
} Ensemble339;

// ensemble3_39 Initialisation function
void Ensemble339Init(Ensemble339* me);

// ensemble3_39 Execution function
void Ensemble339Run(Ensemble339* me);

#endif // ENSEMBLE3_39_H_