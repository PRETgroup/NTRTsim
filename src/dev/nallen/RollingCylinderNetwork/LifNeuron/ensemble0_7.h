#ifndef ENSEMBLE0_7_H_
#define ENSEMBLE0_7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_7 States
enum Ensemble07States {
    ENSEMBLE0_7_INTEGRATE,
    ENSEMBLE0_7_LIMIT,
    ENSEMBLE0_7_SPIKE,
    ENSEMBLE0_7_REFRACTORY,
};

// ensemble0_7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble07States state;
} Ensemble07;

// ensemble0_7 Initialisation function
void Ensemble07Init(Ensemble07* me);

// ensemble0_7 Execution function
void Ensemble07Run(Ensemble07* me);

#endif // ENSEMBLE0_7_H_