#ifndef ENSEMBLE3_68_H_
#define ENSEMBLE3_68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_68 States
enum Ensemble368States {
    ENSEMBLE3_68_INTEGRATE,
    ENSEMBLE3_68_LIMIT,
    ENSEMBLE3_68_SPIKE,
    ENSEMBLE3_68_REFRACTORY,
};

// ensemble3_68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble368States state;
} Ensemble368;

// ensemble3_68 Initialisation function
void Ensemble368Init(Ensemble368* me);

// ensemble3_68 Execution function
void Ensemble368Run(Ensemble368* me);

#endif // ENSEMBLE3_68_H_