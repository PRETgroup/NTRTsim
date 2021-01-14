#ifndef ENSEMBLE2_6_H_
#define ENSEMBLE2_6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_6 States
enum Ensemble26States {
    ENSEMBLE2_6_INTEGRATE,
    ENSEMBLE2_6_LIMIT,
    ENSEMBLE2_6_SPIKE,
    ENSEMBLE2_6_REFRACTORY,
};

// ensemble2_6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble26States state;
} Ensemble26;

// ensemble2_6 Initialisation function
void Ensemble26Init(Ensemble26* me);

// ensemble2_6 Execution function
void Ensemble26Run(Ensemble26* me);

#endif // ENSEMBLE2_6_H_