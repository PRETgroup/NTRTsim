#ifndef ENSEMBLE0_96_H_
#define ENSEMBLE0_96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_96 States
enum Ensemble096States {
    ENSEMBLE0_96_INTEGRATE,
    ENSEMBLE0_96_LIMIT,
    ENSEMBLE0_96_SPIKE,
    ENSEMBLE0_96_REFRACTORY,
};

// ensemble0_96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble096States state;
} Ensemble096;

// ensemble0_96 Initialisation function
void Ensemble096Init(Ensemble096* me);

// ensemble0_96 Execution function
void Ensemble096Run(Ensemble096* me);

#endif // ENSEMBLE0_96_H_