### Programa Conversor de Unidades em C

Este programa em linguagem C permite a conversão de diversas unidades de medida, como comprimento, massa, volume, temperatura, velocidade, potência, área, tempo e dados. Ele foi desenvolvido como parte de uma atividade prática para aprender sobre versionamento de código usando Git e GitHub.

### Participantes da Equipe
**Líder:** Elisson Nadson  
**Desenvolvedores:** Dimas, Ariel, Claudemir, Davi Moura, Guilherme Lopes, Lucas, Marcus Porto, Ramon Santos

### Manual de Orientação
Para compilar o programa, execute o seguinte comando no terminal:
```sh
gcc main.c conversao_area.c conversao_comprimento.c conversao_dados.c conversao_massa.c conversao_potencia.c conversao_temperatura.c conversao_tempo.c conversao_velocidade.c conversao_volume.c -o main
```

#### Execução do Programa
Após a compilação, execute o programa com o seguinte comando:
```sh
./main
```

#### Navegação no Programa
1. Ao iniciar o programa, você verá um menu com várias opções de conversão.
2. Digite o número correspondente à conversão desejada e pressione Enter.
3. Siga as instruções na tela para inserir os valores e unidades.
4. O programa exibirá o resultado da conversão.
5. Você terá a opção de realizar outra conversão ou voltar ao menu principal.

#### Exemplo de Uso
1. Escolha a opção "1. Comprimento" no menu principal.
2. Digite o valor em metros que deseja converter para centímetros.
3. O programa exibirá o resultado da conversão.
4. Escolha se deseja realizar outra conversão ou voltar ao menu principal.

### Observações
- Certifique-se de inserir valores numéricos válidos ao realizar as conversões.
- Utilize as opções do menu para navegar pelo programa.
- Em caso de erro, o programa exibirá uma mensagem de "Opção inválida" e permitirá que você tente novamente.