    #include <stdio.h>
    
    int main()
    {
        int n, temp_n, remndr, out = 0;
        printf("Enter a three digit integer: ");
        scanf("%d", &n);
        temp_n = n;
        while (temp_n != 0)
        {
            remndr = temp_n%10;
            out += remndr*remndr*remndr;
            temp_n /= 10;
        }
        if(out == n)
            printf("%d is an Armstrong number.",n);
        else
            printf("%d is not an Armstrong number.",n);
        return 0;
    }
    
