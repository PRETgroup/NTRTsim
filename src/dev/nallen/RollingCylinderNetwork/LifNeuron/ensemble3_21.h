#ifndef ENSEMBLE3_21_H_
#define ENSEMBLE3_21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_21 States
enum Ensemble321States {
    ENSEMBLE3_21_INTEGRATE,
    ENSEMBLE3_21_LIMIT,
    ENSEMBLE3_21_SPIKE,
    ENSEMBLE3_21_REFRACTORY,
};

// ensemble3_21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble321States state;
} Ensemble321;

// ensemble3_21 Initialisation function
void Ensemble321Init(Ensemble321* me);

// ensemble3_21 Execution function
void Ensemble321Run(Ensemble321* me);

#endif // ENSEMBLE3_21_H_