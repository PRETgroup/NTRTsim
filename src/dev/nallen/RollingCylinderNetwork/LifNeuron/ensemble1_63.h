#ifndef ENSEMBLE1_63_H_
#define ENSEMBLE1_63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_63 States
enum Ensemble163States {
    ENSEMBLE1_63_INTEGRATE,
    ENSEMBLE1_63_LIMIT,
    ENSEMBLE1_63_SPIKE,
    ENSEMBLE1_63_REFRACTORY,
};

// ensemble1_63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble163States state;
} Ensemble163;

// ensemble1_63 Initialisation function
void Ensemble163Init(Ensemble163* me);

// ensemble1_63 Execution function
void Ensemble163Run(Ensemble163* me);

#endif // ENSEMBLE1_63_H_