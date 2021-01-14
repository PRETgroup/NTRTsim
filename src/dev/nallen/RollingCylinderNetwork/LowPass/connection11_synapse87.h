#ifndef CONNECTION11_SYNAPSE87_H_
#define CONNECTION11_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse87 States
enum Connection11Synapse87States {
    CONNECTION11_SYNAPSE87_L,
};

// connection11_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse87States state;
} Connection11Synapse87;

// connection11_synapse87 Initialisation function
void Connection11Synapse87Init(Connection11Synapse87* me);

// connection11_synapse87 Execution function
void Connection11Synapse87Run(Connection11Synapse87* me);

#endif // CONNECTION11_SYNAPSE87_H_