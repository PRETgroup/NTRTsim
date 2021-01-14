#ifndef CONNECTION11_SYNAPSE6_H_
#define CONNECTION11_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse6 States
enum Connection11Synapse6States {
    CONNECTION11_SYNAPSE6_L,
};

// connection11_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse6States state;
} Connection11Synapse6;

// connection11_synapse6 Initialisation function
void Connection11Synapse6Init(Connection11Synapse6* me);

// connection11_synapse6 Execution function
void Connection11Synapse6Run(Connection11Synapse6* me);

#endif // CONNECTION11_SYNAPSE6_H_