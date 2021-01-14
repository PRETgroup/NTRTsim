#ifndef ENSEMBLE1_45_H_
#define ENSEMBLE1_45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_45 States
enum Ensemble145States {
    ENSEMBLE1_45_INTEGRATE,
    ENSEMBLE1_45_LIMIT,
    ENSEMBLE1_45_SPIKE,
    ENSEMBLE1_45_REFRACTORY,
};

// ensemble1_45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble145States state;
} Ensemble145;

// ensemble1_45 Initialisation function
void Ensemble145Init(Ensemble145* me);

// ensemble1_45 Execution function
void Ensemble145Run(Ensemble145* me);

#endif // ENSEMBLE1_45_H_