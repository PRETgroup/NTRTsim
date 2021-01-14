#ifndef ENSEMBLE1_96_H_
#define ENSEMBLE1_96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_96 States
enum Ensemble196States {
    ENSEMBLE1_96_INTEGRATE,
    ENSEMBLE1_96_LIMIT,
    ENSEMBLE1_96_SPIKE,
    ENSEMBLE1_96_REFRACTORY,
};

// ensemble1_96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble196States state;
} Ensemble196;

// ensemble1_96 Initialisation function
void Ensemble196Init(Ensemble196* me);

// ensemble1_96 Execution function
void Ensemble196Run(Ensemble196* me);

#endif // ENSEMBLE1_96_H_