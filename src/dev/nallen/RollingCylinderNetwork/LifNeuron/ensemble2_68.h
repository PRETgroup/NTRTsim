#ifndef ENSEMBLE2_68_H_
#define ENSEMBLE2_68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_68 States
enum Ensemble268States {
    ENSEMBLE2_68_INTEGRATE,
    ENSEMBLE2_68_LIMIT,
    ENSEMBLE2_68_SPIKE,
    ENSEMBLE2_68_REFRACTORY,
};

// ensemble2_68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble268States state;
} Ensemble268;

// ensemble2_68 Initialisation function
void Ensemble268Init(Ensemble268* me);

// ensemble2_68 Execution function
void Ensemble268Run(Ensemble268* me);

#endif // ENSEMBLE2_68_H_