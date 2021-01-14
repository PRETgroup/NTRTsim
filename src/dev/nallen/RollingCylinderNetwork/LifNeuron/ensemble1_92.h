#ifndef ENSEMBLE1_92_H_
#define ENSEMBLE1_92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_92 States
enum Ensemble192States {
    ENSEMBLE1_92_INTEGRATE,
    ENSEMBLE1_92_LIMIT,
    ENSEMBLE1_92_SPIKE,
    ENSEMBLE1_92_REFRACTORY,
};

// ensemble1_92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble192States state;
} Ensemble192;

// ensemble1_92 Initialisation function
void Ensemble192Init(Ensemble192* me);

// ensemble1_92 Execution function
void Ensemble192Run(Ensemble192* me);

#endif // ENSEMBLE1_92_H_