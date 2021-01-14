#ifndef ENSEMBLE0_97_H_
#define ENSEMBLE0_97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_97 States
enum Ensemble097States {
    ENSEMBLE0_97_INTEGRATE,
    ENSEMBLE0_97_LIMIT,
    ENSEMBLE0_97_SPIKE,
    ENSEMBLE0_97_REFRACTORY,
};

// ensemble0_97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble097States state;
} Ensemble097;

// ensemble0_97 Initialisation function
void Ensemble097Init(Ensemble097* me);

// ensemble0_97 Execution function
void Ensemble097Run(Ensemble097* me);

#endif // ENSEMBLE0_97_H_