#ifndef CONNECTION11_SYNAPSE52_H_
#define CONNECTION11_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse52 States
enum Connection11Synapse52States {
    CONNECTION11_SYNAPSE52_L,
};

// connection11_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse52States state;
} Connection11Synapse52;

// connection11_synapse52 Initialisation function
void Connection11Synapse52Init(Connection11Synapse52* me);

// connection11_synapse52 Execution function
void Connection11Synapse52Run(Connection11Synapse52* me);

#endif // CONNECTION11_SYNAPSE52_H_