#ifndef ENSEMBLE1_12_H_
#define ENSEMBLE1_12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_12 States
enum Ensemble112States {
    ENSEMBLE1_12_INTEGRATE,
    ENSEMBLE1_12_LIMIT,
    ENSEMBLE1_12_SPIKE,
    ENSEMBLE1_12_REFRACTORY,
};

// ensemble1_12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble112States state;
} Ensemble112;

// ensemble1_12 Initialisation function
void Ensemble112Init(Ensemble112* me);

// ensemble1_12 Execution function
void Ensemble112Run(Ensemble112* me);

#endif // ENSEMBLE1_12_H_