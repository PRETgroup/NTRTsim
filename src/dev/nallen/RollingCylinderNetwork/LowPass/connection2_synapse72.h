#ifndef CONNECTION2_SYNAPSE72_H_
#define CONNECTION2_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse72 States
enum Connection2Synapse72States {
    CONNECTION2_SYNAPSE72_L,
};

// connection2_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse72States state;
} Connection2Synapse72;

// connection2_synapse72 Initialisation function
void Connection2Synapse72Init(Connection2Synapse72* me);

// connection2_synapse72 Execution function
void Connection2Synapse72Run(Connection2Synapse72* me);

#endif // CONNECTION2_SYNAPSE72_H_