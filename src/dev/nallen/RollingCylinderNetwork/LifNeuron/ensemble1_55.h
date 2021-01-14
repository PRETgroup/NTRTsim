#ifndef ENSEMBLE1_55_H_
#define ENSEMBLE1_55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_55 States
enum Ensemble155States {
    ENSEMBLE1_55_INTEGRATE,
    ENSEMBLE1_55_LIMIT,
    ENSEMBLE1_55_SPIKE,
    ENSEMBLE1_55_REFRACTORY,
};

// ensemble1_55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble155States state;
} Ensemble155;

// ensemble1_55 Initialisation function
void Ensemble155Init(Ensemble155* me);

// ensemble1_55 Execution function
void Ensemble155Run(Ensemble155* me);

#endif // ENSEMBLE1_55_H_