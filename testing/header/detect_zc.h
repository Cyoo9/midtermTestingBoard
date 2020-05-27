
//define local variable(s) here.  Use static keyword to keep local, e.g:
   static int i;  // defines a local int named i
 


/*complete the state machine*/

void Detect_ZC()
{
    switch(detect_zc_state)
    {
        case DZCInit:
	    i++;
            if( i == 1) {
		first = (~PINA & 0x07);
		detect_zc_state = DZCInit;
	    }
	    if(i == 2) {
		second = (~PINA & 0x07);
		detect_zc_state = DZCInit;
	    }
	    if(i > 2) {
	   	 if((first - second) == 4) {
			result = result | 0x04;
	   	 }
 		else if((second - first) == 4) {
       			result = result | 0x04;
		}
	    }		
            break;
        
        default:
            detect_zc_state = DZCInit;
            break;
    }
    switch(detect_zc_state)
    {
        case DZCInit:
            break;
        default:
            break;
    }
}
