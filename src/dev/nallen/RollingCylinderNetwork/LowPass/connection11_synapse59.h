#ifndef CONNECTION11_SYNAPSE59_H_
#define CONNECTION11_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse59 States
enum Connection11Synapse59States {
    CONNECTION11_SYNAPSE59_L,
};

// connection11_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse59States state;
} Connection11Synapse59;

// connection11_synapse59 Initialisation function
void Connection11Synapse59Init(Connection11Synapse59* me);

// connection11_synapse59 Execution function
void Connection11Synapse59Run(Connection11Synapse59* me);

#endif // CONNECTION11_SYNAPSE59_H_