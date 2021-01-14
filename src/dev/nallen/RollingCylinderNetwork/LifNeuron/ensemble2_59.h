#ifndef ENSEMBLE2_59_H_
#define ENSEMBLE2_59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_59 States
enum Ensemble259States {
    ENSEMBLE2_59_INTEGRATE,
    ENSEMBLE2_59_LIMIT,
    ENSEMBLE2_59_SPIKE,
    ENSEMBLE2_59_REFRACTORY,
};

// ensemble2_59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble259States state;
} Ensemble259;

// ensemble2_59 Initialisation function
void Ensemble259Init(Ensemble259* me);

// ensemble2_59 Execution function
void Ensemble259Run(Ensemble259* me);

#endif // ENSEMBLE2_59_H_