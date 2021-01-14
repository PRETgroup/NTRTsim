#ifndef CONNECTION6_SYNAPSE56_H_
#define CONNECTION6_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse56 States
enum Connection6Synapse56States {
    CONNECTION6_SYNAPSE56_L,
};

// connection6_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse56States state;
} Connection6Synapse56;

// connection6_synapse56 Initialisation function
void Connection6Synapse56Init(Connection6Synapse56* me);

// connection6_synapse56 Execution function
void Connection6Synapse56Run(Connection6Synapse56* me);

#endif // CONNECTION6_SYNAPSE56_H_