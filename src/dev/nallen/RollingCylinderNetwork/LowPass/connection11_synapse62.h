#ifndef CONNECTION11_SYNAPSE62_H_
#define CONNECTION11_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse62 States
enum Connection11Synapse62States {
    CONNECTION11_SYNAPSE62_L,
};

// connection11_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse62States state;
} Connection11Synapse62;

// connection11_synapse62 Initialisation function
void Connection11Synapse62Init(Connection11Synapse62* me);

// connection11_synapse62 Execution function
void Connection11Synapse62Run(Connection11Synapse62* me);

#endif // CONNECTION11_SYNAPSE62_H_