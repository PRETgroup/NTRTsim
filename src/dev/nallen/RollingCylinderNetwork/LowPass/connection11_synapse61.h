#ifndef CONNECTION11_SYNAPSE61_H_
#define CONNECTION11_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse61 States
enum Connection11Synapse61States {
    CONNECTION11_SYNAPSE61_L,
};

// connection11_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse61States state;
} Connection11Synapse61;

// connection11_synapse61 Initialisation function
void Connection11Synapse61Init(Connection11Synapse61* me);

// connection11_synapse61 Execution function
void Connection11Synapse61Run(Connection11Synapse61* me);

#endif // CONNECTION11_SYNAPSE61_H_