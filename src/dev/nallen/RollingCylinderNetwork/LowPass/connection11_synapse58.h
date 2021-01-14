#ifndef CONNECTION11_SYNAPSE58_H_
#define CONNECTION11_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse58 States
enum Connection11Synapse58States {
    CONNECTION11_SYNAPSE58_L,
};

// connection11_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse58States state;
} Connection11Synapse58;

// connection11_synapse58 Initialisation function
void Connection11Synapse58Init(Connection11Synapse58* me);

// connection11_synapse58 Execution function
void Connection11Synapse58Run(Connection11Synapse58* me);

#endif // CONNECTION11_SYNAPSE58_H_