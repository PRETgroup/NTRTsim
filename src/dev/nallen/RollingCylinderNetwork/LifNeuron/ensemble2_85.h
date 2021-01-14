#ifndef ENSEMBLE2_85_H_
#define ENSEMBLE2_85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_85 States
enum Ensemble285States {
    ENSEMBLE2_85_INTEGRATE,
    ENSEMBLE2_85_LIMIT,
    ENSEMBLE2_85_SPIKE,
    ENSEMBLE2_85_REFRACTORY,
};

// ensemble2_85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble285States state;
} Ensemble285;

// ensemble2_85 Initialisation function
void Ensemble285Init(Ensemble285* me);

// ensemble2_85 Execution function
void Ensemble285Run(Ensemble285* me);

#endif // ENSEMBLE2_85_H_