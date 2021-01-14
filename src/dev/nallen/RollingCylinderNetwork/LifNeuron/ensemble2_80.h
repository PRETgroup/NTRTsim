#ifndef ENSEMBLE2_80_H_
#define ENSEMBLE2_80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_80 States
enum Ensemble280States {
    ENSEMBLE2_80_INTEGRATE,
    ENSEMBLE2_80_LIMIT,
    ENSEMBLE2_80_SPIKE,
    ENSEMBLE2_80_REFRACTORY,
};

// ensemble2_80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble280States state;
} Ensemble280;

// ensemble2_80 Initialisation function
void Ensemble280Init(Ensemble280* me);

// ensemble2_80 Execution function
void Ensemble280Run(Ensemble280* me);

#endif // ENSEMBLE2_80_H_