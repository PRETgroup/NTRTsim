#ifndef ENSEMBLE3_35_H_
#define ENSEMBLE3_35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_35 States
enum Ensemble335States {
    ENSEMBLE3_35_INTEGRATE,
    ENSEMBLE3_35_LIMIT,
    ENSEMBLE3_35_SPIKE,
    ENSEMBLE3_35_REFRACTORY,
};

// ensemble3_35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble335States state;
} Ensemble335;

// ensemble3_35 Initialisation function
void Ensemble335Init(Ensemble335* me);

// ensemble3_35 Execution function
void Ensemble335Run(Ensemble335* me);

#endif // ENSEMBLE3_35_H_