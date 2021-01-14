#ifndef CONNECTION14_SYNAPSE25_H_
#define CONNECTION14_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse25 States
enum Connection14Synapse25States {
    CONNECTION14_SYNAPSE25_L,
};

// connection14_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse25States state;
} Connection14Synapse25;

// connection14_synapse25 Initialisation function
void Connection14Synapse25Init(Connection14Synapse25* me);

// connection14_synapse25 Execution function
void Connection14Synapse25Run(Connection14Synapse25* me);

#endif // CONNECTION14_SYNAPSE25_H_