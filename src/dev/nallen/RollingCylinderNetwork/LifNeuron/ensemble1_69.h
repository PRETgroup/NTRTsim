#ifndef ENSEMBLE1_69_H_
#define ENSEMBLE1_69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_69 States
enum Ensemble169States {
    ENSEMBLE1_69_INTEGRATE,
    ENSEMBLE1_69_LIMIT,
    ENSEMBLE1_69_SPIKE,
    ENSEMBLE1_69_REFRACTORY,
};

// ensemble1_69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble169States state;
} Ensemble169;

// ensemble1_69 Initialisation function
void Ensemble169Init(Ensemble169* me);

// ensemble1_69 Execution function
void Ensemble169Run(Ensemble169* me);

#endif // ENSEMBLE1_69_H_