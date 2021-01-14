#ifndef ENSEMBLE3_16_H_
#define ENSEMBLE3_16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_16 States
enum Ensemble316States {
    ENSEMBLE3_16_INTEGRATE,
    ENSEMBLE3_16_LIMIT,
    ENSEMBLE3_16_SPIKE,
    ENSEMBLE3_16_REFRACTORY,
};

// ensemble3_16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble316States state;
} Ensemble316;

// ensemble3_16 Initialisation function
void Ensemble316Init(Ensemble316* me);

// ensemble3_16 Execution function
void Ensemble316Run(Ensemble316* me);

#endif // ENSEMBLE3_16_H_