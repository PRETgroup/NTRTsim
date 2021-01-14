#ifndef CONNECTION11_SYNAPSE27_H_
#define CONNECTION11_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse27 States
enum Connection11Synapse27States {
    CONNECTION11_SYNAPSE27_L,
};

// connection11_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse27States state;
} Connection11Synapse27;

// connection11_synapse27 Initialisation function
void Connection11Synapse27Init(Connection11Synapse27* me);

// connection11_synapse27 Execution function
void Connection11Synapse27Run(Connection11Synapse27* me);

#endif // CONNECTION11_SYNAPSE27_H_