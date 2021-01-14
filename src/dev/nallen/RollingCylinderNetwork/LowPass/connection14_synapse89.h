#ifndef CONNECTION14_SYNAPSE89_H_
#define CONNECTION14_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse89 States
enum Connection14Synapse89States {
    CONNECTION14_SYNAPSE89_L,
};

// connection14_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse89States state;
} Connection14Synapse89;

// connection14_synapse89 Initialisation function
void Connection14Synapse89Init(Connection14Synapse89* me);

// connection14_synapse89 Execution function
void Connection14Synapse89Run(Connection14Synapse89* me);

#endif // CONNECTION14_SYNAPSE89_H_