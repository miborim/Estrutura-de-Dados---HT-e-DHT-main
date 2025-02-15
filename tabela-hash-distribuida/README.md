## Testes da Distributed Hash Table (DHT)

Os testes realizados validam as principais funcionalidades da Distributed Hash Table (DHT) implementada.

### Testes (`test_dht.cpp`)

&ensp; No arquivo `test_dht.cpp`, a inserção de chaves é verificada, garantindo que os alunos são armazenados no nó correto da DHT com base no RA. A busca de chaves é testada para conferir se um aluno previamente inserido pode ser recuperado corretamente. A remoção de chaves é validada, assegurando que um aluno pode ser excluído com sucesso e que não pode mais ser encontrado após a remoção. A atualização da finger table é analisada para garantir que os nós da DHT apontem corretamente para seus sucessores e distribuam os dados adequadamente. Por fim, a lógica de encaminhamento de buscas é testada, verificando se a função findSuccessor localiza corretamente o nó responsável por armazenar uma determinada chave. Segue um resumo dos testes:

- **Inserção de chaves**: Garante que os alunos são armazenados no nó correto da DHT com base no RA.  
- **Busca de chaves**: Confirma que um aluno previamente inserido pode ser recuperado corretamente.  
- **Remoção de chaves**: Assegura que um aluno pode ser excluído com sucesso e que não pode mais ser encontrado após a remoção.  
- **Atualização da finger table**: Verifica se os nós da DHT apontam corretamente para seus sucessores e distribuem os dados de forma adequada.  
- **Encaminhamento de buscas**: Testa se a função `findSuccessor` localiza corretamente o nó responsável por armazenar uma determinada chave.  

### Testes Interativos (`main.cpp`)


No arquivo `main.cpp`, já existente no repositório fornecido, a implementação é testada de forma interativa. A inserção de alunos é validada ao verificar se cada aluno é armazenado no nó correto com base no RA. A busca por um aluno permite inserir um RA e conferir se ele foi encontrado e em qual nó está armazenado. A remoção de alunos é testada para garantir que um aluno pode ser excluído e não pode mais ser encontrado posteriormente. Além disso, a impressão do estado final da DHT exibe os alunos armazenados em cada nó, permitindo visualizar a distribuição dos dados na estrutura. Segue um resumo dos testes:

- **Inserção de alunos**: Confirma que cada aluno é armazenado no nó correto com base no RA.  
- **Busca por um aluno**: Permite inserir um RA e verificar se ele foi encontrado e em qual nó está armazenado.  
- **Remoção de alunos**: Garante que um aluno pode ser excluído e que não pode mais ser encontrado posteriormente.  
- **Impressão do estado da DHT**: Exibe os alunos armazenados em cada nó, possibilitando visualizar a distribuição dos dados na estrutura.  

Os testes automatizados e interativos asseguram a robustez e o correto funcionamento da DHT.

### Comandos

``g++ aluno.cpp chord.cpp main.cpp -o hashTable.exe``

``./hashTable.exe ou .\hashTable.exe``