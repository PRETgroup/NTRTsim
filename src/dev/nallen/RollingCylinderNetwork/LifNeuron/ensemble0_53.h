#ifndef ENSEMBLE0_53_H_
#define ENSEMBLE0_53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_53 States
enum Ensemble053States {
    ENSEMBLE0_53_INTEGRATE,
    ENSEMBLE0_53_LIMIT,
    ENSEMBLE0_53_SPIKE,
    ENSEMBLE0_53_REFRACTORY,
};

// ensemble0_53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble053States state;
} Ensemble053;

// ensemble0_53 Initialisation function
void Ensemble053Init(Ensemble053* me);

// ensemble0_53 Execution function
void Ensemble053Run(Ensemble053* me);

#endif // ENSEMBLE0_53_H_