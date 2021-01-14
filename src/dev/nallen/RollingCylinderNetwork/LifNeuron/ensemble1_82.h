#ifndef ENSEMBLE1_82_H_
#define ENSEMBLE1_82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_82 States
enum Ensemble182States {
    ENSEMBLE1_82_INTEGRATE,
    ENSEMBLE1_82_LIMIT,
    ENSEMBLE1_82_SPIKE,
    ENSEMBLE1_82_REFRACTORY,
};

// ensemble1_82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble182States state;
} Ensemble182;

// ensemble1_82 Initialisation function
void Ensemble182Init(Ensemble182* me);

// ensemble1_82 Execution function
void Ensemble182Run(Ensemble182* me);

#endif // ENSEMBLE1_82_H_