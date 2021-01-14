#ifndef ENSEMBLE1_49_H_
#define ENSEMBLE1_49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_49 States
enum Ensemble149States {
    ENSEMBLE1_49_INTEGRATE,
    ENSEMBLE1_49_LIMIT,
    ENSEMBLE1_49_SPIKE,
    ENSEMBLE1_49_REFRACTORY,
};

// ensemble1_49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble149States state;
} Ensemble149;

// ensemble1_49 Initialisation function
void Ensemble149Init(Ensemble149* me);

// ensemble1_49 Execution function
void Ensemble149Run(Ensemble149* me);

#endif // ENSEMBLE1_49_H_