#ifndef ENSEMBLE1_67_H_
#define ENSEMBLE1_67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_67 States
enum Ensemble167States {
    ENSEMBLE1_67_INTEGRATE,
    ENSEMBLE1_67_LIMIT,
    ENSEMBLE1_67_SPIKE,
    ENSEMBLE1_67_REFRACTORY,
};

// ensemble1_67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble167States state;
} Ensemble167;

// ensemble1_67 Initialisation function
void Ensemble167Init(Ensemble167* me);

// ensemble1_67 Execution function
void Ensemble167Run(Ensemble167* me);

#endif // ENSEMBLE1_67_H_