#ifndef CONNECTION11_SYNAPSE94_H_
#define CONNECTION11_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse94 States
enum Connection11Synapse94States {
    CONNECTION11_SYNAPSE94_L,
};

// connection11_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse94States state;
} Connection11Synapse94;

// connection11_synapse94 Initialisation function
void Connection11Synapse94Init(Connection11Synapse94* me);

// connection11_synapse94 Execution function
void Connection11Synapse94Run(Connection11Synapse94* me);

#endif // CONNECTION11_SYNAPSE94_H_