#ifndef ENSEMBLE3_94_H_
#define ENSEMBLE3_94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_94 States
enum Ensemble394States {
    ENSEMBLE3_94_INTEGRATE,
    ENSEMBLE3_94_LIMIT,
    ENSEMBLE3_94_SPIKE,
    ENSEMBLE3_94_REFRACTORY,
};

// ensemble3_94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble394States state;
} Ensemble394;

// ensemble3_94 Initialisation function
void Ensemble394Init(Ensemble394* me);

// ensemble3_94 Execution function
void Ensemble394Run(Ensemble394* me);

#endif // ENSEMBLE3_94_H_