#ifndef ENSEMBLE0_66_H_
#define ENSEMBLE0_66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_66 States
enum Ensemble066States {
    ENSEMBLE0_66_INTEGRATE,
    ENSEMBLE0_66_LIMIT,
    ENSEMBLE0_66_SPIKE,
    ENSEMBLE0_66_REFRACTORY,
};

// ensemble0_66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble066States state;
} Ensemble066;

// ensemble0_66 Initialisation function
void Ensemble066Init(Ensemble066* me);

// ensemble0_66 Execution function
void Ensemble066Run(Ensemble066* me);

#endif // ENSEMBLE0_66_H_