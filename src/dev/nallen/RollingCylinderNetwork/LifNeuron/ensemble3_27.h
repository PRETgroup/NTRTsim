#ifndef ENSEMBLE3_27_H_
#define ENSEMBLE3_27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_27 States
enum Ensemble327States {
    ENSEMBLE3_27_INTEGRATE,
    ENSEMBLE3_27_LIMIT,
    ENSEMBLE3_27_SPIKE,
    ENSEMBLE3_27_REFRACTORY,
};

// ensemble3_27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble327States state;
} Ensemble327;

// ensemble3_27 Initialisation function
void Ensemble327Init(Ensemble327* me);

// ensemble3_27 Execution function
void Ensemble327Run(Ensemble327* me);

#endif // ENSEMBLE3_27_H_