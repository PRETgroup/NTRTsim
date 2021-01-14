#ifndef CONNECTION13_SYNAPSE82_H_
#define CONNECTION13_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse82 States
enum Connection13Synapse82States {
    CONNECTION13_SYNAPSE82_L,
};

// connection13_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse82States state;
} Connection13Synapse82;

// connection13_synapse82 Initialisation function
void Connection13Synapse82Init(Connection13Synapse82* me);

// connection13_synapse82 Execution function
void Connection13Synapse82Run(Connection13Synapse82* me);

#endif // CONNECTION13_SYNAPSE82_H_