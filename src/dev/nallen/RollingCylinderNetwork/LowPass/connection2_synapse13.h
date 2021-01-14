#ifndef CONNECTION2_SYNAPSE13_H_
#define CONNECTION2_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse13 States
enum Connection2Synapse13States {
    CONNECTION2_SYNAPSE13_L,
};

// connection2_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse13States state;
} Connection2Synapse13;

// connection2_synapse13 Initialisation function
void Connection2Synapse13Init(Connection2Synapse13* me);

// connection2_synapse13 Execution function
void Connection2Synapse13Run(Connection2Synapse13* me);

#endif // CONNECTION2_SYNAPSE13_H_