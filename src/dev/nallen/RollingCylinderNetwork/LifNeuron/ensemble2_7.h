#ifndef ENSEMBLE2_7_H_
#define ENSEMBLE2_7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_7 States
enum Ensemble27States {
    ENSEMBLE2_7_INTEGRATE,
    ENSEMBLE2_7_LIMIT,
    ENSEMBLE2_7_SPIKE,
    ENSEMBLE2_7_REFRACTORY,
};

// ensemble2_7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble27States state;
} Ensemble27;

// ensemble2_7 Initialisation function
void Ensemble27Init(Ensemble27* me);

// ensemble2_7 Execution function
void Ensemble27Run(Ensemble27* me);

#endif // ENSEMBLE2_7_H_