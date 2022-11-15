#include <iostream>

int main(int argc, char** argv) {
  float salary, inss, ir, salary_liquid;

  printf("Qual é o seu salário bruto? ");
  scanf("%f", &salary);

  if(salary <= 1693.72){
    inss = salary * 0.08;
  }
  else if(salary >= 1693.73) {
    inss = salary * 0.09;

    if (salary >= 1903.99 && salary <= 2826.65) {
      ir = salary * 0.075;
    }
    else {
      inss = salary * 0.12;
      ir = salary * 0.15;
    }
  }

  salary_liquid = salary - inss - ir;

  printf("Desconto do Inss %f \n", inss);
  printf("Desconto de IR %f \n", ir);
  printf("Seu salário liquido é de %f", salary_liquid);
}