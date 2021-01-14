#ifndef CONNECTION3_SYNAPSE0_H_
#define CONNECTION3_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection3_synapse0 States
enum Connection3Synapse0States {
    CONNECTION3_SYNAPSE0_L,
};

// connection3_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection3Synapse0States state;
} Connection3Synapse0;

// connection3_synapse0 Initialisation function
void Connection3Synapse0Init(Connection3Synapse0* me);

// connection3_synapse0 Execution function
void Connection3Synapse0Run(Connection3Synapse0* me);

#endif // CONNECTION3_SYNAPSE0_H_