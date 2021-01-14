#ifndef CONNECTION11_SYNAPSE90_H_
#define CONNECTION11_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse90 States
enum Connection11Synapse90States {
    CONNECTION11_SYNAPSE90_L,
};

// connection11_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse90States state;
} Connection11Synapse90;

// connection11_synapse90 Initialisation function
void Connection11Synapse90Init(Connection11Synapse90* me);

// connection11_synapse90 Execution function
void Connection11Synapse90Run(Connection11Synapse90* me);

#endif // CONNECTION11_SYNAPSE90_H_