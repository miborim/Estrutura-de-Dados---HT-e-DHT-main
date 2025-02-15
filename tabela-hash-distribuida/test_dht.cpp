#include <cassert>
#include <iostream>
#include "chord.h"

void testInserirAluno() {
    ChordNode node(100);
    Aluno aluno(450, "Pedro");

    node.insertKey(aluno);
    Aluno resultado;
    assert(node.retrieveKey(450, resultado) && "Erro: Aluno nao foi armazenado corretamente!");
    std::cout << "Teste de Insercao passou!" << std::endl;
}

void testBuscarAlunoExistente() {
    ChordNode node(500);
    Aluno aluno(3500, "Maria");

    node.insertKey(aluno);
    Aluno resultado;
    assert(node.retrieveKey(3500, resultado) && resultado.getNome() == "Maria" && "Erro: Aluno nao encontrado corretamente!");
    std::cout << "Teste de Busca passou!" << std::endl;
}

void testBuscarAlunoInexistente() {
    ChordNode node(2000);
    Aluno resultado;
    
    assert(!node.retrieveKey(9999, resultado) && "Erro: Encontrou um aluno que nao existe!");
    std::cout << "Teste de Busca Inexistente passou!" << std::endl;
}

void testRemoverAluno() {
    ChordNode node(4000);
    Aluno aluno(6200, "Lucas");

    node.insertKey(aluno);
    assert(node.deleteKey(6200) && "Erro: Aluno nao foi removido corretamente!");
    
    Aluno resultado;
    assert(!node.retrieveKey(6200, resultado) && "Erro: Aluno ainda esta armazenado apos remocao!");
    std::cout << "Teste de Remocao passou!" << std::endl;
}

void testUpdateFingerTable() {
    std::vector<int> allNodes = {100, 500, 2000, 4000, 7000};
    ChordNode node(100);
    
    node.updateFingerTable(allNodes);
    assert(node.findSuccessor(3500) != -1 && "Erro: Finger table nao foi atualizada corretamente!");
    std::cout << "Teste de Atualizacao da Finger Table passou!" << std::endl;
}

int main() {
    testInserirAluno();
    testBuscarAlunoExistente();
    testBuscarAlunoInexistente();
    testRemoverAluno();
    testUpdateFingerTable();
    
    std::cout << "Todos os testes passaram!" << std::endl;
    return 0;
}