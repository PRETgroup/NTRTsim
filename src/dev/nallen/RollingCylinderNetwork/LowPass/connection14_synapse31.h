#ifndef CONNECTION14_SYNAPSE31_H_
#define CONNECTION14_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse31 States
enum Connection14Synapse31States {
    CONNECTION14_SYNAPSE31_L,
};

// connection14_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse31States state;
} Connection14Synapse31;

// connection14_synapse31 Initialisation function
void Connection14Synapse31Init(Connection14Synapse31* me);

// connection14_synapse31 Execution function
void Connection14Synapse31Run(Connection14Synapse31* me);

#endif // CONNECTION14_SYNAPSE31_H_