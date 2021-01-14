#ifndef ENSEMBLE3_95_H_
#define ENSEMBLE3_95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_95 States
enum Ensemble395States {
    ENSEMBLE3_95_INTEGRATE,
    ENSEMBLE3_95_LIMIT,
    ENSEMBLE3_95_SPIKE,
    ENSEMBLE3_95_REFRACTORY,
};

// ensemble3_95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble395States state;
} Ensemble395;

// ensemble3_95 Initialisation function
void Ensemble395Init(Ensemble395* me);

// ensemble3_95 Execution function
void Ensemble395Run(Ensemble395* me);

#endif // ENSEMBLE3_95_H_