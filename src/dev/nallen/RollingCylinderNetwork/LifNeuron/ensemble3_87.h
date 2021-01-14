#ifndef ENSEMBLE3_87_H_
#define ENSEMBLE3_87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_87 States
enum Ensemble387States {
    ENSEMBLE3_87_INTEGRATE,
    ENSEMBLE3_87_LIMIT,
    ENSEMBLE3_87_SPIKE,
    ENSEMBLE3_87_REFRACTORY,
};

// ensemble3_87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble387States state;
} Ensemble387;

// ensemble3_87 Initialisation function
void Ensemble387Init(Ensemble387* me);

// ensemble3_87 Execution function
void Ensemble387Run(Ensemble387* me);

#endif // ENSEMBLE3_87_H_