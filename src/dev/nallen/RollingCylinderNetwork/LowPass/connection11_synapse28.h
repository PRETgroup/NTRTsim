#ifndef CONNECTION11_SYNAPSE28_H_
#define CONNECTION11_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse28 States
enum Connection11Synapse28States {
    CONNECTION11_SYNAPSE28_L,
};

// connection11_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse28States state;
} Connection11Synapse28;

// connection11_synapse28 Initialisation function
void Connection11Synapse28Init(Connection11Synapse28* me);

// connection11_synapse28 Execution function
void Connection11Synapse28Run(Connection11Synapse28* me);

#endif // CONNECTION11_SYNAPSE28_H_