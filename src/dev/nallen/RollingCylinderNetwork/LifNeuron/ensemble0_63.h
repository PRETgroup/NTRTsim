#ifndef ENSEMBLE0_63_H_
#define ENSEMBLE0_63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_63 States
enum Ensemble063States {
    ENSEMBLE0_63_INTEGRATE,
    ENSEMBLE0_63_LIMIT,
    ENSEMBLE0_63_SPIKE,
    ENSEMBLE0_63_REFRACTORY,
};

// ensemble0_63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble063States state;
} Ensemble063;

// ensemble0_63 Initialisation function
void Ensemble063Init(Ensemble063* me);

// ensemble0_63 Execution function
void Ensemble063Run(Ensemble063* me);

#endif // ENSEMBLE0_63_H_