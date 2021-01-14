#ifndef ENSEMBLE0_4_H_
#define ENSEMBLE0_4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_4 States
enum Ensemble04States {
    ENSEMBLE0_4_INTEGRATE,
    ENSEMBLE0_4_LIMIT,
    ENSEMBLE0_4_SPIKE,
    ENSEMBLE0_4_REFRACTORY,
};

// ensemble0_4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble04States state;
} Ensemble04;

// ensemble0_4 Initialisation function
void Ensemble04Init(Ensemble04* me);

// ensemble0_4 Execution function
void Ensemble04Run(Ensemble04* me);

#endif // ENSEMBLE0_4_H_