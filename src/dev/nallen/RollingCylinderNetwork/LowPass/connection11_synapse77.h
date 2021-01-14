#ifndef CONNECTION11_SYNAPSE77_H_
#define CONNECTION11_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse77 States
enum Connection11Synapse77States {
    CONNECTION11_SYNAPSE77_L,
};

// connection11_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse77States state;
} Connection11Synapse77;

// connection11_synapse77 Initialisation function
void Connection11Synapse77Init(Connection11Synapse77* me);

// connection11_synapse77 Execution function
void Connection11Synapse77Run(Connection11Synapse77* me);

#endif // CONNECTION11_SYNAPSE77_H_