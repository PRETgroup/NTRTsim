#ifndef ENSEMBLE1_84_H_
#define ENSEMBLE1_84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_84 States
enum Ensemble184States {
    ENSEMBLE1_84_INTEGRATE,
    ENSEMBLE1_84_LIMIT,
    ENSEMBLE1_84_SPIKE,
    ENSEMBLE1_84_REFRACTORY,
};

// ensemble1_84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble184States state;
} Ensemble184;

// ensemble1_84 Initialisation function
void Ensemble184Init(Ensemble184* me);

// ensemble1_84 Execution function
void Ensemble184Run(Ensemble184* me);

#endif // ENSEMBLE1_84_H_