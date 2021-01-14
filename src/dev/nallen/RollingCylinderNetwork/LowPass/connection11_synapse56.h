#ifndef CONNECTION11_SYNAPSE56_H_
#define CONNECTION11_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse56 States
enum Connection11Synapse56States {
    CONNECTION11_SYNAPSE56_L,
};

// connection11_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse56States state;
} Connection11Synapse56;

// connection11_synapse56 Initialisation function
void Connection11Synapse56Init(Connection11Synapse56* me);

// connection11_synapse56 Execution function
void Connection11Synapse56Run(Connection11Synapse56* me);

#endif // CONNECTION11_SYNAPSE56_H_