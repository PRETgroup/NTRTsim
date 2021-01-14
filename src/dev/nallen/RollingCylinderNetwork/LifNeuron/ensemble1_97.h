#ifndef ENSEMBLE1_97_H_
#define ENSEMBLE1_97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_97 States
enum Ensemble197States {
    ENSEMBLE1_97_INTEGRATE,
    ENSEMBLE1_97_LIMIT,
    ENSEMBLE1_97_SPIKE,
    ENSEMBLE1_97_REFRACTORY,
};

// ensemble1_97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble197States state;
} Ensemble197;

// ensemble1_97 Initialisation function
void Ensemble197Init(Ensemble197* me);

// ensemble1_97 Execution function
void Ensemble197Run(Ensemble197* me);

#endif // ENSEMBLE1_97_H_