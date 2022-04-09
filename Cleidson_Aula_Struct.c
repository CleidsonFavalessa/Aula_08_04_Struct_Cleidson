#include <stdio.h>

typedef struct ret_criado
{
    int base;
    int altura;
    float area;
    float perimetro;
}Retangulo;


Retangulo CalculaArea(Retangulo ret)
{
    Retangulo ret_trabalhado = ret;

    ret_trabalhado.area = ret_trabalhado.altura * ret_trabalhado.base;
    
    return ret_trabalhado;
}

Retangulo CalculaPerimetro(Retangulo ret)
{
    Retangulo ret_trabalhado = ret;

    ret_trabalhado.perimetro = (ret_trabalhado.altura+ ret_trabalhado.altura+ ret_trabalhado.base+ ret_trabalhado.base);
    
    return ret_trabalhado;
}


Retangulo CriaRetangulo(float base, float altura)
{
    Retangulo ret_criado;

    ret_criado.altura = altura;
    ret_criado.base = base;
    ret_criado = CalculaArea(ret_criado);
    ret_criado = CalculaPerimetro(ret_criado);
    

    return ret_criado;
}



Retangulo SomaRetangulo(float area_nova, float baseoriginal)
{
    float altura_nova = area_nova / baseoriginal;
    
    Retangulo novo = CriaRetangulo(baseoriginal, altura_nova);
    

    return novo;
}






float SomaRetanguloFacil(Retangulo beterraba, Retangulo abobrinha)
{
    return beterraba.area + abobrinha.area;
}


int main(void)
{
    float a, b, area_nova;

    printf("Digite os dados do retangulo (base, altura): ");
    scanf("%f,%f", &b, &a);
    
    Retangulo teclado = CriaRetangulo(b, a);
    printf("\n Retangulo 1 (base, altura, area, perimetro): %i, %i, %2.3f, %2.3f \n", teclado.base, teclado.altura, teclado.area, teclado.perimetro);

    Retangulo mouse = CriaRetangulo(10, 20);
    printf("\n Retangulo 2 (base, altura, area, perimetro): %i, %i, %2.3f, %2.3f \n", mouse.base, mouse.altura, mouse.area, mouse.perimetro);
    
    
    
    area_nova= SomaRetanguloFacil(teclado, mouse);
    
    //O retangulo novo terá a area igual a soma da area dos dois retangulos e base igual ao primeiro retangulo
    Retangulo RetanguloResultado = SomaRetangulo(area_nova, b);
    printf("\n Retangulo Resultado da Soma (base, altura, area, perimetro): %i, %i, %2.3f, %2.3f \n", RetanguloResultado.base, RetanguloResultado.altura, RetanguloResultado.area, RetanguloResultado.perimetro);
    
    system("pause");
    return 0;
}

// enviar soma de Retangulo
// somar areas
// retornar um retangulo com o valor da area obtida
// enviar ao professor
