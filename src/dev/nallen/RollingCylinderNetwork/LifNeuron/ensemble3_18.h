#ifndef ENSEMBLE3_18_H_
#define ENSEMBLE3_18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_18 States
enum Ensemble318States {
    ENSEMBLE3_18_INTEGRATE,
    ENSEMBLE3_18_LIMIT,
    ENSEMBLE3_18_SPIKE,
    ENSEMBLE3_18_REFRACTORY,
};

// ensemble3_18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble318States state;
} Ensemble318;

// ensemble3_18 Initialisation function
void Ensemble318Init(Ensemble318* me);

// ensemble3_18 Execution function
void Ensemble318Run(Ensemble318* me);

#endif // ENSEMBLE3_18_H_