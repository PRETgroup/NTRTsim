#ifndef ENSEMBLE2_69_H_
#define ENSEMBLE2_69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_69 States
enum Ensemble269States {
    ENSEMBLE2_69_INTEGRATE,
    ENSEMBLE2_69_LIMIT,
    ENSEMBLE2_69_SPIKE,
    ENSEMBLE2_69_REFRACTORY,
};

// ensemble2_69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble269States state;
} Ensemble269;

// ensemble2_69 Initialisation function
void Ensemble269Init(Ensemble269* me);

// ensemble2_69 Execution function
void Ensemble269Run(Ensemble269* me);

#endif // ENSEMBLE2_69_H_