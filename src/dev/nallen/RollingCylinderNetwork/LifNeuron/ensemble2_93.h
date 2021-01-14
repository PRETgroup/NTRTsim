#ifndef ENSEMBLE2_93_H_
#define ENSEMBLE2_93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_93 States
enum Ensemble293States {
    ENSEMBLE2_93_INTEGRATE,
    ENSEMBLE2_93_LIMIT,
    ENSEMBLE2_93_SPIKE,
    ENSEMBLE2_93_REFRACTORY,
};

// ensemble2_93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble293States state;
} Ensemble293;

// ensemble2_93 Initialisation function
void Ensemble293Init(Ensemble293* me);

// ensemble2_93 Execution function
void Ensemble293Run(Ensemble293* me);

#endif // ENSEMBLE2_93_H_