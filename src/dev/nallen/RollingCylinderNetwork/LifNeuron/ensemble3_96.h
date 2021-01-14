#ifndef ENSEMBLE3_96_H_
#define ENSEMBLE3_96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_96 States
enum Ensemble396States {
    ENSEMBLE3_96_INTEGRATE,
    ENSEMBLE3_96_LIMIT,
    ENSEMBLE3_96_SPIKE,
    ENSEMBLE3_96_REFRACTORY,
};

// ensemble3_96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble396States state;
} Ensemble396;

// ensemble3_96 Initialisation function
void Ensemble396Init(Ensemble396* me);

// ensemble3_96 Execution function
void Ensemble396Run(Ensemble396* me);

#endif // ENSEMBLE3_96_H_