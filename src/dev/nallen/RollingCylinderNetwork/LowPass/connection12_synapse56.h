#ifndef CONNECTION12_SYNAPSE56_H_
#define CONNECTION12_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse56 States
enum Connection12Synapse56States {
    CONNECTION12_SYNAPSE56_L,
};

// connection12_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse56States state;
} Connection12Synapse56;

// connection12_synapse56 Initialisation function
void Connection12Synapse56Init(Connection12Synapse56* me);

// connection12_synapse56 Execution function
void Connection12Synapse56Run(Connection12Synapse56* me);

#endif // CONNECTION12_SYNAPSE56_H_