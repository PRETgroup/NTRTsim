#ifndef ENSEMBLE1_93_H_
#define ENSEMBLE1_93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_93 States
enum Ensemble193States {
    ENSEMBLE1_93_INTEGRATE,
    ENSEMBLE1_93_LIMIT,
    ENSEMBLE1_93_SPIKE,
    ENSEMBLE1_93_REFRACTORY,
};

// ensemble1_93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble193States state;
} Ensemble193;

// ensemble1_93 Initialisation function
void Ensemble193Init(Ensemble193* me);

// ensemble1_93 Execution function
void Ensemble193Run(Ensemble193* me);

#endif // ENSEMBLE1_93_H_