#ifndef ENSEMBLE3_66_H_
#define ENSEMBLE3_66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_66 States
enum Ensemble366States {
    ENSEMBLE3_66_INTEGRATE,
    ENSEMBLE3_66_LIMIT,
    ENSEMBLE3_66_SPIKE,
    ENSEMBLE3_66_REFRACTORY,
};

// ensemble3_66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble366States state;
} Ensemble366;

// ensemble3_66 Initialisation function
void Ensemble366Init(Ensemble366* me);

// ensemble3_66 Execution function
void Ensemble366Run(Ensemble366* me);

#endif // ENSEMBLE3_66_H_