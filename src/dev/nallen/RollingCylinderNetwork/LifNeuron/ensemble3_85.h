#ifndef ENSEMBLE3_85_H_
#define ENSEMBLE3_85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_85 States
enum Ensemble385States {
    ENSEMBLE3_85_INTEGRATE,
    ENSEMBLE3_85_LIMIT,
    ENSEMBLE3_85_SPIKE,
    ENSEMBLE3_85_REFRACTORY,
};

// ensemble3_85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble385States state;
} Ensemble385;

// ensemble3_85 Initialisation function
void Ensemble385Init(Ensemble385* me);

// ensemble3_85 Execution function
void Ensemble385Run(Ensemble385* me);

#endif // ENSEMBLE3_85_H_