#ifndef ENSEMBLE1_99_H_
#define ENSEMBLE1_99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_99 States
enum Ensemble199States {
    ENSEMBLE1_99_INTEGRATE,
    ENSEMBLE1_99_LIMIT,
    ENSEMBLE1_99_SPIKE,
    ENSEMBLE1_99_REFRACTORY,
};

// ensemble1_99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble199States state;
} Ensemble199;

// ensemble1_99 Initialisation function
void Ensemble199Init(Ensemble199* me);

// ensemble1_99 Execution function
void Ensemble199Run(Ensemble199* me);

#endif // ENSEMBLE1_99_H_