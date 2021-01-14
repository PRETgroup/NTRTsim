#ifndef ENSEMBLE0_27_H_
#define ENSEMBLE0_27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_27 States
enum Ensemble027States {
    ENSEMBLE0_27_INTEGRATE,
    ENSEMBLE0_27_LIMIT,
    ENSEMBLE0_27_SPIKE,
    ENSEMBLE0_27_REFRACTORY,
};

// ensemble0_27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble027States state;
} Ensemble027;

// ensemble0_27 Initialisation function
void Ensemble027Init(Ensemble027* me);

// ensemble0_27 Execution function
void Ensemble027Run(Ensemble027* me);

#endif // ENSEMBLE0_27_H_