//define local variable(s) here.  Use static keyword to keep local, e.g:
  static int i = 0; // defines a local int named i


/*complete the state machine*/

void Detect_EQ()
{
    switch(detect_eq_state)
    {
        case DEQInit:
            //init variable(s) here.
	    if((~PINA & 0xF8) != 0) {
		    output = 0xF8;
		    i = 0;
		    detect_eq_state = DEQInit;
	    }
	    else {
		    i++;
		    if(i <= 10) {
			    detect_eq_state = DEQInit;
		    }
		    else {
			 output = PORTB | 0x01;
		    }
	    }
            break;
        default:
            detect_eq_state = DEQInit;
            break;
    }
    switch(detect_eq_state)
    {
        case DEQInit:
            break;
	default:
            break;
    }
}
