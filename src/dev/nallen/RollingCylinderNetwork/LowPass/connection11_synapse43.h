#ifndef CONNECTION11_SYNAPSE43_H_
#define CONNECTION11_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse43 States
enum Connection11Synapse43States {
    CONNECTION11_SYNAPSE43_L,
};

// connection11_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse43States state;
} Connection11Synapse43;

// connection11_synapse43 Initialisation function
void Connection11Synapse43Init(Connection11Synapse43* me);

// connection11_synapse43 Execution function
void Connection11Synapse43Run(Connection11Synapse43* me);

#endif // CONNECTION11_SYNAPSE43_H_