#ifndef ENSEMBLE2_76_H_
#define ENSEMBLE2_76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_76 States
enum Ensemble276States {
    ENSEMBLE2_76_INTEGRATE,
    ENSEMBLE2_76_LIMIT,
    ENSEMBLE2_76_SPIKE,
    ENSEMBLE2_76_REFRACTORY,
};

// ensemble2_76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble276States state;
} Ensemble276;

// ensemble2_76 Initialisation function
void Ensemble276Init(Ensemble276* me);

// ensemble2_76 Execution function
void Ensemble276Run(Ensemble276* me);

#endif // ENSEMBLE2_76_H_