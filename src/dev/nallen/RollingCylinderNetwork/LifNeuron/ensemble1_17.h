#ifndef ENSEMBLE1_17_H_
#define ENSEMBLE1_17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_17 States
enum Ensemble117States {
    ENSEMBLE1_17_INTEGRATE,
    ENSEMBLE1_17_LIMIT,
    ENSEMBLE1_17_SPIKE,
    ENSEMBLE1_17_REFRACTORY,
};

// ensemble1_17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble117States state;
} Ensemble117;

// ensemble1_17 Initialisation function
void Ensemble117Init(Ensemble117* me);

// ensemble1_17 Execution function
void Ensemble117Run(Ensemble117* me);

#endif // ENSEMBLE1_17_H_