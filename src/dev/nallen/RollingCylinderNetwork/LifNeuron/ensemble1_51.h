#ifndef ENSEMBLE1_51_H_
#define ENSEMBLE1_51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_51 States
enum Ensemble151States {
    ENSEMBLE1_51_INTEGRATE,
    ENSEMBLE1_51_LIMIT,
    ENSEMBLE1_51_SPIKE,
    ENSEMBLE1_51_REFRACTORY,
};

// ensemble1_51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble151States state;
} Ensemble151;

// ensemble1_51 Initialisation function
void Ensemble151Init(Ensemble151* me);

// ensemble1_51 Execution function
void Ensemble151Run(Ensemble151* me);

#endif // ENSEMBLE1_51_H_