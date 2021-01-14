#ifndef CONNECTION11_SYNAPSE99_H_
#define CONNECTION11_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse99 States
enum Connection11Synapse99States {
    CONNECTION11_SYNAPSE99_L,
};

// connection11_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse99States state;
} Connection11Synapse99;

// connection11_synapse99 Initialisation function
void Connection11Synapse99Init(Connection11Synapse99* me);

// connection11_synapse99 Execution function
void Connection11Synapse99Run(Connection11Synapse99* me);

#endif // CONNECTION11_SYNAPSE99_H_