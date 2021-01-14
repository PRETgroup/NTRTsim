#ifndef ENSEMBLE3_67_H_
#define ENSEMBLE3_67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_67 States
enum Ensemble367States {
    ENSEMBLE3_67_INTEGRATE,
    ENSEMBLE3_67_LIMIT,
    ENSEMBLE3_67_SPIKE,
    ENSEMBLE3_67_REFRACTORY,
};

// ensemble3_67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble367States state;
} Ensemble367;

// ensemble3_67 Initialisation function
void Ensemble367Init(Ensemble367* me);

// ensemble3_67 Execution function
void Ensemble367Run(Ensemble367* me);

#endif // ENSEMBLE3_67_H_