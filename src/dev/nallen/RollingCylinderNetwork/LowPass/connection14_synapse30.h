#ifndef CONNECTION14_SYNAPSE30_H_
#define CONNECTION14_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse30 States
enum Connection14Synapse30States {
    CONNECTION14_SYNAPSE30_L,
};

// connection14_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse30States state;
} Connection14Synapse30;

// connection14_synapse30 Initialisation function
void Connection14Synapse30Init(Connection14Synapse30* me);

// connection14_synapse30 Execution function
void Connection14Synapse30Run(Connection14Synapse30* me);

#endif // CONNECTION14_SYNAPSE30_H_