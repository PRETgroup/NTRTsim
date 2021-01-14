#ifndef ENSEMBLE1_91_H_
#define ENSEMBLE1_91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_91 States
enum Ensemble191States {
    ENSEMBLE1_91_INTEGRATE,
    ENSEMBLE1_91_LIMIT,
    ENSEMBLE1_91_SPIKE,
    ENSEMBLE1_91_REFRACTORY,
};

// ensemble1_91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble191States state;
} Ensemble191;

// ensemble1_91 Initialisation function
void Ensemble191Init(Ensemble191* me);

// ensemble1_91 Execution function
void Ensemble191Run(Ensemble191* me);

#endif // ENSEMBLE1_91_H_