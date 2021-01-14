#ifndef CONNECTION11_SYNAPSE0_H_
#define CONNECTION11_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse0 States
enum Connection11Synapse0States {
    CONNECTION11_SYNAPSE0_L,
};

// connection11_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse0States state;
} Connection11Synapse0;

// connection11_synapse0 Initialisation function
void Connection11Synapse0Init(Connection11Synapse0* me);

// connection11_synapse0 Execution function
void Connection11Synapse0Run(Connection11Synapse0* me);

#endif // CONNECTION11_SYNAPSE0_H_