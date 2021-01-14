#ifndef ENSEMBLE3_71_H_
#define ENSEMBLE3_71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_71 States
enum Ensemble371States {
    ENSEMBLE3_71_INTEGRATE,
    ENSEMBLE3_71_LIMIT,
    ENSEMBLE3_71_SPIKE,
    ENSEMBLE3_71_REFRACTORY,
};

// ensemble3_71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble371States state;
} Ensemble371;

// ensemble3_71 Initialisation function
void Ensemble371Init(Ensemble371* me);

// ensemble3_71 Execution function
void Ensemble371Run(Ensemble371* me);

#endif // ENSEMBLE3_71_H_