#ifndef ENSEMBLE3_45_H_
#define ENSEMBLE3_45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_45 States
enum Ensemble345States {
    ENSEMBLE3_45_INTEGRATE,
    ENSEMBLE3_45_LIMIT,
    ENSEMBLE3_45_SPIKE,
    ENSEMBLE3_45_REFRACTORY,
};

// ensemble3_45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble345States state;
} Ensemble345;

// ensemble3_45 Initialisation function
void Ensemble345Init(Ensemble345* me);

// ensemble3_45 Execution function
void Ensemble345Run(Ensemble345* me);

#endif // ENSEMBLE3_45_H_