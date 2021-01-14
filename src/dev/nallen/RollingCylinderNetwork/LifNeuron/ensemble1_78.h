#ifndef ENSEMBLE1_78_H_
#define ENSEMBLE1_78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble1_78 States
enum Ensemble178States {
    ENSEMBLE1_78_INTEGRATE,
    ENSEMBLE1_78_LIMIT,
    ENSEMBLE1_78_SPIKE,
    ENSEMBLE1_78_REFRACTORY,
};

// ensemble1_78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble178States state;
} Ensemble178;

// ensemble1_78 Initialisation function
void Ensemble178Init(Ensemble178* me);

// ensemble1_78 Execution function
void Ensemble178Run(Ensemble178* me);

#endif // ENSEMBLE1_78_H_