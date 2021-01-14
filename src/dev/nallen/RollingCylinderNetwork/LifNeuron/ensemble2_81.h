#ifndef ENSEMBLE2_81_H_
#define ENSEMBLE2_81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_81 States
enum Ensemble281States {
    ENSEMBLE2_81_INTEGRATE,
    ENSEMBLE2_81_LIMIT,
    ENSEMBLE2_81_SPIKE,
    ENSEMBLE2_81_REFRACTORY,
};

// ensemble2_81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble281States state;
} Ensemble281;

// ensemble2_81 Initialisation function
void Ensemble281Init(Ensemble281* me);

// ensemble2_81 Execution function
void Ensemble281Run(Ensemble281* me);

#endif // ENSEMBLE2_81_H_