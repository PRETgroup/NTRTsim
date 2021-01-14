#ifndef CONNECTION14_SYNAPSE98_H_
#define CONNECTION14_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse98 States
enum Connection14Synapse98States {
    CONNECTION14_SYNAPSE98_L,
};

// connection14_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse98States state;
} Connection14Synapse98;

// connection14_synapse98 Initialisation function
void Connection14Synapse98Init(Connection14Synapse98* me);

// connection14_synapse98 Execution function
void Connection14Synapse98Run(Connection14Synapse98* me);

#endif // CONNECTION14_SYNAPSE98_H_