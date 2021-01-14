#ifndef ENSEMBLE1_53_H_
#define ENSEMBLE1_53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_53 States
enum Ensemble153States {
    ENSEMBLE1_53_INTEGRATE,
    ENSEMBLE1_53_LIMIT,
    ENSEMBLE1_53_SPIKE,
    ENSEMBLE1_53_REFRACTORY,
};

// ensemble1_53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble153States state;
} Ensemble153;

// ensemble1_53 Initialisation function
void Ensemble153Init(Ensemble153* me);

// ensemble1_53 Execution function
void Ensemble153Run(Ensemble153* me);

#endif // ENSEMBLE1_53_H_