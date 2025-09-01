#!/bin/bash
read -p "Digite o primeiro número: " num1
read -p "Digite o segundo número: " num2

echo "Escolha a operação:"
echo "1 - soma"
echo "2 - subtração"
echo "3 - multiplicação"
echo "4 - divisão"

read -p "Opção: " opcao

case $opcao in
  1)
    resultado=$((num1 + num2))
    echo "A soma é: $resultado"
    ;;
  2)
    resultado=$((num1 - num2))
    echo "A subtração é: $resultado"
    ;;
  3)
    resultado=$((num1 * num2))
    echo "A multiplicação é $resultado"
    ;;
  4)
  if [ $num2 -ne 0 ]; then
    resultado=$(echo "scale=2; $num1 / $num2" | bc)
    echo "A divisão é $resultado"
  else
    echo "Erro: divisão por zero não permitida."
    fi
    ;;
  *)
    echo "Opção inválida!"
    ;;
esac