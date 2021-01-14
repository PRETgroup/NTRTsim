#ifndef ENSEMBLE3_89_H_
#define ENSEMBLE3_89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_89 States
enum Ensemble389States {
    ENSEMBLE3_89_INTEGRATE,
    ENSEMBLE3_89_LIMIT,
    ENSEMBLE3_89_SPIKE,
    ENSEMBLE3_89_REFRACTORY,
};

// ensemble3_89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble389States state;
} Ensemble389;

// ensemble3_89 Initialisation function
void Ensemble389Init(Ensemble389* me);

// ensemble3_89 Execution function
void Ensemble389Run(Ensemble389* me);

#endif // ENSEMBLE3_89_H_