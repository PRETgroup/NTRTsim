#ifndef ENSEMBLE3_77_H_
#define ENSEMBLE3_77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_77 States
enum Ensemble377States {
    ENSEMBLE3_77_INTEGRATE,
    ENSEMBLE3_77_LIMIT,
    ENSEMBLE3_77_SPIKE,
    ENSEMBLE3_77_REFRACTORY,
};

// ensemble3_77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble377States state;
} Ensemble377;

// ensemble3_77 Initialisation function
void Ensemble377Init(Ensemble377* me);

// ensemble3_77 Execution function
void Ensemble377Run(Ensemble377* me);

#endif // ENSEMBLE3_77_H_