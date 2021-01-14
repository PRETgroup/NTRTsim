#ifndef ENSEMBLE1_35_H_
#define ENSEMBLE1_35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_35 States
enum Ensemble135States {
    ENSEMBLE1_35_INTEGRATE,
    ENSEMBLE1_35_LIMIT,
    ENSEMBLE1_35_SPIKE,
    ENSEMBLE1_35_REFRACTORY,
};

// ensemble1_35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble135States state;
} Ensemble135;

// ensemble1_35 Initialisation function
void Ensemble135Init(Ensemble135* me);

// ensemble1_35 Execution function
void Ensemble135Run(Ensemble135* me);

#endif // ENSEMBLE1_35_H_