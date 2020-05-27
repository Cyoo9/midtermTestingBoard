
//define local variable(s) here.  Use static keyword to keep local, e.g:
 static int i;  // defines a local int named i



/*complete the state machine*/

void Ping()
{
    switch(ping_state)
    {
        case PInit:
	    i = 0;
            break;
        default:
	    i++
	    if(i > 9) {		    
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
