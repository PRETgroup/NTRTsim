#ifndef CONNECTION2_SYNAPSE78_H_
#define CONNECTION2_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse78 States
enum Connection2Synapse78States {
    CONNECTION2_SYNAPSE78_L,
};

// connection2_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse78States state;
} Connection2Synapse78;

// connection2_synapse78 Initialisation function
void Connection2Synapse78Init(Connection2Synapse78* me);

// connection2_synapse78 Execution function
void Connection2Synapse78Run(Connection2Synapse78* me);

#endif // CONNECTION2_SYNAPSE78_H_