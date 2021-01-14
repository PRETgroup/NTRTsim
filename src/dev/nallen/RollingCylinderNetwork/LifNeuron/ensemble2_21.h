#ifndef ENSEMBLE2_21_H_
#define ENSEMBLE2_21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_21 States
enum Ensemble221States {
    ENSEMBLE2_21_INTEGRATE,
    ENSEMBLE2_21_LIMIT,
    ENSEMBLE2_21_SPIKE,
    ENSEMBLE2_21_REFRACTORY,
};

// ensemble2_21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble221States state;
} Ensemble221;

// ensemble2_21 Initialisation function
void Ensemble221Init(Ensemble221* me);

// ensemble2_21 Execution function
void Ensemble221Run(Ensemble221* me);

#endif // ENSEMBLE2_21_H_