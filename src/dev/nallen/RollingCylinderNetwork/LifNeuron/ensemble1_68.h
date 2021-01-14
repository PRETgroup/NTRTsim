#ifndef ENSEMBLE1_68_H_
#define ENSEMBLE1_68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_68 States
enum Ensemble168States {
    ENSEMBLE1_68_INTEGRATE,
    ENSEMBLE1_68_LIMIT,
    ENSEMBLE1_68_SPIKE,
    ENSEMBLE1_68_REFRACTORY,
};

// ensemble1_68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble168States state;
} Ensemble168;

// ensemble1_68 Initialisation function
void Ensemble168Init(Ensemble168* me);

// ensemble1_68 Execution function
void Ensemble168Run(Ensemble168* me);

#endif // ENSEMBLE1_68_H_