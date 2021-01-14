#ifndef ENSEMBLE3_65_H_
#define ENSEMBLE3_65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_65 States
enum Ensemble365States {
    ENSEMBLE3_65_INTEGRATE,
    ENSEMBLE3_65_LIMIT,
    ENSEMBLE3_65_SPIKE,
    ENSEMBLE3_65_REFRACTORY,
};

// ensemble3_65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble365States state;
} Ensemble365;

// ensemble3_65 Initialisation function
void Ensemble365Init(Ensemble365* me);

// ensemble3_65 Execution function
void Ensemble365Run(Ensemble365* me);

#endif // ENSEMBLE3_65_H_