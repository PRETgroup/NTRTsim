#ifndef CONNECTION14_SYNAPSE20_H_
#define CONNECTION14_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse20 States
enum Connection14Synapse20States {
    CONNECTION14_SYNAPSE20_L,
};

// connection14_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse20States state;
} Connection14Synapse20;

// connection14_synapse20 Initialisation function
void Connection14Synapse20Init(Connection14Synapse20* me);

// connection14_synapse20 Execution function
void Connection14Synapse20Run(Connection14Synapse20* me);

#endif // CONNECTION14_SYNAPSE20_H_