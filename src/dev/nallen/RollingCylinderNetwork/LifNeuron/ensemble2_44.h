#ifndef ENSEMBLE2_44_H_
#define ENSEMBLE2_44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_44 States
enum Ensemble244States {
    ENSEMBLE2_44_INTEGRATE,
    ENSEMBLE2_44_LIMIT,
    ENSEMBLE2_44_SPIKE,
    ENSEMBLE2_44_REFRACTORY,
};

// ensemble2_44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble244States state;
} Ensemble244;

// ensemble2_44 Initialisation function
void Ensemble244Init(Ensemble244* me);

// ensemble2_44 Execution function
void Ensemble244Run(Ensemble244* me);

#endif // ENSEMBLE2_44_H_