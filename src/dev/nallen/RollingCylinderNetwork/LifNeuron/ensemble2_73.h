#ifndef ENSEMBLE2_73_H_
#define ENSEMBLE2_73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble2_73 States
enum Ensemble273States {
    ENSEMBLE2_73_INTEGRATE,
    ENSEMBLE2_73_LIMIT,
    ENSEMBLE2_73_SPIKE,
    ENSEMBLE2_73_REFRACTORY,
};

// ensemble2_73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble273States state;
} Ensemble273;

// ensemble2_73 Initialisation function
void Ensemble273Init(Ensemble273* me);

// ensemble2_73 Execution function
void Ensemble273Run(Ensemble273* me);

#endif // ENSEMBLE2_73_H_