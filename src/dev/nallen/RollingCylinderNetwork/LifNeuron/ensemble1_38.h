#ifndef ENSEMBLE1_38_H_
#define ENSEMBLE1_38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_38 States
enum Ensemble138States {
    ENSEMBLE1_38_INTEGRATE,
    ENSEMBLE1_38_LIMIT,
    ENSEMBLE1_38_SPIKE,
    ENSEMBLE1_38_REFRACTORY,
};

// ensemble1_38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble138States state;
} Ensemble138;

// ensemble1_38 Initialisation function
void Ensemble138Init(Ensemble138* me);

// ensemble1_38 Execution function
void Ensemble138Run(Ensemble138* me);

#endif // ENSEMBLE1_38_H_