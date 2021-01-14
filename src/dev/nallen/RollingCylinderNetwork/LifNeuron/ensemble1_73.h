#ifndef ENSEMBLE1_73_H_
#define ENSEMBLE1_73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_73 States
enum Ensemble173States {
    ENSEMBLE1_73_INTEGRATE,
    ENSEMBLE1_73_LIMIT,
    ENSEMBLE1_73_SPIKE,
    ENSEMBLE1_73_REFRACTORY,
};

// ensemble1_73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble173States state;
} Ensemble173;

// ensemble1_73 Initialisation function
void Ensemble173Init(Ensemble173* me);

// ensemble1_73 Execution function
void Ensemble173Run(Ensemble173* me);

#endif // ENSEMBLE1_73_H_