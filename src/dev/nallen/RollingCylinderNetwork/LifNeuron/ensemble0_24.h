#ifndef ENSEMBLE0_24_H_
#define ENSEMBLE0_24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_24 States
enum Ensemble024States {
    ENSEMBLE0_24_INTEGRATE,
    ENSEMBLE0_24_LIMIT,
    ENSEMBLE0_24_SPIKE,
    ENSEMBLE0_24_REFRACTORY,
};

// ensemble0_24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble024States state;
} Ensemble024;

// ensemble0_24 Initialisation function
void Ensemble024Init(Ensemble024* me);

// ensemble0_24 Execution function
void Ensemble024Run(Ensemble024* me);

#endif // ENSEMBLE0_24_H_