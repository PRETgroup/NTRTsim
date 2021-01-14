#ifndef CONNECTION0_SYNAPSE66_H_
#define CONNECTION0_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse66 States
enum Connection0Synapse66States {
    CONNECTION0_SYNAPSE66_L,
};

// connection0_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse66States state;
} Connection0Synapse66;

// connection0_synapse66 Initialisation function
void Connection0Synapse66Init(Connection0Synapse66* me);

// connection0_synapse66 Execution function
void Connection0Synapse66Run(Connection0Synapse66* me);

#endif // CONNECTION0_SYNAPSE66_H_