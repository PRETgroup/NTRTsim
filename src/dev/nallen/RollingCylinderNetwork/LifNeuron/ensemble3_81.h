#ifndef ENSEMBLE3_81_H_
#define ENSEMBLE3_81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_81 States
enum Ensemble381States {
    ENSEMBLE3_81_INTEGRATE,
    ENSEMBLE3_81_LIMIT,
    ENSEMBLE3_81_SPIKE,
    ENSEMBLE3_81_REFRACTORY,
};

// ensemble3_81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble381States state;
} Ensemble381;

// ensemble3_81 Initialisation function
void Ensemble381Init(Ensemble381* me);

// ensemble3_81 Execution function
void Ensemble381Run(Ensemble381* me);

#endif // ENSEMBLE3_81_H_