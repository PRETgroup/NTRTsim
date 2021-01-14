#ifndef ENSEMBLE2_27_H_
#define ENSEMBLE2_27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_27 States
enum Ensemble227States {
    ENSEMBLE2_27_INTEGRATE,
    ENSEMBLE2_27_LIMIT,
    ENSEMBLE2_27_SPIKE,
    ENSEMBLE2_27_REFRACTORY,
};

// ensemble2_27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble227States state;
} Ensemble227;

// ensemble2_27 Initialisation function
void Ensemble227Init(Ensemble227* me);

// ensemble2_27 Execution function
void Ensemble227Run(Ensemble227* me);

#endif // ENSEMBLE2_27_H_