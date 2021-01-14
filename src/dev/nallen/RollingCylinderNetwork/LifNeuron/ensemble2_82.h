#ifndef ENSEMBLE2_82_H_
#define ENSEMBLE2_82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_82 States
enum Ensemble282States {
    ENSEMBLE2_82_INTEGRATE,
    ENSEMBLE2_82_LIMIT,
    ENSEMBLE2_82_SPIKE,
    ENSEMBLE2_82_REFRACTORY,
};

// ensemble2_82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble282States state;
} Ensemble282;

// ensemble2_82 Initialisation function
void Ensemble282Init(Ensemble282* me);

// ensemble2_82 Execution function
void Ensemble282Run(Ensemble282* me);

#endif // ENSEMBLE2_82_H_