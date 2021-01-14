#ifndef ENSEMBLE2_66_H_
#define ENSEMBLE2_66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_66 States
enum Ensemble266States {
    ENSEMBLE2_66_INTEGRATE,
    ENSEMBLE2_66_LIMIT,
    ENSEMBLE2_66_SPIKE,
    ENSEMBLE2_66_REFRACTORY,
};

// ensemble2_66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble266States state;
} Ensemble266;

// ensemble2_66 Initialisation function
void Ensemble266Init(Ensemble266* me);

// ensemble2_66 Execution function
void Ensemble266Run(Ensemble266* me);

#endif // ENSEMBLE2_66_H_