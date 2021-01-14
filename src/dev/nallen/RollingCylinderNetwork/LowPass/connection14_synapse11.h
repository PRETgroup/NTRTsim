#ifndef CONNECTION14_SYNAPSE11_H_
#define CONNECTION14_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse11 States
enum Connection14Synapse11States {
    CONNECTION14_SYNAPSE11_L,
};

// connection14_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse11States state;
} Connection14Synapse11;

// connection14_synapse11 Initialisation function
void Connection14Synapse11Init(Connection14Synapse11* me);

// connection14_synapse11 Execution function
void Connection14Synapse11Run(Connection14Synapse11* me);

#endif // CONNECTION14_SYNAPSE11_H_