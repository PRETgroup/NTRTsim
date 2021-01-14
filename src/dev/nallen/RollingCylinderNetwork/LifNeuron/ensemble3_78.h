#ifndef ENSEMBLE3_78_H_
#define ENSEMBLE3_78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// ensemble3_78 States
enum Ensemble378States {
    ENSEMBLE3_78_INTEGRATE,
    ENSEMBLE3_78_LIMIT,
    ENSEMBLE3_78_SPIKE,
    ENSEMBLE3_78_REFRACTORY,
};

// ensemble3_78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    bool spike;
    double v;
    
    // Declare Internal Variables
    double t;

    // State
    enum Ensemble378States state;
} Ensemble378;

// ensemble3_78 Initialisation function
void Ensemble378Init(Ensemble378* me);

// ensemble3_78 Execution function
void Ensemble378Run(Ensemble378* me);

#endif // ENSEMBLE3_78_H_