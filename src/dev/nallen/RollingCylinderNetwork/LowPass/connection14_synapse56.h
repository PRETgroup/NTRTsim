#ifndef CONNECTION14_SYNAPSE56_H_
#define CONNECTION14_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse56 States
enum Connection14Synapse56States {
    CONNECTION14_SYNAPSE56_L,
};

// connection14_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse56States state;
} Connection14Synapse56;

// connection14_synapse56 Initialisation function
void Connection14Synapse56Init(Connection14Synapse56* me);

// connection14_synapse56 Execution function
void Connection14Synapse56Run(Connection14Synapse56* me);

#endif // CONNECTION14_SYNAPSE56_H_