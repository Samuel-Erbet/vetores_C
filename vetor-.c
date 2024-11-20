int main()
{
    int i, num[5];
    for (i = 0; i < 5; i++)
    {
        printf("escolha os números a serem inseridos na posição: %d\n",i);
        scanf("%d", &num[i]);
    }

    printf("\n\n\n");

    for ( i = 4; i>=0; i--){
        printf("%d\n",num[i]);
    }
    
    
    return 0;
}
