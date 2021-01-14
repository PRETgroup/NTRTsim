#ifndef ENSEMBLE0_2_H_
#define ENSEMBLE0_2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_2 States
enum Ensemble02States {
    ENSEMBLE0_2_INTEGRATE,
    ENSEMBLE0_2_LIMIT,
    ENSEMBLE0_2_SPIKE,
    ENSEMBLE0_2_REFRACTORY,
};

// ensemble0_2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble02States state;
} Ensemble02;

// ensemble0_2 Initialisation function
void Ensemble02Init(Ensemble02* me);

// ensemble0_2 Execution function
void Ensemble02Run(Ensemble02* me);

#endif // ENSEMBLE0_2_H_