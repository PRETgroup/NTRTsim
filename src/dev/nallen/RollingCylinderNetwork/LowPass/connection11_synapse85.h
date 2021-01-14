#ifndef CONNECTION11_SYNAPSE85_H_
#define CONNECTION11_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse85 States
enum Connection11Synapse85States {
    CONNECTION11_SYNAPSE85_L,
};

// connection11_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse85States state;
} Connection11Synapse85;

// connection11_synapse85 Initialisation function
void Connection11Synapse85Init(Connection11Synapse85* me);

// connection11_synapse85 Execution function
void Connection11Synapse85Run(Connection11Synapse85* me);

#endif // CONNECTION11_SYNAPSE85_H_