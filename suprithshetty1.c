    #include <stdio.h>
    
    int computeArmstrong(int); 
    void checkArmstrong(int, int);

    int main()
    {
        int n, temp_n, remndr, out = 0;
        printf("Enter a three digit integer: ");
        scanf("%d", &n);

        out = computeArmstrong(n);
        checkArmstrong(n, out);
        return 0;
    }
    


int computeArmstrong(int n)
{
    int temp_n, remndr, out = 0;
       
    temp_n = n;
    
    while (temp_n != 0)                      //computing on loop whether the given number is an armstrong number or not
        {
            remndr = temp_n%10;
            out += remndr*remndr*remndr;
            temp_n /= 10;
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
