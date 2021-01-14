#ifndef ENSEMBLE3_11_H_
#define ENSEMBLE3_11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_11 States
enum Ensemble311States {
    ENSEMBLE3_11_INTEGRATE,
    ENSEMBLE3_11_LIMIT,
    ENSEMBLE3_11_SPIKE,
    ENSEMBLE3_11_REFRACTORY,
};

// ensemble3_11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble311States state;
} Ensemble311;

// ensemble3_11 Initialisation function
void Ensemble311Init(Ensemble311* me);

// ensemble3_11 Execution function
void Ensemble311Run(Ensemble311* me);

#endif // ENSEMBLE3_11_H_