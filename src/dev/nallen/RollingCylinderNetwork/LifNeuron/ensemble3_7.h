#ifndef ENSEMBLE3_7_H_
#define ENSEMBLE3_7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_7 States
enum Ensemble37States {
    ENSEMBLE3_7_INTEGRATE,
    ENSEMBLE3_7_LIMIT,
    ENSEMBLE3_7_SPIKE,
    ENSEMBLE3_7_REFRACTORY,
};

// ensemble3_7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble37States state;
} Ensemble37;

// ensemble3_7 Initialisation function
void Ensemble37Init(Ensemble37* me);

// ensemble3_7 Execution function
void Ensemble37Run(Ensemble37* me);

#endif // ENSEMBLE3_7_H_