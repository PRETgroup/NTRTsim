#ifndef CONNECTION11_SYNAPSE3_H_
#define CONNECTION11_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse3 States
enum Connection11Synapse3States {
    CONNECTION11_SYNAPSE3_L,
};

// connection11_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse3States state;
} Connection11Synapse3;

// connection11_synapse3 Initialisation function
void Connection11Synapse3Init(Connection11Synapse3* me);

// connection11_synapse3 Execution function
void Connection11Synapse3Run(Connection11Synapse3* me);

#endif // CONNECTION11_SYNAPSE3_H_