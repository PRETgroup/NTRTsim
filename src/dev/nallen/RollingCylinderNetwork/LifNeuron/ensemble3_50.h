#ifndef ENSEMBLE3_50_H_
#define ENSEMBLE3_50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_50 States
enum Ensemble350States {
    ENSEMBLE3_50_INTEGRATE,
    ENSEMBLE3_50_LIMIT,
    ENSEMBLE3_50_SPIKE,
    ENSEMBLE3_50_REFRACTORY,
};

// ensemble3_50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble350States state;
} Ensemble350;

// ensemble3_50 Initialisation function
void Ensemble350Init(Ensemble350* me);

// ensemble3_50 Execution function
void Ensemble350Run(Ensemble350* me);

#endif // ENSEMBLE3_50_H_