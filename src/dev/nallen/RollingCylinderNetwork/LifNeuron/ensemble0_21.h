#ifndef ENSEMBLE0_21_H_
#define ENSEMBLE0_21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_21 States
enum Ensemble021States {
    ENSEMBLE0_21_INTEGRATE,
    ENSEMBLE0_21_LIMIT,
    ENSEMBLE0_21_SPIKE,
    ENSEMBLE0_21_REFRACTORY,
};

// ensemble0_21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble021States state;
} Ensemble021;

// ensemble0_21 Initialisation function
void Ensemble021Init(Ensemble021* me);

// ensemble0_21 Execution function
void Ensemble021Run(Ensemble021* me);

#endif // ENSEMBLE0_21_H_