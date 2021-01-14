#ifndef CONNECTION2_SYNAPSE56_H_
#define CONNECTION2_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse56 States
enum Connection2Synapse56States {
    CONNECTION2_SYNAPSE56_L,
};

// connection2_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse56States state;
} Connection2Synapse56;

// connection2_synapse56 Initialisation function
void Connection2Synapse56Init(Connection2Synapse56* me);

// connection2_synapse56 Execution function
void Connection2Synapse56Run(Connection2Synapse56* me);

#endif // CONNECTION2_SYNAPSE56_H_