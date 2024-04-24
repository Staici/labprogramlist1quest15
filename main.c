#include <stdio.h>

int main() {
  int salbase, horaextra,comissao,beneficio;
  int salbruto;
  printf("Digite o salário base: ");
 scanf("%d", &salbase);
  printf("Digite a hora extra: ");
  scanf("%d",&horaextra);
  printf("Digite a comissão: ");
  scanf("%d",&comissao);
  printf("Digite o benefício: ");
  scanf("%d",&beneficio);
  
  
  salbruto = salbase + horaextra + comissao + beneficio;
  
  printf("O salário bruto é: %d",salbruto);

  
  
  return 0;
}