#ifndef ENSEMBLE2_52_H_
#define ENSEMBLE2_52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_52 States
enum Ensemble252States {
    ENSEMBLE2_52_INTEGRATE,
    ENSEMBLE2_52_LIMIT,
    ENSEMBLE2_52_SPIKE,
    ENSEMBLE2_52_REFRACTORY,
};

// ensemble2_52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble252States state;
} Ensemble252;

// ensemble2_52 Initialisation function
void Ensemble252Init(Ensemble252* me);

// ensemble2_52 Execution function
void Ensemble252Run(Ensemble252* me);

#endif // ENSEMBLE2_52_H_