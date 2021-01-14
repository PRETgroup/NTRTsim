#ifndef ENSEMBLE3_44_H_
#define ENSEMBLE3_44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_44 States
enum Ensemble344States {
    ENSEMBLE3_44_INTEGRATE,
    ENSEMBLE3_44_LIMIT,
    ENSEMBLE3_44_SPIKE,
    ENSEMBLE3_44_REFRACTORY,
};

// ensemble3_44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble344States state;
} Ensemble344;

// ensemble3_44 Initialisation function
void Ensemble344Init(Ensemble344* me);

// ensemble3_44 Execution function
void Ensemble344Run(Ensemble344* me);

#endif // ENSEMBLE3_44_H_