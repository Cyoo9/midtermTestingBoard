
//define local variable(s) here.  Use static keyword to keep local, e.g:
  static int i = 0; // defines a local int named i
  static int  max = 0;
/* complete the state machine. */

void Detect_Max_Amp()
{
    switch(detect_max_amp_state)
    {
        case DMAInit:
	    i++;
	    if(i <= 10) {
		if((~PINA & 0xF8) > max) {
			max = (~PINA & 0xF8);
		}
		detect_max_amp_state = DMAInit;
	    }
	    else {
		    i = 0;
	    }
            break;
        
        default:
            break;
    }
    switch(detect_max_amp_state)
    {
        case DMAInit:
            break;
        default:
            break;
    }
}
