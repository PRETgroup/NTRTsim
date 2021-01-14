#ifndef ENSEMBLE2_8_H_
#define ENSEMBLE2_8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_8 States
enum Ensemble28States {
    ENSEMBLE2_8_INTEGRATE,
    ENSEMBLE2_8_LIMIT,
    ENSEMBLE2_8_SPIKE,
    ENSEMBLE2_8_REFRACTORY,
};

// ensemble2_8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble28States state;
} Ensemble28;

// ensemble2_8 Initialisation function
void Ensemble28Init(Ensemble28* me);

// ensemble2_8 Execution function
void Ensemble28Run(Ensemble28* me);

#endif // ENSEMBLE2_8_H_