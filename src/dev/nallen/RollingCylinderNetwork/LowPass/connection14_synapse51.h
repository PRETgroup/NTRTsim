#ifndef CONNECTION14_SYNAPSE51_H_
#define CONNECTION14_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse51 States
enum Connection14Synapse51States {
    CONNECTION14_SYNAPSE51_L,
};

// connection14_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse51States state;
} Connection14Synapse51;

// connection14_synapse51 Initialisation function
void Connection14Synapse51Init(Connection14Synapse51* me);

// connection14_synapse51 Execution function
void Connection14Synapse51Run(Connection14Synapse51* me);

#endif // CONNECTION14_SYNAPSE51_H_