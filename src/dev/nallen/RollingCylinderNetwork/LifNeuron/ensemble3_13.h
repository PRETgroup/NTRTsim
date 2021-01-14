#ifndef ENSEMBLE3_13_H_
#define ENSEMBLE3_13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_13 States
enum Ensemble313States {
    ENSEMBLE3_13_INTEGRATE,
    ENSEMBLE3_13_LIMIT,
    ENSEMBLE3_13_SPIKE,
    ENSEMBLE3_13_REFRACTORY,
};

// ensemble3_13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble313States state;
} Ensemble313;

// ensemble3_13 Initialisation function
void Ensemble313Init(Ensemble313* me);

// ensemble3_13 Execution function
void Ensemble313Run(Ensemble313* me);

#endif // ENSEMBLE3_13_H_