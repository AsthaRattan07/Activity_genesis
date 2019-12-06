    #include <stdio.h>
    int addNumbers(int n);

    int main()
    {
        int num;
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        int c=addNumbers(num);
        printf("Sum = %d",c);
        return 0;
    }
    int addNumbers(int n)
    {
        if(n != 0)
            return n + addNumbers(n-1);
        else
            return n;
    }
