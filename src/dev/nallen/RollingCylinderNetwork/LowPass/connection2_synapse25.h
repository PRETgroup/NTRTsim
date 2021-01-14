#ifndef CONNECTION2_SYNAPSE25_H_
#define CONNECTION2_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse25 States
enum Connection2Synapse25States {
    CONNECTION2_SYNAPSE25_L,
};

// connection2_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse25States state;
} Connection2Synapse25;

// connection2_synapse25 Initialisation function
void Connection2Synapse25Init(Connection2Synapse25* me);

// connection2_synapse25 Execution function
void Connection2Synapse25Run(Connection2Synapse25* me);

#endif // CONNECTION2_SYNAPSE25_H_