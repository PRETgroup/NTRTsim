#ifndef ENSEMBLE3_6_H_
#define ENSEMBLE3_6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_6 States
enum Ensemble36States {
    ENSEMBLE3_6_INTEGRATE,
    ENSEMBLE3_6_LIMIT,
    ENSEMBLE3_6_SPIKE,
    ENSEMBLE3_6_REFRACTORY,
};

// ensemble3_6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble36States state;
} Ensemble36;

// ensemble3_6 Initialisation function
void Ensemble36Init(Ensemble36* me);

// ensemble3_6 Execution function
void Ensemble36Run(Ensemble36* me);

#endif // ENSEMBLE3_6_H_