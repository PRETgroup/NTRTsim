#ifndef ENSEMBLE2_77_H_
#define ENSEMBLE2_77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_77 States
enum Ensemble277States {
    ENSEMBLE2_77_INTEGRATE,
    ENSEMBLE2_77_LIMIT,
    ENSEMBLE2_77_SPIKE,
    ENSEMBLE2_77_REFRACTORY,
};

// ensemble2_77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble277States state;
} Ensemble277;

// ensemble2_77 Initialisation function
void Ensemble277Init(Ensemble277* me);

// ensemble2_77 Execution function
void Ensemble277Run(Ensemble277* me);

#endif // ENSEMBLE2_77_H_