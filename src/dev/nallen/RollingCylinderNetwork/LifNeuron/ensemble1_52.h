#ifndef ENSEMBLE1_52_H_
#define ENSEMBLE1_52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_52 States
enum Ensemble152States {
    ENSEMBLE1_52_INTEGRATE,
    ENSEMBLE1_52_LIMIT,
    ENSEMBLE1_52_SPIKE,
    ENSEMBLE1_52_REFRACTORY,
};

// ensemble1_52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble152States state;
} Ensemble152;

// ensemble1_52 Initialisation function
void Ensemble152Init(Ensemble152* me);

// ensemble1_52 Execution function
void Ensemble152Run(Ensemble152* me);

#endif // ENSEMBLE1_52_H_