#ifndef ENSEMBLE0_8_H_
#define ENSEMBLE0_8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_8 States
enum Ensemble08States {
    ENSEMBLE0_8_INTEGRATE,
    ENSEMBLE0_8_LIMIT,
    ENSEMBLE0_8_SPIKE,
    ENSEMBLE0_8_REFRACTORY,
};

// ensemble0_8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble08States state;
} Ensemble08;

// ensemble0_8 Initialisation function
void Ensemble08Init(Ensemble08* me);

// ensemble0_8 Execution function
void Ensemble08Run(Ensemble08* me);

#endif // ENSEMBLE0_8_H_