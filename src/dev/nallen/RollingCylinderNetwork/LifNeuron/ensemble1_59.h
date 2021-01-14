#ifndef ENSEMBLE1_59_H_
#define ENSEMBLE1_59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_59 States
enum Ensemble159States {
    ENSEMBLE1_59_INTEGRATE,
    ENSEMBLE1_59_LIMIT,
    ENSEMBLE1_59_SPIKE,
    ENSEMBLE1_59_REFRACTORY,
};

// ensemble1_59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble159States state;
} Ensemble159;

// ensemble1_59 Initialisation function
void Ensemble159Init(Ensemble159* me);

// ensemble1_59 Execution function
void Ensemble159Run(Ensemble159* me);

#endif // ENSEMBLE1_59_H_