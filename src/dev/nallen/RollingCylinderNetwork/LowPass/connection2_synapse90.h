#ifndef CONNECTION2_SYNAPSE90_H_
#define CONNECTION2_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse90 States
enum Connection2Synapse90States {
    CONNECTION2_SYNAPSE90_L,
};

// connection2_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse90States state;
} Connection2Synapse90;

// connection2_synapse90 Initialisation function
void Connection2Synapse90Init(Connection2Synapse90* me);

// connection2_synapse90 Execution function
void Connection2Synapse90Run(Connection2Synapse90* me);

#endif // CONNECTION2_SYNAPSE90_H_