#ifndef _STENOHID_H_
#define _STENOHID_H_

/* Call this to send a report over the steno HID endpoint. Note: the
last six bits must be zero in the current configuration! */

void stenohid_send( uint8_t data[6] );

#endif
