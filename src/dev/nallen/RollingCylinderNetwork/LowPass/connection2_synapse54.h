#ifndef CONNECTION2_SYNAPSE54_H_
#define CONNECTION2_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse54 States
enum Connection2Synapse54States {
    CONNECTION2_SYNAPSE54_L,
};

// connection2_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse54States state;
} Connection2Synapse54;

// connection2_synapse54 Initialisation function
void Connection2Synapse54Init(Connection2Synapse54* me);

// connection2_synapse54 Execution function
void Connection2Synapse54Run(Connection2Synapse54* me);

#endif // CONNECTION2_SYNAPSE54_H_