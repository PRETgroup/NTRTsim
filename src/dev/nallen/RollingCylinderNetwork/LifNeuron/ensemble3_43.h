#ifndef ENSEMBLE3_43_H_
#define ENSEMBLE3_43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_43 States
enum Ensemble343States {
    ENSEMBLE3_43_INTEGRATE,
    ENSEMBLE3_43_LIMIT,
    ENSEMBLE3_43_SPIKE,
    ENSEMBLE3_43_REFRACTORY,
};

// ensemble3_43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble343States state;
} Ensemble343;

// ensemble3_43 Initialisation function
void Ensemble343Init(Ensemble343* me);

// ensemble3_43 Execution function
void Ensemble343Run(Ensemble343* me);

#endif // ENSEMBLE3_43_H_