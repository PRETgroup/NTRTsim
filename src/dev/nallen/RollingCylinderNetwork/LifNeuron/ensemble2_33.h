#ifndef ENSEMBLE2_33_H_
#define ENSEMBLE2_33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_33 States
enum Ensemble233States {
    ENSEMBLE2_33_INTEGRATE,
    ENSEMBLE2_33_LIMIT,
    ENSEMBLE2_33_SPIKE,
    ENSEMBLE2_33_REFRACTORY,
};

// ensemble2_33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble233States state;
} Ensemble233;

// ensemble2_33 Initialisation function
void Ensemble233Init(Ensemble233* me);

// ensemble2_33 Execution function
void Ensemble233Run(Ensemble233* me);

#endif // ENSEMBLE2_33_H_