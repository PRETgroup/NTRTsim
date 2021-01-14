#ifndef ENSEMBLE3_84_H_
#define ENSEMBLE3_84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_84 States
enum Ensemble384States {
    ENSEMBLE3_84_INTEGRATE,
    ENSEMBLE3_84_LIMIT,
    ENSEMBLE3_84_SPIKE,
    ENSEMBLE3_84_REFRACTORY,
};

// ensemble3_84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble384States state;
} Ensemble384;

// ensemble3_84 Initialisation function
void Ensemble384Init(Ensemble384* me);

// ensemble3_84 Execution function
void Ensemble384Run(Ensemble384* me);

#endif // ENSEMBLE3_84_H_