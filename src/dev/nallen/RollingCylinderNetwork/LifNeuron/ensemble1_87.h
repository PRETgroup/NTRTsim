#ifndef ENSEMBLE1_87_H_
#define ENSEMBLE1_87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_87 States
enum Ensemble187States {
    ENSEMBLE1_87_INTEGRATE,
    ENSEMBLE1_87_LIMIT,
    ENSEMBLE1_87_SPIKE,
    ENSEMBLE1_87_REFRACTORY,
};

// ensemble1_87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble187States state;
} Ensemble187;

// ensemble1_87 Initialisation function
void Ensemble187Init(Ensemble187* me);

// ensemble1_87 Execution function
void Ensemble187Run(Ensemble187* me);

#endif // ENSEMBLE1_87_H_