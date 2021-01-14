#ifndef ENSEMBLE3_8_H_
#define ENSEMBLE3_8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_8 States
enum Ensemble38States {
    ENSEMBLE3_8_INTEGRATE,
    ENSEMBLE3_8_LIMIT,
    ENSEMBLE3_8_SPIKE,
    ENSEMBLE3_8_REFRACTORY,
};

// ensemble3_8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble38States state;
} Ensemble38;

// ensemble3_8 Initialisation function
void Ensemble38Init(Ensemble38* me);

// ensemble3_8 Execution function
void Ensemble38Run(Ensemble38* me);

#endif // ENSEMBLE3_8_H_