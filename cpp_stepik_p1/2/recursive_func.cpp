unsigned gcd(unsigned a, unsigned b)
{
    unsigned c=0;
    if ( (a>0) and (b>0) ) {
        if ( a>b ) {
            c = a % b;
            if ( c==0 )
                return b;
            else
                a = c;
        }
        else {
            c = b % a;
            if ( c==0 )
                return a;
            else
                b = c;
        }
        gcd(a, b);
    }
}
