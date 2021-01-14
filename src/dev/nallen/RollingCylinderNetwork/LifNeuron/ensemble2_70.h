#ifndef ENSEMBLE2_70_H_
#define ENSEMBLE2_70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_70 States
enum Ensemble270States {
    ENSEMBLE2_70_INTEGRATE,
    ENSEMBLE2_70_LIMIT,
    ENSEMBLE2_70_SPIKE,
    ENSEMBLE2_70_REFRACTORY,
};

// ensemble2_70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble270States state;
} Ensemble270;

// ensemble2_70 Initialisation function
void Ensemble270Init(Ensemble270* me);

// ensemble2_70 Execution function
void Ensemble270Run(Ensemble270* me);

#endif // ENSEMBLE2_70_H_