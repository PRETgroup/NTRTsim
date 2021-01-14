#ifndef ENSEMBLE0_33_H_
#define ENSEMBLE0_33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_33 States
enum Ensemble033States {
    ENSEMBLE0_33_INTEGRATE,
    ENSEMBLE0_33_LIMIT,
    ENSEMBLE0_33_SPIKE,
    ENSEMBLE0_33_REFRACTORY,
};

// ensemble0_33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble033States state;
} Ensemble033;

// ensemble0_33 Initialisation function
void Ensemble033Init(Ensemble033* me);

// ensemble0_33 Execution function
void Ensemble033Run(Ensemble033* me);

#endif // ENSEMBLE0_33_H_