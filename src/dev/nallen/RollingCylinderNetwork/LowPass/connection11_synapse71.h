#ifndef CONNECTION11_SYNAPSE71_H_
#define CONNECTION11_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse71 States
enum Connection11Synapse71States {
    CONNECTION11_SYNAPSE71_L,
};

// connection11_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse71States state;
} Connection11Synapse71;

// connection11_synapse71 Initialisation function
void Connection11Synapse71Init(Connection11Synapse71* me);

// connection11_synapse71 Execution function
void Connection11Synapse71Run(Connection11Synapse71* me);

#endif // CONNECTION11_SYNAPSE71_H_