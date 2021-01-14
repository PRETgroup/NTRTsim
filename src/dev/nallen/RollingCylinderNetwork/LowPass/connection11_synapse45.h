#ifndef CONNECTION11_SYNAPSE45_H_
#define CONNECTION11_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse45 States
enum Connection11Synapse45States {
    CONNECTION11_SYNAPSE45_L,
};

// connection11_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse45States state;
} Connection11Synapse45;

// connection11_synapse45 Initialisation function
void Connection11Synapse45Init(Connection11Synapse45* me);

// connection11_synapse45 Execution function
void Connection11Synapse45Run(Connection11Synapse45* me);

#endif // CONNECTION11_SYNAPSE45_H_