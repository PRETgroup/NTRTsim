#ifndef ENSEMBLE3_70_H_
#define ENSEMBLE3_70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_70 States
enum Ensemble370States {
    ENSEMBLE3_70_INTEGRATE,
    ENSEMBLE3_70_LIMIT,
    ENSEMBLE3_70_SPIKE,
    ENSEMBLE3_70_REFRACTORY,
};

// ensemble3_70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble370States state;
} Ensemble370;

// ensemble3_70 Initialisation function
void Ensemble370Init(Ensemble370* me);

// ensemble3_70 Execution function
void Ensemble370Run(Ensemble370* me);

#endif // ENSEMBLE3_70_H_