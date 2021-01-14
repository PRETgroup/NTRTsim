#ifndef CONNECTION2_SYNAPSE39_H_
#define CONNECTION2_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse39 States
enum Connection2Synapse39States {
    CONNECTION2_SYNAPSE39_L,
};

// connection2_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse39States state;
} Connection2Synapse39;

// connection2_synapse39 Initialisation function
void Connection2Synapse39Init(Connection2Synapse39* me);

// connection2_synapse39 Execution function
void Connection2Synapse39Run(Connection2Synapse39* me);

#endif // CONNECTION2_SYNAPSE39_H_