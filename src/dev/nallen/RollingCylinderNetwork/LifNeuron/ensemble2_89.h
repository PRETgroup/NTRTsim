#ifndef ENSEMBLE2_89_H_
#define ENSEMBLE2_89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_89 States
enum Ensemble289States {
    ENSEMBLE2_89_INTEGRATE,
    ENSEMBLE2_89_LIMIT,
    ENSEMBLE2_89_SPIKE,
    ENSEMBLE2_89_REFRACTORY,
};

// ensemble2_89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble289States state;
} Ensemble289;

// ensemble2_89 Initialisation function
void Ensemble289Init(Ensemble289* me);

// ensemble2_89 Execution function
void Ensemble289Run(Ensemble289* me);

#endif // ENSEMBLE2_89_H_