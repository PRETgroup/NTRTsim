#ifndef CONNECTION14_SYNAPSE54_H_
#define CONNECTION14_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse54 States
enum Connection14Synapse54States {
    CONNECTION14_SYNAPSE54_L,
};

// connection14_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse54States state;
} Connection14Synapse54;

// connection14_synapse54 Initialisation function
void Connection14Synapse54Init(Connection14Synapse54* me);

// connection14_synapse54 Execution function
void Connection14Synapse54Run(Connection14Synapse54* me);

#endif // CONNECTION14_SYNAPSE54_H_