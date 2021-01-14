#ifndef ENSEMBLE2_43_H_
#define ENSEMBLE2_43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_43 States
enum Ensemble243States {
    ENSEMBLE2_43_INTEGRATE,
    ENSEMBLE2_43_LIMIT,
    ENSEMBLE2_43_SPIKE,
    ENSEMBLE2_43_REFRACTORY,
};

// ensemble2_43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble243States state;
} Ensemble243;

// ensemble2_43 Initialisation function
void Ensemble243Init(Ensemble243* me);

// ensemble2_43 Execution function
void Ensemble243Run(Ensemble243* me);

#endif // ENSEMBLE2_43_H_