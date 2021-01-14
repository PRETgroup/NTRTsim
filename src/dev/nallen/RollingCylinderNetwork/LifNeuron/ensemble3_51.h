#ifndef ENSEMBLE3_51_H_
#define ENSEMBLE3_51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_51 States
enum Ensemble351States {
    ENSEMBLE3_51_INTEGRATE,
    ENSEMBLE3_51_LIMIT,
    ENSEMBLE3_51_SPIKE,
    ENSEMBLE3_51_REFRACTORY,
};

// ensemble3_51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble351States state;
} Ensemble351;

// ensemble3_51 Initialisation function
void Ensemble351Init(Ensemble351* me);

// ensemble3_51 Execution function
void Ensemble351Run(Ensemble351* me);

#endif // ENSEMBLE3_51_H_