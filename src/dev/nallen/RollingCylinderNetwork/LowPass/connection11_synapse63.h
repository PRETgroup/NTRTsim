#ifndef CONNECTION11_SYNAPSE63_H_
#define CONNECTION11_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse63 States
enum Connection11Synapse63States {
    CONNECTION11_SYNAPSE63_L,
};

// connection11_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse63States state;
} Connection11Synapse63;

// connection11_synapse63 Initialisation function
void Connection11Synapse63Init(Connection11Synapse63* me);

// connection11_synapse63 Execution function
void Connection11Synapse63Run(Connection11Synapse63* me);

#endif // CONNECTION11_SYNAPSE63_H_