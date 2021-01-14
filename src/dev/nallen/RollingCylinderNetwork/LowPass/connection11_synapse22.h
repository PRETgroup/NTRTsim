#ifndef CONNECTION11_SYNAPSE22_H_
#define CONNECTION11_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse22 States
enum Connection11Synapse22States {
    CONNECTION11_SYNAPSE22_L,
};

// connection11_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse22States state;
} Connection11Synapse22;

// connection11_synapse22 Initialisation function
void Connection11Synapse22Init(Connection11Synapse22* me);

// connection11_synapse22 Execution function
void Connection11Synapse22Run(Connection11Synapse22* me);

#endif // CONNECTION11_SYNAPSE22_H_