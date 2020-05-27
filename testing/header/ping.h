
//define local variable(s) here.  Use static keyword to keep local, e.g:
 static int i4 = 0;  // defines a local int named i



/*complete the state machine*/

void Ping()
{
    switch(ping_state)
    {
        case PInit:
	    i4 = 0;
            break;
        default:
	    i4++;
	    if(i4 > 9) {		    
           	 ping_state = PInit;
	    }
            break;
    }
    switch(ping_state)
    {
        case PInit:
            break;
        default:
            break;
    }
}
