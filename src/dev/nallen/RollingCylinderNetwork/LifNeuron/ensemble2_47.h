#ifndef ENSEMBLE2_47_H_
#define ENSEMBLE2_47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_47 States
enum Ensemble247States {
    ENSEMBLE2_47_INTEGRATE,
    ENSEMBLE2_47_LIMIT,
    ENSEMBLE2_47_SPIKE,
    ENSEMBLE2_47_REFRACTORY,
};

// ensemble2_47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble247States state;
} Ensemble247;

// ensemble2_47 Initialisation function
void Ensemble247Init(Ensemble247* me);

// ensemble2_47 Execution function
void Ensemble247Run(Ensemble247* me);

#endif // ENSEMBLE2_47_H_