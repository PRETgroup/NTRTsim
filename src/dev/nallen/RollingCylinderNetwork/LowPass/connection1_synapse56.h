#ifndef CONNECTION1_SYNAPSE56_H_
#define CONNECTION1_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse56 States
enum Connection1Synapse56States {
    CONNECTION1_SYNAPSE56_L,
};

// connection1_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse56States state;
} Connection1Synapse56;

// connection1_synapse56 Initialisation function
void Connection1Synapse56Init(Connection1Synapse56* me);

// connection1_synapse56 Execution function
void Connection1Synapse56Run(Connection1Synapse56* me);

#endif // CONNECTION1_SYNAPSE56_H_