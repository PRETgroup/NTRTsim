#ifndef CONNECTION2_SYNAPSE44_H_
#define CONNECTION2_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse44 States
enum Connection2Synapse44States {
    CONNECTION2_SYNAPSE44_L,
};

// connection2_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse44States state;
} Connection2Synapse44;

// connection2_synapse44 Initialisation function
void Connection2Synapse44Init(Connection2Synapse44* me);

// connection2_synapse44 Execution function
void Connection2Synapse44Run(Connection2Synapse44* me);

#endif // CONNECTION2_SYNAPSE44_H_