#ifndef ENSEMBLE3_79_H_
#define ENSEMBLE3_79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_79 States
enum Ensemble379States {
    ENSEMBLE3_79_INTEGRATE,
    ENSEMBLE3_79_LIMIT,
    ENSEMBLE3_79_SPIKE,
    ENSEMBLE3_79_REFRACTORY,
};

// ensemble3_79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble379States state;
} Ensemble379;

// ensemble3_79 Initialisation function
void Ensemble379Init(Ensemble379* me);

// ensemble3_79 Execution function
void Ensemble379Run(Ensemble379* me);

#endif // ENSEMBLE3_79_H_