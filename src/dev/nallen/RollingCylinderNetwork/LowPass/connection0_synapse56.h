#ifndef CONNECTION0_SYNAPSE56_H_
#define CONNECTION0_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse56 States
enum Connection0Synapse56States {
    CONNECTION0_SYNAPSE56_L,
};

// connection0_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse56States state;
} Connection0Synapse56;

// connection0_synapse56 Initialisation function
void Connection0Synapse56Init(Connection0Synapse56* me);

// connection0_synapse56 Execution function
void Connection0Synapse56Run(Connection0Synapse56* me);

#endif // CONNECTION0_SYNAPSE56_H_