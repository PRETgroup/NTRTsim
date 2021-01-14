#ifndef ENSEMBLE2_51_H_
#define ENSEMBLE2_51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_51 States
enum Ensemble251States {
    ENSEMBLE2_51_INTEGRATE,
    ENSEMBLE2_51_LIMIT,
    ENSEMBLE2_51_SPIKE,
    ENSEMBLE2_51_REFRACTORY,
};

// ensemble2_51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble251States state;
} Ensemble251;

// ensemble2_51 Initialisation function
void Ensemble251Init(Ensemble251* me);

// ensemble2_51 Execution function
void Ensemble251Run(Ensemble251* me);

#endif // ENSEMBLE2_51_H_