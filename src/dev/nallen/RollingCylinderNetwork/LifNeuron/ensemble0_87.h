#ifndef ENSEMBLE0_87_H_
#define ENSEMBLE0_87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_87 States
enum Ensemble087States {
    ENSEMBLE0_87_INTEGRATE,
    ENSEMBLE0_87_LIMIT,
    ENSEMBLE0_87_SPIKE,
    ENSEMBLE0_87_REFRACTORY,
};

// ensemble0_87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble087States state;
} Ensemble087;

// ensemble0_87 Initialisation function
void Ensemble087Init(Ensemble087* me);

// ensemble0_87 Execution function
void Ensemble087Run(Ensemble087* me);

#endif // ENSEMBLE0_87_H_