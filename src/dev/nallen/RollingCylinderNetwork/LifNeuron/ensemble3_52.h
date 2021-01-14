#ifndef ENSEMBLE3_52_H_
#define ENSEMBLE3_52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_52 States
enum Ensemble352States {
    ENSEMBLE3_52_INTEGRATE,
    ENSEMBLE3_52_LIMIT,
    ENSEMBLE3_52_SPIKE,
    ENSEMBLE3_52_REFRACTORY,
};

// ensemble3_52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble352States state;
} Ensemble352;

// ensemble3_52 Initialisation function
void Ensemble352Init(Ensemble352* me);

// ensemble3_52 Execution function
void Ensemble352Run(Ensemble352* me);

#endif // ENSEMBLE3_52_H_