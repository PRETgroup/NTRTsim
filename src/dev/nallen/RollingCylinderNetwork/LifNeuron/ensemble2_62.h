#ifndef ENSEMBLE2_62_H_
#define ENSEMBLE2_62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_62 States
enum Ensemble262States {
    ENSEMBLE2_62_INTEGRATE,
    ENSEMBLE2_62_LIMIT,
    ENSEMBLE2_62_SPIKE,
    ENSEMBLE2_62_REFRACTORY,
};

// ensemble2_62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble262States state;
} Ensemble262;

// ensemble2_62 Initialisation function
void Ensemble262Init(Ensemble262* me);

// ensemble2_62 Execution function
void Ensemble262Run(Ensemble262* me);

#endif // ENSEMBLE2_62_H_