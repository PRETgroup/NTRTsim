#ifndef ENSEMBLE3_83_H_
#define ENSEMBLE3_83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_83 States
enum Ensemble383States {
    ENSEMBLE3_83_INTEGRATE,
    ENSEMBLE3_83_LIMIT,
    ENSEMBLE3_83_SPIKE,
    ENSEMBLE3_83_REFRACTORY,
};

// ensemble3_83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble383States state;
} Ensemble383;

// ensemble3_83 Initialisation function
void Ensemble383Init(Ensemble383* me);

// ensemble3_83 Execution function
void Ensemble383Run(Ensemble383* me);

#endif // ENSEMBLE3_83_H_