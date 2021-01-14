#ifndef ENSEMBLE2_4_H_
#define ENSEMBLE2_4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_4 States
enum Ensemble24States {
    ENSEMBLE2_4_INTEGRATE,
    ENSEMBLE2_4_LIMIT,
    ENSEMBLE2_4_SPIKE,
    ENSEMBLE2_4_REFRACTORY,
};

// ensemble2_4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble24States state;
} Ensemble24;

// ensemble2_4 Initialisation function
void Ensemble24Init(Ensemble24* me);

// ensemble2_4 Execution function
void Ensemble24Run(Ensemble24* me);

#endif // ENSEMBLE2_4_H_