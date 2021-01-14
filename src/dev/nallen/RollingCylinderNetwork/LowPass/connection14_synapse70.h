#ifndef CONNECTION14_SYNAPSE70_H_
#define CONNECTION14_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse70 States
enum Connection14Synapse70States {
    CONNECTION14_SYNAPSE70_L,
};

// connection14_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse70States state;
} Connection14Synapse70;

// connection14_synapse70 Initialisation function
void Connection14Synapse70Init(Connection14Synapse70* me);

// connection14_synapse70 Execution function
void Connection14Synapse70Run(Connection14Synapse70* me);

#endif // CONNECTION14_SYNAPSE70_H_