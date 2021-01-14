#ifndef ENSEMBLE0_44_H_
#define ENSEMBLE0_44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_44 States
enum Ensemble044States {
    ENSEMBLE0_44_INTEGRATE,
    ENSEMBLE0_44_LIMIT,
    ENSEMBLE0_44_SPIKE,
    ENSEMBLE0_44_REFRACTORY,
};

// ensemble0_44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble044States state;
} Ensemble044;

// ensemble0_44 Initialisation function
void Ensemble044Init(Ensemble044* me);

// ensemble0_44 Execution function
void Ensemble044Run(Ensemble044* me);

#endif // ENSEMBLE0_44_H_