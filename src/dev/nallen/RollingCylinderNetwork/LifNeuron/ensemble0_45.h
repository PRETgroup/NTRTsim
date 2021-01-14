#ifndef ENSEMBLE0_45_H_
#define ENSEMBLE0_45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_45 States
enum Ensemble045States {
    ENSEMBLE0_45_INTEGRATE,
    ENSEMBLE0_45_LIMIT,
    ENSEMBLE0_45_SPIKE,
    ENSEMBLE0_45_REFRACTORY,
};

// ensemble0_45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble045States state;
} Ensemble045;

// ensemble0_45 Initialisation function
void Ensemble045Init(Ensemble045* me);

// ensemble0_45 Execution function
void Ensemble045Run(Ensemble045* me);

#endif // ENSEMBLE0_45_H_