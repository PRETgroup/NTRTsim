#ifndef ENSEMBLE2_65_H_
#define ENSEMBLE2_65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_65 States
enum Ensemble265States {
    ENSEMBLE2_65_INTEGRATE,
    ENSEMBLE2_65_LIMIT,
    ENSEMBLE2_65_SPIKE,
    ENSEMBLE2_65_REFRACTORY,
};

// ensemble2_65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble265States state;
} Ensemble265;

// ensemble2_65 Initialisation function
void Ensemble265Init(Ensemble265* me);

// ensemble2_65 Execution function
void Ensemble265Run(Ensemble265* me);

#endif // ENSEMBLE2_65_H_