#ifndef ENSEMBLE3_63_H_
#define ENSEMBLE3_63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_63 States
enum Ensemble363States {
    ENSEMBLE3_63_INTEGRATE,
    ENSEMBLE3_63_LIMIT,
    ENSEMBLE3_63_SPIKE,
    ENSEMBLE3_63_REFRACTORY,
};

// ensemble3_63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble363States state;
} Ensemble363;

// ensemble3_63 Initialisation function
void Ensemble363Init(Ensemble363* me);

// ensemble3_63 Execution function
void Ensemble363Run(Ensemble363* me);

#endif // ENSEMBLE3_63_H_