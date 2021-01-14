#ifndef ENSEMBLE2_18_H_
#define ENSEMBLE2_18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_18 States
enum Ensemble218States {
    ENSEMBLE2_18_INTEGRATE,
    ENSEMBLE2_18_LIMIT,
    ENSEMBLE2_18_SPIKE,
    ENSEMBLE2_18_REFRACTORY,
};

// ensemble2_18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble218States state;
} Ensemble218;

// ensemble2_18 Initialisation function
void Ensemble218Init(Ensemble218* me);

// ensemble2_18 Execution function
void Ensemble218Run(Ensemble218* me);

#endif // ENSEMBLE2_18_H_