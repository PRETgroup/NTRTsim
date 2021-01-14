#ifndef ENSEMBLE2_97_H_
#define ENSEMBLE2_97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_97 States
enum Ensemble297States {
    ENSEMBLE2_97_INTEGRATE,
    ENSEMBLE2_97_LIMIT,
    ENSEMBLE2_97_SPIKE,
    ENSEMBLE2_97_REFRACTORY,
};

// ensemble2_97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble297States state;
} Ensemble297;

// ensemble2_97 Initialisation function
void Ensemble297Init(Ensemble297* me);

// ensemble2_97 Execution function
void Ensemble297Run(Ensemble297* me);

#endif // ENSEMBLE2_97_H_