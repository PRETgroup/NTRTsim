#ifndef CONNECTION11_SYNAPSE81_H_
#define CONNECTION11_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse81 States
enum Connection11Synapse81States {
    CONNECTION11_SYNAPSE81_L,
};

// connection11_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse81States state;
} Connection11Synapse81;

// connection11_synapse81 Initialisation function
void Connection11Synapse81Init(Connection11Synapse81* me);

// connection11_synapse81 Execution function
void Connection11Synapse81Run(Connection11Synapse81* me);

#endif // CONNECTION11_SYNAPSE81_H_