#ifndef CONNECTION11_SYNAPSE2_H_
#define CONNECTION11_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse2 States
enum Connection11Synapse2States {
    CONNECTION11_SYNAPSE2_L,
};

// connection11_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse2States state;
} Connection11Synapse2;

// connection11_synapse2 Initialisation function
void Connection11Synapse2Init(Connection11Synapse2* me);

// connection11_synapse2 Execution function
void Connection11Synapse2Run(Connection11Synapse2* me);

#endif // CONNECTION11_SYNAPSE2_H_