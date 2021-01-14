#ifndef CONNECTION14_SYNAPSE83_H_
#define CONNECTION14_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse83 States
enum Connection14Synapse83States {
    CONNECTION14_SYNAPSE83_L,
};

// connection14_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse83States state;
} Connection14Synapse83;

// connection14_synapse83 Initialisation function
void Connection14Synapse83Init(Connection14Synapse83* me);

// connection14_synapse83 Execution function
void Connection14Synapse83Run(Connection14Synapse83* me);

#endif // CONNECTION14_SYNAPSE83_H_