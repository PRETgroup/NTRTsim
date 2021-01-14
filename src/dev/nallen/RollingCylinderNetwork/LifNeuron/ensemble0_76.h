#ifndef ENSEMBLE0_76_H_
#define ENSEMBLE0_76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_76 States
enum Ensemble076States {
    ENSEMBLE0_76_INTEGRATE,
    ENSEMBLE0_76_LIMIT,
    ENSEMBLE0_76_SPIKE,
    ENSEMBLE0_76_REFRACTORY,
};

// ensemble0_76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble076States state;
} Ensemble076;

// ensemble0_76 Initialisation function
void Ensemble076Init(Ensemble076* me);

// ensemble0_76 Execution function
void Ensemble076Run(Ensemble076* me);

#endif // ENSEMBLE0_76_H_