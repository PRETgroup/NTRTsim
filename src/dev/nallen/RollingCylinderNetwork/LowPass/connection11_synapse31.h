#ifndef CONNECTION11_SYNAPSE31_H_
#define CONNECTION11_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse31 States
enum Connection11Synapse31States {
    CONNECTION11_SYNAPSE31_L,
};

// connection11_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse31States state;
} Connection11Synapse31;

// connection11_synapse31 Initialisation function
void Connection11Synapse31Init(Connection11Synapse31* me);

// connection11_synapse31 Execution function
void Connection11Synapse31Run(Connection11Synapse31* me);

#endif // CONNECTION11_SYNAPSE31_H_