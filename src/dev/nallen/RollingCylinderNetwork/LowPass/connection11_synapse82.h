#ifndef CONNECTION11_SYNAPSE82_H_
#define CONNECTION11_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse82 States
enum Connection11Synapse82States {
    CONNECTION11_SYNAPSE82_L,
};

// connection11_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse82States state;
} Connection11Synapse82;

// connection11_synapse82 Initialisation function
void Connection11Synapse82Init(Connection11Synapse82* me);

// connection11_synapse82 Execution function
void Connection11Synapse82Run(Connection11Synapse82* me);

#endif // CONNECTION11_SYNAPSE82_H_