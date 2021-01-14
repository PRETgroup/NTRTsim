#ifndef CONNECTION2_SYNAPSE98_H_
#define CONNECTION2_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse98 States
enum Connection2Synapse98States {
    CONNECTION2_SYNAPSE98_L,
};

// connection2_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse98States state;
} Connection2Synapse98;

// connection2_synapse98 Initialisation function
void Connection2Synapse98Init(Connection2Synapse98* me);

// connection2_synapse98 Execution function
void Connection2Synapse98Run(Connection2Synapse98* me);

#endif // CONNECTION2_SYNAPSE98_H_