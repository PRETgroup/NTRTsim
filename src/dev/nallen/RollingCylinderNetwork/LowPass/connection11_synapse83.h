#ifndef CONNECTION11_SYNAPSE83_H_
#define CONNECTION11_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse83 States
enum Connection11Synapse83States {
    CONNECTION11_SYNAPSE83_L,
};

// connection11_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse83States state;
} Connection11Synapse83;

// connection11_synapse83 Initialisation function
void Connection11Synapse83Init(Connection11Synapse83* me);

// connection11_synapse83 Execution function
void Connection11Synapse83Run(Connection11Synapse83* me);

#endif // CONNECTION11_SYNAPSE83_H_