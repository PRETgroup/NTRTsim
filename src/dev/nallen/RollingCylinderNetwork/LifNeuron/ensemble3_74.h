#ifndef ENSEMBLE3_74_H_
#define ENSEMBLE3_74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_74 States
enum Ensemble374States {
    ENSEMBLE3_74_INTEGRATE,
    ENSEMBLE3_74_LIMIT,
    ENSEMBLE3_74_SPIKE,
    ENSEMBLE3_74_REFRACTORY,
};

// ensemble3_74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble374States state;
} Ensemble374;

// ensemble3_74 Initialisation function
void Ensemble374Init(Ensemble374* me);

// ensemble3_74 Execution function
void Ensemble374Run(Ensemble374* me);

#endif // ENSEMBLE3_74_H_