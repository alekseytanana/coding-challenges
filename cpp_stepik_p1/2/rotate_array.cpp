void rotate(int a[], unsigned size, int shift)
{
    int t = 0;
    shift = shift % size;
    
    for(int s=0; s<shift; s++) {
        t = a[0];
        for(int i=0; i<(size-1); i++) 
            a[i] = a[i+1];
        a[size-1] = t;
    }    
}




