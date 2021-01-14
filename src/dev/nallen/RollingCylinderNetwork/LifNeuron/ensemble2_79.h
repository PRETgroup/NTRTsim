#ifndef ENSEMBLE2_79_H_
#define ENSEMBLE2_79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_79 States
enum Ensemble279States {
    ENSEMBLE2_79_INTEGRATE,
    ENSEMBLE2_79_LIMIT,
    ENSEMBLE2_79_SPIKE,
    ENSEMBLE2_79_REFRACTORY,
};

// ensemble2_79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble279States state;
} Ensemble279;

// ensemble2_79 Initialisation function
void Ensemble279Init(Ensemble279* me);

// ensemble2_79 Execution function
void Ensemble279Run(Ensemble279* me);

#endif // ENSEMBLE2_79_H_