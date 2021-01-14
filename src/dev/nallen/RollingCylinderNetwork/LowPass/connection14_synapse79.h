#ifndef CONNECTION14_SYNAPSE79_H_
#define CONNECTION14_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse79 States
enum Connection14Synapse79States {
    CONNECTION14_SYNAPSE79_L,
};

// connection14_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse79States state;
} Connection14Synapse79;

// connection14_synapse79 Initialisation function
void Connection14Synapse79Init(Connection14Synapse79* me);

// connection14_synapse79 Execution function
void Connection14Synapse79Run(Connection14Synapse79* me);

#endif // CONNECTION14_SYNAPSE79_H_