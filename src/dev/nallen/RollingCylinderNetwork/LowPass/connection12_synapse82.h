#ifndef CONNECTION12_SYNAPSE82_H_
#define CONNECTION12_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse82 States
enum Connection12Synapse82States {
    CONNECTION12_SYNAPSE82_L,
};

// connection12_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse82States state;
} Connection12Synapse82;

// connection12_synapse82 Initialisation function
void Connection12Synapse82Init(Connection12Synapse82* me);

// connection12_synapse82 Execution function
void Connection12Synapse82Run(Connection12Synapse82* me);

#endif // CONNECTION12_SYNAPSE82_H_