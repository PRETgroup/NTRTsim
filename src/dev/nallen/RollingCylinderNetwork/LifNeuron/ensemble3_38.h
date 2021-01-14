#ifndef ENSEMBLE3_38_H_
#define ENSEMBLE3_38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_38 States
enum Ensemble338States {
    ENSEMBLE3_38_INTEGRATE,
    ENSEMBLE3_38_LIMIT,
    ENSEMBLE3_38_SPIKE,
    ENSEMBLE3_38_REFRACTORY,
};

// ensemble3_38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble338States state;
} Ensemble338;

// ensemble3_38 Initialisation function
void Ensemble338Init(Ensemble338* me);

// ensemble3_38 Execution function
void Ensemble338Run(Ensemble338* me);

#endif // ENSEMBLE3_38_H_