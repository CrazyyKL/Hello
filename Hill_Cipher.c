#include<stdio.h>
#include<stdlib.h>

int main() 
 {
    int a, b, d[20] = {0}, r = 0, i, j;
    int e[50] = {0}, count = 0, v = 0, z = 0,  n[20] = {0},o,b1[50],K1[50][50],p1[50][50];
    float determinant=0;
    char p[50]={'\0'}, k[20],f[20];
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    printf("Enter the size of the key (a b):\n");
    scanf("%d %d", &a, &b);
    int K[a][b];

    int c = a * b;
    printf("\n_______________\n");

    printf("Enter the  plaintext only in CAPS:\n",a);
    scanf("%49s", p);
    printf("\n_______________\n");

    printf("Enter the %d character key only in CAPS\n", c);
    scanf("%s", k);
    printf("\n_______________\n");

    // Initialize d[] with zeros
    for (i = 0; i < 20; i++)
        d[i] = 0;

    // Convert key characters to indices
    for (i = 0; k[i] != '\0'; i++) {
        for (j = 0; j < 26; j++) {
            if (k[i] == arr[j]) {
                d[i] = j;
                break;
            }
        }
    }

    // Print indices of the key
    for (i = 0; i < c; i++)
        printf("%d\t", d[i]);

    // Populate K[][] with key indices
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            K[i][j] = d[r++];
        }
    }

    printf("\nKey Matrix:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("%d\t", K[i][j]);
        }
        printf("\n");
    }
    printf("\n_______________\n");

    // Convert plaintext characters to indices
    for (i = 0; p[i] != '\0'; i++) {
    count++;
    }
    printf("%d",count);
    if(count%a!=0)
    {
    o=a-(count%a);
    for(i=count;i<count+o;i++)
    {
    p[i]='X';
    }
    
    count=count+o;
    }
    printf("\nThe resulting plaintext is\n");
    printf("%s",p);
    printf("\n");
    printf("\n_______________\n");
    for (i = 0; p[i] != '\0'; i++) {
        for (j = 0; j < 26; j++) {
            if (p[i] == arr[j]) {
                e[i] = j;
                break;
            }
        }
    }
   

    printf("\nPlaintext Indices:\n");
    for (i = 0; i < count; i++)
        printf("%d\t", e[i]);
    printf("\n_______________\n");

    printf("\nCipher Text:\n");
    int h=count/a;
    printf("\n");
    while(z<h)
{
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            n[i+v]=n[i+v]+e[j+v]*K[j][i];
        }
        
    
    }
    v=v+a;
    z++;
}
    printf("\nThe result of mul of plaintext and key is\n");
    for(i=0;i<count;i++)
    {
    printf("%d\t",n[i]);  
    }  
    printf("\n_______________\n");
    for(i=0;i<count;i++)
    {
    n[i]=n[i]%26;
    }
    printf("\n");
    printf("the indices values of cipher text are\n");
    for(i=0;i<count;i++)
    {
    printf("%d\t",n[i]);
    }
    printf("\n_______________\n");
    for(i=0;i<count;i++)
    {
       f[i]=arr[n[i]];
    }
    printf("\n");
    printf("\nthe cipher text is\n");
    for(i=0;i<count;i++)
    printf("%c",f[i]);
    printf("\n_______________\n");
return 0;
 }