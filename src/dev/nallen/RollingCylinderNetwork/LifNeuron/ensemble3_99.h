#ifndef ENSEMBLE3_99_H_
#define ENSEMBLE3_99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_99 States
enum Ensemble399States {
    ENSEMBLE3_99_INTEGRATE,
    ENSEMBLE3_99_LIMIT,
    ENSEMBLE3_99_SPIKE,
    ENSEMBLE3_99_REFRACTORY,
};

// ensemble3_99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble399States state;
} Ensemble399;

// ensemble3_99 Initialisation function
void Ensemble399Init(Ensemble399* me);

// ensemble3_99 Execution function
void Ensemble399Run(Ensemble399* me);

#endif // ENSEMBLE3_99_H_