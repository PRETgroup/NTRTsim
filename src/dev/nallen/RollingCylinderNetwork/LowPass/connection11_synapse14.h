#ifndef CONNECTION11_SYNAPSE14_H_
#define CONNECTION11_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse14 States
enum Connection11Synapse14States {
    CONNECTION11_SYNAPSE14_L,
};

// connection11_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse14States state;
} Connection11Synapse14;

// connection11_synapse14 Initialisation function
void Connection11Synapse14Init(Connection11Synapse14* me);

// connection11_synapse14 Execution function
void Connection11Synapse14Run(Connection11Synapse14* me);

#endif // CONNECTION11_SYNAPSE14_H_