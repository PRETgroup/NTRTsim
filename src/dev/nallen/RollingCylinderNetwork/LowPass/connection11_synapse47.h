#ifndef CONNECTION11_SYNAPSE47_H_
#define CONNECTION11_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse47 States
enum Connection11Synapse47States {
    CONNECTION11_SYNAPSE47_L,
};

// connection11_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse47States state;
} Connection11Synapse47;

// connection11_synapse47 Initialisation function
void Connection11Synapse47Init(Connection11Synapse47* me);

// connection11_synapse47 Execution function
void Connection11Synapse47Run(Connection11Synapse47* me);

#endif // CONNECTION11_SYNAPSE47_H_