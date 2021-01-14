#ifndef CONNECTION2_SYNAPSE21_H_
#define CONNECTION2_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse21 States
enum Connection2Synapse21States {
    CONNECTION2_SYNAPSE21_L,
};

// connection2_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse21States state;
} Connection2Synapse21;

// connection2_synapse21 Initialisation function
void Connection2Synapse21Init(Connection2Synapse21* me);

// connection2_synapse21 Execution function
void Connection2Synapse21Run(Connection2Synapse21* me);

#endif // CONNECTION2_SYNAPSE21_H_