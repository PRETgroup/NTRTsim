#ifndef CONNECTION11_SYNAPSE93_H_
#define CONNECTION11_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse93 States
enum Connection11Synapse93States {
    CONNECTION11_SYNAPSE93_L,
};

// connection11_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse93States state;
} Connection11Synapse93;

// connection11_synapse93 Initialisation function
void Connection11Synapse93Init(Connection11Synapse93* me);

// connection11_synapse93 Execution function
void Connection11Synapse93Run(Connection11Synapse93* me);

#endif // CONNECTION11_SYNAPSE93_H_