#ifndef CONNECTION14_SYNAPSE39_H_
#define CONNECTION14_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse39 States
enum Connection14Synapse39States {
    CONNECTION14_SYNAPSE39_L,
};

// connection14_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse39States state;
} Connection14Synapse39;

// connection14_synapse39 Initialisation function
void Connection14Synapse39Init(Connection14Synapse39* me);

// connection14_synapse39 Execution function
void Connection14Synapse39Run(Connection14Synapse39* me);

#endif // CONNECTION14_SYNAPSE39_H_