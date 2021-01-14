#ifndef CONNECTION11_SYNAPSE8_H_
#define CONNECTION11_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse8 States
enum Connection11Synapse8States {
    CONNECTION11_SYNAPSE8_L,
};

// connection11_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse8States state;
} Connection11Synapse8;

// connection11_synapse8 Initialisation function
void Connection11Synapse8Init(Connection11Synapse8* me);

// connection11_synapse8 Execution function
void Connection11Synapse8Run(Connection11Synapse8* me);

#endif // CONNECTION11_SYNAPSE8_H_