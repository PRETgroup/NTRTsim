#ifndef ENSEMBLE3_73_H_
#define ENSEMBLE3_73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_73 States
enum Ensemble373States {
    ENSEMBLE3_73_INTEGRATE,
    ENSEMBLE3_73_LIMIT,
    ENSEMBLE3_73_SPIKE,
    ENSEMBLE3_73_REFRACTORY,
};

// ensemble3_73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble373States state;
} Ensemble373;

// ensemble3_73 Initialisation function
void Ensemble373Init(Ensemble373* me);

// ensemble3_73 Execution function
void Ensemble373Run(Ensemble373* me);

#endif // ENSEMBLE3_73_H_