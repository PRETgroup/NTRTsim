#ifndef ENSEMBLE0_82_H_
#define ENSEMBLE0_82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble0_82 States
enum Ensemble082States {
    ENSEMBLE0_82_INTEGRATE,
    ENSEMBLE0_82_LIMIT,
    ENSEMBLE0_82_SPIKE,
    ENSEMBLE0_82_REFRACTORY,
};

// ensemble0_82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble082States state;
} Ensemble082;

// ensemble0_82 Initialisation function
void Ensemble082Init(Ensemble082* me);

// ensemble0_82 Execution function
void Ensemble082Run(Ensemble082* me);

#endif // ENSEMBLE0_82_H_