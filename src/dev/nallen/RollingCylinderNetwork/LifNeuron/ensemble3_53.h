#ifndef ENSEMBLE3_53_H_
#define ENSEMBLE3_53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_53 States
enum Ensemble353States {
    ENSEMBLE3_53_INTEGRATE,
    ENSEMBLE3_53_LIMIT,
    ENSEMBLE3_53_SPIKE,
    ENSEMBLE3_53_REFRACTORY,
};

// ensemble3_53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble353States state;
} Ensemble353;

// ensemble3_53 Initialisation function
void Ensemble353Init(Ensemble353* me);

// ensemble3_53 Execution function
void Ensemble353Run(Ensemble353* me);

#endif // ENSEMBLE3_53_H_