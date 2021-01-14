#ifndef CONNECTION2_SYNAPSE20_H_
#define CONNECTION2_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse20 States
enum Connection2Synapse20States {
    CONNECTION2_SYNAPSE20_L,
};

// connection2_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse20States state;
} Connection2Synapse20;

// connection2_synapse20 Initialisation function
void Connection2Synapse20Init(Connection2Synapse20* me);

// connection2_synapse20 Execution function
void Connection2Synapse20Run(Connection2Synapse20* me);

#endif // CONNECTION2_SYNAPSE20_H_