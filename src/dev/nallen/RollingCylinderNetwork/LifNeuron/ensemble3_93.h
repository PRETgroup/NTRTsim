#ifndef ENSEMBLE3_93_H_
#define ENSEMBLE3_93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_93 States
enum Ensemble393States {
    ENSEMBLE3_93_INTEGRATE,
    ENSEMBLE3_93_LIMIT,
    ENSEMBLE3_93_SPIKE,
    ENSEMBLE3_93_REFRACTORY,
};

// ensemble3_93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble393States state;
} Ensemble393;

// ensemble3_93 Initialisation function
void Ensemble393Init(Ensemble393* me);

// ensemble3_93 Execution function
void Ensemble393Run(Ensemble393* me);

#endif // ENSEMBLE3_93_H_