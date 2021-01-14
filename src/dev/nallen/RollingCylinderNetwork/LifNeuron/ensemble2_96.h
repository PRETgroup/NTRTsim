#ifndef ENSEMBLE2_96_H_
#define ENSEMBLE2_96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_96 States
enum Ensemble296States {
    ENSEMBLE2_96_INTEGRATE,
    ENSEMBLE2_96_LIMIT,
    ENSEMBLE2_96_SPIKE,
    ENSEMBLE2_96_REFRACTORY,
};

// ensemble2_96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble296States state;
} Ensemble296;

// ensemble2_96 Initialisation function
void Ensemble296Init(Ensemble296* me);

// ensemble2_96 Execution function
void Ensemble296Run(Ensemble296* me);

#endif // ENSEMBLE2_96_H_