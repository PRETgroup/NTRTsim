#ifndef ENSEMBLE0_69_H_
#define ENSEMBLE0_69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_69 States
enum Ensemble069States {
    ENSEMBLE0_69_INTEGRATE,
    ENSEMBLE0_69_LIMIT,
    ENSEMBLE0_69_SPIKE,
    ENSEMBLE0_69_REFRACTORY,
};

// ensemble0_69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble069States state;
} Ensemble069;

// ensemble0_69 Initialisation function
void Ensemble069Init(Ensemble069* me);

// ensemble0_69 Execution function
void Ensemble069Run(Ensemble069* me);

#endif // ENSEMBLE0_69_H_