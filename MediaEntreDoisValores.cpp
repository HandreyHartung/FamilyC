#include stdio.h
#include stdlib.h
#include locale.h

int main()
{
    setlocale(LC_ALL, );

    float pfator;
    float sfator;

    float tresultado = (pfator + sfator)2;

    printf(n Insira a primeira nota n);
    scanf(% f, &pfator);
    printf(n A primeira nota � n, pfator);
    printf(n Insira a segunda nota n);
    scanf(% f, &sfator);
    printf(n A segunda nota � n, sfator);

    printf(n Efetue a soma entre elas para, a realiza��o da media n);
    scanf(% f, &tresultado);
    printf(n A soma do primeiro valor % f e do segundo valor % f sera a media de % f n, pfator, sfator, tresultado);

    return 0;
}