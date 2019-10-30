    #include <stdio.h>
    
    int computeArmstrong(int); 
    void checkArmstrong(int, int);

    int main()
    {
        int n, out = 0;
        printf("Enter a three digit integer: ");
        scanf("%d", &n);

        out = computeArmstrong(n);
        checkArmstrong(n, out);
        return 0;
    }
    


int computeArmstrong(int n)
{
    int out = 0;
        
    while (n!= 0)                      //computing on loop whether the given number is an armstrong number or not
        {
           int remndr = n%10;
            out += remndr*remndr*remndr;
            n /= 10;
        }
    
    return out;
}



void checkArmstrong(int n, int out)
{
        if(out == n)                                          //checking whether the given number is an armstrong number or not
            printf("%d is an Armstrong number.",n);
        else
            printf("%d is not an Armstrong number.",n);
}
