#ifndef ENSEMBLE2_60_H_
#define ENSEMBLE2_60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_60 States
enum Ensemble260States {
    ENSEMBLE2_60_INTEGRATE,
    ENSEMBLE2_60_LIMIT,
    ENSEMBLE2_60_SPIKE,
    ENSEMBLE2_60_REFRACTORY,
};

// ensemble2_60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble260States state;
} Ensemble260;

// ensemble2_60 Initialisation function
void Ensemble260Init(Ensemble260* me);

// ensemble2_60 Execution function
void Ensemble260Run(Ensemble260* me);

#endif // ENSEMBLE2_60_H_