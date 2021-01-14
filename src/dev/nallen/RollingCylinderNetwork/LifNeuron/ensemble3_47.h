#ifndef ENSEMBLE3_47_H_
#define ENSEMBLE3_47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_47 States
enum Ensemble347States {
    ENSEMBLE3_47_INTEGRATE,
    ENSEMBLE3_47_LIMIT,
    ENSEMBLE3_47_SPIKE,
    ENSEMBLE3_47_REFRACTORY,
};

// ensemble3_47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble347States state;
} Ensemble347;

// ensemble3_47 Initialisation function
void Ensemble347Init(Ensemble347* me);

// ensemble3_47 Execution function
void Ensemble347Run(Ensemble347* me);

#endif // ENSEMBLE3_47_H_