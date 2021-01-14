#ifndef ENSEMBLE3_31_H_
#define ENSEMBLE3_31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_31 States
enum Ensemble331States {
    ENSEMBLE3_31_INTEGRATE,
    ENSEMBLE3_31_LIMIT,
    ENSEMBLE3_31_SPIKE,
    ENSEMBLE3_31_REFRACTORY,
};

// ensemble3_31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble331States state;
} Ensemble331;

// ensemble3_31 Initialisation function
void Ensemble331Init(Ensemble331* me);

// ensemble3_31 Execution function
void Ensemble331Run(Ensemble331* me);

#endif // ENSEMBLE3_31_H_