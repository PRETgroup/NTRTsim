#ifndef ENSEMBLE3_62_H_
#define ENSEMBLE3_62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_62 States
enum Ensemble362States {
    ENSEMBLE3_62_INTEGRATE,
    ENSEMBLE3_62_LIMIT,
    ENSEMBLE3_62_SPIKE,
    ENSEMBLE3_62_REFRACTORY,
};

// ensemble3_62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble362States state;
} Ensemble362;

// ensemble3_62 Initialisation function
void Ensemble362Init(Ensemble362* me);

// ensemble3_62 Execution function
void Ensemble362Run(Ensemble362* me);

#endif // ENSEMBLE3_62_H_