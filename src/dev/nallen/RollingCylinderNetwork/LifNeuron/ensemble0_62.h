#ifndef ENSEMBLE0_62_H_
#define ENSEMBLE0_62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_62 States
enum Ensemble062States {
    ENSEMBLE0_62_INTEGRATE,
    ENSEMBLE0_62_LIMIT,
    ENSEMBLE0_62_SPIKE,
    ENSEMBLE0_62_REFRACTORY,
};

// ensemble0_62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble062States state;
} Ensemble062;

// ensemble0_62 Initialisation function
void Ensemble062Init(Ensemble062* me);

// ensemble0_62 Execution function
void Ensemble062Run(Ensemble062* me);

#endif // ENSEMBLE0_62_H_