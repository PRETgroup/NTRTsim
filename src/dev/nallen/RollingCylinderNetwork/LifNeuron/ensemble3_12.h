#ifndef ENSEMBLE3_12_H_
#define ENSEMBLE3_12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_12 States
enum Ensemble312States {
    ENSEMBLE3_12_INTEGRATE,
    ENSEMBLE3_12_LIMIT,
    ENSEMBLE3_12_SPIKE,
    ENSEMBLE3_12_REFRACTORY,
};

// ensemble3_12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble312States state;
} Ensemble312;

// ensemble3_12 Initialisation function
void Ensemble312Init(Ensemble312* me);

// ensemble3_12 Execution function
void Ensemble312Run(Ensemble312* me);

#endif // ENSEMBLE3_12_H_