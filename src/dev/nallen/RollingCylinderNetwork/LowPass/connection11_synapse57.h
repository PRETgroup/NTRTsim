#ifndef CONNECTION11_SYNAPSE57_H_
#define CONNECTION11_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse57 States
enum Connection11Synapse57States {
    CONNECTION11_SYNAPSE57_L,
};

// connection11_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse57States state;
} Connection11Synapse57;

// connection11_synapse57 Initialisation function
void Connection11Synapse57Init(Connection11Synapse57* me);

// connection11_synapse57 Execution function
void Connection11Synapse57Run(Connection11Synapse57* me);

#endif // CONNECTION11_SYNAPSE57_H_