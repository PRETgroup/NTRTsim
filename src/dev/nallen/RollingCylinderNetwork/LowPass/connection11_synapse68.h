#ifndef CONNECTION11_SYNAPSE68_H_
#define CONNECTION11_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse68 States
enum Connection11Synapse68States {
    CONNECTION11_SYNAPSE68_L,
};

// connection11_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse68States state;
} Connection11Synapse68;

// connection11_synapse68 Initialisation function
void Connection11Synapse68Init(Connection11Synapse68* me);

// connection11_synapse68 Execution function
void Connection11Synapse68Run(Connection11Synapse68* me);

#endif // CONNECTION11_SYNAPSE68_H_