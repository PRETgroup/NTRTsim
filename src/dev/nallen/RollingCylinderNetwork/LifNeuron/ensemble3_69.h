#ifndef ENSEMBLE3_69_H_
#define ENSEMBLE3_69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_69 States
enum Ensemble369States {
    ENSEMBLE3_69_INTEGRATE,
    ENSEMBLE3_69_LIMIT,
    ENSEMBLE3_69_SPIKE,
    ENSEMBLE3_69_REFRACTORY,
};

// ensemble3_69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble369States state;
} Ensemble369;

// ensemble3_69 Initialisation function
void Ensemble369Init(Ensemble369* me);

// ensemble3_69 Execution function
void Ensemble369Run(Ensemble369* me);

#endif // ENSEMBLE3_69_H_