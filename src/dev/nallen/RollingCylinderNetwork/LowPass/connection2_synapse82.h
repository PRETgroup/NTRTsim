#ifndef CONNECTION2_SYNAPSE82_H_
#define CONNECTION2_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse82 States
enum Connection2Synapse82States {
    CONNECTION2_SYNAPSE82_L,
};

// connection2_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse82States state;
} Connection2Synapse82;

// connection2_synapse82 Initialisation function
void Connection2Synapse82Init(Connection2Synapse82* me);

// connection2_synapse82 Execution function
void Connection2Synapse82Run(Connection2Synapse82* me);

#endif // CONNECTION2_SYNAPSE82_H_