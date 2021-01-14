#ifndef CONNECTION11_SYNAPSE91_H_
#define CONNECTION11_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse91 States
enum Connection11Synapse91States {
    CONNECTION11_SYNAPSE91_L,
};

// connection11_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse91States state;
} Connection11Synapse91;

// connection11_synapse91 Initialisation function
void Connection11Synapse91Init(Connection11Synapse91* me);

// connection11_synapse91 Execution function
void Connection11Synapse91Run(Connection11Synapse91* me);

#endif // CONNECTION11_SYNAPSE91_H_