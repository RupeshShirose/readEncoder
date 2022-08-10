#Read signals from incremental digital encoder (Maxon 3409 0-0 500 0 000) with 500 PPR on arduino uno

##Details of encoder used
Incremental digital encoder (Maxon 3409 0-0 500 0 000) gives 500 pulses per rotation and has 3 channels Channel A, Channel B and Channel I.
Channel A and Channel B are 90 degree out of phase. 
The user manual for the encoder is attached to this repository.

##Application
For application for getting the number of rotation(RPM) or distance travelled by wheel. we use channel A and B (channel I is for homing purpose). 
