#ifndef CONNECTION11_SYNAPSE11_H_
#define CONNECTION11_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse11 States
enum Connection11Synapse11States {
    CONNECTION11_SYNAPSE11_L,
};

// connection11_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse11States state;
} Connection11Synapse11;

// connection11_synapse11 Initialisation function
void Connection11Synapse11Init(Connection11Synapse11* me);

// connection11_synapse11 Execution function
void Connection11Synapse11Run(Connection11Synapse11* me);

#endif // CONNECTION11_SYNAPSE11_H_