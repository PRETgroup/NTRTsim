#ifndef ENSEMBLE1_43_H_
#define ENSEMBLE1_43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_43 States
enum Ensemble143States {
    ENSEMBLE1_43_INTEGRATE,
    ENSEMBLE1_43_LIMIT,
    ENSEMBLE1_43_SPIKE,
    ENSEMBLE1_43_REFRACTORY,
};

// ensemble1_43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble143States state;
} Ensemble143;

// ensemble1_43 Initialisation function
void Ensemble143Init(Ensemble143* me);

// ensemble1_43 Execution function
void Ensemble143Run(Ensemble143* me);

#endif // ENSEMBLE1_43_H_