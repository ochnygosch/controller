#include <Lib/ScanLib.h>

#include <cli.h>
#include <connect_scan.h>
#include <print.h>
#include <matrix_scan.h>
#include <macro.h>
#include <output_com.h>

#include "scan_loop.h"

inline void Scan_setup() {

  Connect_setup( Output_Available, 1 );

  Matrix_setup();

  Matrix_start();

}

void Scan_poll() {

}

uint8_t Scan_periodic() {
  Connect_scan();

  return Matrix_single_scan();
}

// Signal from Macro Module that all keys have been processed (that it knows about)
inline void Scan_finishedWithMacro( uint8_t sentKeys )
{
}


// Signal from Output Module that all keys have been processed (that it knows about)
inline void Scan_finishedWithOutput( uint8_t sentKeys )
{
}

// Signal from the Output Module that the available current has changed
// current - mA
void Scan_currentChange( unsigned int current )
{
	// Indicate to all submodules current change
	Connect_currentChange( current );
	Matrix_currentChange( current );
}
