#ifndef CONNECTION2_SYNAPSE62_H_
#define CONNECTION2_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse62 States
enum Connection2Synapse62States {
    CONNECTION2_SYNAPSE62_L,
};

// connection2_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse62States state;
} Connection2Synapse62;

// connection2_synapse62 Initialisation function
void Connection2Synapse62Init(Connection2Synapse62* me);

// connection2_synapse62 Execution function
void Connection2Synapse62Run(Connection2Synapse62* me);

#endif // CONNECTION2_SYNAPSE62_H_