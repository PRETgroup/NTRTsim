#ifndef ENSEMBLE2_63_H_
#define ENSEMBLE2_63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_63 States
enum Ensemble263States {
    ENSEMBLE2_63_INTEGRATE,
    ENSEMBLE2_63_LIMIT,
    ENSEMBLE2_63_SPIKE,
    ENSEMBLE2_63_REFRACTORY,
};

// ensemble2_63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble263States state;
} Ensemble263;

// ensemble2_63 Initialisation function
void Ensemble263Init(Ensemble263* me);

// ensemble2_63 Execution function
void Ensemble263Run(Ensemble263* me);

#endif // ENSEMBLE2_63_H_