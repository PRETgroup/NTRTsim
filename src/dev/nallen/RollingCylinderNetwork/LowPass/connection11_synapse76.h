#ifndef CONNECTION11_SYNAPSE76_H_
#define CONNECTION11_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse76 States
enum Connection11Synapse76States {
    CONNECTION11_SYNAPSE76_L,
};

// connection11_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse76States state;
} Connection11Synapse76;

// connection11_synapse76 Initialisation function
void Connection11Synapse76Init(Connection11Synapse76* me);

// connection11_synapse76 Execution function
void Connection11Synapse76Run(Connection11Synapse76* me);

#endif // CONNECTION11_SYNAPSE76_H_