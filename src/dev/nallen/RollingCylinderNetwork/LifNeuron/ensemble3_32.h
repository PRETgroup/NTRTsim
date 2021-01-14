#ifndef ENSEMBLE3_32_H_
#define ENSEMBLE3_32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_32 States
enum Ensemble332States {
    ENSEMBLE3_32_INTEGRATE,
    ENSEMBLE3_32_LIMIT,
    ENSEMBLE3_32_SPIKE,
    ENSEMBLE3_32_REFRACTORY,
};

// ensemble3_32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble332States state;
} Ensemble332;

// ensemble3_32 Initialisation function
void Ensemble332Init(Ensemble332* me);

// ensemble3_32 Execution function
void Ensemble332Run(Ensemble332* me);

#endif // ENSEMBLE3_32_H_