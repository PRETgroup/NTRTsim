#ifndef CONNECTION11_SYNAPSE48_H_
#define CONNECTION11_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse48 States
enum Connection11Synapse48States {
    CONNECTION11_SYNAPSE48_L,
};

// connection11_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse48States state;
} Connection11Synapse48;

// connection11_synapse48 Initialisation function
void Connection11Synapse48Init(Connection11Synapse48* me);

// connection11_synapse48 Execution function
void Connection11Synapse48Run(Connection11Synapse48* me);

#endif // CONNECTION11_SYNAPSE48_H_